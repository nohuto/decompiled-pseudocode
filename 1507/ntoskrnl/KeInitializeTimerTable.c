/*
 * XREFs of KeInitializeTimerTable @ 0x14059A850
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KiInitializeTimer2Data @ 0x140163724 (KiInitializeTimer2Data.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1401718C0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeInitializeTimerTable(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v5; // rsi
  void *v6; // rdi
  __int64 v7; // rcx
  PVOID PoolWithTag; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = off_140321A20() != 0;
    }
    KiInitializeTimer2Data();
  }
  if ( !KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 1616) + 1] )
  {
    v5 = 0x4000LL;
    if ( *(_BYTE *)(a1 + 1616) )
    {
      if ( KiSerializeTimerExpiration )
      {
        v6 = 0LL;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x4000uLL, 0x6254654Bu);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
          return 3221225626LL;
        memset(PoolWithTag, 0, 0x4000uLL);
      }
    }
    else
    {
      v6 = &KiPendingTimersMask0;
      if ( KiSerializeTimerExpiration )
        v5 = 32LL;
    }
    v7 = 2LL * *(unsigned __int8 *)(a1 + 1616);
    KiPendingTimerBitmaps[v7] = 8 * v5;
    KiPendingTimerBitmaps[v7 + 1] = (__int64)v6;
  }
  *(_DWORD *)(a1 + 11764) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 22704), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  v2 = 256LL;
  *(_WORD *)(a1 + 22706) = *(_WORD *)(a1 + 36) + 640;
  v3 = a1 + 14344;
  do
  {
    *(_QWORD *)(v3 - 8) = 0LL;
    *(_QWORD *)(v3 + 8) = v3;
    *(_QWORD *)v3 = v3;
    *(_DWORD *)(v3 + 20) = -1;
    *(_DWORD *)(v3 + 16) = 0;
    v3 += 32LL;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
