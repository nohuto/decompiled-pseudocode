/*
 * XREFs of PspGetProperty @ 0x14010D3F0
 * Callers:
 *     PspGetJobProperty @ 0x14010D30C (PspGetJobProperty.c)
 *     PsGetThreadProperty @ 0x14010D36C (PsGetThreadProperty.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PspGetProperty(volatile signed __int32 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 *v7; // rcx
  __int64 *v8; // rsi
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 4);
  }
  else if ( _interlockedbittestandset64(a1 + 4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a1 + 4);
  }
  v7 = *(__int64 **)a1;
  v8 = 0LL;
  if ( *(volatile signed __int32 **)a1 != a1 )
  {
    while ( v7[2] != a2 )
    {
      v7 = (__int64 *)*v7;
      if ( v7 == (__int64 *)a1 )
        goto LABEL_5;
    }
    v8 = v7;
    if ( v7 )
      ObfReferenceObjectWithTag((PVOID)v7[3], 0x72507350u);
  }
LABEL_5:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(a1 + 4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)a1 + 2, 0LL);
  __writecr8(CurrentIrql);
  if ( !v8 )
    return 3221226021LL;
  result = 0LL;
  *a3 = v8[3];
  return result;
}
