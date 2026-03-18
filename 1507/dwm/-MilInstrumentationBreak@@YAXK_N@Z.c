/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140004E48
 * Callers:
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140004D9C (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1400054BC (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x14000552C (-AssertW@@YAXPEBG000K@Z.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x14000576C (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1400057BC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall MilInstrumentationBreak(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v2; // bl
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v3) = (_BYTE)a2;
  v2 = (char)a1;
  if ( !g_fDisableInstrumentationBreaks )
  {
    v3 = 0;
    if ( RegGetHKLMDword(a1, a2, &v3)
      && !v3
      && ((v2 & 8) == 0
       || (unsigned int)IsKernelDebuggerPresent()
       || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled()) )
    {
      AssertW(
        L"Unexpected HRESULT in MilInstrumentation* caller",
        0LL,
        L"MilInstrumentationBreak",
        L"windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
        0xDDu);
    }
  }
}
