/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x180128F8C
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180128D60 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180128FFC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_180190050;
  if ( !(_BYTE)word_180190050 )
    return 0;
  v1 = HIBYTE(word_180190050);
  v2 = 1;
  if ( HIBYTE(word_180190050) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_180190050, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_180190050);
      v0 = word_180190050;
    }
    else
    {
      v0 = 1;
      word_180190050 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
