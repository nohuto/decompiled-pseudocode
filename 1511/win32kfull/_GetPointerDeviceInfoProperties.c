/*
 * XREFs of _GetPointerDeviceInfoProperties @ 0x1C011D9A0
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C011D6A0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDevice @ 0x1C0147E70 (NtUserGetPointerDevice.c)
 * Callees:
 *     ?GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C011DA44 (-GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     PHIDTtoPT @ 0x1C011DAA0 (PHIDTtoPT.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C011DACC (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2)
{
  int v4; // esi
  struct tagHID_POINTER_DEVICE_INFO *v5; // rcx
  __int16 v6; // ax

  if ( *(_QWORD *)(a2 + 296) )
  {
    v4 = RtlStringCbCopyUnicodeString(
           (unsigned __int16 *)(a1 + 38),
           0x410uLL,
           (const struct _UNICODE_STRING *)(a2 + 288));
  }
  else
  {
    *(_WORD *)(a1 + 38) = 0;
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 736);
    *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2);
    *(_QWORD *)(a1 + 24) = GetPointerDeviceMonitor(v5);
    v6 = *(_WORD *)(a2 + 720);
    if ( *(_DWORD *)(a2 + 24) == 8 )
      --v6;
    *(_WORD *)(a1 + 36) = v6;
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 328) + 4LL);
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 724);
  }
  return (unsigned int)v4;
}
