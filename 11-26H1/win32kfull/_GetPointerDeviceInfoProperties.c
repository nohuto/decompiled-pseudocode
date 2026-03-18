/*
 * XREFs of _GetPointerDeviceInfoProperties @ 0x1401D8D3C
 * Callers:
 *     NtUserGetPointerDevice @ 0x1401D8C60 (NtUserGetPointerDevice.c)
 *     NtUserGetPointerDevices @ 0x14025C900 (NtUserGetPointerDevices.c)
 * Callees:
 *     PHIDTtoPT @ 0x1401D8DD4 (PHIDTtoPT.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1401D8E24 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int16 v5; // cx
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 384) )
    RtlStringCbCopyUnicodeString((unsigned __int16 *)(a1 + 38), 0x410uLL, (const struct _UNICODE_STRING *)(a2 + 376));
  else
    *(_WORD *)(a1 + 38) = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 792);
  *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2, a2);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 1336);
  v5 = *(_WORD *)(a2 + 776) - 1;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    v5 = *(_WORD *)(a2 + 776);
  *(_WORD *)(a1 + 36) = v5;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 4LL);
  result = *(unsigned int *)(a2 + 224);
  *(_DWORD *)a1 = result;
  return result;
}
