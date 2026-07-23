/*
 * XREFs of KeInitializeTimerTable @ 0x14054E710
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KiInitializeTimer2Data @ 0x140139C74 (KiInitializeTimer2Data.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159800 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeInitializeTimerTable(__int64 a1)
{
  __int64 v2; // rsi
  void *v3; // rdi
  PVOID PoolWithTag; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = off_1402F2570() != 0;
    }
    KiInitializeTimer2Data();
  }
  if ( !KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 1616) + 1] )
  {
    v2 = 0x4000LL;
    if ( *(_BYTE *)(a1 + 1616) )
    {
      if ( KiSerializeTimerExpiration )
      {
        v3 = 0LL;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x4000uLL, 0x6254654Bu);
        v3 = PoolWithTag;
        if ( !PoolWithTag )
          return 3221225626LL;
        memset(PoolWithTag, 0, 0x4000uLL);
      }
    }
    else
    {
      v3 = &KiPendingTimersMask0;
      if ( KiSerializeTimerExpiration )
        v2 = 32LL;
    }
    v6 = 2LL * *(unsigned __int8 *)(a1 + 1616);
    KiPendingTimerBitmaps[v6] = 8 * v2;
    KiPendingTimerBitmaps[v6 + 1] = (__int64)v3;
  }
  *(_DWORD *)(a1 + 11764) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 22704), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 22760) )
    *(_WORD *)(a1 + 22706) = *(_DWORD *)(a1 + 36) + 640;
  v7 = a1 + 14344;
  v8 = 256LL;
  do
  {
    *(_QWORD *)(v7 - 8) = 0LL;
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)v7 = v7;
    *(_DWORD *)(v7 + 20) = -1;
    *(_DWORD *)(v7 + 16) = 0;
    v7 += 32LL;
    --v8;
  }
  while ( v8 );
  return 0LL;
}
