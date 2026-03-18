/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x1402038F4
 * Callers:
 *     KeMaskInterrupt @ 0x14014B230 (KeMaskInterrupt.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdi
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  v2 = 48LL * (unsigned int)(a1 - 256);
  v3 = (volatile signed __int32 *)(v2 + KiGlobalSecondaryIDT);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v3);
  }
  if ( *(_BYTE *)(v2 + KiGlobalSecondaryIDT + 32) || (v6 = *(_QWORD *)(v2 + KiGlobalSecondaryIDT + 40)) == 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    v7 = (_QWORD *)(v6 + 8);
    v8 = (_QWORD *)(v6 + 8);
    while ( (v8[12] & 1) != 0 )
    {
      v8 = (_QWORD *)*v8;
      if ( v8 == v7 )
      {
        *(_BYTE *)(v2 + KiGlobalSecondaryIDT + 32) = 1;
        goto LABEL_16;
      }
    }
    v1 = 296;
LABEL_16:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    __writecr8(CurrentIrql);
    if ( !v1 )
      off_140321930();
    return v1;
  }
}
