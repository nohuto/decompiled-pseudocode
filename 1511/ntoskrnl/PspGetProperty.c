/*
 * XREFs of PspGetProperty @ 0x140074120
 * Callers:
 *     PsGetThreadProperty @ 0x1400DCC58 (PsGetThreadProperty.c)
 *     PspGetJobProperty @ 0x1400DCDB0 (PspGetJobProperty.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PspGetProperty(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rcx
  _QWORD *v8; // rdi
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(a1 + 2);
  v7 = (_QWORD *)*a1;
  v8 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( v7[2] != a2 )
    {
      v7 = (_QWORD *)*v7;
      if ( v7 == a1 )
        goto LABEL_2;
    }
    v8 = v7;
    if ( v7 )
      ObfReferenceObjectWithTag((PVOID)v7[3], 0x72507350u);
  }
LABEL_2:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(a1 + 2, retaddr);
  else
    _InterlockedAnd64(a1 + 2, 0LL);
  __writecr8(CurrentIrql);
  if ( !v8 )
    return 3221226021LL;
  result = 0LL;
  *a3 = v8[3];
  return result;
}
