/*
 * XREFs of RaidUnitReleaseIrp @ 0x1C000C880
 * Callers:
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000BDF0 (RaidUnitProcessBusyRequest.c)
 *     RaUnitAsyncError @ 0x1C000C3A0 (RaUnitAsyncError.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0037150 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     RaidXrbDeallocateResources @ 0x1C000356C (RaidXrbDeallocateResources.c)
 *     StorUnmapSenseInfo @ 0x1C0007040 (StorUnmapSenseInfo.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0009D68 (TranslateResultToScsiRequestBlock.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000C928 (RaUnitRemoveFromPendingList.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0019460 (RaidSrbExGetBidirectionalData.c)
 */

LONG __fastcall RaidUnitReleaseIrp(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 BidirectionalData; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v3 = *(_QWORD *)(v2 + 96);
  else
    v3 = *(_QWORD *)(v2 + 48);
  v4 = *(_QWORD *)(v3 + 224);
  RaUnitRemoveFromPendingList(v4, a1);
  StorUnmapSenseInfo(v3, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL));
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v3 + 16) & 0x40) != 0 )
    {
      TranslateResultToScsiRequestBlock(*(_QWORD *)(v3 + 752), v2);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 48LL) = *(_QWORD *)(v3 + 176);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 24LL) = *(_QWORD *)(v3 + 184);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL) = *(_QWORD *)(v3 + 752);
      *(_BYTE *)(v3 + 16) &= ~0x40u;
      *(_QWORD *)(v3 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v2 + 96) = 0LL;
      v8 = *(_QWORD *)(v3 + 184);
      *(_QWORD *)(v2 + 104) = 0LL;
      *(_QWORD *)(v2 + 64) = v8;
      v9 = *(_QWORD *)(v3 + 192);
      if ( v9 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v2);
        if ( BidirectionalData )
          *(_QWORD *)(BidirectionalData + 16) = v9;
      }
    }
  }
  else
  {
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3 + 176);
    v6 = *(_QWORD *)(v3 + 184);
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 24) = v6;
  }
  RaidXrbDeallocateResources(v3, 1, v5);
  return RaUnitReleaseRemoveLock((struct _KEVENT *)v4);
}
