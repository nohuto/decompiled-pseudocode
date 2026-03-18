/*
 * XREFs of VF_FIND_BUFFER @ 0x14073A618
 * Callers:
 *     ViSpecialFreeCommonBuffer @ 0x14073F328 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

unsigned __int16 *__fastcall VF_FIND_BUFFER(volatile signed __int32 *a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 i; // rdi
  unsigned __int16 *v7; // rdi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1 + 4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 4);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a1 + 4);
  }
  for ( i = *(_QWORD *)a1; ; i = *((_QWORD *)v7 + 6) )
  {
    v7 = (unsigned __int16 *)(i - 48);
    if ( a1 == (volatile signed __int32 *)(v7 + 24) )
      break;
    if ( *((_QWORD *)v7 + 2) + *v7 == a2 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
      goto LABEL_16;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  v7 = 0LL;
LABEL_16:
  __writecr8(CurrentIrql);
  return v7;
}
