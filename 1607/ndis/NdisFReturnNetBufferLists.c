/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C000E480
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0059150 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00267B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0058D80 (ndisInvokeNextReceiveCompleteHandler.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  NDIS_HANDLE v5; // r11
  __int64 SourceHandle; // rax
  char v7; // r9
  unsigned __int64 v8; // rbx
  char v9; // bp
  __int64 v10; // rdi
  __int64 v11; // r12
  char v12; // r13
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r10
  PNET_BUFFER_LIST i; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  ULONG v22; // r15d
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  PNET_BUFFER_LIST *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+30h] [rbp-48h]
  char v29; // [rsp+98h] [rbp+20h]

  v5 = NdisFilterHandle;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
  SourceHandle = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    v7 = 0;
    v8 = *((_QWORD *)v5 + 68);
    v9 = ndisNblTrackerEpoch;
    v10 = 0LL;
    v11 = 0LL;
    v27 = *((_QWORD *)v5 + 99);
    v12 = ReturnFlags & 1;
    v29 = 0;
    v13 = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(
        NetBufferLists,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 99),
        0x8Au,
        (void *)v8,
        ReturnFlags & 1);
      v5 = NdisFilterHandle;
      v7 = 0;
    }
    v14 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
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
      SourceHandle = ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v9)) & 2;
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
          v23 = ndisSourceHandleFromOwner(v27 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, i);
          i->SourceHandle = (void *)v23;
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
          ++v13;
          i->NetBufferListInfo[26] = (void *)24;
          ++v10;
        }
        i = (PNET_BUFFER_LIST)i->Link.Alignment;
      }
      while ( i );
      v18 = v11 - v10;
      if ( (v17 & 1) != 0 && v18 )
      {
        if ( !v12 && !v7 )
        {
          v29 = 1;
          v12 = KeGetCurrentIrql() == 2;
        }
        SourceHandle = 16 * ((v17 >> 1) & 1);
        v19 = SourceHandle + (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( v12 )
        {
          SourceHandle = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(*(_QWORD *)v19 + (unsigned int)SourceHandle) += v18;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 8), v18);
        }
        v7 = v29;
      }
    }
    v20 = v10 - v13;
    if ( (v14 & 1) != 0 && v20 )
    {
      if ( !v12 && !v7 )
        v12 = KeGetCurrentIrql() == 2;
      SourceHandle = 2 * ((v14 >> 1) & 1);
      v24 = (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v14 >> 1) & 1);
      if ( v12 )
      {
        SourceHandle = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)(v24 + 40) + (unsigned int)SourceHandle) += v20;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 48), v20);
      }
    }
  }
  LODWORD(SourceHandle) = KeGetPcr()->Prcb.Number;
  v21 = *((_QWORD *)v5 + 53) + 96 * SourceHandle;
  if ( !ndisIterativeDataPathDisabled && ((ReturnFlags & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v21 + 88) )
  {
    v22 = ReturnFlags | 1;
    if ( !*(_QWORD *)(v21 + 72) )
    {
      *(_QWORD *)(v21 + 72) = NetBufferLists;
LABEL_37:
      *(_QWORD *)(v21 + 80) = NetBufferLists;
      NetBufferLists->Scratch = 0LL;
      NetBufferLists->ChildRefCount = v22;
      return;
    }
    v25 = *(PNET_BUFFER_LIST **)(v21 + 80);
    if ( v22 != *((_DWORD *)v25 + 33) || (v22 & 6) != 0 )
    {
      v25[14] = NetBufferLists;
      goto LABEL_37;
    }
    v26 = *v25;
    if ( *v25 )
    {
      do
      {
        v25 = (PNET_BUFFER_LIST *)v26;
        v26 = (_QWORD *)*v26;
      }
      while ( v26 );
    }
    *v25 = NetBufferLists;
  }
  else
  {
    ndisInvokeNextReceiveCompleteHandler(NetBufferLists, *((_QWORD *)v5 + 67), *((void (**)(void))v5 + 66));
  }
}
