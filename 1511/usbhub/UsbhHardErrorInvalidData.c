/*
 * XREFs of UsbhHardErrorInvalidData @ 0x1C0050490
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A8B0 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhHardErrorInvalidData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // [rsp+28h] [rbp-30h]

  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v7);
  }
  Log(a1, 1024, 1883852374, a2, 0LL);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 62LL, (const void *)a2, 0xB70u, -1, -1, usbfile_busfunc_c, 1127, 0);
  return 3LL;
}
