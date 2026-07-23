/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x1401D5DF8
 * Callers:
 *     KeUnmaskInterrupt @ 0x140125B4C (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14012D534 (KeConnectInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  KSPIN_LOCK *v3; // rbp
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rax
  int v8; // ebx

  v1 = 0;
  v2 = 48LL * (unsigned int)(a1 - 256);
  v3 = (KSPIN_LOCK *)(v2 + KiGlobalSecondaryIDT);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock(v3);
  if ( !*(_BYTE *)(v2 + KiGlobalSecondaryIDT + 32) )
  {
    v1 = 296;
LABEL_4:
    KxReleaseSpinLock(v3);
    __writecr8(CurrentIrql);
    return v1;
  }
  v5 = *(_QWORD *)(v2 + KiGlobalSecondaryIDT + 40);
  if ( !v5 )
    goto LABEL_4;
  v6 = (__int64 *)(v5 + 8);
  v7 = (__int64 *)(v5 + 8);
  while ( 1 )
  {
    v8 = *((_DWORD *)v7 + 24);
    if ( (v8 & 1) == 0 )
      break;
    v7 = (__int64 *)*v7;
    if ( v7 == v6 )
      goto LABEL_10;
  }
  *(_BYTE *)(v2 + KiGlobalSecondaryIDT + 32) = 0;
LABEL_10:
  KxReleaseSpinLock(v3);
  __writecr8(CurrentIrql);
  if ( (v8 & 1) == 0 )
    return (unsigned int)off_1402F2488();
  return v1;
}
