/*
 * XREFs of ndisRequestDevicePowerD0 @ 0x1C0012AD4
 * Callers:
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012A40 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0013100 (ndisGenericWaitWakeCallback.c)
 *     ndisMediaDisconnectComplete @ 0x1C005F230 (ndisMediaDisconnectComplete.c)
 *     ndisRequestPowerResume @ 0x1C0067384 (ndisRequestPowerResume.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0068CD0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0069D1C (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisWakeUpDevice @ 0x1C00C546C (ndisWakeUpDevice.c)
 * Callees:
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0012800 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?NdisTraceLoggingRequestD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@J@Z @ 0x1C0012BF0 (-NdisTraceLoggingRequestD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@J@Z.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     Template_jqx @ 0x1C005EDD8 (Template_jqx.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  unsigned __int64 *p_Lock; // rsi
  KIRQL v5; // al
  KIRQL v6; // bp
  unsigned int SyncFlags; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edi

  p_Lock = &a1->Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v6 = v5;
  SyncFlags = a1->SyncFlags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 1708712;
  if ( (SyncFlags & 2) != 0 )
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(p_Lock, v5);
    return 259LL;
  }
  else
  {
    a1->LastD0Reason = a2;
    a1->SyncFlags = SyncFlags | 2;
    KeClearEvent(&a1->PowerD0CompleteEvent);
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(p_Lock, v6);
    ndisLogMiniportEvent(a1, (unsigned __int16)a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqx(
        v8,
        (unsigned int)&DevicePowerOnRequested,
        (_DWORD)a1 + 4064,
        (_DWORD)a1 + 4064,
        a1->IfIndex,
        a1->NetLuid.Value);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 2u);
    if ( (a1->Flags & 0x80u) != 0 )
    {
      v10 = a1->DriverHandle->CxBlock->Chars.EvtCxPowerReference(a1->MiniportAdapterContext);
    }
    else
    {
      v9 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      v10 = v9;
      if ( v9 != 259 )
      {
        if ( (unsigned __int8)byte_1C0083715 >= 2u )
          WPP_SF_dq(143LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v9, a1);
        ndisScheduleD0CompleteSignalWorkItem((__int64)a1, v10);
      }
    }
    NdisTraceLoggingRequestD0State(a1, a2, v10);
    return v10;
  }
}
