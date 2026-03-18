/*
 * XREFs of ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18016967C
 * Callers:
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x180072D6C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007350C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A6FC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800A9C58 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 */

void __fastcall MilUnexpectedError(unsigned int a1, const unsigned __int16 *a2)
{
  unsigned int v2[4]; // [rsp+30h] [rbp-228h] BYREF
  unsigned __int16 v3[256]; // [rsp+40h] [rbp-218h] BYREF

  StringCchPrintfW(v3, 0x100uLL, (size_t *)L"MIL FAILURE: Unexpected HRESULT 0x%08x in caller: %s", a1, a2);
  DbgPrintEx(0x65u, 0, "%S\n", v3);
  v2[0] = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Avalon.Graphics", L"BreakOnUnexpectedErrors", v2) )
  {
    if ( v2[0] )
      AssertW(
        L"This break is due to an unexpected HRESULT in the caller, not this method.\n"
         "***   Investigate the stack capture to determine the source of the HRESULT.\n",
        0LL,
        L"MilUnexpectedError",
        L"onecoreuap\\windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
        0xB1u);
  }
}
