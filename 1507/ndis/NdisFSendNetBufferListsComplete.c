/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C000ABD0
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C0053DFC (ndisFLoopbackNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C00549F0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0054578 (ndisInvokeNextSendCompleteHandler.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 SourceHandle; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  ULONG v10; // esi
  struct NDIS_NBL_TRACKER_HANDLE__ *v11; // r11
  unsigned __int64 v12; // rbx
  char v13; // r13
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // r14
  bool v17; // r15
  char v18; // dl
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r10
  PNET_BUFFER_LIST Alignment; // r8
  char v22; // r13
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdx
  PNET_BUFFER_LIST *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+98h] [rbp+20h]

  SourceHandle = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    v11 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 99);
    v12 = *((_QWORD *)NdisFilterHandle + 60);
    v13 = ndisNblTrackerEpoch;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v31 = v11;
    v17 = (SendCompleteFlags & 1) != 0;
    v18 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(NetBufferList, v11, 0x94u, (void *)v12, (SendCompleteFlags & 1) != 0);
      v11 = v31;
      v15 = 0LL;
      v18 = 0;
    }
    v19 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v19 & 1) != 0 )
    {
      HIDWORD(SourceHandle) = HIDWORD(v19);
      v20 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    else
    {
      v20 = v19;
    }
    if ( (v19 & 1) != 0 )
    {
      SourceHandle = ((unsigned __int8)v19 ^ (unsigned __int8)(2 * v13)) & 2;
      v19 ^= SourceHandle;
    }
    Alignment = NetBufferList;
    if ( NetBufferList )
    {
      v22 = 0;
      do
      {
        v23 = (unsigned __int64)Alignment->NetBufferListInfo[26];
        do
        {
          if ( Alignment->NetBufferListInfo[26] != (void *)v23 )
            break;
          if ( !v23 && !Alignment->SourceHandle )
          {
            v29 = ndisSourceHandleFromOwner((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, Alignment);
            Alignment->SourceHandle = (void *)v29;
          }
          if ( (v23 & 4) != 0 || (SourceHandle = (__int64)Alignment->SourceHandle) == 0 )
          {
            HIDWORD(SourceHandle) = HIDWORD(v19);
            Alignment->NetBufferListInfo[26] = (void *)(v19 | 4);
          }
          else if ( SourceHandle != v20 || Alignment->ParentNetBufferList )
          {
            ++v16;
            Alignment->NetBufferListInfo[26] = (void *)v19;
          }
          else
          {
            ++v15;
            Alignment->NetBufferListInfo[26] = (void *)24;
            ++v16;
          }
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        }
        while ( Alignment );
        v24 = v14 - v16;
        v32 = v15;
        if ( (v23 & 1) != 0 && v24 )
        {
          if ( !v17 && !v22 )
          {
            v22 = 1;
            v17 = KeGetCurrentIrql() == 2;
          }
          SourceHandle = 2 * ((v23 >> 1) & 1);
          v25 = (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v23 >> 1) & 1);
          if ( v17 )
          {
            SourceHandle = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(*(_QWORD *)(v25 + 40) + (unsigned int)SourceHandle) += v24;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 48), v24);
          }
          v15 = v32;
        }
        v14 = v16;
      }
      while ( Alignment );
      v18 = v22;
    }
    v26 = v16 - v15;
    if ( (v19 & 1) != 0 && v26 )
    {
      if ( !v17 && !v18 )
        v17 = KeGetCurrentIrql() == 2;
      SourceHandle = 2 * ((v19 >> 1) & 1);
      v27 = (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v19 >> 1) & 1);
      if ( v17 )
      {
        SourceHandle = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)(v27 + 40) + (unsigned int)SourceHandle) += v26;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 48), v26);
      }
    }
  }
  LODWORD(SourceHandle) = KeGetPcr()->Prcb.Number;
  v7 = 3 * SourceHandle;
  v8 = *((_QWORD *)NdisFilterHandle + 53);
  v9 = 32 * v7;
  if ( !ndisIterativeDataPathDisabled
    && ((SendCompleteFlags & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v9 + v8 + 40) )
  {
    v10 = SendCompleteFlags | 1;
    if ( !*(_QWORD *)(v9 + v8 + 24) )
    {
      *(_QWORD *)(v9 + v8 + 24) = NetBufferList;
LABEL_7:
      *(_QWORD *)(v9 + v8 + 32) = NetBufferList;
      NetBufferList->Scratch = 0LL;
      NetBufferList->ChildRefCount = v10;
      return;
    }
    v28 = *(PNET_BUFFER_LIST **)(v9 + v8 + 32);
    if ( v10 != *((_DWORD *)v28 + 33) || (v10 & 6) != 0 )
    {
      v28[14] = NetBufferList;
      goto LABEL_7;
    }
    v30 = *v28;
    if ( *v28 )
    {
      do
      {
        v28 = (PNET_BUFFER_LIST *)v30;
        v30 = (_QWORD *)*v30;
      }
      while ( v30 );
    }
    *v28 = NetBufferList;
  }
  else
  {
    ndisInvokeNextSendCompleteHandler(
      NetBufferList,
      *((_QWORD *)NdisFilterHandle + 59),
      *((void (**)(void))NdisFilterHandle + 58));
  }
}
