/*
 * XREFs of FastGetProfileStringFromIDW @ 0x1C007E110
 * Callers:
 *     xxxODI_ColorInit @ 0x1C007DE20 (xxxODI_ColorInit.c)
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0012C80 (RtlLoadStringOrError.c)
 *     FastGetProfileStringW @ 0x1C00317C0 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileStringFromIDW(
        __int64 a1,
        unsigned int a2,
        ULONG a3,
        char *a4,
        char *a5,
        unsigned int a6,
        int a7)
{
  WCHAR v11[80]; // [rsp+40h] [rbp-C8h] BYREF

  RtlLoadStringOrError(a3, v11, 80, 0);
  return FastGetProfileStringW(a1, a2, v11, a4, a5, a6, a7);
}
