/*
 * XREFs of Usbh_USB_OS_VENDOR_CODE @ 0x1C0028300
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 */

void __fastcall Usbh_USB_OS_VENDOR_CODE(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v4; // edi
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v4 = a4;
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
        v4);
  }
  if ( v4 >= 2 )
  {
    v7 = PdoExt(a1, a2, (__int64)a3, a4);
    v7[356] &= ~0x200u;
    if ( *a3 )
    {
      v12 = PdoExt(a1, v8, v9, v10);
      v12[356] |= 0x400u;
      *((_BYTE *)PdoExt(a1, v13, v14, v15) + 1424) = a3[1];
    }
    else
    {
      v11 = PdoExt(a1, v8, v9, v10);
      v11[356] &= ~0x400u;
    }
  }
}
