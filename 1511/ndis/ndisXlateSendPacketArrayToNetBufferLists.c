/*
 * XREFs of ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004978C
 * Callers:
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D930 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0051A80 (ndisMSendPacketsToNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000C460 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000DC40 (NdisFreeNetBufferList.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ndisCopyPacketInfoToNBL @ 0x1C00489BC (ndisCopyPacketInfoToNBL.c)
 *     ndisPacketToNetBuffer @ 0x1C0048C14 (ndisPacketToNetBuffer.c)
 */

bool __fastcall ndisXlateSendPacketArrayToNetBufferLists(__int64 a1)
{
  unsigned int v1; // r13d
  bool v2; // di
  __int64 v4; // rcx
  char v5; // dl
  unsigned __int64 v6; // rsi
  int v7; // r12d
  __int64 v8; // rbp
  __int64 *v9; // r14
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  unsigned __int64 v11; // rbx
  int v12; // edx
  unsigned int v13; // edx
  bool result; // al
  unsigned __int64 v15; // rbx
  char v16; // [rsp+70h] [rbp+8h]
  _QWORD *v17; // [rsp+78h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  v17 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 1;
  v6 = 0LL;
  v16 = 1;
  v7 = 0;
  v8 = *(unsigned int *)(a1 + 32);
  if ( (unsigned int)v8 >= v1 )
  {
LABEL_22:
    *(_DWORD *)(a1 + 40) = v7;
    *(_DWORD *)(a1 + 32) = v8;
    v2 = (_DWORD)v8 != v1;
  }
  else
  {
    v9 = (__int64 *)(v4 + 8 * v8);
    while ( 1 )
    {
      if ( v5 == 1 )
      {
        if ( (*(_DWORD *)(*v9 + 36) & 0x80u) == 0 )
          v7 |= 2u;
        v16 = 0;
      }
      else if ( (v7 & 2) != 0 && (*(_DWORD *)(*v9 + 36) & 0x80u) != 0
             || (v7 & 2) == 0 && (*(_DWORD *)(*v9 + 36) & 0x80u) == 0 )
      {
        goto LABEL_22;
      }
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v11 = (unsigned __int64)NetBufferAndNetBufferList;
      if ( !NetBufferAndNetBufferList )
        break;
      ndisPacketToNetBuffer(*v9, (__int64)NetBufferAndNetBufferList->FirstNetBuffer);
      if ( !v6 )
        v6 = v11;
      if ( v17 )
        *v17 = v11;
      *(_QWORD *)(v11 + 120) = *(_QWORD *)a1;
      *(_QWORD *)(v11 + 48) = *v9;
      v17 = (_QWORD *)v11;
      ndisCopyPacketInfoToNBL(*v9, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)v11, XlateSend);
      *(_BYTE *)(v6 + 200) = *(_BYTE *)(*v9 + 36) & 0xF;
      *(_QWORD *)(v6 + 184) = *(_QWORD *)(*(unsigned __int16 *)(*v9 + 42) + *v9 + 104);
      *(_DWORD *)(v11 + 136) |= 0x10u;
      v12 = *(_DWORD *)(v11 + 136);
      if ( (*(_BYTE *)(*v9 + 41) & 0x20) != 0 )
        v13 = v12 | 0x800;
      else
        v13 = v12 & 0xFFFFF7FF;
      *(_DWORD *)(v11 + 136) = v13;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        ndisNblTrackerRecordEvent(v11, 0LL, 0x15u, *v9, 0);
      v5 = v16;
      LODWORD(v8) = v8 + 1;
      ++v9;
      if ( (unsigned int)v8 >= v1 )
        goto LABEL_22;
    }
    if ( v6 )
    {
      do
      {
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
          ndisNblTrackerRecordEvent(v6, 0LL, 0x16u, 0LL, 0);
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 32LL) = 0LL;
        v15 = *(_QWORD *)v6;
        NdisFreeNetBufferList((PNET_BUFFER_LIST)v6);
        v6 = v15;
      }
      while ( v15 );
    }
    v6 = 0LL;
  }
  result = v2;
  *(_QWORD *)(a1 + 24) = v6;
  return result;
}
