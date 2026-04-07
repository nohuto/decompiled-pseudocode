/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18009B080
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18009AE54 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009B0F0 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1800B7130;
  if ( !(_BYTE)word_1800B7130 )
    return 0;
  v1 = HIBYTE(word_1800B7130);
  v2 = 1;
  if ( HIBYTE(word_1800B7130) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1800B7130, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1800B7130);
      v0 = word_1800B7130;
    }
    else
    {
      v0 = 1;
      word_1800B7130 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
