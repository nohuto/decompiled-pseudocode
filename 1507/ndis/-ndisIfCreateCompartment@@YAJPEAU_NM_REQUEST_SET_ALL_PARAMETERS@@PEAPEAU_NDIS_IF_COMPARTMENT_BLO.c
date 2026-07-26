/*
 * XREFs of ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003B130
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003CD80 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0012720 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C0012D04 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001A3F8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003BA18 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C009F178 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A761C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00C5B44 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartment(
        struct _NM_REQUEST_SET_ALL_PARAMETERS *a1,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // r14
  int Network; // edi
  char v6; // bp
  KIRQL v7; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v9; // rsi
  unsigned int Flags; // eax
  bool v11; // cf
  struct _NDIS_IF_COMPARTMENT_BLOCK *v12; // rsi
  KIRQL v13; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rdi
  __int64 v15; // rdx
  _IF_COUNTED_STRING_LH *p_CompartmentDescr; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // rdx
  _NDIS_NSI_COMPARTMENT_RW *p_LoopbackInfo; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  KIRQL v23; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *v25; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  Network = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(0x9Au, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
  *a2 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v25 = CompartmentBlockByGuid;
  v9 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    Flags = CompartmentBlockByGuid->Flags;
    if ( (Flags & 1) != 0 )
    {
      v9 = 0LL;
      v25 = 0LL;
    }
    else if ( (Flags & 2) != 0 )
    {
      v9->Flags = Flags & 0xFFFFFFFD;
      _InterlockedIncrement(&v9->Ref);
      v9 = v25;
      v6 = 1;
    }
    else if ( *((_DWORD *)a1 + 12) == 1 )
    {
      Network = -1073741270;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( Network >= 0 )
  {
    if ( v9 )
    {
LABEL_20:
      v15 = 4LL;
      p_CompartmentDescr = &v9->LoopbackInfo.CompartmentDescr;
      v17 = (_OWORD *)(v2 + 1096);
      do
      {
        *(_OWORD *)&p_CompartmentDescr->Length = *v17;
        *(_OWORD *)&p_CompartmentDescr->String[7] = v17[1];
        *(_OWORD *)&p_CompartmentDescr->String[15] = v17[2];
        *(_OWORD *)&p_CompartmentDescr->String[23] = v17[3];
        *(_OWORD *)&p_CompartmentDescr->String[31] = v17[4];
        *(_OWORD *)&p_CompartmentDescr->String[39] = v17[5];
        *(_OWORD *)&p_CompartmentDescr->String[47] = v17[6];
        p_CompartmentDescr = (_IF_COUNTED_STRING_LH *)((char *)p_CompartmentDescr + 128);
        v18 = v17[7];
        v17 += 8;
        *(_OWORD *)&p_CompartmentDescr[-1].String[249] = v18;
        --v15;
      }
      while ( v15 );
      v19 = 12LL;
      *(_DWORD *)&p_CompartmentDescr->Length = *(_DWORD *)v17;
      p_LoopbackInfo = &v9->LoopbackInfo;
      v21 = (_OWORD *)*((_QWORD *)a1 + 4);
      do
      {
        *v21 = *(_OWORD *)&p_LoopbackInfo->Header.Type;
        v21[1] = p_LoopbackInfo->LoopbackIfNetworkGuid;
        v21[2] = p_LoopbackInfo->LoopbackIfInterfaceGuid;
        v21[3] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.Length;
        v21[4] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[7];
        v21[5] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[15];
        v21[6] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[23];
        v21 += 8;
        v22 = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[31];
        p_LoopbackInfo = (_NDIS_NSI_COMPARTMENT_RW *)((char *)p_LoopbackInfo + 128);
        *(v21 - 1) = v22;
        --v19;
      }
      while ( v19 );
      *v21 = *(_OWORD *)&p_LoopbackInfo->Header.Type;
      v21[1] = p_LoopbackInfo->LoopbackIfNetworkGuid;
      v21[2] = p_LoopbackInfo->LoopbackIfInterfaceGuid;
      v21[3] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.Length;
      v21[4] = *(_OWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[7];
      *((_QWORD *)v21 + 10) = *(_QWORD *)&p_LoopbackInfo->LoopbackIfDescr.String[15];
      **((_DWORD **)a1 + 2) = v9->CompartmentId;
      if ( v6 )
      {
        ndisNsiNotifyClientCompartmentChange(v9, 1LL);
        v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        COMPARTMENTBLOCK_DECREMENT_REF((__int64)v9);
        KeReleaseSpinLock(&ndisIfListLock, v23);
      }
      goto LABEL_26;
    }
    Network = ndisIfCreateCompartmentBlock(0, (struct _GUID *)(v2 + 1080), 0LL, &v25);
    if ( Network >= 0 )
    {
      v11 = *(_BYTE *)(v2 + 1) < 2u;
      v12 = v25;
      *a2 = v25;
      if ( !v11 )
        v12->LoopbackInfo.Flags = *(_DWORD *)(v2 + 1616);
      Network = ndisIfCreateNetwork(&v12->LoopbackInfo.LoopbackIfNetworkGuid, v12->CompartmentId);
      if ( Network >= 0 )
      {
        v13 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        NetworkBlock = ndisIfFindNetworkBlock(&v12->LoopbackInfo.LoopbackIfNetworkGuid);
        KeReleaseSpinLock(&ndisIfListLock, v13);
        if ( !NetworkBlock )
        {
          Network = -1073741772;
          goto LABEL_26;
        }
        v12->LoopbackNetwork = NetworkBlock;
        Network = ndisIfCreateInterface(
                    NetworkBlock,
                    1u,
                    &v12->LoopbackInfo,
                    0LL,
                    0LL,
                    0LL,
                    NdisIfBlockSourceAutomaticLoopback);
        if ( Network >= 0 )
        {
          v12->LoopbackInfo.Header = *(_NDIS_OBJECT_HEADER *)v2;
          v12->LoopbackInfo.CompartmentGuid = *(_GUID *)(v2 + 1080);
          v12->LoopbackInfo.CompartmentType = *(_DWORD *)(v2 + 1612);
          _InterlockedIncrement(&v12->Ref);
          v9 = v25;
          v6 = 1;
          goto LABEL_20;
        }
      }
    }
  }
LABEL_26:
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_dq(155LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (unsigned int)Network, *a2);
  return (unsigned int)Network;
}
