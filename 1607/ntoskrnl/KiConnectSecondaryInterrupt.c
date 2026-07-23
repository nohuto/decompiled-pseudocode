/*
 * XREFs of KiConnectSecondaryInterrupt @ 0x1401D58B4
 * Callers:
 *     KeConnectInterrupt @ 0x14012D534 (KeConnectInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1401D5868 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1401D5DB4 (KiReleaseSecondaryPassiveConnectLock.c)
 *     KiInsertInterruptObjectOrdered @ 0x1401D8410 (KiInsertInterruptObjectOrdered.c)
 */

__int64 __fastcall KiConnectSecondaryInterrupt(__int64 a1)
{
  int v3; // edx
  char v4; // si
  unsigned __int8 v5; // cl
  char v6; // bp
  unsigned __int8 v7; // al
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // r10
  __int64 v11; // r10

  if ( !KiSecondaryInterruptServicesEnabled )
    return 3221225473LL;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = 0;
  v5 = *(_BYTE *)(a1 + 92);
  v6 = 0;
  if ( (unsigned int)(v3 - 256) > 0xFF )
    return 3221225711LL;
  if ( v5 > 0xCu )
    return 3221225711LL;
  if ( *(_DWORD *)(a1 + 96) >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v5 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  v8 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(v3 - 256);
  KiAcquireSecondaryPassiveConnectLock(v8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock((PKSPIN_LOCK)v8);
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v10 = *(_QWORD *)(v8 + 40);
    if ( v10 )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_17;
      if ( !*(_BYTE *)(v10 + 100) )
        goto LABEL_17;
      if ( *(_DWORD *)(v10 + 108) != *(_DWORD *)(a1 + 108) )
        goto LABEL_17;
      v6 = 1;
      v4 = 1;
      KiInsertInterruptObjectOrdered(*(_QWORD *)(v8 + 40), a1);
      if ( *(_BYTE *)(v11 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_17;
    }
    else
    {
      v6 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      *(_BYTE *)(v8 + 32) = 0;
    }
    *(_QWORD *)(v8 + 40) = a1;
LABEL_17:
    *(_BYTE *)(a1 + 95) = 1;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v8);
  __writecr8(CurrentIrql);
  KiReleaseSecondaryPassiveConnectLock(v8);
  if ( v6 )
    return v4 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
