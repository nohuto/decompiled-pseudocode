/*
 * XREFs of ndisIfSetInterfaceState @ 0x1C0017AB8
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0013B84 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisUpdateOperationalStatus @ 0x1C00182A4 (ndisUpdateOperationalStatus.c)
 *     ndisMSetGeneralAttributes @ 0x1C001E518 (ndisMSetGeneralAttributes.c)
 *     ndisPnPPortActivation @ 0x1C003F114 (ndisPnPPortActivation.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C00475D0 (ndisOidPreSetPortAuthentication.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017DB0 (ndisMReferenceIfBlock.c)
 *     ndisIsDefaultPortStateOperational @ 0x1C0017E28 (ndisIsDefaultPortStateOperational.c)
 *     ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018404 (-NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0019F2C (ndisNsiScheduleIfBlockRodChangeNotification.c)
 */

char __fastcall ndisIfSetInterfaceState(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, KIRQL a3)
{
  unsigned int OperStatusFlags; // ebx
  char v4; // bp
  char v5; // r15
  _NET_IF_OPER_STATUS OperStatus; // esi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r12
  int v12; // r8d
  _DWORD *v13; // r14
  int v14; // r13d
  KIRQL v15; // cl

  OperStatusFlags = a1->OperStatusFlags;
  v4 = 0;
  a1->OperStatusFlags = 0;
  v5 = a2;
  OperStatus = a1->OperStatus;
  if ( a1->State == NdisMiniportHalted )
    goto LABEL_10;
  if ( a1->MediaConnectState != MediaConnectStateConnected )
  {
    a1->OperStatusFlags = 2;
LABEL_10:
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
    goto LABEL_11;
  }
  if ( (unsigned __int8)ndisIsDefaultPortStateOperational() )
  {
    if ( (unsigned int)(a1->State - 5) <= 1 )
    {
      a1->OperStatusFlags |= 4u;
      a1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
    }
    else
    {
      *(_QWORD *)&a1->OperStatus = 1LL;
      if ( (OperStatusFlags & 8) != 0 )
        a1->OperStatusFlags = 0x1000000;
    }
  }
  else
  {
    a1->OperStatusFlags |= 1u;
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
  }
LABEL_11:
  if ( a1->OperStatus != OperStatus || a1->OperStatusFlags != OperStatusFlags )
    NdisTraceLoggingDeviceStatusChange(a1);
  LOBYTE(a2) = 10;
  v8 = ndisMReferenceIfBlock(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    v10 = (unsigned int)a1->OperStatus;
    v11 = v8 + 1112;
    v12 = *(_DWORD *)(v8 + 1112);
    v13 = (_DWORD *)(v8 + 1220);
    v14 = *(_DWORD *)(v8 + 1220);
    *(_DWORD *)(v8 + 1112) = v10;
    *(_DWORD *)(v8 + 1192) = a1->AdminStatus;
    *(_DWORD *)(v8 + 1220) = a1->MediaConnectState;
    *(_DWORD *)(v8 + 1224) = a1->MediaDuplexState;
    *(_QWORD *)(v8 + 1208) = a1->RcvLinkSpeed;
    *(_QWORD *)(v8 + 1200) = a1->XmitLinkSpeed;
    *(_DWORD *)(v8 + 1116) = a1->OperStatusFlags;
    if ( v12 == (_DWORD)v10 || (v4 = 1, !v5) )
    {
      v15 = a3;
    }
    else
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, a3);
      ndisNsiScheduleIfBlockRodChangeNotification(v9, v11, 8LL, 536LL);
      v15 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 2243967;
    }
    if ( v14 != *v13 && v5 )
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v15);
      ndisNsiScheduleIfBlockRodChangeNotification(v9, v13, 4LL, 644LL);
      KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 2243980;
    }
    LOBYTE(v10) = 10;
    ndisMDereferenceIfBlock(a1, v10);
  }
  return v4;
}
