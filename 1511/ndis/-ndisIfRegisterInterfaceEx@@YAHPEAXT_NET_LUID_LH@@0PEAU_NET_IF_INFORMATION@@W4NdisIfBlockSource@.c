/*
 * XREFs of ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001AD78
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C003E8A0 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C009F918 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B2B0 (IFBLOCK_DECREMENT_REF.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B2F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C001B3C4 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ndisIfFindCompartmentBlock @ 0x1C0020D08 (ndisIfFindCompartmentBlock.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_Llq @ 0x1C003EE10 (WPP_SF_Llq.c)
 *     WPP_SF_qllq @ 0x1C003F494 (WPP_SF_qllq.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C009E688 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C009FF84 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisAllocateRefCount @ 0x1C00A01D4 (ndisAllocateRefCount.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        __int64 a1,
        union _NET_LUID_LH a2,
        _QWORD *a3,
        struct _NET_IF_INFORMATION *a4,
        enum NdisIfBlockSource a5,
        unsigned int *a6)
{
  char v6; // r15
  unsigned __int16 v7; // bp
  ULONG64 v9; // rbx
  _QWORD *v11; // r13
  char *v12; // rdi
  unsigned int v13; // r12d
  char *PoolWithTag; // rax
  unsigned __int16 FriendlyNameLength; // ax
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  _OWORD *v18; // rax
  struct _NET_IF_INFORMATION *v19; // rsi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  KIRQL v22; // si
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v24; // rbp
  _LIST_ENTRY *i; // r14
  _LIST_ENTRY *Flink; // rax
  unsigned int v27; // eax
  unsigned int v28; // r10d
  __int64 v29; // rcx
  char v30; // dl
  int v31; // r8d
  _LIST_ENTRY *v32; // rdx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v34; // r8
  char *v35; // rax
  __int64 v36; // rdx
  _LIST_ENTRY *v37; // rdx
  _LIST_ENTRY *v38; // rax
  KIRQL v39; // bl
  unsigned int v40; // ebx
  PVOID v42; // rax
  void *v43; // rbx
  unsigned int v44; // ecx
  PVOID v45; // r15
  _GUID NetworkGuid; // xmm0
  unsigned __int16 PhysAddressLength; // ax
  unsigned __int16 v48; // ax
  unsigned __int16 PermanentPhysAddressOffset; // ax
  __int64 CompartmentBlock; // rax
  __int64 v51; // [rsp+20h] [rbp-58h]
  _QWORD *v52; // [rsp+30h] [rbp-48h]
  unsigned int v53; // [rsp+80h] [rbp+8h] BYREF
  union _NET_LUID_LH v54; // [rsp+88h] [rbp+10h]

  v54.Value = a2.Value;
  v6 = 0;
  v7 = *((_WORD *)&a2.Info + 3);
  v9 = (a2.Value >> 24) & 0xFFFFFF;
  v52 = 0LL;
  v53 = (a2.Value >> 24) & 0xFFFFFF;
  v11 = (_QWORD *)a1;
  v12 = 0LL;
  v13 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
  {
    LODWORD(v51) = (a2.Value >> 24) & 0xFFFFFF;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WPP_SF_qllq)(
      a1,
      (union _NET_LUID_LH)a2.Value,
      a1,
      *((unsigned __int16 *)&a2.Info + 3));
  }
  if ( ndisNsiInitialized != 1 )
  {
    v40 = -1073741823;
    goto LABEL_44;
  }
  if ( !a4 )
    goto LABEL_71;
  if ( a4->Header.Revision != 1 )
  {
    v40 = -1073741637;
    goto LABEL_44;
  }
  if ( a4->Header.Size < 0x60u )
  {
    v40 = -1073741811;
    goto LABEL_44;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5E0uLL, 0x6669444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v40 = -1073741670;
    goto LABEL_44;
  }
  memset(PoolWithTag, 0, 0x5E0uLL);
  *(_DWORD *)v12 = 98566419;
  if ( (unsigned int)(v9 - 0x8000) > 0x4000 )
  {
    if ( (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v53, 0, 0) )
      goto LABEL_71;
  }
  LOBYTE(a2.Value) = 2;
  *((union _NET_LUID_LH *)v12 + 164) = v54;
  LOBYTE(a1) = 15;
  *((_DWORD *)v12 + 334) = a4->Flags;
  *((_DWORD *)v12 + 140) = a4->Flags;
  *(_QWORD *)(v12 + 1340) = *(_QWORD *)&a4->PhysicalLocation.BusNumber;
  *((_DWORD *)v12 + 337) = a4->PhysicalLocation.FunctionNumber;
  *((_DWORD *)v12 + 338) = a4->WanTunnelType;
  *((_DWORD *)v12 + 339) = a4->PortNumber;
  *((_DWORD *)v12 + 356) = a4->SupportedStatistics;
  *((_DWORD *)v12 + 352) = a5;
  *((_DWORD *)v12 + 326) = 1;
  *((_QWORD *)v12 + 180) = ((__int64 (__fastcall *)(_QWORD, _QWORD))ndisAllocateRefCount)(
                             a1,
                             (union _NET_LUID_LH)a2.Value);
  a1 = 512LL;
  FriendlyNameLength = a4->FriendlyNameLength;
  if ( FriendlyNameLength > 0x200u )
    *((_WORD *)v12 + 4) = 512;
  else
    *((_WORD *)v12 + 4) = FriendlyNameLength;
  v16 = *((_WORD *)v12 + 4);
  if ( v16 )
    memmove(v12 + 10, &a4->Header.Type + a4->FriendlyNameOffset, v16);
  *((_WORD *)v12 + 262) = *((_WORD *)&v54.Info + 3);
  *((_DWORD *)v12 + 132) = a4->AccessType;
  *((_DWORD *)v12 + 133) = a4->DirectionType;
  *((_DWORD *)v12 + 134) = a4->ConnectionType;
  v12[556] = a4->ifConnectorPresent;
  *(_GUID *)(v12 + 540) = a4->InterfaceGuid;
  *((_DWORD *)v12 + 141) = a4->MediaType;
  *((_DWORD *)v12 + 142) = a4->PhysicalMediumType;
  *((_QWORD *)v12 + 166) = v11;
  if ( v11 != ndisIfProviderHandle && v11 != ndisIfLoopbackProviderHandle )
  {
    NetworkGuid = a4->NetworkGuid;
    *((_QWORD *)v12 + 165) = a3;
    *(_GUID *)(v12 + 580) = NetworkGuid;
    PhysAddressLength = a4->PhysAddressLength;
    if ( PhysAddressLength <= 0x20u )
    {
      *((_WORD *)v12 + 562) = PhysAddressLength;
      *((_WORD *)v12 + 579) = a4->PhysAddressLength;
      v48 = a4->PhysAddressLength;
      if ( v48 )
      {
        memmove(v12 + 1126, &a4->Header.Type + a4->PhysAddressOffset, v48);
        PermanentPhysAddressOffset = a4->PermanentPhysAddressOffset;
        if ( PermanentPhysAddressOffset )
          memmove(v12 + 1160, &a4->Header.Type + PermanentPhysAddressOffset, a4->PhysAddressLength);
      }
      goto LABEL_19;
    }
LABEL_71:
    v40 = -1073741811;
LABEL_72:
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v12 = 0LL;
    }
    goto LABEL_44;
  }
  v17 = 5LL;
  v18 = v12 + 576;
  v19 = a4 + 1;
  do
  {
    *v18 = *(_OWORD *)&v19->Header.Type;
    v18[1] = *(_OWORD *)&v19->PhysicalLocation.FunctionNumber;
    v18[2] = *(_OWORD *)&v19->DirectionType;
    v18[3] = *(_OWORD *)&v19->FriendlyNameLength;
    v18[4] = *(_OWORD *)&v19->InterfaceGuid.Data4[4];
    v18[5] = *(_OWORD *)&v19->NetworkGuid.Data4[4];
    v18[6] = *(_OWORD *)&v19[1].Header.Type;
    v18 += 8;
    v20 = *(_OWORD *)&v19[1].PhysicalLocation.FunctionNumber;
    v19 = (struct _NET_IF_INFORMATION *)((char *)v19 + 128);
    *(v18 - 1) = v20;
    --v17;
  }
  while ( v17 );
  v21 = *(_OWORD *)&v19->Header.Type;
  v12[1401] = 1;
  *((_QWORD *)v12 + 165) = v12;
  *v18 = v21;
  if ( a3 )
  {
    v52 = a3;
    *((_QWORD *)v12 + 177) = a3;
    v12[1402] = 1;
  }
LABEL_19:
  v22 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)(v12 + 580), &ndisDefaultNetworkGuid) )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1LL);
    if ( !CompartmentBlock )
    {
LABEL_63:
      v40 = -1073741811;
LABEL_65:
      KeReleaseSpinLock(&ndisIfListLock, v22);
      goto LABEL_72;
    }
    *(_OWORD *)(v12 + 580) = *(_OWORD *)(*(_QWORD *)(CompartmentBlock + 56) + 32LL);
  }
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v12 + 580));
  v24 = NetworkBlock;
  if ( !NetworkBlock || (NetworkBlock->Flags & 3) != 0 )
    goto LABEL_63;
  for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
  {
    Flink = i[5].Flink;
    if ( (unsigned __int64)Flink > v54.Value )
      break;
    if ( Flink == (_LIST_ENTRY *)v54.Value )
    {
      v40 = -1073741270;
      goto LABEL_65;
    }
  }
  v27 = IfUsedIfIndicesLength;
  v13 = 1;
  v28 = 0;
  if ( !IfUsedIfIndicesLength )
    goto LABEL_49;
  v29 = 0LL;
  while ( *((_BYTE *)IfUsedIfIndicesData + v29) == 0xFF )
  {
LABEL_33:
    v13 += 8;
    ++v28;
    ++v29;
    if ( v28 >= IfUsedIfIndicesLength )
      goto LABEL_36;
  }
  v30 = 1;
  v31 = 0;
  while ( (*((_BYTE *)IfUsedIfIndicesData + v29) & (unsigned __int8)v30) != 0 )
  {
    v30 *= 2;
    if ( (unsigned int)++v31 >= 8 )
      goto LABEL_33;
  }
  *((_BYTE *)IfUsedIfIndicesData + v29) |= v30;
  v6 = 1;
  v13 += v31;
LABEL_36:
  if ( v13 == 0xFFFF )
  {
LABEL_66:
    v40 = -1073741670;
    goto LABEL_65;
  }
  if ( !v6 )
  {
LABEL_49:
    IfUsedIfIndicesLength = v27 + 4;
    v42 = ExAllocatePoolWithTag(NonPagedPoolNx, v27 + 4, 0x6669444Eu);
    v43 = v42;
    if ( v42 )
    {
      v44 = IfUsedIfIndicesLength;
      v45 = IfUsedIfIndicesData;
      *((_DWORD *)v42 + (IfUsedIfIndicesLength >> 2) - 1) = 0;
      *((_BYTE *)v42 + v44 - 4) = 1;
      if ( v45 )
      {
        memmove(v42, v45, v44 - 4);
        ExFreePoolWithTag(v45, 0);
      }
      IfUsedIfIndicesData = v43;
      goto LABEL_38;
    }
    goto LABEL_66;
  }
LABEL_38:
  *((_DWORD *)v12 + 1) = v13;
  v32 = (_LIST_ENTRY *)(v12 + 1232);
  Blink = i->Blink;
  v34 = Blink->Flink;
  *((_QWORD *)v12 + 154) = Blink->Flink;
  *((_QWORD *)v12 + 155) = Blink;
  if ( v34->Blink != Blink )
    __fastfail(3u);
  v34->Blink = v32;
  Blink->Flink = v32;
  v35 = v12 + 1248;
  v36 = v11[3];
  *((_QWORD *)v12 + 156) = v36;
  *((_QWORD *)v12 + 157) = v11 + 3;
  if ( *(_QWORD **)(v36 + 8) != v11 + 3 )
    __fastfail(3u);
  *(_QWORD *)(v36 + 8) = v35;
  v11[3] = v35;
  v37 = v24->InterfaceLink.Flink;
  v38 = (_LIST_ENTRY *)(v12 + 1264);
  *((_QWORD *)v12 + 158) = v37;
  *((_QWORD *)v12 + 159) = &v24->InterfaceLink;
  if ( v37->Blink != &v24->InterfaceLink )
    __fastfail(3u);
  ++ndisInterfaceCount;
  v37->Blink = v38;
  v24->InterfaceLink.Flink = v38;
  *((_DWORD *)v12 + 144) = v24->Compartment->CompartmentId;
  *((_QWORD *)v12 + 172) = v24;
  *((_QWORD *)v12 + 173) = v24->Compartment;
  ++v24->Ref;
  if ( v52 )
  {
    v52[104] = v12;
    *((_DWORD *)v52 + 206) = v13;
  }
  ndisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v12 + 180), 0);
  ++*((_DWORD *)v12 + 326);
  KeReleaseSpinLock(&ndisIfListLock, v22);
  ndisNsiNotifyClientInterfaceChange(v12, 1LL, 0LL, 1LL, v51);
  v39 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v12);
  KeReleaseSpinLock(&ndisIfListLock, v39);
  *a6 = v13;
  v40 = 0;
LABEL_44:
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WPP_SF_Llq)(
      a1,
      (union _NET_LUID_LH)a2.Value,
      v40,
      v13,
      v12);
  return v40;
}
