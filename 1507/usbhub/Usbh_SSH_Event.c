/*
 * XREFs of Usbh_SSH_Event @ 0x1C0017F60
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSshResumeUpstream @ 0x1C000A9A0 (UsbhSshResumeUpstream.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000B6D4 (UsbhAcquireEnumBusLock.c)
 *     UsbhQueryBusRelations @ 0x1C00158F0 (UsbhQueryBusRelations.c)
 *     UsbhSshSuspendHub @ 0x1C0017B8C (UsbhSshSuspendHub.c)
 *     UsbhHubSSH_Worker @ 0x1C0018CE0 (UsbhHubSSH_Worker.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00194FC (Usbh_SSH_HubSuspended.c)
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0021590 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1C0027914 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhSShResumeWorker @ 0x1C0029C40 (UsbhSShResumeWorker.c)
 *     UsbhFdoDeviceControl @ 0x1C003B480 (UsbhFdoDeviceControl.c)
 *     UsbhHardReset_Action @ 0x1C004688C (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x1C004AC0C (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004B2B0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC50 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSshSuspendHub @ 0x1C0017B8C (UsbhSshSuspendHub.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C0019360 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00194FC (Usbh_SSH_HubSuspended.c)
 *     UsbhUnlockSSH @ 0x1C00195C8 (UsbhUnlockSSH.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C001BBD0 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C001BDCC (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C00562AC (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056344 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char *DeviceExtension; // rbx
  signed int v16; // esi
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids,
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
  v14 = *(unsigned int *)(v8 + 3124);
  switch ( (_DWORD)v14 )
  {
    case 1:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
      if ( !DeviceObject )
        UsbhTrapFatal_Dbg(0LL, 0LL, v9, v10);
      DeviceExtension = (char *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v9, v10);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, v9, v10);
      if ( a2 == 1 )
      {
        if ( *(_DWORD *)DeviceExtension != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, v9, v10);
        if ( DeviceExtension[3408]
          || *((char **)DeviceExtension + 388) != DeviceExtension + 3104
          || *((_DWORD *)DeviceExtension + 780)
          || *((char **)DeviceExtension + 603) != DeviceExtension + 4824
          || (*((_DWORD *)DeviceExtension + 640) & 0x10) != 0
          || *((int *)DeviceExtension + 685) > 1
          || (int)UsbhSsh_CheckPortChangeQueuesIdle(DeviceObject) < 0 )
        {
          v16 = -1073741823;
        }
        else
        {
          v16 = 0;
        }
        DeviceExtension[3408] = 0;
        if ( v16 >= 0 )
        {
          KeResetEvent((PRKEVENT)DeviceExtension + 141);
          v30 = FdoExt(*(_QWORD *)(a3 + 8), v27, v28, v29);
          v31 = 8LL * (unsigned int)v30[864];
          v30[781] = 2;
          v30[v31 + 867] = 2;
          *(_DWORD *)(a3 + 120) = 1734964085;
          *((_QWORD *)v30 + 399) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v30 + 782), 16, 1, 0);
          UsbhSshSuspendHub(DeviceObject, a3, v32, v33);
        }
        else
        {
          v17 = FdoExt(*(_QWORD *)(a3 + 8), v14, v9, v10);
          v18 = 8LL * (unsigned int)v17[864];
          v17[781] = 1;
          v17[v18 + 867] = 1;
          *(_DWORD *)(a3 + 120) = 1734964085;
          *((_QWORD *)v17 + 399) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v17 + 782), 16, 1, 0);
          KeWaitForSingleObject(DeviceExtension + 3160, Executive, 0, 0, 0LL);
          if ( !*((_QWORD *)DeviceExtension + 414)
            && !*((_QWORD *)DeviceExtension + 413)
            && !*((_QWORD *)DeviceExtension + 412) )
          {
            v22 = FdoExt((__int64)DeviceObject, v19, v20, v21);
            UsbhEnableTimerObject(
              (_DWORD)DeviceObject,
              (_DWORD)DeviceExtension + 3200,
              *((_DWORD *)DeviceExtension + 1314),
              0,
              (__int64)(v22 + 478),
              2001228627);
          }
          KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 3160), 16, 1, 0);
        }
      }
      else if ( a2 == 6 )
      {
        DeviceExtension[3408] = 1;
        v23 = *(_QWORD *)(a3 + 8);
        if ( !v23 )
          UsbhTrapFatal_Dbg(0LL, 0LL, v9, v10);
        v24 = *(_QWORD *)(v23 + 64);
        if ( !v24 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL, v9, v10);
        if ( *(_DWORD *)v24 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v23 + 64), v9, v10);
        v25 = *(unsigned int *)(v24 + 3456);
        *(_DWORD *)(v24 + 3124) = 1;
        *(_DWORD *)(32 * v25 + v24 + 3468) = 1;
        *(_DWORD *)(a3 + 120) = 1734964085;
        *(_QWORD *)(v24 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v24 + 3128), 16, 1, 0);
        v16 = 0;
      }
      else
      {
        switch ( a2 )
        {
          case 4u:
            v16 = *((_QWORD *)DeviceExtension + 413) != 0LL ? 0xC0000001 : 0;
            UsbhUnlockSSH(a3, 1LL);
            break;
          case 5u:
            UsbhUnlockSSH(a3, 1LL);
            v16 = 0;
            break;
          default:
            UsbhUnlockSSH(a3, 1LL);
            v16 = -1073741823;
            break;
        }
      }
      break;
    case 2:
      v16 = Usbh_SSH_HubPendingSuspend(DeviceObject, a2, a3);
      break;
    case 3:
      v16 = Usbh_SSH_HubPendingResumeAfterSuspend(DeviceObject);
      break;
    case 4:
      v16 = Usbh_SSH_HubSuspended(DeviceObject);
      break;
    case 5:
      v16 = Usbh_SSH_HubPendingResume(DeviceObject);
      break;
    case 6:
      v16 = Usbh_SSH_HubFailedResume(DeviceObject, a2, a3);
      break;
    default:
      v16 = -1073741823;
      UsbhUnlockSSH(a3, v14);
      break;
  }
  return (unsigned int)v16;
}
