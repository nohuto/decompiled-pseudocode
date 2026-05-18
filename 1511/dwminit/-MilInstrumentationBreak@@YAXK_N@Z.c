/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180004168
 * Callers:
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x180003D54 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     BreakForInstrumentation @ 0x18000412C (BreakForInstrumentation.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800042A8 (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800042F8 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180004368 (-AssertW@@YAXPEBG000K@Z.c)
 */

void __fastcall MilInstrumentationBreak(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v2; // bl

  v2 = (char)a1;
  if ( BreakForInstrumentation(a1, a2)
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
