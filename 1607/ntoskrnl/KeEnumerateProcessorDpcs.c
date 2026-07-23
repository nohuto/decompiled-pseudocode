/*
 * XREFs of KeEnumerateProcessorDpcs @ 0x1401D6168
 * Callers:
 *     DbgkpLkmdSnapGlobals @ 0x1401B7514 (DbgkpLkmdSnapGlobals.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 */

__int64 __fastcall KeEnumerateProcessorDpcs(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v6; // rbx
  __int64 v7; // rsi
  _QWORD *i; // rdi
  __int64 result; // rax

  v4 = KiProcessorBlock[a1];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v6 = (KSPIN_LOCK *)(v4 + 11664);
  v7 = 2LL;
  do
  {
    KxAcquireSpinLock(v6);
    for ( i = (_QWORD *)*(v6 - 2); i; i = (_QWORD *)*i )
      (*(void (__fastcall **)(__int64, _QWORD *, __int64))(a3 + 5184))(a3 + 5120, i - 1, 64LL);
    KxReleaseSpinLock(v6);
    v6 += 5;
    --v7;
  }
  while ( v7 );
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
