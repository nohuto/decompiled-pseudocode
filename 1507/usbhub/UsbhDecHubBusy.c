/*
 * XREFs of UsbhDecHubBusy @ 0x1C000BC70
 * Callers:
 *     UsbhSshEnterSx @ 0x1C00028D4 (UsbhSshEnterSx.c)
 *     UsbhSshExitSx @ 0x1C0002D34 (UsbhSshExitSx.c)
 *     UsbhDriverResetPort @ 0x1C00049E0 (UsbhDriverResetPort.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0004B60 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPortConnect @ 0x1C000A1C0 (UsbhPortConnect.c)
 *     UsbhSshResumeUpstream @ 0x1C000A9A0 (UsbhSshResumeUpstream.c)
 *     UsbhSshBusBusy @ 0x1C000B654 (UsbhSshBusBusy.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhSshPortsBusy @ 0x1C000B91C (UsbhSshPortsBusy.c)
 *     UsbhPdoPnp_QueryId @ 0x1C000B9B0 (UsbhPdoPnp_QueryId.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000D1E0 (Usbh_PCE_Resume_Action.c)
 *     UsbhBusResume_Action @ 0x1C000FDA0 (UsbhBusResume_Action.c)
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0018360 (UsbhSshSetPortsBusyState.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshEnabled @ 0x1C001C640 (UsbhSshEnabled.c)
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0021590 (UsbhBusIf_ResumeChildHub.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E308 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhSshBusIdle @ 0x1C003F1AC (UsbhSshBusIdle.c)
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
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00544B0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x1C00561C4 (UsbhSshDisabled.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhDecHubBusy(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct _KEVENT *v6; // rbx
  __int64 Signalling; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  volatile int Lock; // eax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(struct _KEVENT **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( v6->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v6[142].Header.Type = 1;
  KeWaitForSingleObject(&v6[139], Executive, 0, 0, 0LL);
  Signalling = v6[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1667581000;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a3;
      *(_QWORD *)(v9 + 24) = Signalling;
    }
  }
  if ( v6[142].Header.Signalling )
  {
    if ( a3 == (_QWORD *)1936941672 )
    {
      Lock = v6[130].Header.Lock;
      if ( Lock )
        v6[130].Header.LockNV = Lock - 1;
    }
    else if ( a3 )
    {
      v10 = a3[1];
      v11 = a3 + 1;
      v12 = (_QWORD *)a3[2];
      if ( *(_QWORD **)(v10 + 8) != a3 + 1 || (_QWORD *)*v12 != v11 )
        __fastfail(3u);
      *v12 = v10;
      *(_QWORD *)(v10 + 8) = v12;
      a3[2] = a3 + 1;
      *v11 = v11;
      ExFreePoolWithTag(a3, 0);
    }
  }
  return KeSetEvent(v6 + 139, 0, 0);
}
