/*
 * XREFs of Usbh_USB_OS_VENDOR_CODE @ 0x1C000BD00
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 */

void __fastcall Usbh_USB_OS_VENDOR_CODE(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      30,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        31,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        a4);
  }
  if ( a4 >= 2 )
  {
    v7 = PdoExt(a1);
    *(_DWORD *)(v7 + 1424) &= ~0x200u;
    if ( *a3 )
    {
      v9 = PdoExt(a1);
      *(_DWORD *)(v9 + 1424) |= 0x400u;
      *(_BYTE *)(PdoExt(a1) + 1424) = a3[1];
    }
    else
    {
      v8 = PdoExt(a1);
      *(_DWORD *)(v8 + 1424) &= ~0x400u;
    }
  }
}
