/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C0007290
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0001000 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0005208 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0006F00 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoReturnHubCount @ 0x1C0006F8C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0007028 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhPdoSystemControl @ 0x1C0007110 (UsbhPdoSystemControl.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C00071F4 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhPdoPower_WaitWake @ 0x1C00073F0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00149A0 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0021680 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0026804 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhPdoDeviceControl @ 0x1C0028F10 (UsbhPdoDeviceControl.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C0029164 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003BC9C (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003BD40 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003C024 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E8F4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003EA48 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003EA9C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003EB78 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003EC4C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EE44 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003F20C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003F264 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003F308 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F39C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0046610 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x1C00466F0 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0053E1C (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0053F84 (UsbhDeletePdo.c)
 *     UsbhPdoSuccess @ 0x1C0054FF0 (UsbhPdoSuccess.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00560E8 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004B0E8 (USBHUB_TriggerCallBacks.c)
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
