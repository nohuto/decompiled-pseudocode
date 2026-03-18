/*
 * XREFs of UsbhIncHubBusy @ 0x1C0014020
 * Callers:
 *     UsbhSshEnterSx @ 0x1C00028D4 (UsbhSshEnterSx.c)
 *     UsbhSshResumeUpstream @ 0x1C0008B00 (UsbhSshResumeUpstream.c)
 *     UsbhSshBusBusy @ 0x1C0009DA0 (UsbhSshBusBusy.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C000CBE0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryId @ 0x1C000D390 (UsbhPdoPnp_QueryId.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0014370 (Usbh_PCE_Resume_Action.c)
 *     UsbhPortConnect @ 0x1C001BDA0 (UsbhPortConnect.c)
 *     UsbhAcquireEnumBusLock @ 0x1C001F288 (UsbhAcquireEnumBusLock.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C001FAE0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 *     UsbhSshPortsBusy @ 0x1C00262E0 (UsbhSshPortsBusy.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043C60 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045320 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x1C004690C (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C00478D4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048354 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA0 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D04 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049154 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049734 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C00499E8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049F58 (UsbhIoctlResetStuckHub.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051920 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C0051B14 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054480 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x1C0056334 (UsbhSshDisabled.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C001B8F0 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C001BC50 (Usbh_SSH_HubSuspended.c)
 *     UsbhUnlockSSH @ 0x1C001BD2C (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0025C14 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C00564B4 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhIncHubBusy(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r12d
  struct _KEVENT *v9; // rdi
  struct _KEVENT *v10; // rbp
  __int64 Signalling; // r8
  __int64 v12; // rcx
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
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx

  v5 = a4;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v9 = *(struct _KEVENT **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( v9->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v10 = v9 + 139;
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1668172104;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = a5;
      *(_QWORD *)(v13 + 24) = Signalling;
    }
  }
  if ( v9[142].Header.Signalling )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v15 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      p_WaitListHead = &v9[129].Header.WaitListHead;
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
      ++v9[130].Header.LockNV;
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
          (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids,
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
            (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
        v29 = *(_QWORD *)(a1 + 64);
        if ( !v29 )
          UsbhTrapFatal_Dbg(a1, 0LL, v24, v25);
        if ( *(_DWORD *)v29 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v24, v25);
        *(_BYTE *)(v29 + 3408) = 1;
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
        Usbh_SSH_HubPendingSuspend(a1, 6LL, a2);
      }
      else if ( (_DWORD)v28 == 3 )
      {
        Usbh_SSH_HubPendingResumeAfterSuspend(a1, 6LL, a2);
      }
      else if ( (_DWORD)v28 == 4 )
      {
        Usbh_SSH_HubSuspended(a1, 6LL, a2);
      }
      else if ( (_DWORD)v28 == 5 )
      {
        Usbh_SSH_HubPendingResume(a1, 6LL, a2);
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
              (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
          FdoExt(a1, v28, v24, v25);
        }
        UsbhUnlockSSH(a2);
      }
    }
    return v15;
  }
  else
  {
    KeSetEvent(v9 + 139, 0, 0);
    return 0LL;
  }
}
