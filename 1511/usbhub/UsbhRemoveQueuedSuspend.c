/*
 * XREFs of UsbhRemoveQueuedSuspend @ 0x1C00418D4
 * Callers:
 *     Usbh_PCE_Disable_Action @ 0x1C0013310 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0014370 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0017330 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C0023B00 (Usbh_PCE_HardwareWake_Action.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042A38 (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall UsbhRemoveQueuedSuspend(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  _QWORD *i; // r10
  _QWORD *v9; // r10
  void *v10; // r11
  __int64 v11; // r8
  _QWORD *v12; // rax
  int v13; // [rsp+28h] [rbp-10h]

  Log(a1, 512, 1969836099, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x56u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v13);
  }
  FdoExt(a1, v4, v5, v6);
  result = a2 + 456;
  for ( i = *(_QWORD **)(a2 + 456); i != (_QWORD *)result; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 2) == 0x40000 )
    {
      Log(a1, 512, 1718375253, a2, (__int64)(i - 2));
      v11 = *v9;
      v12 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v12 != v9 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      ExFreePoolWithTag(v10, 0);
      return UsbhiSignalSuspendEvent(a1, a2);
    }
  }
  return result;
}
