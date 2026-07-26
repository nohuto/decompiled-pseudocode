/*
 * XREFs of ndisIfDeregisterInterfaceEx @ 0x1C003E7CC
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C000FF3C (ndisIfCreateOrUpdateInterface.c)
 *     NdisIfDeregisterInterface @ 0x1C00C63E0 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C00033A0 (ndisIfReferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0003420 (ndisIfDereferenceMiniport.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001A110 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterface @ 0x1C001AA70 (ndisIfFindInterface.c)
 *     WPP_SF_l @ 0x1C003E314 (WPP_SF_l.c)
 *     NdisMRemoveMiniportInternal @ 0x1C005B968 (NdisMRemoveMiniportInternal.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A7548 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00D8C80 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(int a1, __int64 a2)
{
  int v2; // ebp
  struct _LIST_ENTRY *Interface; // rax
  KIRQL v5; // r10
  struct _NDIS_IF_BLOCK *v6; // rdi
  __int64 v7; // rdx
  unsigned __int16 v8; // cx
  __int64 v9; // rax
  __int64 v10; // rdx
  KIRQL v11; // bl
  __int64 v12; // [rsp+20h] [rbp-38h]
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_l(0x2Bu, a2, a1);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Interface = ndisIfFindInterface(a1);
  v6 = (struct _NDIS_IF_BLOCK *)Interface;
  if ( LOBYTE(Interface[87].Blink) )
    v6 = 0LL;
  else
    LOBYTE(Interface[87].Blink) = 1;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( !v6 )
  {
    if ( (unsigned __int8)byte_1C008531D < 3u )
      return;
    v8 = 44;
    goto LABEL_17;
  }
  v9 = ndisIfReferenceMiniport((__int64)v6);
  if ( v9 )
  {
    NdisMRemoveMiniportInternal(v9, 76LL);
    ndisIfDereferenceMiniport((__int64)v6, v10, 0x14u);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL, 1LL, v12);
  if ( !v2 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v6, 0xFFu);
  KeReleaseSpinLock(&ndisIfListLock, v11);
  if ( !v2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    v8 = 45;
LABEL_17:
    WPP_SF_l(v8, v7, a1);
  }
}
