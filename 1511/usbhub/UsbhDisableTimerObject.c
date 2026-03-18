/*
 * XREFs of UsbhDisableTimerObject @ 0x1C000E0A0
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhSshEnterSx @ 0x1C00028D4 (UsbhSshEnterSx.c)
 *     UsbhHubStart @ 0x1C000A268 (UsbhHubStart.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C000CBE0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FDC0 (UsbhSshSetPortsBusyState.c)
 *     UsbhSshSuspendHub @ 0x1C001068C (UsbhSshSuspendHub.c)
 *     UsbhInitCallbackWorker @ 0x1C001FA50 (UsbhInitCallbackWorker.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003DA9C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003DB60 (Usbh_PIND_SetAuto_Action.c)
 *     UsbhFreeTimerObject @ 0x1C0045A08 (UsbhFreeTimerObject.c)
 *     UsbhAsyncStop @ 0x1C004ABBC (UsbhAsyncStop.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0056290 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x1C0056334 (UsbhSshDisabled.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDisableTimerObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  KIRQL v7; // al
  __int16 v8; // cx
  __int64 v9; // r9
  KIRQL v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  if ( a2 )
  {
    if ( dword_1C0067650 )
    {
      if ( *(_DWORD *)v6 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v6, a3, a4);
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_DISABLE_TIMER, 0LL);
    }
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
    v8 = UsbhLogMask;
    v9 = *(int *)(a2 + 4);
    v10 = v7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 827618148;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v9;
        v8 = UsbhLogMask;
      }
    }
    if ( *(_DWORD *)(a2 + 4) == 1 )
    {
      if ( (v8 & 0x2000) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v14 = 844395364;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 16) = a2;
          *(_QWORD *)(v14 + 24) = 1LL;
        }
      }
      v15 = *(_QWORD *)(a2 + 56);
      v16 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v15 + 8) != a2 + 56 || *v16 != a2 + 56 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
    else
    {
      Log(a1, 0x2000, 1685279795, a2, *(int *)(a2 + 4));
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v10);
  }
}
