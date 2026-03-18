/*
 * XREFs of ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18013EF28
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007B3A4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18007B964 (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800AF354 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800AF7D0 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BC5A0 (-AssertW@@YAXPEBG000K@Z.c)
 */

void __fastcall MilUnexpectedError(unsigned int a1, const unsigned __int16 *a2)
{
  unsigned int v2[4]; // [rsp+30h] [rbp-228h] BYREF
  wchar_t Buffer[256]; // [rsp+40h] [rbp-218h] BYREF

  StringCchPrintfW(Buffer, 256LL, L"MIL FAILURE: Unexpected HRESULT 0x%08x in caller: %s", a1, a2);
  DbgPrintEx(0x65u, 0, "%S\n", Buffer);
  v2[0] = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Avalon.Graphics", L"BreakOnUnexpectedErrors", v2) )
  {
    if ( v2[0] )
      AssertW(
        L"This break is due to an unexpected HRESULT in the caller, not this method.\n"
         "***   Investigate the stack capture to determine the source of the HRESULT.\n",
        0LL,
        L"MilUnexpectedError",
        L"windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
        0xB1u);
  }
}
