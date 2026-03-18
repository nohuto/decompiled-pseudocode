/*
 * XREFs of ViCheckAdapterBuffers @ 0x14073D760
 * Callers:
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14073C7D8 (VfMapTransferEx.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ViCheckTag @ 0x14073DA54 (ViCheckTag.c)
 */

__int64 *__fastcall ViCheckAdapterBuffers(__int64 a1)
{
  __int64 *result; // rax
  _QWORD *v2; // rdi
  __int16 v3; // si
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *i; // rax
  unsigned __int64 v7; // r8
  size_t v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  __int64 retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (_QWORD *)(a1 + 80);
  v3 = 0;
  if ( (_QWORD *)*v2 != v2 )
  {
    v4 = (volatile signed __int32 *)(a1 + 96);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 96));
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 96));
    }
    for ( i = (_QWORD *)*v2; ; i = (_QWORD *)*v10 )
    {
      v9 = i - 6;
      v10 = v9 + 6;
      if ( v2 == v9 + 6 )
        break;
      v7 = v9[3] - v9[2];
      if ( v7 >= 8 )
        v3 |= 1u;
      v8 = *((unsigned int *)v9 + 2);
      if ( v8 + v7 + 8 <= *((unsigned int *)v9 + 1) )
        v3 |= 2u;
      ViCheckTag(v9[3], v8);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    result = (__int64 *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
