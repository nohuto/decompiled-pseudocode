/*
 * XREFs of ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003DB00
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetThreadObjectCompartmentScope @ 0x1C000F240 (NdisGetThreadObjectCompartmentScope.c)
 *     ?ndisIsCompartmentEnumerableByCaller@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@II@Z @ 0x1C001600C (-ndisIsCompartmentEnumerableByCaller@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@II@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B2F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C001B3C4 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C003E5F4 (NETWORKBLOCK_DECREMENT_REF.c)
 */

__int64 __fastcall ndisNsiGetNetworkInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  int v3; // edi
  const struct _GUID *p_NetworkGuid; // r14
  KIRQL v5; // al
  int v6; // ecx
  KIRQL v7; // r15
  int v8; // ecx
  _LIST_ENTRY *Flink; // rbx
  char *v10; // r13
  unsigned int v11; // ebx
  int v12; // r15d
  char v13; // r12
  KIRQL v14; // bl
  int v16; // eax
  int v17; // r14d
  unsigned int v18; // ebx
  char v19; // [rsp+60h] [rbp+8h]
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+18h] BYREF

  NetworkBlock = 0LL;
  v3 = 0;
  v19 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0x6Eu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 16 || !*((_DWORD *)a1 + 12) || !*((_QWORD *)a1 + 5) )
  {
    v3 = -1073741808;
    goto LABEL_33;
  }
  p_NetworkGuid = (const struct _GUID *)*((_QWORD *)a1 + 2);
  NdisGetThreadObjectCompartmentScope(KeGetCurrentThread(), &v21, &v20);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v6 = *((_DWORD *)a1 + 14);
  v7 = v5;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( !v8 )
    {
      *(_QWORD *)&p_NetworkGuid->Data1 = 0LL;
      *(_QWORD *)p_NetworkGuid->Data4 = 0LL;
      goto LABEL_12;
    }
    if ( v8 == 1 )
    {
LABEL_12:
      while ( 1 )
      {
        Flink = ndisIfNetworkList.Flink;
        NetworkBlock = 0LL;
        while ( Flink != &ndisIfNetworkList )
        {
          if ( (int)ndisCompareGuid((const struct _GUID *)&Flink[2], p_NetworkGuid) > 0 )
          {
            NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)Flink;
            break;
          }
          Flink = Flink->Flink;
        }
        if ( !NetworkBlock )
          break;
        p_NetworkGuid = &NetworkBlock->NetworkGuid;
        if ( ndisIsCompartmentEnumerableByCaller(NetworkBlock->Compartment, v21, v20) )
          goto LABEL_22;
      }
    }
    else
    {
      v3 = -1073741808;
    }
  }
  else
  {
    NetworkBlock = ndisIfFindNetworkBlock(p_NetworkGuid);
LABEL_22:
    if ( NetworkBlock )
    {
      ++NetworkBlock->Ref;
      v19 = 1;
      *(_GUID *)*((_QWORD *)a1 + 2) = NetworkBlock->NetworkGuid;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( v3 < 0 )
    goto LABEL_31;
  if ( !NetworkBlock )
  {
    v3 = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_31;
  }
  v10 = (char *)*((_QWORD *)a1 + 5);
  v11 = *((_DWORD *)a1 + 13);
  v12 = *((_DWORD *)a1 + 12);
  if ( !v10 )
  {
    *((_DWORD *)a1 + 12) = 0;
    goto LABEL_31;
  }
  v13 = 0;
  if ( *((_DWORD *)a1 + 8) )
  {
    v3 = -1073741808;
    goto LABEL_31;
  }
  while ( v12 > 0 && !v13 )
  {
    switch ( v11 )
    {
      case 0u:
        v17 = 4;
        goto LABEL_45;
      case 4u:
        v17 = 8;
        goto LABEL_45;
      case 8u:
        v17 = 12;
LABEL_45:
        v16 = 4;
        goto LABEL_46;
    }
    if ( v11 != 12 )
      goto LABEL_48;
    v16 = 516;
    v13 = 1;
    v17 = 528;
LABEL_46:
    if ( v12 < v16 )
    {
LABEL_48:
      v13 = 1;
    }
    else
    {
      memmove(v10, &NetworkBlock->NetworkInfo.Header.Type + v11, (unsigned int)v16);
      v10 += v17 - v11;
      v12 += v11 - v17;
      v11 = v17;
    }
  }
  v18 = v11 - *((_DWORD *)a1 + 13);
  *((_DWORD *)a1 + 12) = v18;
  if ( !v18 )
    v3 = -1073741811;
LABEL_31:
  if ( v19 )
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NETWORKBLOCK_DECREMENT_REF(NetworkBlock);
    KeReleaseSpinLock(&ndisIfListLock, v14);
  }
LABEL_33:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(0x6Fu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, v3);
  return (unsigned int)v3;
}
