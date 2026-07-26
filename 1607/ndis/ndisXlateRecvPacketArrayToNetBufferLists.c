/*
 * XREFs of ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004D3CC
 * Callers:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0051E28 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00527D0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0066480 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0005D40 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0010AE4 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ndisCopyPacketInfoToNBL @ 0x1C004CFAC (ndisCopyPacketInfoToNBL.c)
 *     ndisPacketToNetBuffer @ 0x1C004D1E8 (ndisPacketToNetBuffer.c)
 *     XlateReceivePacketStats @ 0x1C0061E64 (XlateReceivePacketStats.c)
 */

char __fastcall ndisXlateRecvPacketArrayToNetBufferLists(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rdx
  __int64 v4; // r13
  struct _NET_BUFFER_LIST *v5; // rdi
  unsigned int v6; // r9d
  char v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  int v10; // r15d
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rbx
  char v15; // r12
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  __int64 v17; // r10
  __int64 v18; // rcx
  PVOID v19; // rax
  int v20; // edx
  unsigned int v21; // edx
  _BYTE v23[48]; // [rsp+A0h] [rbp+A0h] BYREF

  v1 = (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 32);
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(v1 + 40) = *(_QWORD *)a1;
  v7 = 1;
  *(_QWORD *)(v1 + 16) = 0LL;
  v8 = v2 + 8 * v4;
  *(_QWORD *)(v1 + 24) = 0LL;
  v9 = *(_QWORD *)v8;
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v1 + 8) = v6;
  v10 = *(_DWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 32);
  while ( 1 )
  {
    *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v8;
    v14 = 0LL;
    if ( (unsigned int)v4 >= v6 )
      break;
    v11 = *(_QWORD *)v8;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v8 + 42LL);
    v13 = *(_DWORD *)(v12 + *(_QWORD *)v8 + 32);
    *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v13;
    if ( v13 != v10 )
    {
      v5 = *(struct _NET_BUFFER_LIST **)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      break;
    }
    if ( *(char *)(v11 + 41) >= 0 )
    {
      v15 = 0;
    }
    else
    {
      v14 = *(_QWORD *)(v12 + v11 + 120);
      v15 = 1;
      if ( v14 )
      {
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
          ndisNblTrackerRecordEvent(v14, 0LL, 0x12u, v11, 0);
        *(_QWORD *)v14 = 0LL;
        goto LABEL_12;
      }
    }
    if ( ndisNetBufferListPool )
    {
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v14 = (unsigned __int64)NetBufferAndNetBufferList;
      if ( v15 )
        *(_QWORD *)(*(unsigned __int16 *)(v11 + 42) + v11 + 120) = NetBufferAndNetBufferList;
    }
LABEL_12:
    if ( !v14 )
    {
      v5 = *(struct _NET_BUFFER_LIST **)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( v5 )
        v10 = -1073741670;
      else
        v7 = 0;
      goto LABEL_43;
    }
    ndisPacketToNetBuffer(v11, *(_QWORD *)(v14 + 8));
    v18 = *(_QWORD *)(v11 + 8);
    if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
    {
      v19 = *(PVOID *)(v18 + 24);
    }
    else
    {
      v19 = MmMapLockedPagesSpecifyCache((PMDL)v18, 0, MmCached, 0LL, v17, ndisMdlMappingNxFlag);
      v17 = 0LL;
    }
    if ( *(_QWORD *)(*(unsigned __int16 *)(v11 + 42) + v11 + 112) == v17 && (*(_BYTE *)(v11 + 41) & 2) == 0 )
      XlateReceivePacketStats(
        *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
        v19,
        *(unsigned int *)(v11 + 4));
    *(_DWORD *)(v14 + 136) |= 0x10u;
    *(_QWORD *)(v14 + 48) = v11;
    ndisCopyPacketInfoToNBL(v11, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)v14, XlateReceive);
    if ( (*(_DWORD *)(v11 + 36) & 0x100) != 0 )
    {
      *(_DWORD *)(v14 + 136) |= 0x80u;
      *(_DWORD *)(v14 + 128) |= 0x8000u;
      *(_QWORD *)(v14 + 120) = *(_QWORD *)(*(unsigned __int16 *)(v11 + 42) + v11 + 72);
    }
    else
    {
      *(_QWORD *)(v14 + 120) = *(_QWORD *)a1;
    }
    v20 = *(_DWORD *)(v14 + 136);
    if ( *(_BYTE *)(v11 + 36) >= 0 && (v20 & 0x80u) != 0 )
      v21 = v20 | 0x200;
    else
      v21 = v20 & 0xFFFFFDFF;
    v10 = *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    *(_DWORD *)(v14 + 136) = v21;
    if ( v10 != -1073741670 )
      *(_DWORD *)(*(unsigned __int16 *)(v11 + 42) + v11 + 32) = 259;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v14, 0LL, 0x1Bu, v11, 0);
    v5 = *(struct _NET_BUFFER_LIST **)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( v5 )
    {
      **(_QWORD **)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
    }
    else
    {
      v5 = (struct _NET_BUFFER_LIST *)v14;
      *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v14;
    }
    LODWORD(v4) = v4 + 1;
    v6 = *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v8 = *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 8LL;
    ++*(_DWORD *)v1;
    *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
  }
  if ( (_DWORD)v4 == v6 )
    v7 = 0;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v5);
LABEL_43:
  *(_DWORD *)(a1 + 36) = *(_DWORD *)v1;
  *(_QWORD *)(a1 + 24) = v5;
  *(_DWORD *)(a1 + 32) = v4;
  if ( v10 == -1073741670 )
    *(_DWORD *)(a1 + 40) |= 2u;
  return v7;
}
