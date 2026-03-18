/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C00139E0
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0004B60 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0007768 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhPdoSystemControl @ 0x1C0007950 (UsbhPdoSystemControl.c)
 *     UsbhPdoPower_WaitWake @ 0x1C0007A40 (UsbhPdoPower_WaitWake.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0009010 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0013B10 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0020B20 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0025E3C (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C0026C7C (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00277F4 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0027CB0 (UsbhFdoReturnHubCount.c)
 *     UsbhPdoDeviceControl @ 0x1C0029890 (UsbhPdoDeviceControl.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C0029AE4 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003B6CC (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003B770 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BA54 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E3A4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003E4F8 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E54C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003E628 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003E6FC (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003E8F4 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003ECBC (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003ED14 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003EDB8 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003EE4C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0046260 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x1C0046340 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C005381C (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 *     UsbhPdoSuccess @ 0x1C0054A80 (UsbhPdoSuccess.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0055948 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004AA98 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  KIRQL v8; // r15
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  int v12; // eax

  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64), a3, a4);
  v7 = (_QWORD *)(v6 + 1216);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 1208));
  if ( (_QWORD *)*v7 == v7 || (v9 = (_QWORD *)*v7) == 0LL || v9 == v7 )
  {
LABEL_20:
    v12 = *(_DWORD *)(v6 + 1256);
    if ( !v12 )
    {
      USBHUB_TriggerCallBacks(BugCheckParameter3);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    }
    *(_DWORD *)(v6 + 1256) = v12 - 1;
  }
  else
  {
    while ( v9[2] != BugCheckParameter4 )
    {
      v9 = (_QWORD *)*v9;
      if ( v9 == v7 )
        goto LABEL_20;
    }
    v10 = (_QWORD *)*v9;
    v11 = (_QWORD *)v9[1];
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v9 - 1, 0);
  }
  if ( (_QWORD *)*v7 != v7 || *(_DWORD *)(v6 + 1256) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 1208), v8);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 1208), v8);
    KeSetEvent((PRKEVENT)(v6 + 1232), 0, 0);
  }
}
