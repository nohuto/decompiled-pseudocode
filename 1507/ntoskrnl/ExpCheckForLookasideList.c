/*
 * XREFs of ExpCheckForLookasideList @ 0x140264AFC
 * Callers:
 *     ExpCheckForLookaside @ 0x140264A98 (ExpCheckForLookaside.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExpCheckForLookasideList(_QWORD *a1, __int64 a2, _QWORD **a3, volatile signed __int32 *a4)
{
  unsigned __int64 v5; // r12
  int v7; // r15d
  unsigned __int8 CurrentIrql; // bp
  _QWORD *i; // rdi
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = (unsigned __int64)a1 + a2;
  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a4);
  }
  else if ( _interlockedbittestandset64(a4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a4);
  }
  for ( i = *a3; i != a3; i = (_QWORD *)*i )
  {
    if ( i - 8 >= a1 && (unsigned __int64)(i - 8) < v5 )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains a lookaside structure that has not been deleted first\n",
        a1,
        v7);
      __debugbreak();
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)a4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)a4, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
