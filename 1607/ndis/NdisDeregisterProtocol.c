/*
 * XREFs of NdisDeregisterProtocol @ 0x1C00F41E0
 * Callers:
 *     NdisDeregisterProtocolDriver @ 0x1C00CEF80 (NdisDeregisterProtocolDriver.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     ndisCloseRef @ 0x1C001AF28 (ndisCloseRef.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A2E68 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall NdisDeregisterProtocol(int *a1, _NDIS_PROTOCOL_BLOCK *a2)
{
  KIRQL v4; // al
  struct _NDIS_PROTOCOL_BLOCK *i; // rdi
  _NDIS_M_DRIVER_BLOCK *AssociatedMiniDriver; // rax
  __int64 v7; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00895CC >= 4u )
    WPP_SF_qZ(0x12u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)a2, &a2->Name.Length);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  for ( i = ndisProtocolList; i && i != a2; i = i->NextProtocol )
    ;
  KeReleaseSpinLock(&ndisProtocolListLock, v4);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( !i )
  {
    *a1 = 0;
    return;
  }
  NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(&a2->Bind._p->_t, 0LL, RunSynchronous);
  if ( ndisCloseRef(&a2->Ref.SpinLock) )
  {
    AssociatedMiniDriver = a2->AssociatedMiniDriver;
    if ( AssociatedMiniDriver )
    {
      AssociatedMiniDriver->AssociatedProtocol = 0LL;
      a2->AssociatedMiniDriver = 0LL;
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    a2->DeregEvent = &Event;
    ndisDereferenceProtocol(a2, v7, 0xFFu);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *a1 = 0;
  }
  else
  {
    *a1 = -1073741823;
    if ( (unsigned __int8)byte_1C00895CC < 4u )
      return;
    WPP_SF_qD(0x13u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)a2, -1073741823);
  }
  if ( (unsigned __int8)byte_1C00895CC >= 4u )
    WPP_SF_qD(0x14u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)a2, *a1);
}
