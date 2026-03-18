/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18013EE28
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BC5A0 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18013EE98 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_18019E060;
  if ( !(_BYTE)word_18019E060 )
    return 0;
  v1 = HIBYTE(word_18019E060);
  v2 = 1;
  if ( HIBYTE(word_18019E060) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_18019E060, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_18019E060);
      v0 = word_18019E060;
    }
    else
    {
      v0 = 1;
      word_18019E060 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
