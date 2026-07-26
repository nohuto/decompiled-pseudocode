/*
 * XREFs of ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003FDEC
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0041A30 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D73C (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIfFindCompartmentBlock @ 0x1C000D750 (ndisIfFindCompartmentBlock.c)
 *     NdisGetThreadObjectCompartmentId @ 0x1C000EAF0 (NdisGetThreadObjectCompartmentId.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C000FD90 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0014FE8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001D2BC (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A24F0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00AE2F8 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00C3764 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartment(
        struct _NM_REQUEST_SET_ALL_PARAMETERS *a1,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // r14
  int Network; // esi
  char v6; // bp
  _GUID *v7; // rbx
  KIRQL v8; // r15
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v10; // rdi
  unsigned int Flags; // eax
  bool v12; // cf
  struct _NDIS_IF_COMPARTMENT_BLOCK *v13; // rdi
  struct _NDIS_NSI_COMPARTMENT_RW *v14; // r15
  _GUID v15; // xmm0
  KIRQL v16; // bl
  unsigned int ThreadObjectCompartmentId; // eax
  _LIST_ENTRY *CompartmentBlock; // rax
  KIRQL v19; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rsi
  __int64 v21; // rdx
  _IF_COUNTED_STRING_LH *p_CompartmentDescr; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rdx
  _NDIS_NSI_COMPARTMENT_RW *p_LoopbackInfo; // rax
  _OWORD *v27; // rcx
  __int128 v28; // xmm1
  KIRQL v29; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *v31; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  Network = 0;
  v6 = 0;
  v7 = (_GUID *)(v2 + 1080);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(0x9Au, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids);
  *a2 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v31 = CompartmentBlockByGuid;
  v10 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    Flags = CompartmentBlockByGuid->Flags;
    if ( (Flags & 1) != 0 )
    {
      v10 = 0LL;
      v31 = 0LL;
    }
    else if ( (Flags & 2) != 0 )
    {
      v10->Flags = Flags & 0xFFFFFFFD;
      _InterlockedIncrement(&v10->Ref);
      v10 = v31;
      v6 = 1;
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
LABEL_23:
      v21 = 4LL;
      p_CompartmentDescr = &v10->LoopbackInfo.CompartmentDescr;
      v23 = (_OWORD *)(v2 + 1096);
      do
      {
        *(_OWORD *)&p_CompartmentDescr->Length = *v23;
        *(_OWORD *)&p_CompartmentDescr->String[7] = v23[1];
        *(_OWORD *)&p_CompartmentDescr->String[15] = v23[2];
        *(_OWORD *)&p_CompartmentDescr->String[23] = v23[3];
        *(_OWORD *)&p_CompartmentDescr->String[31] = v23[4];
        *(_OWORD *)&p_CompartmentDescr->String[39] = v23[5];
        *(_OWORD *)&p_CompartmentDescr->String[47] = v23[6];
        p_CompartmentDescr = (_IF_COUNTED_STRING_LH *)((char *)p_CompartmentDescr + 128);
        v24 = v23[7];
        v23 += 8;
        *(_OWORD *)&p_CompartmentDescr[-1].String[249] = v24;
        --v21;
      }
      while ( v21 );
      v25 = 12LL;
      *(_DWORD *)&p_CompartmentDescr->Length = *(_DWORD *)v23;
      p_LoopbackInfo = &v10->LoopbackInfo;
      v27 = (_OWORD *)*((_QWORD *)a1 + 4);
      do
      {
        *v27 = *(_OWORD *)&p_LoopbackInfo->Header.Type;
        v27[1] = p_LoopbackInfo->LoopbackIfNetworkGuid;
        v27[2] = p_LoopbackInfo->LoopbackIfInterfaceGuid;
        v27[3] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.Length;
        v27[4] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[7];
        v27[5] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[15];
        v27[6] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[23];
        v27 += 8;
        v28 = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[31];
        p_LoopbackInfo = (_NDIS_NSI_COMPARTMENT_RW *)((char *)p_LoopbackInfo + 128);
        *(v27 - 1) = v28;
        --v25;
      }
      while ( v25 );
      *v27 = *(_OWORD *)&p_LoopbackInfo->Header.Type;
      v27[1] = p_LoopbackInfo->LoopbackIfNetworkGuid;
      v27[2] = p_LoopbackInfo->LoopbackIfInterfaceGuid;
      v27[3] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.Length;
      v27[4] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[7];
      v27[5] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[15];
      *((_QWORD *)v27 + 12) = *(_QWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[23];
      **((_DWORD **)a1 + 2) = v10->CompartmentId;
      if ( v6 )
      {
        ndisNsiNotifyClientCompartmentChange(v10, 1LL);
        v29 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        COMPARTMENTBLOCK_DECREMENT_REF((__int64)v10);
        KeReleaseSpinLock(&ndisIfListLock, v29);
      }
      goto LABEL_29;
    }
    Network = ndisIfCreateCompartmentBlock(0, (struct _GUID *)(v2 + 1080), 0LL, &v31);
    if ( Network >= 0 )
    {
      v12 = *(_BYTE *)(v2 + 1) < 2u;
      v13 = v31;
      *a2 = v31;
      if ( !v12 )
        v13->LoopbackInfo.Flags = *(_DWORD *)(v2 + 1616);
      v14 = &v13->LoopbackInfo;
      v13->LoopbackInfo.Header = *(_NDIS_OBJECT_HEADER *)v2;
      v15 = *v7;
      v13->LoopbackInfo.CompartmentGuid = *v7;
      v13->LoopbackInfo.CompartmentType = *(_DWORD *)(v2 + 1612);
      if ( (v13->LoopbackInfo.Flags & 4) != 0 )
      {
        v13->LoopbackInfo.NamespaceGuid = v15;
      }
      else
      {
        v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        ThreadObjectCompartmentId = NdisGetThreadObjectCompartmentId(KeGetCurrentThread());
        CompartmentBlock = ndisIfFindCompartmentBlock(ThreadObjectCompartmentId);
        v13 = v31;
        v31->LoopbackInfo.NamespaceGuid = *(_GUID *)((char *)CompartmentBlock + 1144);
        KeReleaseSpinLock(&ndisIfListLock, v16);
      }
      Network = ndisIfCreateNetwork(&v13->LoopbackInfo.LoopbackIfNetworkGuid, v13->CompartmentId);
      if ( Network >= 0 )
      {
        v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        NetworkBlock = ndisIfFindNetworkBlock(&v13->LoopbackInfo.LoopbackIfNetworkGuid);
        KeReleaseSpinLock(&ndisIfListLock, v19);
        if ( !NetworkBlock )
        {
          Network = -1073741772;
          goto LABEL_29;
        }
        v13->LoopbackNetwork = NetworkBlock;
        Network = ndisIfCreateInterface(NetworkBlock, 1u, v14, 0LL, 0LL, 0LL, NdisIfBlockSourceAutomaticLoopback);
        if ( Network >= 0 )
        {
          _InterlockedIncrement(&v13->Ref);
          v10 = v31;
          v6 = 1;
          goto LABEL_23;
        }
      }
    }
  }
LABEL_29:
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_dq(155LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (unsigned int)Network, *a2);
  return (unsigned int)Network;
}
