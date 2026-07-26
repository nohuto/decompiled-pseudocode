/*
 * XREFs of ndisXlateSendNetBufferListsToPacketArray @ 0x1C00488B0
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C004CF70 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0050BE0 (ndisMSendNetBufferListsToPackets.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     NdisGetNetBufferListProtocolId @ 0x1C0047BE0 (NdisGetNetBufferListProtocolId.c)
 *     ndisCopyNBLInfoToPacket @ 0x1C0047D64 (ndisCopyNBLInfoToPacket.c)
 *     ndisNetBufferToPacket @ 0x1C0048048 (ndisNetBufferToPacket.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C00509DC (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0057DD0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

char __fastcall ndisXlateSendNetBufferListsToPacketArray(__int64 *a1, char a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // r10
  char v5; // al
  __int64 v6; // r11
  int v7; // edx
  unsigned int v8; // r8d
  _MDL *v10; // r13
  int v11; // r9d
  char v12; // bl
  _MDL *v13; // r12
  unsigned __int64 v14; // rbp
  unsigned int v15; // r15d
  _QWORD *v16; // r15
  __int64 *v17; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  _QWORD *v21; // rax
  int v22; // ecx
  PNDIS_PACKET *v23; // rbp
  PNDIS_PACKET v24; // rbp
  unsigned int Flags; // ebx
  _QWORD *v26; // rax
  signed __int32 v27; // ecx
  signed __int32 v28; // ecx
  unsigned int v30; // [rsp+30h] [rbp-78h]
  unsigned int v31; // [rsp+34h] [rbp-74h]
  __int64 v32; // [rsp+38h] [rbp-70h]
  unsigned __int64 v33; // [rsp+40h] [rbp-68h]
  _QWORD *v34; // [rsp+48h] [rbp-60h]
  __int64 v35; // [rsp+50h] [rbp-58h]
  struct _NDIS_STACK_RESERVED *v36; // [rsp+58h] [rbp-50h] BYREF
  char v37; // [rsp+B0h] [rbp+8h]
  int v39; // [rsp+C8h] [rbp+20h]

  v2 = a1[2];
  v3 = 0;
  v4 = *a1;
  v5 = a2;
  v6 = a1[5];
  v7 = 0;
  v8 = *((_DWORD *)a1 + 2);
  v10 = (_MDL *)a1[3];
  LOBYTE(v11) = 1;
  v32 = *a1;
  v12 = 1;
  v13 = 0LL;
  v31 = v8;
  v14 = 0LL;
  v39 = 0;
  v15 = 0;
  v37 = 0;
  v35 = v6;
  v33 = 0LL;
  v34 = 0LL;
  v30 = 0;
  if ( !v2 )
    goto LABEL_55;
  while ( 1 )
  {
    if ( v5 && (*(_BYTE *)(v6 + 928) & 2) == 0 )
    {
      v16 = *(_QWORD **)(v2 + 8);
      v7 = 0;
      v39 = 0;
      if ( v16 )
      {
        do
        {
          v17 = (__int64 *)v16[4];
          if ( v17 )
          {
            while ( (*((_BYTE *)v17 + 10) & 5) != 0
                  ? (PVOID)v17[3]
                  : MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20) )
            {
              v17 = (__int64 *)*v17;
              if ( !v17 )
              {
                v7 = v39;
                goto LABEL_15;
              }
            }
            v7 = -1073741670;
            v39 = -1073741670;
          }
LABEL_15:
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
        if ( v7 )
        {
          v19 = *(_QWORD *)v2;
          *(_QWORD *)v2 = 0LL;
          *(_DWORD *)(v2 + 140) = v7;
          if ( v14 )
          {
            *v34 = v2;
          }
          else
          {
            v14 = v2;
            v33 = v2;
          }
          v34 = (_QWORD *)v2;
          v2 = v19;
          goto LABEL_50;
        }
        v8 = v31;
        LOBYTE(v11) = 1;
        v4 = v32;
      }
      v15 = v30;
    }
    if ( (*(_DWORD *)(v2 + 136) & 0x10) == 0 || (*(_DWORD *)(v2 + 128) & 1) == 0 )
      break;
    if ( v15 >= v8 )
      goto LABEL_54;
    v20 = *(_QWORD *)(v2 + 48);
    v30 = v15 + 1;
    *(_QWORD *)(v4 + 8LL * v15) = v20;
    *(_DWORD *)(v20 + 36) |= 0x4000u;
    *(_QWORD *)(*(unsigned __int16 *)(v20 + 42) + v20 + 112) = v2;
    *(_DWORD *)(v2 + 140) = 0;
    v2 = *(_QWORD *)v2;
    if ( v2 )
      v10 = *(_MDL **)(v2 + 8);
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v2, 0LL, 0x17u, v20, 0);
LABEL_50:
      v8 = v31;
      v4 = v32;
    }
    v7 = v39;
    v15 = v30;
    v5 = a2;
    v6 = v35;
    if ( !v2 )
      goto LABEL_54;
    LOBYTE(v11) = 1;
  }
  if ( v10 == *(_MDL **)(v2 + 8) )
  {
    *(_DWORD *)(v2 + 96) = 0;
    v21 = *(_QWORD **)(v2 + 8);
    if ( v21 )
    {
      v22 = 0;
      do
      {
        *(_DWORD *)(v2 + 96) = ++v22;
        v21 = (_QWORD *)*v21;
      }
      while ( v21 );
    }
  }
  v13 = v10;
  if ( !v10 )
  {
    if ( v7 )
      goto LABEL_54;
LABEL_48:
    *(_DWORD *)(v2 + 140) = 0;
    v2 = *(_QWORD *)v2;
    if ( !v2 )
      goto LABEL_54;
    v10 = *(_MDL **)(v2 + 8);
    goto LABEL_50;
  }
  while ( v15 < v8 )
  {
    v23 = (PNDIS_PACKET *)(v4 + 8LL * v15);
    v39 = ndisNetBufferToPacket((__int64)v13, v11, v23);
    v7 = v39;
    if ( v39 )
      goto LABEL_54;
    v24 = *v23;
    ndisCopyNBLInfoToPacket(v2, (__int64)v24, 0);
    v24->Private.Flags &= 0xFFFFFFF0;
    Flags = v24->Private.Flags;
    v24->Private.Flags = Flags | NdisGetNetBufferListProtocolId((PNET_BUFFER_LIST)v2);
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v2, 0LL, 0x13u, (unsigned __int64)v24, 0);
    ++*(_DWORD *)&v24[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v24, &v36);
    *(_QWORD *)v36 = *(_QWORD *)(v2 + 120);
    v37 |= v11 & (*((_BYTE *)a1 + 36) >> 1);
    if ( v37 )
      v24->Private.Flags &= ~0x80u;
    else
      v24->Private.Flags |= 0x80u;
    if ( (*(_DWORD *)(v2 + 136) & 0x800) != 0 )
      v24->Private.NdisPacketFlags |= 0x20u;
    else
      v24->Private.NdisPacketFlags &= ~0x20u;
    v15 += v11;
    v8 = v31;
    v4 = v32;
    v30 = v15;
    *(_MDL **)((char *)&v24[1].Private.Head + v24->Private.NdisPacketOobOffset) = v13;
    v13[2].StartVa = (PVOID)v2;
    v13 = v13->Next;
    if ( !v13 )
    {
      v7 = 0;
      v14 = v33;
      goto LABEL_48;
    }
  }
  v7 = v39;
LABEL_54:
  v15 = v30;
  v14 = v33;
  v12 = 1;
  v6 = v35;
LABEL_55:
  *((_DWORD *)a1 + 8) = v15;
  a1[2] = v2;
  if ( v2 )
  {
    if ( v13 )
      v10 = v13;
    a1[3] = (__int64)v10;
  }
  else
  {
    a1[3] = 0LL;
  }
  if ( v7 || !v2 )
  {
    v12 = 0;
    if ( v2 )
    {
      v26 = (_QWORD *)a1[3];
      if ( v26 && v26 != *(_QWORD **)(v2 + 8) )
      {
        do
        {
          v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 96), 0xFFFFFFFF);
          v26 = (_QWORD *)*v26;
          v28 = v27 - 1;
        }
        while ( v26 );
        if ( !v28 )
          a1[3] = *(_QWORD *)(v2 + 8);
      }
      do
      {
        *(_DWORD *)(v2 + 140) = -1073741670;
        v2 = *(_QWORD *)v2;
      }
      while ( v2 );
    }
  }
  if ( v14 )
  {
    if ( (*((_BYTE *)a1 + 36) & 1) != 0 )
      v3 = 1;
    ndisMSendNetBufferListsCompleteInternal(v6, v14, v3, 0LL);
  }
  return v12;
}
