/*
 * XREFs of UsbhIncHubBusy @ 0x1C000CE90
 * Callers:
 *     UsbhSshEnterSx @ 0x1C00028D4 (UsbhSshEnterSx.c)
 *     UsbhPortConnect @ 0x1C000A1C0 (UsbhPortConnect.c)
 *     UsbhSshResumeUpstream @ 0x1C000A9A0 (UsbhSshResumeUpstream.c)
 *     UsbhSshBusBusy @ 0x1C000B654 (UsbhSshBusBusy.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000B6D4 (UsbhAcquireEnumBusLock.c)
 *     UsbhSshPortsBusy @ 0x1C000B91C (UsbhSshPortsBusy.c)
 *     UsbhPdoPnp_QueryId @ 0x1C000B9B0 (UsbhPdoPnp_QueryId.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000C760 (UsbhWaitEventWithTimeoutEx.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000D1E0 (Usbh_PCE_Resume_Action.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0021590 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043B30 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C00451F0 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x1C004688C (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C0047854 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0047EDC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048204 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048950 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048BB4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049004 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00495E4 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049898 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049E08 (UsbhIoctlResetStuckHub.c)
 *     UsbhSetEnumerationFailed @ 0x1C00519C0 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C0051BB4 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00544B0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x1C00561C4 (UsbhSshDisabled.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C0019360 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00194FC (Usbh_SSH_HubSuspended.c)
 *     UsbhUnlockSSH @ 0x1C00195C8 (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C001BDCC (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056344 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhIncHubBusy(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r12d
  struct _KEVENT *DeviceExtension; // rdi
  struct _KEVENT *v10; // rbp
  __int64 Signalling; // r8
  void *v12; // rcx
  __int64 v13; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v15; // rbx
  _LIST_ENTRY *p_WaitListHead; // rdi
  char *v17; // rax
  char **Blink; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _BYTE *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx

  v5 = a4;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( DeviceExtension->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, a3, a4);
  v10 = DeviceExtension + 139;
  DeviceExtension[142].Header.Type = 1;
  KeWaitForSingleObject(&DeviceExtension[139], Executive, 0, 0, 0LL);
  Signalling = DeviceExtension[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v12 = DeviceObject->DeviceExtension;
    if ( v12 )
    {
      v13 = *((_QWORD *)v12 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
      *(_DWORD *)v13 = 1668172104;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = a5;
      *(_QWORD *)(v13 + 24) = Signalling;
    }
  }
  if ( DeviceExtension[142].Header.Signalling )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v15 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      p_WaitListHead = &DeviceExtension[129].Header.WaitListHead;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[4] = 0LL;
      v17 = (char *)(PoolWithTag + 1);
      *(_DWORD *)v15 = 1215918946;
      *(_QWORD *)(v15 + 24) = a3;
      *(_DWORD *)(v15 + 32) = v5;
      Blink = (char **)p_WaitListHead->Blink;
      *(_QWORD *)(v15 + 8) = p_WaitListHead;
      *(_QWORD *)(v15 + 16) = Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *Blink = v17;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v17;
    }
    else
    {
      ++DeviceExtension[130].Header.LockNV;
      v15 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
    if ( a5 == 1 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          10,
          (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids,
          6);
      v22 = *(_QWORD *)(a2 + 8);
      if ( !v22 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v19, v20);
      v23 = *(_QWORD *)(v22 + 64);
      if ( !v23 )
        UsbhTrapFatal_Dbg(v22, 0LL, v19, v20);
      if ( *(_DWORD *)v23 != 541218120 )
        UsbhTrapFatal_Dbg(v22, *(_QWORD *)(v22 + 64), v19, v20);
      KeWaitForSingleObject((PVOID)(v23 + 3128), Executive, 0, 0, 0LL);
      *(_QWORD *)(v23 + 3192) = a2;
      *(_DWORD *)(a2 + 120) = 2018005843;
      *(_DWORD *)(a2 + 124) = 6;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      v26 = *(_DWORD *)(v23 + 3456);
      v27 = 32LL * (v26 & 7) + v23;
      if ( *(_DWORD *)(v27 + 3460) != 6 || *(_DWORD *)(v27 + 3464) != *(_DWORD *)(v23 + 3124) )
      {
        v33 = ((_BYTE)v26 + 1) & 7;
        *(_DWORD *)(v23 + 3456) = v33;
        v33 *= 32LL;
        *(_DWORD *)(v33 + v23 + 3460) = 6;
        *(_DWORD *)(v33 + v23 + 3464) = *(_DWORD *)(v23 + 3124);
      }
      v28 = *(unsigned int *)(v23 + 3124);
      if ( (_DWORD)v28 == 1 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            11,
            (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
        v29 = DeviceObject->DeviceExtension;
        if ( !v29 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v24, v25);
        if ( *(_DWORD *)v29 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, v24, v25);
        v29[3408] = 1;
        v30 = *(_QWORD *)(a2 + 8);
        if ( !v30 )
          UsbhTrapFatal_Dbg(0LL, 0LL, v24, v25);
        v31 = *(_QWORD *)(v30 + 64);
        if ( !v31 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a2 + 8), 0LL, v24, v25);
        if ( *(_DWORD *)v31 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a2 + 8), *(_QWORD *)(v30 + 64), v24, v25);
        v32 = *(unsigned int *)(v31 + 3456);
        *(_DWORD *)(v31 + 3124) = 1;
        *(_DWORD *)(32 * v32 + v31 + 3468) = 1;
        *(_DWORD *)(a2 + 120) = 1734964085;
        *(_QWORD *)(v31 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v31 + 3128), 16, 1, 0);
      }
      else if ( (_DWORD)v28 == 2 )
      {
        Usbh_SSH_HubPendingSuspend(DeviceObject, 6LL, a2);
      }
      else if ( (_DWORD)v28 == 3 )
      {
        Usbh_SSH_HubPendingResumeAfterSuspend(DeviceObject);
      }
      else if ( (_DWORD)v28 == 4 )
      {
        Usbh_SSH_HubSuspended(DeviceObject);
      }
      else if ( (_DWORD)v28 == 5 )
      {
        Usbh_SSH_HubPendingResume(DeviceObject);
      }
      else
      {
        if ( (_DWORD)v28 == 6 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
          FdoExt(DeviceObject);
          v28 = 6LL;
        }
        UsbhUnlockSSH(a2, v28);
      }
    }
    return v15;
  }
  else
  {
    KeSetEvent(DeviceExtension + 139, 0, 0);
    return 0LL;
  }
}
