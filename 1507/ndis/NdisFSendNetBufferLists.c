/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C000CA60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  char v8; // r10
  char v9; // dl
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  char v12; // r12
  __int64 v13; // r13
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r11
  PNET_BUFFER_LIST i; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  void *SourceHandle; // rax
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r9
  _QWORD *v23; // rcx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  char v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]
  __int64 v30; // [rsp+40h] [rbp-38h]
  char v31; // [rsp+80h] [rbp+8h]

  if ( ndisNblTrackerMode )
  {
    v8 = 0;
    v9 = ndisNblTrackerEpoch;
    v10 = *((_QWORD *)NdisFilterHandle + 56);
    v11 = 0LL;
    v30 = *((_QWORD *)NdisFilterHandle + 99);
    v28 = ndisNblTrackerEpoch;
    v12 = SendFlags & 1;
    v31 = 0;
    v13 = 0LL;
    v14 = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(
        NetBufferList,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 99),
        0x90u,
        (void *)v10,
        SendFlags & 1);
      v9 = v28;
      v8 = 0;
      v14 = 0LL;
    }
    v15 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v15 & 1) != 0 )
      v16 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v16 = v15;
    if ( (v15 & 1) != 0 )
      v15 ^= ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v9)) & 2;
    for ( i = NetBufferList; i; v13 = v11 )
    {
      v18 = (unsigned __int64)i->NetBufferListInfo[26];
      v19 = v30;
      do
      {
        if ( i->NetBufferListInfo[26] != (void *)v18 )
          break;
        if ( !v18 && !i->SourceHandle )
        {
          v27 = ndisSourceHandleFromOwner(v19 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, i);
          i->SourceHandle = (void *)v27;
        }
        if ( (v18 & 4) != 0 || (SourceHandle = i->SourceHandle) == 0LL )
        {
          i->NetBufferListInfo[26] = (void *)(v15 | 4);
        }
        else if ( SourceHandle != (void *)v16 || i->ParentNetBufferList )
        {
          ++v11;
          i->NetBufferListInfo[26] = (void *)v15;
        }
        else
        {
          ++v14;
          i->NetBufferListInfo[26] = (void *)24;
          ++v11;
        }
        i = (PNET_BUFFER_LIST)i->Link.Alignment;
      }
      while ( i );
      v8 = v31;
      v21 = v13 - v11;
      v29 = v14;
      if ( (v18 & 1) != 0 && v21 )
      {
        if ( !v12 && !v31 )
        {
          v8 = 1;
          v31 = 1;
          v12 = KeGetCurrentIrql() == 2;
        }
        v22 = (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v18 >> 1) & 1);
        if ( v12 )
        {
          v23 = (_QWORD *)(*(_QWORD *)(v22 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v23 += v21;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 48), v21);
        }
        v14 = v29;
      }
    }
    v24 = v11 - v14;
    if ( (v15 & 1) != 0 && v24 )
    {
      if ( !v12 && !v8 )
        v12 = KeGetCurrentIrql() == 2;
      v25 = (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v15 >> 1) & 1);
      if ( v12 )
      {
        v26 = (_QWORD *)(*(_QWORD *)(v25 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v26 += v24;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 48), v24);
      }
    }
  }
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD))NdisFilterHandle + 78))(
    NdisFilterHandle,
    NetBufferList,
    PortNumber,
    SendFlags);
}
