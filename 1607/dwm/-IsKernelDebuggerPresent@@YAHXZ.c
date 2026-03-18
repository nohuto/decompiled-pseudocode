/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1400057F4
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x140005564 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140005860 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl

  v0 = word_14000A17C;
  if ( !(_BYTE)word_14000A17C )
    return 0LL;
  v1 = HIBYTE(word_14000A17C);
  if ( HIBYTE(word_14000A17C) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_14000A17C, 2u, 0LL) < 0 )
    {
      word_14000A17C = 257;
      return 0LL;
    }
    v1 = HIBYTE(word_14000A17C);
    v0 = word_14000A17C;
  }
  return v0 && !v1;
}
