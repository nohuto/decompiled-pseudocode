/*
 * XREFs of RaidUnitReleaseIrp @ 0x1C0010ED8
 * Callers:
 *     RaUnitStartIo @ 0x1C0004AC0 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000999C (RaidUnitProcessBusyRequest.c)
 *     RaUnitAsyncError @ 0x1C0010D24 (RaUnitAsyncError.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     StorUnmapSenseInfo @ 0x1C0002950 (StorUnmapSenseInfo.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0007080 (TranslateResultToScsiRequestBlock.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0007300 (RaidSrbExGetBidirectionalData.c)
 *     RaidXrbDeallocateResources @ 0x1C0010F80 (RaidXrbDeallocateResources.c)
 *     RaUnitRemoveFromPendingList @ 0x1C001109C (RaUnitRemoveFromPendingList.c)
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
      v7 = *(_QWORD *)(v3 + 184);
      *(_QWORD *)(v2 + 104) = 0LL;
      *(_QWORD *)(v2 + 64) = v7;
      v8 = *(_QWORD *)(v3 + 192);
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
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3 + 176);
    v5 = *(_QWORD *)(v3 + 184);
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 24) = v5;
  }
  RaidXrbDeallocateResources(v3, 1LL);
  return RaUnitReleaseRemoveLock(v4);
}
