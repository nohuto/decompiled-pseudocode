/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C001C2C0
 * Callers:
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0004A80 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0004B10 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C000A9A0 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0019330 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C001E608 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhPdoSystemControl @ 0x1C001EC60 (UsbhPdoSystemControl.c)
 *     UsbhPdoPower_WaitWake @ 0x1C001ED50 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C001EF60 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnHubCount @ 0x1C001F03C (UsbhFdoReturnHubCount.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C001F190 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C001F3E0 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0025670 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhPdoDeviceControl @ 0x1C0028850 (UsbhPdoDeviceControl.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C0028AA4 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003B87C (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003B920 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BC04 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E5D4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003E728 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E77C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003E858 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003E92C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EB24 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003EEEC (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003EF44 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003EFE8 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F07C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhPdoPower_Sequence @ 0x1C00463C0 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C00537EC (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 *     UsbhPdoSuccess @ 0x1C00549C0 (UsbhPdoSuccess.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0055AB8 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004AA48 (USBHUB_TriggerCallBacks.c)
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
