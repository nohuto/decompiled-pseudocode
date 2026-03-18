/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18016957C
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1801695EC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1801EAB4C;
  if ( !(_BYTE)word_1801EAB4C )
    return 0;
  v1 = HIBYTE(word_1801EAB4C);
  v2 = 1;
  if ( HIBYTE(word_1801EAB4C) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1801EAB4C, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1801EAB4C);
      v0 = word_1801EAB4C;
    }
    else
    {
      v0 = 1;
      word_1801EAB4C = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
