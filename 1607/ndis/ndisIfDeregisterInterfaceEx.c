/*
 * XREFs of ndisIfDeregisterInterfaceEx @ 0x1C00119B4
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0011C80 (ndisIfCreateOrUpdateInterface.c)
 *     NdisIfDeregisterInterface @ 0x1C009CC90 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C00098EC (ndisIfReferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0009E74 (ndisIfDereferenceMiniport.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C0014E64 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterface @ 0x1C001AD60 (ndisIfFindInterface.c)
 *     WPP_SF_l @ 0x1C0043094 (WPP_SF_l.c)
 *     NdisMRemoveMiniportInternal @ 0x1C005F518 (NdisMRemoveMiniportInternal.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C009CC98 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C009EB9C (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A2B60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(unsigned int a1, __int64 a2)
{
  int v2; // ebp
  __int64 Interface; // rax
  KIRQL v5; // r10
  struct _NDIS_IF_BLOCK *v6; // rdi
  __int64 v7; // rdx
  struct _NDIS_MINIPORT_BLOCK *v8; // rax
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_l(43LL, a2, a1);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Interface = ndisIfFindInterface(a1);
  v6 = (struct _NDIS_IF_BLOCK *)Interface;
  if ( *(_BYTE *)(Interface + 1400) )
    v6 = 0LL;
  else
    *(_BYTE *)(Interface + 1400) = 1;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( !v6 )
  {
    if ( (unsigned __int8)byte_1C00895DD < 3u )
      return;
    v11 = 44LL;
LABEL_18:
    WPP_SF_l(v11, v7, a1);
    return;
  }
  v8 = (struct _NDIS_MINIPORT_BLOCK *)ndisIfReferenceMiniport((__int64)v6, 0x14u);
  v9 = v8;
  if ( v8 )
  {
    ndisMSetMiniportReadyForBinding(v8);
    NdisMRemoveMiniportInternal(v9, 76LL);
    ndisIfDereferenceMiniport((__int64)v6, v12, 0x14u);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL);
  if ( !v2 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v6);
  KeReleaseSpinLock(&ndisIfListLock, v10);
  if ( !v2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
  {
    v11 = 45LL;
    goto LABEL_18;
  }
}
