/*
 * XREFs of UsbhTimerPnpStop @ 0x1C0045D50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C0009434 (UsbhReferenceListRemove.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     UsbhDmDisableTimer @ 0x1C0045B14 (UsbhDmDisableTimer.c)
 */

void __fastcall UsbhTimerPnpStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_b1f65ad2a9363596a18d026b279b8408_Traceguids);
  v5 = FdoExt(a1, a2, a3, a4);
  Log(a1, 0x2000, 1684886352, a1, 0LL);
  if ( (v5[640] & 0x2000000) != 0 )
  {
    UsbhDmDisableTimer(a1, v6, v7, v8);
    v5[640] &= ~0x2000000u;
    Log(a1, 0x2000, 1684886321, a1, 0LL);
    UsbhReferenceListRemove(a1, (__int64)(v5 + 936));
  }
}
