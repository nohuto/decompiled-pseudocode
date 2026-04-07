/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009B0F0
 * Callers:
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x18009AD60 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18009AE54 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18009B030 (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18009B080 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18009B1DC (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
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
