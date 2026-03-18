/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x14000583C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140004EC8 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1400055AC (-AssertW@@YAXPEBG000K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl

  v0 = word_14000A164;
  if ( !(_BYTE)word_14000A164 )
    return 0LL;
  v1 = HIBYTE(word_14000A164);
  if ( HIBYTE(word_14000A164) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_14000A164, 2u, 0LL) < 0 )
    {
      word_14000A164 = 257;
      return 0LL;
    }
    v1 = HIBYTE(word_14000A164);
    v0 = word_14000A164;
  }
  return v0 && !v1;
}
