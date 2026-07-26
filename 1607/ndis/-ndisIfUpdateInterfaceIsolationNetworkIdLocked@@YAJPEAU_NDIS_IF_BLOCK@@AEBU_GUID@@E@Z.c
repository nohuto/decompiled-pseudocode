/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001AB88
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0011F48 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001AA78 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C00098EC (ndisIfReferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0009E74 (ndisIfDereferenceMiniport.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C000FDF0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0012AA4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0014FE8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017DB0 (ndisMReferenceIfBlock.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C001A948 (ndisIfUpdateFilterIfStack.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkIdLocked(
        struct _NDIS_IF_BLOCK *a1,
        const struct _GUID *a2,
        char a3)
{
  _GUID *p_NetworkGuid; // r13
  _NDIS_IF_NETWORK_BLOCK *Network; // rbp
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v10; // rdi
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rax
  char v12; // r14
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r15
  __int64 v14; // rdx
  _LIST_ENTRY *p_NetworkLink; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_InterfaceLink; // rax
  _LIST_ENTRY *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  struct _GUID NetworkGuid; // [rsp+20h] [rbp-58h] BYREF

  p_NetworkGuid = &a1->NetworkGuid;
  if ( !(unsigned int)ndisCompareGuid(&a1->NetworkGuid, a2) )
    return 0LL;
  Network = a1->Network;
  if ( Network )
  {
    NetworkBlock = ndisIfFindNetworkBlock(a2);
    v10 = NetworkBlock;
    if ( NetworkBlock )
    {
      if ( (NetworkBlock->Flags & 3) == 0 )
      {
        if ( a1->NetworkIdOverridden && !a3 )
          return 0LL;
        Compartment = Network->Compartment;
        if ( Compartment->LoopbackIf == a1 )
        {
          if ( v10->Compartment != Compartment )
            return 3221225485LL;
          Compartment->LoopbackNetwork = v10;
          Network->Compartment->LoopbackInfo.LoopbackIfNetworkGuid = v10->NetworkGuid;
        }
        if ( a1->ProviderHandle != ndisIfProviderHandle || (a1->Flags & 2) == 0 )
          goto LABEL_20;
        v12 = 0;
        if ( a1->IsNdisFilter )
        {
          NetworkGuid = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4096LL) + 580LL);
        }
        else
        {
          if ( !ndisIfReferenceMiniport((__int64)a1, 6u) )
            goto LABEL_20;
          BaseMiniport = a1->Miniport->BaseMiniport;
          if ( ndisMReferenceIfBlock((__int64)BaseMiniport, 8u) )
          {
            v12 = 1;
            NetworkGuid = BaseMiniport->IfBlock->NetworkGuid;
            ndisMDereferenceIfBlock((__int64)BaseMiniport, MPIFREF_CHIIC);
          }
          ndisIfDereferenceMiniport((__int64)a1, v14, 6u);
          if ( !v12 )
            goto LABEL_20;
        }
        if ( !(unsigned int)ndisCompareGuid(a2, &NetworkGuid) )
        {
LABEL_20:
          p_NetworkLink = &a1->NetworkLink;
          Flink = a1->NetworkLink.Flink;
          Blink = a1->NetworkLink.Blink;
          if ( Flink->Blink != &a1->NetworkLink || Blink->Flink != p_NetworkLink )
            __fastfail(3u);
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          NETWORKBLOCK_DECREMENT_REF((__int64)Network);
          p_InterfaceLink = &v10->InterfaceLink;
          v19 = v10->InterfaceLink.Flink;
          if ( v19->Blink != &v10->InterfaceLink )
            __fastfail(3u);
          p_NetworkLink->Flink = v19;
          a1->NetworkLink.Blink = p_InterfaceLink;
          v19->Blink = p_NetworkLink;
          p_InterfaceLink->Flink = p_NetworkLink;
          ++v10->Ref;
          a1->Compartment = v10->Compartment;
          a1->CompartmentId = v10->Compartment->CompartmentId;
          a1->Network = v10;
          *p_NetworkGuid = v10->NetworkGuid;
          if ( a3 )
            a1->NetworkIdOverridden = 1;
          if ( a1->ProviderHandle == ndisIfProviderHandle && (a1->Flags & 2) == 0 )
          {
            v20 = ndisIfReferenceMiniport((__int64)a1, 7u);
            if ( v20 )
            {
              ndisIfUpdateFilterIfStack(v20);
              ndisIfDereferenceMiniport((__int64)a1, v21, 7u);
            }
          }
          return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
