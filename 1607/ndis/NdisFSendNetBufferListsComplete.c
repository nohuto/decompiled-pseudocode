/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C000D870
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C00268AC (ndisFLoopbackNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0059150 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C00104B8 (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 SourceHandle; // rax
  __int64 v7; // rcx
  ULONG v8; // esi
  PNET_BUFFER_LIST *v9; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v10; // r11
  unsigned __int64 v11; // rbx
  char v12; // r13
  __int64 v13; // r12
  __int64 v14; // r9
  __int64 v15; // r14
  bool v16; // r15
  char v17; // dl
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r10
  PNET_BUFFER_LIST Alignment; // r8
  char v21; // r13
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+98h] [rbp+20h]

  SourceHandle = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    v10 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 99);
    v11 = *((_QWORD *)NdisFilterHandle + 60);
    v12 = ndisNblTrackerEpoch;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v29 = v10;
    v16 = (SendCompleteFlags & 1) != 0;
    v17 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(NetBufferList, v10, 0x94u, (void *)v11, (SendCompleteFlags & 1) != 0);
      v10 = v29;
      v14 = 0LL;
      v17 = 0;
    }
    v18 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v18 & 1) != 0 )
    {
      HIDWORD(SourceHandle) = HIDWORD(v18);
      v19 = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    else
    {
      v19 = v18;
    }
    if ( (v18 & 1) != 0 )
    {
      SourceHandle = ((unsigned __int8)v18 ^ (unsigned __int8)(2 * v12)) & 2;
      v18 ^= SourceHandle;
    }
    Alignment = NetBufferList;
    if ( NetBufferList )
    {
      v21 = 0;
      do
      {
        v22 = (unsigned __int64)Alignment->NetBufferListInfo[26];
        do
        {
          if ( Alignment->NetBufferListInfo[26] != (void *)v22 )
            break;
          if ( !v22 && !Alignment->SourceHandle )
          {
            v27 = ndisSourceHandleFromOwner((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, Alignment);
            Alignment->SourceHandle = (void *)v27;
          }
          if ( (v22 & 4) != 0 || (SourceHandle = (__int64)Alignment->SourceHandle) == 0 )
          {
            HIDWORD(SourceHandle) = HIDWORD(v18);
            Alignment->NetBufferListInfo[26] = (void *)(v18 | 4);
          }
          else if ( SourceHandle != v19 || Alignment->ParentNetBufferList )
          {
            ++v15;
            Alignment->NetBufferListInfo[26] = (void *)v18;
          }
          else
          {
            ++v14;
            Alignment->NetBufferListInfo[26] = (void *)24;
            ++v15;
          }
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        }
        while ( Alignment );
        v23 = v13 - v15;
        v30 = v14;
        if ( (v22 & 1) != 0 && v23 )
        {
          if ( !v16 && !v21 )
          {
            v21 = 1;
            v16 = KeGetCurrentIrql() == 2;
          }
          SourceHandle = 2 * ((v22 >> 1) & 1);
          v24 = (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v22 >> 1) & 1);
          if ( v16 )
          {
            SourceHandle = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(*(_QWORD *)(v24 + 40) + (unsigned int)SourceHandle) += v23;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 48), v23);
          }
          v14 = v30;
        }
        v13 = v15;
      }
      while ( Alignment );
      v17 = v21;
    }
    v25 = v15 - v14;
    if ( (v18 & 1) != 0 && v25 )
    {
      if ( !v16 && !v17 )
        v16 = KeGetCurrentIrql() == 2;
      SourceHandle = 2 * ((v18 >> 1) & 1);
      v26 = (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v18 >> 1) & 1);
      if ( v16 )
      {
        SourceHandle = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)(v26 + 40) + (unsigned int)SourceHandle) += v25;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 48), v25);
      }
    }
  }
  LODWORD(SourceHandle) = KeGetPcr()->Prcb.Number;
  v7 = *((_QWORD *)NdisFilterHandle + 53) + 96 * SourceHandle;
  if ( !ndisIterativeDataPathDisabled
    && ((SendCompleteFlags & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v7 + 40) )
  {
    v8 = SendCompleteFlags | 1;
    if ( !*(_QWORD *)(v7 + 24) )
    {
      *(_QWORD *)(v7 + 24) = NetBufferList;
LABEL_7:
      *(_QWORD *)(v7 + 32) = NetBufferList;
      NetBufferList->Scratch = 0LL;
      NetBufferList->ChildRefCount = v8;
      return;
    }
    v9 = *(PNET_BUFFER_LIST **)(v7 + 32);
    if ( v8 != *((_DWORD *)v9 + 33) || (v8 & 6) != 0 )
    {
      v9[14] = NetBufferList;
      goto LABEL_7;
    }
    v28 = *v9;
    if ( *v9 )
    {
      do
      {
        v9 = (PNET_BUFFER_LIST *)v28;
        v28 = (_QWORD *)*v28;
      }
      while ( v28 );
    }
    *v9 = NetBufferList;
  }
  else
  {
    ndisInvokeNextSendCompleteHandler(
      NetBufferList,
      *((void **)NdisFilterHandle + 59),
      *((void (**)(void))NdisFilterHandle + 58));
  }
}
