/*
 * XREFs of ndisDereferenceProtocol @ 0x1C001C678
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0098740 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00A0290 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00A6800 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A6D04 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00C6C20 (ndisHandleProtocolUnloadNotification.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00C95C0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00D7258 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00DA5E4 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E1274 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EBF10 (ndisHandleProtocolReconfigNotification.c)
 *     NdisDeregisterProtocol @ 0x1C00ED550 (NdisDeregisterProtocol.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C0055AE8 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     WPP_SF_Dql @ 0x1C00563DC (WPP_SF_Dql.c)
 */

void __fastcall ndisDereferenceProtocol(_NDIS_PROTOCOL_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_PROTOCOL_BLOCK *v3; // rbx
  KIRQL v4; // al
  struct _NDIS_PROTOCOL_BLOCK **p_NextProtocol; // rcx
  KIRQL v6; // di
  struct _NDIS_PROTOCOL_BLOCK *v7; // rdx
  unsigned int v8; // edx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx

  v3 = this;
  if ( (unsigned __int8)byte_1C008370C >= 4u )
    WPP_SF_Dql(this, a2, a3, this, this->Ref.ReferenceCount - 1);
  if ( (unsigned __int8)ndisDereferenceRef(&v3->Ref.SpinLock) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    p_NextProtocol = &ndisProtocolList;
    v6 = v4;
    if ( ndisProtocolList )
    {
      while ( 1 )
      {
        v7 = *p_NextProtocol;
        if ( *p_NextProtocol == v3 )
          break;
        p_NextProtocol = &v7->NextProtocol;
        if ( !v7->NextProtocol )
          goto LABEL_11;
      }
      *p_NextProtocol = v3->NextProtocol;
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_11:
    KeReleaseSpinLock(&ndisProtocolListLock, v6);
    Buffer = v3->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v3->ImageName.Buffer = 0LL;
    }
    DeregEvent = v3->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v8);
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  if ( (unsigned __int8)byte_1C008370C >= 4u )
    WPP_SF_q(39LL, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, v3);
}
