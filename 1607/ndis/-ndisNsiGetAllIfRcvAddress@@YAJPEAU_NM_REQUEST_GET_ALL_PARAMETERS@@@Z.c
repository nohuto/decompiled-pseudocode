/*
 * XREFs of ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0041210
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C00098EC (ndisIfReferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0009E74 (ndisIfDereferenceMiniport.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0014670 (ndisIfFindInterfaceByNetLuid.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C0014E64 (IFBLOCK_DECREMENT_REF.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00C3864 (-ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00C38F0 (-ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00C418C (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 */

__int64 __fastcall ndisNsiGetAllIfRcvAddress(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  _LIST_ENTRY *InterfaceByNetLuid; // rsi
  int IfRcvAddressRodInformation; // edi
  _LIST_ENTRY **v4; // rax
  _LIST_ENTRY *v5; // rbx
  unsigned __int8 *v6; // r15
  KIRQL v7; // al
  int v8; // ecx
  KIRQL v9; // r14
  int v10; // ecx
  __int64 v11; // rax
  __int64 Flink; // rdx
  int v13; // ebx
  struct _NDIS_IF_RCV_ADDRESS *NextRcvAddress; // rax
  __int64 v15; // rax
  KIRQL v16; // bl
  _QWORD v18[8]; // [rsp+20h] [rbp-58h] BYREF

  InterfaceByNetLuid = 0LL;
  IfRcvAddressRodInformation = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(0x5Eu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)a1);
  memset(v18, 0, sizeof(v18));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 40 )
  {
    IfRcvAddressRodInformation = -1073741808;
    goto LABEL_41;
  }
  v4 = (_LIST_ENTRY **)*((_QWORD *)a1 + 2);
  v5 = *v4;
  v6 = (unsigned __int8 *)(v4 + 1);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *((_DWORD *)a1 + 8);
  v9 = v7;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_18;
      }
    }
    else if ( v5 == (_LIST_ENTRY *)-1LL )
    {
      do
      {
        if ( ndisIfList.Flink != &ndisIfList )
          InterfaceByNetLuid = ndisIfList.Flink - 77;
      }
      while ( !InterfaceByNetLuid || !InterfaceByNetLuid[80].Flink );
      goto LABEL_16;
    }
  }
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v5);
LABEL_16:
  if ( InterfaceByNetLuid )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[90].Flink, 9u);
    ++LODWORD(InterfaceByNetLuid[81].Blink);
    **((_QWORD **)a1 + 2) = InterfaceByNetLuid[82].Flink;
  }
LABEL_18:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( IfRcvAddressRodInformation < 0 )
    goto LABEL_39;
  if ( !InterfaceByNetLuid )
  {
    IfRcvAddressRodInformation = *((_DWORD *)a1 + 8) != 0 ? -2147483622 : -1073741772;
    goto LABEL_41;
  }
  v11 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid, 5u);
  if ( !v11 )
  {
    IfRcvAddressRodInformation = 0;
    goto LABEL_39;
  }
  if ( *(_QWORD *)(v11 + 400) )
  {
    v13 = *((_DWORD *)a1 + 8);
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        Flink = (__int64)InterfaceByNetLuid[80].Flink;
        goto LABEL_33;
      }
      if ( v13 != 2 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_38;
      }
      NextRcvAddress = ndisIfFindNextRcvAddress((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, v6);
    }
    else
    {
      NextRcvAddress = ndisIfFindRcvAddress((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, v6);
    }
    Flink = (__int64)NextRcvAddress;
LABEL_33:
    if ( Flink )
    {
      v15 = *((_QWORD *)a1 + 2);
      *(_OWORD *)(v15 + 8) = *(_OWORD *)(Flink + 8);
      *(_OWORD *)(v15 + 24) = *(_OWORD *)(Flink + 24);
      HIDWORD(v18[6]) = 0;
      if ( *((_QWORD *)a1 + 1) == 3LL )
      {
        v18[5] = *((_QWORD *)a1 + 7);
        LODWORD(v18[6]) = *((_DWORD *)a1 + 16);
        LODWORD(v18[4]) = 1;
        IfRcvAddressRodInformation = ndisNsiGetIfRcvAddressRodInformation(
                                       (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid,
                                       (struct _NDIS_IF_RCV_ADDRESS *)Flink,
                                       (struct _NM_REQUEST_GET_PARAMETER *)v18);
        *((_DWORD *)a1 + 16) = v18[6];
      }
      else
      {
        IfRcvAddressRodInformation = -1073741811;
      }
    }
    else
    {
      IfRcvAddressRodInformation = v13 != 0 ? -2147483622 : -1073741772;
    }
    goto LABEL_38;
  }
  IfRcvAddressRodInformation = 0;
LABEL_38:
  ndisIfDereferenceMiniport((__int64)InterfaceByNetLuid, Flink, 5u);
LABEL_39:
  if ( InterfaceByNetLuid )
  {
    v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF(InterfaceByNetLuid, 9u);
    KeReleaseSpinLock(&ndisIfListLock, v16);
  }
LABEL_41:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(95LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, (unsigned int)IfRcvAddressRodInformation);
  return (unsigned int)IfRcvAddressRodInformation;
}
