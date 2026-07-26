/*
 * XREFs of ndisDereferenceProtocol @ 0x1C0019724
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C009AB90 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00A69C0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A6AFC (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B03A0 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00CD6EC (ndisHandleProtocolUnloadNotification.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00D01B0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD908 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00E0B50 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E72A4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 *     NdisDeregisterProtocol @ 0x1C00F3570 (NdisDeregisterProtocol.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C0055C48 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     WPP_SF_Dql @ 0x1C005654C (WPP_SF_Dql.c)
 */

void __fastcall ndisDereferenceProtocol(_NDIS_PROTOCOL_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_PROTOCOL_BLOCK *v4; // rbx
  char v5; // bp
  KIRQL v6; // r14
  KIRQL v8; // al
  struct _NDIS_PROTOCOL_BLOCK **p_NextProtocol; // rcx
  KIRQL v10; // si
  struct _NDIS_PROTOCOL_BLOCK *v11; // rdx
  unsigned int v12; // edx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx

  v4 = this;
  v5 = 1;
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_Dql(this, a2, a3, this, this->Ref.ReferenceCount - 1);
  v6 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
  ndisDereferenceWithTag((ULONG_PTR)v4->Ref.RefCountTracker, a3);
  if ( v4->Ref.ReferenceCount-- == 1 )
  {
    if ( !v4->Ref.ZeroBased )
    {
      ndisFreeRefCount((struct _NDIS_REFCOUNT_BLOCK *)v4->Ref.RefCountTracker);
      v4->Ref.RefCountTracker = 0LL;
    }
  }
  else
  {
    v5 = 0;
  }
  KeReleaseSpinLock(&v4->Ref.SpinLock, v6);
  if ( v5 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    p_NextProtocol = &ndisProtocolList;
    v10 = v8;
    if ( ndisProtocolList )
    {
      while ( 1 )
      {
        v11 = *p_NextProtocol;
        if ( *p_NextProtocol == v4 )
          break;
        p_NextProtocol = &v11->NextProtocol;
        if ( !v11->NextProtocol )
          goto LABEL_15;
      }
      *p_NextProtocol = v4->NextProtocol;
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_15:
    KeReleaseSpinLock(&ndisProtocolListLock, v10);
    Buffer = v4->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v4->ImageName.Buffer = 0LL;
    }
    DeregEvent = v4->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v4, v12);
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
  }
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_q(39LL, &WPP_0009299248ba37495192320194ebfcad_Traceguids, v4);
}
