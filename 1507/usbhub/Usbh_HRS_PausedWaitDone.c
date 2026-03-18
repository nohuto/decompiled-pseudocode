/*
 * XREFs of Usbh_HRS_PausedWaitDone @ 0x1C0046E10
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C0015DC8 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhReleaseResetLock @ 0x1C0004280 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_PausedWaitDone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _DWORD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  unsigned int v11; // ebx
  int v13; // [rsp+28h] [rbp-10h]

  v5 = (int)a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  FdoExt(*(_QWORD *)(a1 + 8), v7, v8, v9);
  v10 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920161616, a1, v5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = v5;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x11u,
      (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
      v13);
  }
  if ( (_DWORD)v5 == 4 || (_DWORD)v5 == 7 )
  {
    v11 = UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, 6u);
    KeSetEvent((PRKEVENT)(v6 + 712), 0, 0);
  }
  else
  {
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v10);
  }
  return v11;
}
