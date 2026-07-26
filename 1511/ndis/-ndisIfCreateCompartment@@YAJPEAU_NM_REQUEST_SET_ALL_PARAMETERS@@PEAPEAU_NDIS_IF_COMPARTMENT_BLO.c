/*
 * XREFs of ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003BE70
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003DE10 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B2F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00206B4 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C0020C94 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003C770 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C009F918 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00A98A4 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00BEA04 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartment(
        struct _NM_REQUEST_SET_ALL_PARAMETERS *a1,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a2,
        __int64 a3)
{
  __int64 v3; // r14
  int Network; // edi
  char v7; // bp
  KIRQL v8; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v10; // rsi
  unsigned int Flags; // eax
  bool v12; // cf
  struct _NDIS_IF_COMPARTMENT_BLOCK *v13; // rsi
  KIRQL v14; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rdi
  __int64 v16; // rdx
  _IF_COUNTED_STRING_LH *p_CompartmentDescr; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // rdx
  _NDIS_NSI_COMPARTMENT_RW *p_LoopbackInfo; // rax
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  KIRQL v24; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *v26; // [rsp+70h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  Network = 0;
  v7 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_(154LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a3);
  *a2 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v3 + 1080));
  v26 = CompartmentBlockByGuid;
  v10 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    Flags = CompartmentBlockByGuid->Flags;
    if ( (Flags & 1) != 0 )
    {
      v10 = 0LL;
      v26 = 0LL;
    }
    else if ( (Flags & 2) != 0 )
    {
      v10->Flags = Flags & 0xFFFFFFFD;
      _InterlockedIncrement(&v10->Ref);
      v10 = v26;
      v7 = 1;
    }
    else if ( *((_DWORD *)a1 + 12) == 1 )
    {
      Network = -1073741270;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( Network >= 0 )
  {
    if ( v10 )
    {
LABEL_20:
      v16 = 4LL;
      p_CompartmentDescr = &v10->LoopbackInfo.CompartmentDescr;
      v18 = (_OWORD *)(v3 + 1096);
      do
      {
        *(_OWORD *)&p_CompartmentDescr->Length = *v18;
        *(_OWORD *)&p_CompartmentDescr->String[7] = v18[1];
        *(_OWORD *)&p_CompartmentDescr->String[15] = v18[2];
        *(_OWORD *)&p_CompartmentDescr->String[23] = v18[3];
        *(_OWORD *)&p_CompartmentDescr->String[31] = v18[4];
        *(_OWORD *)&p_CompartmentDescr->String[39] = v18[5];
        *(_OWORD *)&p_CompartmentDescr->String[47] = v18[6];
        p_CompartmentDescr = (_IF_COUNTED_STRING_LH *)((char *)p_CompartmentDescr + 128);
        v19 = v18[7];
        v18 += 8;
        *(_OWORD *)&p_CompartmentDescr[-1].String[249] = v19;
        --v16;
      }
      while ( v16 );
      v20 = 12LL;
      *(_DWORD *)&p_CompartmentDescr->Length = *(_DWORD *)v18;
      p_LoopbackInfo = &v10->LoopbackInfo;
      v22 = (_OWORD *)*((_QWORD *)a1 + 4);
      do
      {
        *v22 = *(_OWORD *)&p_LoopbackInfo->Header.Type;
        v22[1] = p_LoopbackInfo->LoopbackIfNetworkGuid;
        v22[2] = p_LoopbackInfo->LoopbackIfInterfaceGuid;
        v22[3] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.Length;
        v22[4] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[7];
        v22[5] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[15];
        v22[6] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[23];
        v22 += 8;
        v23 = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[31];
        p_LoopbackInfo = (_NDIS_NSI_COMPARTMENT_RW *)((char *)p_LoopbackInfo + 128);
        *(v22 - 1) = v23;
        --v20;
      }
      while ( v20 );
      *v22 = *(_OWORD *)&p_LoopbackInfo->Header.Type;
      v22[1] = p_LoopbackInfo->LoopbackIfNetworkGuid;
      v22[2] = p_LoopbackInfo->LoopbackIfInterfaceGuid;
      v22[3] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.Length;
      v22[4] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[7];
      *((_QWORD *)v22 + 10) = *(_QWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[15];
      **((_DWORD **)a1 + 2) = v10->CompartmentId;
      if ( v7 )
      {
        ndisNsiNotifyClientCompartmentChange(v10, 1LL);
        v24 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        COMPARTMENTBLOCK_DECREMENT_REF((__int64)v10);
        KeReleaseSpinLock(&ndisIfListLock, v24);
      }
      goto LABEL_26;
    }
    Network = ndisIfCreateCompartmentBlock(0, (struct _GUID *)(v3 + 1080), 0LL, &v26);
    if ( Network >= 0 )
    {
      v12 = *(_BYTE *)(v3 + 1) < 2u;
      v13 = v26;
      *a2 = v26;
      if ( !v12 )
        v13->LoopbackInfo.Flags = *(_DWORD *)(v3 + 1616);
      Network = ndisIfCreateNetwork(&v13->LoopbackInfo.LoopbackIfNetworkGuid, v13->CompartmentId);
      if ( Network >= 0 )
      {
        v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        NetworkBlock = ndisIfFindNetworkBlock(&v13->LoopbackInfo.LoopbackIfNetworkGuid);
        KeReleaseSpinLock(&ndisIfListLock, v14);
        if ( !NetworkBlock )
        {
          Network = -1073741772;
          goto LABEL_26;
        }
        v13->LoopbackNetwork = NetworkBlock;
        Network = ndisIfCreateInterface(
                    NetworkBlock,
                    1u,
                    &v13->LoopbackInfo,
                    0LL,
                    0LL,
                    0LL,
                    NdisIfBlockSourceAutomaticLoopback);
        if ( Network >= 0 )
        {
          v13->LoopbackInfo.Header = *(_NDIS_OBJECT_HEADER *)v3;
          v13->LoopbackInfo.CompartmentGuid = *(_GUID *)(v3 + 1080);
          v13->LoopbackInfo.CompartmentType = *(_DWORD *)(v3 + 1612);
          _InterlockedIncrement(&v13->Ref);
          v10 = v26;
          v7 = 1;
          goto LABEL_20;
        }
      }
    }
  }
LABEL_26:
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_dq(155LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (unsigned int)Network, *a2);
  return (unsigned int)Network;
}
