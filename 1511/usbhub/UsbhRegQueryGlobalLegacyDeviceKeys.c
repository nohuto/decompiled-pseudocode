/*
 * XREFs of UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0006AFC
 * Callers:
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0007D40 (UsbhGetRegUsbDeviceFlags.c)
 * Callees:
 *     UsbhRegQueryGlobalKey @ 0x1C0007310 (UsbhRegQueryGlobalKey.c)
 *     RtlStringCbPrintfW @ 0x1C0008850 (RtlStringCbPrintfW.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhRegQueryGlobalLegacyDeviceKeys(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v5; // rdi
  unsigned int GlobalKey; // esi
  int v7; // r8d
  __int64 v9; // [rsp+20h] [rbp-E0h]
  __int16 v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  __int16 *v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h]
  void *v15; // [rsp+70h] [rbp-90h] BYREF
  int v16; // [rsp+78h] [rbp-88h]
  wchar_t *v17; // [rsp+80h] [rbp-80h]
  int *v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A0h] [rbp-60h]
  void *v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+B0h] [rbp-50h]
  const wchar_t *v24; // [rsp+B8h] [rbp-48h]
  int *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  __int64 v29; // [rsp+E0h] [rbp-20h]
  int v30; // [rsp+E8h] [rbp-18h]
  __int64 v31; // [rsp+F0h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      72,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids);
  v3 = PdoExt(a2);
  *(_DWORD *)(v3 + 1424) &= ~0x800u;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x36uLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x36uLL);
  v10 = 0;
  LODWORD(v9) = *(unsigned __int16 *)(v3 + 1402);
  GlobalKey = RtlStringCbPrintfW(v5, 0x36uLL, L"IgnoreHWSerNum%04x%04x", *(unsigned __int16 *)(v3 + 1400), v9);
  if ( (GlobalKey & 0xC0000000) != 0xC0000000 )
  {
    v16 = 0;
    v15 = &UsbhQueryGlobalLegacyDeviceValue;
    v12 = &v10;
    v22 = &UsbhQueryGlobalLegacyDeviceValue;
    v18 = &v11;
    v17 = v5;
    v11 = 3;
    v19 = 3;
    v20 = 0LL;
    v23 = 0;
    v21 = 2;
    v24 = L"GenericUSBDeviceString";
    v13 = 0;
    v14 = v3 + 2184;
    v25 = &v13;
    v26 = 0;
    v27 = 0LL;
    v28 = 0;
    v29 = 0LL;
    v30 = 0;
    v31 = 0LL;
    GlobalKey = UsbhRegQueryGlobalKey(2, (unsigned int)L"usbflags", 2, (unsigned int)&v15, 168);
    if ( (GlobalKey & 0xC0000000) != 0xC0000000 )
    {
      if ( (_BYTE)v10 )
        *(_DWORD *)(v3 + 1424) |= 0x800u;
    }
  }
  if ( *(_DWORD *)(v3 + 2188) )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v7,
        73,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        *(_QWORD *)(v3 + 2192));
  }
  ExFreePoolWithTag(v5, 0);
  return GlobalKey;
}
