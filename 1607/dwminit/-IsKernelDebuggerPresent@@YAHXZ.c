/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18000442C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18000429C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18000449C (-AssertW@@YAXPEBG000K@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_18000D098;
  if ( !(_BYTE)word_18000D098 )
    return 0;
  v1 = HIBYTE(word_18000D098);
  v2 = 1;
  if ( HIBYTE(word_18000D098) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_18000D098, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_18000D098);
      v0 = word_18000D098;
    }
    else
    {
      v0 = 1;
      word_18000D098 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
