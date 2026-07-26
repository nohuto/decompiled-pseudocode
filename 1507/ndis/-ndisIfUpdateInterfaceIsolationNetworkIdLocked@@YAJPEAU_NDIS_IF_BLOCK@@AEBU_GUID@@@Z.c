/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z @ 0x1C001A38C
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z @ 0x1C0010228 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001A27C (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C00033A0 (ndisIfReferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0003420 (ndisIfDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C000EDF0 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017410 (ndisMReferenceIfBlock.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C001A154 (ndisIfUpdateFilterIfStack.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001A3F8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C001A458 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C003D564 (NETWORKBLOCK_DECREMENT_REF.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkIdLocked(struct _NDIS_IF_BLOCK *a1, const struct _GUID *a2)
{
  _GUID *p_NetworkGuid; // r12
  _NDIS_IF_NETWORK_BLOCK *Network; // rbp
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v8; // rdi
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rax
  char v10; // r14
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r15
  __int64 v12; // rdx
  _LIST_ENTRY *p_NetworkLink; // rsi
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  struct _GUID NetworkGuid; // [rsp+20h] [rbp-48h] BYREF

  p_NetworkGuid = &a1->NetworkGuid;
  if ( !(unsigned int)ndisCompareGuid(&a1->NetworkGuid, a2) )
    return 0LL;
  Network = a1->Network;
  if ( Network )
  {
    NetworkBlock = ndisIfFindNetworkBlock(a2);
    v8 = NetworkBlock;
    if ( NetworkBlock )
    {
      if ( (NetworkBlock->Flags & 3) == 0 )
      {
        Compartment = Network->Compartment;
        if ( Compartment->LoopbackIf == a1 )
        {
          if ( v8->Compartment != Compartment )
            return 3221225485LL;
          Compartment->LoopbackNetwork = v8;
          Network->Compartment->LoopbackInfo.LoopbackIfNetworkGuid = v8->NetworkGuid;
        }
        if ( a1->ProviderHandle != ndisIfProviderHandle || (a1->Flags & 2) == 0 )
          goto LABEL_18;
        v10 = 0;
        if ( a1->IsNdisFilter )
        {
          NetworkGuid = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4096LL) + 580LL);
        }
        else
        {
          if ( !ndisIfReferenceMiniport((__int64)a1) )
            goto LABEL_18;
          BaseMiniport = a1->Miniport->BaseMiniport;
          if ( ndisMReferenceIfBlock((__int64)BaseMiniport, 8u) )
          {
            v10 = 1;
            NetworkGuid = BaseMiniport->IfBlock->NetworkGuid;
            ndisMDereferenceIfBlock((__int64)BaseMiniport, MPIFREF_CHIIC);
          }
          ndisIfDereferenceMiniport((__int64)a1, v12, 6u);
          if ( !v10 )
            goto LABEL_18;
        }
        if ( !(unsigned int)ndisCompareGuid(a2, &NetworkGuid) )
        {
LABEL_18:
          p_NetworkLink = &a1->NetworkLink;
          Flink = a1->NetworkLink.Flink;
          Blink = a1->NetworkLink.Blink;
          if ( Flink->Blink != &a1->NetworkLink || Blink->Flink != p_NetworkLink )
            __fastfail(3u);
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          NETWORKBLOCK_DECREMENT_REF(Network);
          v16 = v8->InterfaceLink.Flink;
          p_NetworkLink->Flink = v16;
          a1->NetworkLink.Blink = &v8->InterfaceLink;
          if ( v16->Blink != &v8->InterfaceLink )
            __fastfail(3u);
          v16->Blink = p_NetworkLink;
          v8->InterfaceLink.Flink = p_NetworkLink;
          ++v8->Ref;
          a1->Compartment = v8->Compartment;
          a1->CompartmentId = v8->Compartment->CompartmentId;
          a1->Network = v8;
          *p_NetworkGuid = v8->NetworkGuid;
          if ( a1->ProviderHandle == ndisIfProviderHandle && (a1->Flags & 2) == 0 )
          {
            v17 = ndisIfReferenceMiniport((__int64)a1);
            if ( v17 )
            {
              ndisIfUpdateFilterIfStack(v17);
              ndisIfDereferenceMiniport((__int64)a1, v18, 7u);
            }
          }
          return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
