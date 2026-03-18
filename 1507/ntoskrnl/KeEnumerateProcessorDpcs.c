/*
 * XREFs of KeEnumerateProcessorDpcs @ 0x140203FB8
 * Callers:
 *     DbgkpLkmdSnapGlobals @ 0x1401E124C (DbgkpLkmdSnapGlobals.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KeEnumerateProcessorDpcs(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rsi
  _QWORD *i; // rdi
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = KiProcessorBlock[a1];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v6 = (volatile signed __int32 *)(v4 + 11664);
  v7 = 2LL;
  do
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v6);
    }
    else if ( _interlockedbittestandset64(v6, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v6);
    }
    for ( i = (_QWORD *)*((_QWORD *)v6 - 2); i; i = (_QWORD *)*i )
      (*(void (__fastcall **)(__int64, _QWORD *, __int64))(a3 + 5184))(a3 + 5120, i - 1, 64LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v6, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    v6 += 10;
    --v7;
  }
  while ( v7 );
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
