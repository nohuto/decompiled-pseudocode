/*
 * XREFs of ndisRequestDevicePowerD0 @ 0x1C00121F4
 * Callers:
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012160 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0063290 (ndisGenericWaitWakeCallback.c)
 *     ndisMediaDisconnectComplete @ 0x1C00634A0 (ndisMediaDisconnectComplete.c)
 *     ndisRequestPowerResume @ 0x1C006BDD8 (ndisRequestPowerResume.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C006D730 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C006E81C (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisWakeUpDevice @ 0x1C00CAF20 (ndisWakeUpDevice.c)
 * Callees:
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C001165C (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?NdisTraceLoggingRequestD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@J@Z @ 0x1C0012308 (-NdisTraceLoggingRequestD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@J@Z.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     Template_jqx @ 0x1C0062DC8 (Template_jqx.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  unsigned __int64 *p_Lock; // rsi
  KIRQL v5; // al
  KIRQL v6; // r14
  unsigned int SyncFlags; // ecx
  unsigned int v8; // edi
  int v9; // ecx
  unsigned int v10; // eax

  p_Lock = &a1->Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v6 = v5;
  SyncFlags = a1->SyncFlags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 1708703;
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
    v8 = 0;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(p_Lock, v6);
    ndisLogMiniportEvent(a1, (unsigned __int16)a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqx(
        v9,
        (unsigned int)&DevicePowerOnRequested,
        (_DWORD)a1 + 4064,
        (_DWORD)a1 + 4064,
        a1->IfIndex,
        a1->NetLuid.Value);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 2u);
    if ( (a1->Flags & 0x80u) == 0 )
    {
      v10 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      v8 = v10;
      if ( v10 != 259 )
      {
        if ( (unsigned __int8)byte_1C00895D5 >= 2u )
          WPP_SF_dq(144LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, v10, a1);
        ndisScheduleD0CompleteSignalWorkItem((__int64)a1, v8);
      }
    }
    NdisTraceLoggingRequestD0State(a1, a2, v8);
    return v8;
  }
}
