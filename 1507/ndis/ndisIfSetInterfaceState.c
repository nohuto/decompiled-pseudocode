/*
 * XREFs of ndisIfSetInterfaceState @ 0x1C00161F4
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C0013AA0 (ndisMSetGeneralAttributes.c)
 *     ndisUpdateOperationalStatus @ 0x1C00145CC (ndisUpdateOperationalStatus.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001AED4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisPnPPortActivation @ 0x1C003A458 (ndisPnPPortActivation.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0042B00 (ndisOidPreSetPortAuthentication.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisIsDefaultPortStateOperational @ 0x1C001443C (ndisIsDefaultPortStateOperational.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C00144A0 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017488 (-NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisIfSetInterfaceState(struct _NDIS_MINIPORT_BLOCK *a1, char a2, KIRQL a3)
{
  unsigned int OperStatusFlags; // esi
  _NET_IF_OPER_STATUS OperStatus; // ebx
  char v7; // bp
  _NDIS_IF_BLOCK *IfBlock; // rsi
  KIRQL v9; // bl
  _NET_IF_OPER_STATUS v10; // ecx
  _NET_IF_OPER_STATUS ifOperStatus; // edx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // r13d
  KIRQL v13; // cl
  KIRQL v14; // al
  _NDIS_IF_BLOCK *v15; // rbx
  KIRQL v16; // si
  _NDIS_MINIPORT_BLOCK *Miniport; // rdx
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx

  OperStatusFlags = a1->OperStatusFlags;
  OperStatus = a1->OperStatus;
  a1->OperStatusFlags = 0;
  v7 = 0;
  if ( a1->State == NdisMiniportHalted )
    goto LABEL_4;
  if ( a1->MediaConnectState != MediaConnectStateConnected )
  {
    a1->OperStatusFlags = 2;
LABEL_4:
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
    goto LABEL_5;
  }
  if ( ndisIsDefaultPortStateOperational(a1) )
  {
    if ( (unsigned int)(a1->State - 5) <= 1 )
    {
      a1->OperStatusFlags |= 4u;
      a1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
    }
    else
    {
      *(_QWORD *)&a1->OperStatus = 1LL;
    }
  }
  else
  {
    a1->OperStatusFlags |= 1u;
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
  }
LABEL_5:
  if ( a1->OperStatus != OperStatus || a1->OperStatusFlags != OperStatusFlags )
    NdisTraceLoggingDeviceStatusChange(a1);
  IfBlock = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( a1->IfBlockAvailable )
  {
    IfBlock = a1->IfBlock;
    ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker, 0xAu);
    ++IfBlock->MiniportLinkReference;
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v9);
  if ( IfBlock )
  {
    v10 = a1->OperStatus;
    ifOperStatus = IfBlock->ifOperStatus;
    MediaConnectState = IfBlock->MediaConnectState;
    IfBlock->ifOperStatus = v10;
    IfBlock->ifAdminStatus = a1->AdminStatus;
    IfBlock->MediaConnectState = a1->MediaConnectState;
    IfBlock->MediaDuplexState = a1->MediaDuplexState;
    IfBlock->RcvLinkSpeed = a1->RcvLinkSpeed;
    IfBlock->XmitLinkSpeed = a1->XmitLinkSpeed;
    IfBlock->ifOperStatusFlags = a1->OperStatusFlags;
    if ( ifOperStatus == v10 || (v7 = 1, !a2) )
    {
      v13 = a3;
    }
    else
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, a3);
      ndisNsiScheduleIfBlockRodChangeNotification((__int64)IfBlock, (__int64)&IfBlock->ifOperStatus, 8, 536);
      v13 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 2243544;
    }
    if ( MediaConnectState != IfBlock->MediaConnectState && a2 )
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v13);
      ndisNsiScheduleIfBlockRodChangeNotification((__int64)IfBlock, (__int64)&IfBlock->MediaConnectState, 4, 644);
      KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 2243557;
    }
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    v15 = a1->IfBlock;
    v16 = v14;
    ndisDereferenceWithTag((ULONG_PTR)v15->MpRefCountTracker, 0xAu);
    if ( v15->MiniportLinkReference-- == 1 )
    {
      Miniport = v15->Miniport;
      if ( Miniport )
      {
        IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
        if ( IfBlockPointerRefZeroEvent )
          KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
      }
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v16);
  }
  return v7;
}
