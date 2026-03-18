/*
 * XREFs of Usbh_SSH_Event @ 0x1C0010030
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSshResumeUpstream @ 0x1C0008B00 (UsbhSshResumeUpstream.c)
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 *     UsbhHubSSH_Worker @ 0x1C000F660 (UsbhHubSSH_Worker.c)
 *     UsbhSshSuspendHub @ 0x1C001068C (UsbhSshSuspendHub.c)
 *     UsbhQueryBusRelations @ 0x1C0012300 (UsbhQueryBusRelations.c)
 *     Usbh_SSH_HubSuspended @ 0x1C001BC50 (Usbh_SSH_HubSuspended.c)
 *     UsbhAcquireEnumBusLock @ 0x1C001F288 (UsbhAcquireEnumBusLock.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C001FAE0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1C0026AF4 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhSShResumeWorker @ 0x1C0028C00 (UsbhSShResumeWorker.c)
 *     UsbhFdoDeviceControl @ 0x1C003B630 (UsbhFdoDeviceControl.c)
 *     UsbhHardReset_Action @ 0x1C004690C (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x1C004ABBC (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004B260 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     UsbhSshSuspendHub @ 0x1C001068C (UsbhSshSuspendHub.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C001B8F0 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C001BC50 (Usbh_SSH_HubSuspended.c)
 *     UsbhUnlockSSH @ 0x1C001BD2C (UsbhUnlockSSH.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C0022400 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0025C14 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C005641C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C00564B4 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rbx
  signed int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids,
      a2);
  v7 = *(_QWORD *)(a3 + 8);
  if ( !v7 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v8 = *(_QWORD *)(v7 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(v7, 0LL, a3, a4);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(v7, *(_QWORD *)(v7 + 64), a3, a4);
  KeWaitForSingleObject((PVOID)(v8 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v8 + 3192) = a3;
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = a2;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v11 = *(_DWORD *)(v8 + 3456);
  v12 = 32LL * (v11 & 7) + v8;
  if ( *(_DWORD *)(v12 + 3460) != a2 || *(_DWORD *)(v12 + 3464) != *(_DWORD *)(v8 + 3124) )
  {
    v13 = ((_BYTE)v11 + 1) & 7;
    *(_DWORD *)(v8 + 3456) = v13;
    v13 *= 32LL;
    *(_DWORD *)(v13 + v8 + 3460) = a2;
    *(_DWORD *)(v13 + v8 + 3464) = *(_DWORD *)(v8 + 3124);
  }
  v14 = *(_DWORD *)(v8 + 3124);
  switch ( v14 )
  {
    case 1:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v9, v10);
      v15 = *(_QWORD *)(a1 + 64);
      if ( !v15 )
        UsbhTrapFatal_Dbg(a1, 0LL, v9, v10);
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v9, v10);
      if ( a2 == 1 )
      {
        if ( *(_DWORD *)v15 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v9, v10);
        if ( *(_BYTE *)(v15 + 3408)
          || *(_QWORD *)(v15 + 3104) != v15 + 3104
          || *(_DWORD *)(v15 + 3120)
          || *(_QWORD *)(v15 + 4824) != v15 + 4824
          || (*(_DWORD *)(v15 + 2560) & 0x10) != 0
          || *(int *)(v15 + 2740) > 1
          || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
        {
          v16 = -1073741823;
        }
        else
        {
          v16 = 0;
        }
        *(_BYTE *)(v15 + 3408) = 0;
        if ( v16 >= 0 )
        {
          KeResetEvent((PRKEVENT)(v15 + 3384));
          *(_BYTE *)(v15 + 3416) = 0;
          v24 = FdoExt(*(_QWORD *)(a3 + 8));
          v25 = 32LL * *(unsigned int *)(v24 + 3456);
          *(_DWORD *)(v24 + 3124) = 2;
          *(_DWORD *)(v25 + v24 + 3468) = 2;
          *(_DWORD *)(a3 + 120) = 1734964085;
          *(_QWORD *)(v24 + 3192) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v24 + 3128), 16, 1, 0);
          UsbhSshSuspendHub(a1);
        }
        else
        {
          v17 = FdoExt(*(_QWORD *)(a3 + 8));
          v18 = 32LL * *(unsigned int *)(v17 + 3456);
          *(_DWORD *)(v17 + 3124) = 1;
          *(_DWORD *)(v18 + v17 + 3468) = 1;
          *(_DWORD *)(a3 + 120) = 1734964085;
          *(_QWORD *)(v17 + 3192) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v17 + 3128), 16, 1, 0);
          KeWaitForSingleObject((PVOID)(v15 + 3160), Executive, 0, 0, 0LL);
          if ( !*(_QWORD *)(v15 + 3312) && !*(_QWORD *)(v15 + 3304) && !*(_QWORD *)(v15 + 3296) )
          {
            v19 = FdoExt(a1);
            UsbhEnableTimerObject(a1, v15 + 3200, *(unsigned int *)(v15 + 5256), 0LL, v19 + 1912, 0x77485353u);
          }
          KeReleaseSemaphore((PRKSEMAPHORE)(v15 + 3160), 16, 1, 0);
        }
      }
      else if ( a2 == 6 )
      {
        *(_BYTE *)(v15 + 3408) = 1;
        v20 = *(_QWORD *)(a3 + 8);
        if ( !v20 )
          UsbhTrapFatal_Dbg(0LL, 0LL, v9, v10);
        v21 = *(_QWORD *)(v20 + 64);
        if ( !v21 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL, v9, v10);
        if ( *(_DWORD *)v21 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v20 + 64), v9, v10);
        v22 = *(unsigned int *)(v21 + 3456);
        *(_DWORD *)(v21 + 3124) = 1;
        *(_DWORD *)(32 * v22 + v21 + 3468) = 1;
        *(_DWORD *)(a3 + 120) = 1734964085;
        *(_QWORD *)(v21 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v21 + 3128), 16, 1, 0);
        v16 = 0;
      }
      else
      {
        switch ( a2 )
        {
          case 4u:
            v16 = *(_QWORD *)(v15 + 3304) != 0LL ? 0xC0000001 : 0;
            UsbhUnlockSSH(a3);
            break;
          case 5u:
            UsbhUnlockSSH(a3);
            v16 = 0;
            break;
          default:
            UsbhUnlockSSH(a3);
            v16 = -1073741823;
            break;
        }
      }
      break;
    case 2:
      v16 = Usbh_SSH_HubPendingSuspend(a1, a2, a3);
      break;
    case 3:
      v16 = Usbh_SSH_HubPendingResumeAfterSuspend(a1, a2, a3);
      break;
    case 4:
      v16 = Usbh_SSH_HubSuspended(a1, a2, a3);
      break;
    case 5:
      v16 = Usbh_SSH_HubPendingResume(a1, a2, a3);
      break;
    case 6:
      v16 = Usbh_SSH_HubFailedResume(a1, a2, a3);
      break;
    default:
      v16 = -1073741823;
      UsbhUnlockSSH(a3);
      break;
  }
  return (unsigned int)v16;
}
