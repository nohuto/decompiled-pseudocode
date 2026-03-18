/*
 * XREFs of FastGetProfileStringFromIDW @ 0x1C006C9D0
 * Callers:
 *     xxxODI_ColorInit @ 0x1C006C4E0 (xxxODI_ColorInit.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C001F400 (FastGetProfileStringW.c)
 *     RtlLoadStringOrError @ 0x1C006CA70 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileStringFromIDW(
        __int64 a1,
        unsigned int a2,
        ULONG a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned int a6,
        int a7)
{
  WCHAR v11[80]; // [rsp+40h] [rbp-C8h] BYREF

  RtlLoadStringOrError(a3, v11);
  return FastGetProfileStringW(a1, a2, v11, a4, a5, a6, a7);
}
