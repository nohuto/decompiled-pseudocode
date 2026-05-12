/*
 * XREFs of RaidUnitReleaseIrp @ 0x1C000EBBC
 * Callers:
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x1C000EA18 (RaUnitAsyncError.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0032710 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     StorUnmapSenseInfo @ 0x1C0002D90 (StorUnmapSenseInfo.c)
 *     RaidXrbDeallocateResources @ 0x1C000EC64 (RaidXrbDeallocateResources.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000ED80 (RaUnitRemoveFromPendingList.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C002E690 (RaidSrbExGetBidirectionalData.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C002E7B4 (TranslateResultToScsiRequestBlock.c)
 */

LONG __fastcall RaidUnitReleaseIrp(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 BidirectionalData; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v3 = *(_QWORD *)(v2 + 96);
  else
    v3 = *(_QWORD *)(v2 + 48);
  v4 = *(_QWORD *)(v3 + 216);
  RaUnitRemoveFromPendingList(v4, a1);
  StorUnmapSenseInfo(v3, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL));
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v3 + 16) & 0x40) != 0 )
    {
      TranslateResultToScsiRequestBlock(*(_QWORD *)(v3 + 736), v2);
      *(_QWORD *)(*(_QWORD *)(v3 + 736) + 48LL) = *(_QWORD *)(v3 + 168);
      *(_QWORD *)(*(_QWORD *)(v3 + 736) + 24LL) = *(_QWORD *)(v3 + 176);
      *(_QWORD *)(*(_QWORD *)(v3 + 736) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v3 + 736) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL) = *(_QWORD *)(v3 + 736);
      *(_BYTE *)(v3 + 16) &= ~0x40u;
      *(_QWORD *)(v3 + 736) = 0LL;
    }
    else
    {
      *(_QWORD *)(v2 + 96) = 0LL;
      v7 = *(_QWORD *)(v3 + 176);
      *(_QWORD *)(v2 + 104) = 0LL;
      *(_QWORD *)(v2 + 64) = v7;
      v8 = *(_QWORD *)(v3 + 184);
      if ( v8 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v2);
        if ( BidirectionalData )
          *(_QWORD *)(BidirectionalData + 16) = v8;
      }
    }
  }
  else
  {
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3 + 168);
    v5 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 24) = v5;
  }
  RaidXrbDeallocateResources(v3, 1LL);
  return RaUnitReleaseRemoveLock(v4);
}
