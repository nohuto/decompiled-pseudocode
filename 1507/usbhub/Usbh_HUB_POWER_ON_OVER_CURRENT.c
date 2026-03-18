/*
 * XREFs of Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C004C410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_HUB_POWER_ON_OVER_CURRENT(__int64 a1, const wchar_t *a2, _BYTE *a3, int a4)
{
  _UNKNOWN **result; // rax
  int v8; // ebx
  __int64 v9; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            (__int64)a3,
                            0x30u,
                            (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
                            a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v9) = a4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1u,
                              0x31u,
                              (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
                              v9);
    }
  }
  LOBYTE(v8) = *a3 != 0;
  *(_DWORD *)(a1 + 2560) ^= (*(_DWORD *)(a1 + 2560) ^ (v8 << 28)) & 0x10000000;
  return result;
}
