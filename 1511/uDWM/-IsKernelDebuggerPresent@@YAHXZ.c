/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18009E4E8
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18009E2BC (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009E558 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1800BB064;
  if ( !(_BYTE)word_1800BB064 )
    return 0;
  v1 = HIBYTE(word_1800BB064);
  v2 = 1;
  if ( HIBYTE(word_1800BB064) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1800BB064, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1800BB064);
      v0 = word_1800BB064;
    }
    else
    {
      v0 = 1;
      word_1800BB064 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
