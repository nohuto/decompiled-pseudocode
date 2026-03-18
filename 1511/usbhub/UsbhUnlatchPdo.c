/*
 * XREFs of UsbhUnlatchPdo @ 0x1C0022600
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002C00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhBusSuspend_Action @ 0x1C0004A20 (UsbhBusSuspend_Action.c)
 *     UsbhSshResumePort @ 0x1C000AF00 (UsbhSshResumePort.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C000B300 (UsbhSS_PdoWakeWorker.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C000B930 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0011200 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhBusResume_Action @ 0x1C0016350 (UsbhBusResume_Action.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0016A90 (UsbhHubRunPortChangeQueue.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C001B100 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C001D1CC (UsbhFreePortChangeQueueObject.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C001FAE0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028044 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EB24 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040A90 (UsbhHubSyncSuspendPortEvent.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041A3C (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1C0042E14 (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0044014 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 *     UsbhIoctlCyclePort @ 0x1C00478D4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D04 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049154 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049460 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049734 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhDriverNotFoundTimer @ 0x1C004AE10 (UsbhDriverNotFoundTimer.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004AEC0 (UsbhDriverNotFoundWorker.c)
 *     UsbhGetHubNodeInfo @ 0x1C004DC9C (UsbhGetHubNodeInfo.c)
 *     UsbhPdoIdleCC_Worker @ 0x1C0055D80 (UsbhPdoIdleCC_Worker.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  KIRQL v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 *v16; // rsi
  __int64 *v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rdx
  __int64 **v21; // rcx
  int v22; // eax

  v4 = a4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1329877109;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v4;
      }
    }
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 1348891236;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 24) = v4;
      }
    }
  }
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v10, v11);
  v15 = *(_QWORD *)(a2 + 64);
  if ( !v15 )
    UsbhTrapFatal_Dbg(a2, 0LL, v10, v11);
  if ( *(_DWORD *)v15 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), v10, v11);
  v16 = (__int64 *)(v15 + 1264);
  v17 = *(__int64 **)(v15 + 1264);
  if ( v17 == (__int64 *)(v15 + 1264) )
  {
LABEL_30:
    v22 = *(_DWORD *)(v15 + 1280);
    if ( v22 )
      *(_DWORD *)(v15 + 1280) = v22 - 1;
  }
  else
  {
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v18 = *(_QWORD *)(a1 + 64);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
            *(_DWORD *)v19 = 1064591724;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 16) = v15;
            *(_QWORD *)(v19 + 24) = v4;
          }
        }
      }
      if ( *((_DWORD *)v17 + 4) == (_DWORD)v4 && v17[4] == a3 )
        break;
      v17 = (__int64 *)*v17;
      if ( v17 == v16 )
        goto LABEL_30;
    }
    v20 = (__int64 *)*v17;
    v21 = (__int64 **)v17[1];
    if ( *(__int64 **)(*v17 + 8) != v17 || *v21 != v17 )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = (__int64)v21;
    ExFreePoolWithTag(v17 - 1, 0);
  }
  if ( (__int64 *)*v16 == v16 && !*(_DWORD *)(v15 + 1280) )
    KeSetEvent((PRKEVENT)(v15 + 1288), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
}
