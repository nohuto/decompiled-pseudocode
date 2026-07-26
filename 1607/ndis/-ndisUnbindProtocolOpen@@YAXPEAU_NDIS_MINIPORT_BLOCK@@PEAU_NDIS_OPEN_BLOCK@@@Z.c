/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00EC4E4
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AF4E4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ndisReferenceProtocol @ 0x1C0015C20 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018D20 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004EF18 (ndisBindUnbindPeriodicReceives.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A92DC (ndisNotifyWmiBindUnbind.c)
 *     ndisInvokeUnbindAdapter @ 0x1C00AF580 (ndisInvokeUnbindAdapter.c)
 *     NdisCloseAdapter @ 0x1C00EC1F0 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdi
  bool v3; // r14
  KIRQL v6; // al
  struct _NDIS_OPEN_BLOCK *i; // rdx
  KIRQL v8; // al
  KIRQL v9; // r13
  _KEVENT *WaitNetPnpEvent; // r15
  void *ProtocolBindingContext; // rdx
  struct _NDIS_MINIPORT_BLOCK *v12; // rcx
  int v13; // edx
  bool v14; // zf
  __int64 v15; // rdx
  struct _KEVENT Object; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT v18; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[88]; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+D8h] [rbp-28h]
  struct _KEVENT v21; // [rsp+E0h] [rbp-20h] BYREF
  int v22; // [rsp+150h] [rbp+50h] BYREF
  BOOL v23; // [rsp+158h] [rbp+58h]

  ProtocolHandle = a2->ProtocolHandle;
  v22 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0xEu, &WPP_9d58b71ad31e34326812744187916088_Traceguids, (__int64)a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((__int64)&ndisPkgs);
  v23 = ndisReferenceProtocol((__int64)ProtocolHandle, 6u) != 0;
  KeWaitForSingleObject(&ProtocolHandle->Mutex, Executive, 0, 0, 0LL);
  ++ProtocolHandle->MutexOwnerCount;
  ProtocolHandle->MutexOwnerThread = KeGetCurrentThread();
  ProtocolHandle->MutexOwner = 3932424;
  v6 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  for ( i = ProtocolHandle->OpenQueue; i && i != a2; i = i->ProtocolNextOpen )
    ;
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v6);
  v8 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
  a2->OpenFlags |= 0x10000u;
  v9 = v8;
  if ( (a2->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&v18, NotificationEvent, 0);
    a2->WaitNetPnpEvent = &v18;
  }
  WaitNetPnpEvent = a2->WaitNetPnpEvent;
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u )
    v3 = (a2->OpenFlags & 0x40000000) != 0;
  a2->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&a2->SpinLock, v9);
  if ( WaitNetPnpEvent )
    KeWaitForSingleObject(WaitNetPnpEvent, Executive, 0, 0, 0LL);
  if ( (a1->Flags & 0x20000) != 0 )
  {
    KeInitializeEvent(&Object, NotificationEvent, 0);
    a2->AfNotifyCompleteEvent = &Object;
    if ( a2->PendingAfNotifications )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    a2->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(&v21, NotificationEvent, 0);
  a1->ProcessingOpen = a2;
  if ( v3 )
  {
    v20 = 0;
    a2->UnsolicitedUnbindEvent = &v21;
    a2->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v22, (__int64)a2);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = a2->ProtocolBindingContext;
    a2->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v22, ProtocolBindingContext, v19);
  }
  else
  {
    v22 = ndisInvokeUnbindAdapter((__int64)ProtocolHandle, (__int64)a2, (__int64)v19);
  }
  if ( v22 == 259 )
  {
    KeWaitForSingleObject(&v21, Executive, 0, 0, 0LL);
    v22 = v20;
  }
  a1->ProcessingOpen = 0LL;
  ndisNotifyWmiBindUnbind((__int64)a1, (__int64)ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v13 = 3;
LABEL_30:
      ndisBindUnbindPeriodicReceives(v12, v13);
      goto LABEL_31;
    }
    if ( ProtocolHandle->IsIPv6 || ProtocolHandle->IsNdisTest6 )
    {
      v13 = 4;
      goto LABEL_30;
    }
  }
LABEL_31:
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v14 = ProtocolHandle->MutexOwnerCount-- == 1;
  ProtocolHandle->MutexOwner = 0;
  if ( v14 )
    ProtocolHandle->MutexOwnerThread = 0LL;
  KeReleaseMutex(&ProtocolHandle->Mutex, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v23 )
    ndisDereferenceProtocol(ProtocolHandle, v15, 6u);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_(0xFu, &WPP_9d58b71ad31e34326812744187916088_Traceguids);
}
