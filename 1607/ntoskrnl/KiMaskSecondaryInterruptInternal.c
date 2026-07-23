/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x1401D5BFC
 * Callers:
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1)
{
  unsigned int v1; // edi
  __int64 v2; // r14
  KSPIN_LOCK *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  v1 = 0;
  v2 = 48LL * (unsigned int)(a1 - 256);
  v3 = (KSPIN_LOCK *)(v2 + KiGlobalSecondaryIDT);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock(v3);
  if ( *(_BYTE *)(v2 + KiGlobalSecondaryIDT + 32) || (v6 = *(_QWORD *)(v2 + KiGlobalSecondaryIDT + 40)) == 0 )
  {
    KxReleaseSpinLock(v3);
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
        goto LABEL_9;
      }
    }
    v1 = 296;
LABEL_9:
    KxReleaseSpinLock(v3);
    __writecr8(CurrentIrql);
    if ( !v1 )
      off_1402F2480();
    return v1;
  }
}
