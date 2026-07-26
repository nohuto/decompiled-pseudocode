/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E72A4
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C009C000 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000E630 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019A3C (ndisReferenceProtocol.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0049CE8 (ndisBindUnbindPeriodicReceives.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ndisInvokeUnbindAdapter @ 0x1C009C09C (ndisInvokeUnbindAdapter.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A7C88 (ndisNotifyWmiBindUnbind.c)
 *     NdisCloseAdapter @ 0x1C00E6D70 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdi
  bool v3; // r14
  bool v6; // r12
  KIRQL v7; // al
  struct _NDIS_OPEN_BLOCK *i; // rdx
  KIRQL v9; // al
  struct _NDIS_MINIPORT_BLOCK *v10; // rcx
  bool v11; // zf
  __int64 v12; // rdx
  void *ProtocolBindingContext; // rdx
  int v14; // edx
  struct _KEVENT Event; // [rsp+38h] [rbp-89h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v17[88]; // [rsp+68h] [rbp-59h] BYREF
  int v18; // [rsp+C0h] [rbp-1h]
  struct _KEVENT v19; // [rsp+C8h] [rbp+7h] BYREF
  int v20; // [rsp+128h] [rbp+67h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  v20 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0xEu, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, (__int64)a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = ndisReferenceProtocol((__int64)ProtocolHandle, 6u) != 0;
  KeWaitForSingleObject(&ProtocolHandle->Mutex, Executive, 0, 0, 0LL);
  ++ProtocolHandle->MutexOwnerCount;
  ProtocolHandle->MutexOwnerThread = KeGetCurrentThread();
  ProtocolHandle->MutexOwner = 3932422;
  v7 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  for ( i = ProtocolHandle->OpenQueue; i && i != a2; i = i->ProtocolNextOpen )
    ;
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v7);
  v9 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
  a2->OpenFlags |= 0x10000u;
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u )
    v3 = (a2->OpenFlags & 0x40000000) != 0;
  a2->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&a2->SpinLock, v9);
  if ( (a1->Flags & 0x20000) != 0 )
  {
    KeInitializeEvent(&Object, NotificationEvent, 0);
    a2->AfNotifyCompleteEvent = &Object;
    if ( a2->PendingAfNotifications )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    a2->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(&v19, NotificationEvent, 0);
  a1->ProcessingOpen = a2;
  if ( v3 )
  {
    v18 = 0;
    a2->UnsolicitedUnbindEvent = &v19;
    a2->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v20, (__int64)a2);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = a2->ProtocolBindingContext;
    a2->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v20, ProtocolBindingContext, v17);
  }
  else
  {
    v20 = ndisInvokeUnbindAdapter((__int64)ProtocolHandle, (__int64)a2, (__int64)v17);
  }
  if ( v20 == 259 )
  {
    KeWaitForSingleObject(&v19, Executive, 0, 0, 0LL);
    v20 = v18;
  }
  a1->ProcessingOpen = 0LL;
  ndisNotifyWmiBindUnbind((__int64)a1, (__int64)ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v14 = 3;
    }
    else
    {
      if ( !ProtocolHandle->IsIPv6 && !ProtocolHandle->IsNdisTest6 )
        goto LABEL_15;
      v14 = 4;
    }
    ndisBindUnbindPeriodicReceives(v10, v14);
  }
LABEL_15:
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v11 = ProtocolHandle->MutexOwnerCount-- == 1;
  ProtocolHandle->MutexOwner = 0;
  if ( v11 )
    ProtocolHandle->MutexOwnerThread = 0LL;
  KeReleaseMutex(&ProtocolHandle->Mutex, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v6 )
    ndisDereferenceProtocol(ProtocolHandle, v12, 6u);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_(0xFu, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids);
}
