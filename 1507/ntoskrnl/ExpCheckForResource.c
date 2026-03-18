/*
 * XREFs of ExpCheckForResource @ 0x140263DEC
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     VfCheckForResource @ 0x14074C420 (VfCheckForResource.c)
 */

__int64 __fastcall ExpCheckForResource(__int64 *a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // r14
  int v6; // ett
  __int64 *i; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 && (unsigned int)VfCheckForResource((int)a1, a2)
    || (unsigned int)KeNumberProcessors_0 > 1
    || (ExResourceCheckFlags & 1) == 0 )
  {
    return 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpResourceSpinLock);
  }
  else
  {
    _m_prefetchw(&ExpResourceSpinLock);
    v6 = ExpResourceSpinLock & 0x7FFFFFFF;
    if ( v6 != _InterlockedCompareExchange(
                 &ExpResourceSpinLock,
                 (ExpResourceSpinLock & 0x7FFFFFFF) + 1,
                 ExpResourceSpinLock & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&ExpResourceSpinLock);
  }
  for ( i = (__int64 *)ExpSystemResourcesList; i != &ExpSystemResourcesList; i = (__int64 *)*i )
  {
    if ( i >= a1 && i < (__int64 *)((char *)a1 + a2) )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains an ERESOURCE structure that has not been ExDeleteResourced\n",
        a1,
        a2);
      __debugbreak();
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ExpResourceSpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpResourceSpinLock);
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
