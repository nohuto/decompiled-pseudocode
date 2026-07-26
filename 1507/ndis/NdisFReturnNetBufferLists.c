/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C000C160
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C00549F0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0010F78 (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00228B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  __int64 SourceHandle; // rax
  __int64 v7; // r9
  char v8; // r11
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  char v12; // r15
  char v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r10
  PNET_BUFFER_LIST i; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  ULONG v24; // esi
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  PNET_BUFFER_LIST *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // [rsp+70h] [rbp+8h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists, NetBufferLists, ReturnFlags);
  SourceHandle = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = *((_QWORD *)NdisFilterHandle + 68);
    v10 = 0LL;
    v11 = 0LL;
    v12 = ndisNblTrackerEpoch;
    v13 = ReturnFlags & 1;
    v30 = *((_QWORD *)NdisFilterHandle + 99);
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(
        NetBufferLists,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 99),
        0x8Au,
        (void *)v9,
        ReturnFlags & 1);
      v7 = 0LL;
      v8 = 0;
    }
    v14 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v14 & 1) != 0 )
    {
      HIDWORD(SourceHandle) = HIDWORD(v14);
      v15 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    else
    {
      v15 = v14;
    }
    if ( (v14 & 1) != 0 )
    {
      SourceHandle = ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v12)) & 2;
      v14 ^= SourceHandle;
    }
    for ( i = NetBufferLists; i; v11 = v10 )
    {
      v17 = (unsigned __int64)i->NetBufferListInfo[26];
      do
      {
        if ( i->NetBufferListInfo[26] != (void *)v17 )
          break;
        if ( !v17 && !i->SourceHandle )
        {
          v25 = ndisSourceHandleFromOwner(v30 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, i);
          i->SourceHandle = (void *)v25;
        }
        if ( (v17 & 4) != 0 || (SourceHandle = (__int64)i->SourceHandle) == 0 )
        {
          HIDWORD(SourceHandle) = HIDWORD(v14);
          i->NetBufferListInfo[26] = (void *)(v14 | 4);
        }
        else if ( SourceHandle != v15 || i->ParentNetBufferList )
        {
          ++v10;
          i->NetBufferListInfo[26] = (void *)v14;
        }
        else
        {
          ++v7;
          i->NetBufferListInfo[26] = (void *)24;
          ++v10;
        }
        i = (PNET_BUFFER_LIST)i->Link.Alignment;
      }
      while ( i );
      v18 = v11 - v10;
      v29 = v7;
      if ( (v17 & 1) != 0 && v18 )
      {
        if ( !v13 && !v8 )
        {
          v8 = 1;
          v13 = KeGetCurrentIrql() == 2;
        }
        SourceHandle = 2 * ((v17 >> 1) & 1);
        v19 = (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v17 >> 1) & 1);
        if ( v13 )
        {
          SourceHandle = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(*(_QWORD *)(v19 + 40) + (unsigned int)SourceHandle) += v18;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 48), v18);
        }
        v7 = v29;
      }
    }
    v20 = v10 - v7;
    if ( (v14 & 1) != 0 && v20 )
    {
      if ( !v13 && !v8 )
        v13 = KeGetCurrentIrql() == 2;
      SourceHandle = 2 * ((v14 >> 1) & 1);
      v26 = (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v14 >> 1) & 1);
      if ( v13 )
      {
        SourceHandle = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)(v26 + 40) + (unsigned int)SourceHandle) += v20;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 48), v20);
      }
    }
  }
  LODWORD(SourceHandle) = KeGetPcr()->Prcb.Number;
  v21 = 3 * SourceHandle;
  v22 = *((_QWORD *)NdisFilterHandle + 53);
  v23 = 32 * v21;
  if ( !ndisIterativeDataPathDisabled
    && ((ReturnFlags & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v23 + v22 + 88) )
  {
    v24 = ReturnFlags | 1;
    if ( !*(_QWORD *)(v23 + v22 + 72) )
    {
      *(_QWORD *)(v23 + v22 + 72) = NetBufferLists;
LABEL_37:
      *(_QWORD *)(v23 + v22 + 80) = NetBufferLists;
      NetBufferLists->Scratch = 0LL;
      NetBufferLists->ChildRefCount = v24;
      return;
    }
    v27 = *(PNET_BUFFER_LIST **)(v23 + v22 + 80);
    if ( v24 != *((_DWORD *)v27 + 33) || (v24 & 6) != 0 )
    {
      v27[14] = NetBufferLists;
      goto LABEL_37;
    }
    v28 = *v27;
    if ( *v27 )
    {
      do
      {
        v27 = (PNET_BUFFER_LIST *)v28;
        v28 = (_QWORD *)*v28;
      }
      while ( v28 );
    }
    *v27 = NetBufferLists;
  }
  else
  {
    ndisInvokeNextReceiveCompleteHandler(
      NetBufferLists,
      *((_QWORD *)NdisFilterHandle + 67),
      *((void (**)(void))NdisFilterHandle + 66));
  }
}
