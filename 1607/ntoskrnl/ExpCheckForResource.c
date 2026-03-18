/*
 * XREFs of ExpCheckForResource @ 0x14022DBC8
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14022D080 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 */

__int64 __fastcall ExpCheckForResource(__int64 *a1, ULONG_PTR a2)
{
  KIRQL v5; // al
  __int64 *i; // rbx

  if ( (MmVerifierData & 0x800) != 0 && (unsigned int)VfCheckForResource((int)a1, a2)
    || (unsigned int)KeNumberProcessors_0 > 1
    || (ExResourceCheckFlags & 1) == 0 )
  {
    return 0LL;
  }
  v5 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
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
  ExReleaseSpinLockShared(&ExpResourceSpinLock, v5);
  return 0LL;
}
