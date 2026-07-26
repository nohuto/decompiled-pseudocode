/*
 * XREFs of ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004D224
 * Callers:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0025B7C (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026D78 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0052A80 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ndisCopyNBLInfoToPacket @ 0x1C004CE98 (ndisCopyNBLInfoToPacket.c)
 *     ndisNetBufferToPacket @ 0x1C004D0E4 (ndisNetBufferToPacket.c)
 */

char __fastcall ndisXlateRecvNetBufferListsToPacketArray(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  int v2; // r12d
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r13
  char v7; // r15
  struct _NDIS_PACKET *v8; // rax
  PNDIS_PACKET *v9; // r14
  unsigned int v10; // r8d
  PNDIS_PACKET v11; // rdi
  unsigned int v13; // [rsp+60h] [rbp+8h]

  v1 = a1[2];
  v2 = 0;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = *((_DWORD *)a1 + 2);
  v5 = 0LL;
  v6 = *a1;
  v7 = 1;
  v13 = v4;
  while ( v1 && (unsigned int)v5 < v4 )
  {
    if ( (*(_DWORD *)(v1 + 136) & 0x10) != 0 && (*(_DWORD *)(v1 + 128) & 2) != 0 )
    {
      v8 = *(struct _NDIS_PACKET **)(v1 + 48);
      v9 = (PNDIS_PACKET *)(v6 + 8 * v5);
      *v9 = v8;
      v8->Private.Flags |= 0x4000u;
      if ( ndisNblTrackerMode < NdisTrackNblFullLogNoStack )
        goto LABEL_11;
      v10 = 29;
      goto LABEL_10;
    }
    v9 = (PNDIS_PACKET *)(v6 + 8 * v5);
    v2 = ndisNetBufferToPacket(*(_QWORD *)(v1 + 8), 0, v9);
    if ( v2 )
      break;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      v10 = 25;
LABEL_10:
      ndisNblTrackerRecordEvent(v1, 0LL, v10, (unsigned __int64)*v9, 0);
    }
LABEL_11:
    v11 = *v9;
    *(unsigned int *)((char *)&v11->Private.Count + (*v9)->Private.NdisPacketOobOffset) = *((_DWORD *)a1 + 3);
    *(_DWORD *)((char *)&v11->Private.Tail + v11->Private.NdisPacketOobOffset) = 14;
    *(_QWORD *)&(*v9)->MacReserved[(*v9)->Private.NdisPacketOobOffset + 24] = 0LL;
    ndisCopyNBLInfoToPacket(v1, (__int64)v11, 2);
    if ( (*(_DWORD *)(v1 + 136) & 0x80u) != 0 )
    {
      v11->Private.Flags |= 0x100u;
      v11->Private.NdisPacketFlags |= 2u;
      *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] = *(_QWORD *)(v1 + 120);
    }
    if ( (*(_DWORD *)(v1 + 136) & 0x200) != 0 )
      v11->Private.Flags &= ~0x80u;
    else
      v11->Private.Flags |= 0x80u;
    v11->Private.Flags |= 0x20000u;
    v5 = (unsigned int)(v5 + 1);
    *(_MDL **)((char *)&(*v9)[1].Private.Head + (*v9)->Private.NdisPacketOobOffset) = (_MDL *)v1;
    v1 = *(_QWORD *)v1;
    v4 = v13;
  }
  *((_DWORD *)a1 + 8) = v5;
  a1[2] = v1;
  if ( v1 )
    a1[3] = *(_QWORD *)(v1 + 8);
  if ( v2 )
  {
    if ( (_DWORD)v5 )
      return v7;
    return 0;
  }
  else if ( !v1 )
  {
    return 0;
  }
  return v7;
}
