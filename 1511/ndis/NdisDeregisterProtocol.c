/*
 * XREFs of NdisDeregisterProtocol @ 0x1C00ED550
 * Callers:
 *     NdisDeregisterProtocolDriver @ 0x1C00C9560 (NdisDeregisterProtocolDriver.c)
 * Callees:
 *     ndisCloseRef @ 0x1C00187A0 (ndisCloseRef.c)
 *     ndisDereferenceProtocol @ 0x1C001C678 (ndisDereferenceProtocol.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A6E1C (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall NdisDeregisterProtocol(int *a1, __int64 a2)
{
  KIRQL v4; // al
  struct _NDIS_PROTOCOL_BLOCK *i; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C008370C >= 4u )
    WPP_SF_qZ(0x12u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a2, (__int64 *)(a2 + 72));
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  for ( i = ndisProtocolList; i && i != (struct _NDIS_PROTOCOL_BLOCK *)a2; i = i->NextProtocol )
    ;
  KeReleaseSpinLock(&ndisProtocolListLock, v4);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( !i )
  {
    *a1 = 0;
    return;
  }
  NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(
    (NDIS_BIND_PROTOCOL_DRIVER *)(*(_QWORD *)(a2 + 920) + 8LL),
    0LL,
    RunSynchronous);
  if ( ndisCloseRef((PKSPIN_LOCK)(a2 + 32)) )
  {
    v6 = *(_QWORD *)(a2 + 448);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 72) = 0LL;
      *(_QWORD *)(a2 + 448) = 0LL;
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(a2 + 464) = &Event;
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)a2, v7, 0xFFu);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *a1 = 0;
  }
  else
  {
    *a1 = -1073741823;
    if ( (unsigned __int8)byte_1C008370C < 4u )
      return;
    WPP_SF_qD(0x13u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a2, -1073741823);
  }
  if ( (unsigned __int8)byte_1C008370C >= 4u )
    WPP_SF_qD(0x14u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a2, *a1);
}
