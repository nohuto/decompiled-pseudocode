/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1801695EC
 * Callers:
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x1800475B8 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800A9C58 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18016952C (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18016957C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall MilInstrumentationBreak(char a1, char a2)
{
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v3) = a2;
  if ( !g_fDisableInstrumentationBreaks )
  {
    v3 = 0;
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Avalon.Graphics", L"DisableInstrumentationBreaking", &v3)
      && !v3
      && ((a1 & 8) == 0
       || (unsigned int)IsKernelDebuggerPresent()
       || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled()) )
    {
      AssertW(
        L"Unexpected HRESULT in MilInstrumentation* caller",
        0LL,
        L"MilInstrumentationBreak",
        L"onecoreuap\\windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
        0xDDu);
    }
  }
}
