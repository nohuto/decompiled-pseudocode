/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800042F8
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180004168 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180004368 (-AssertW@@YAXPEBG000K@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_18000C064;
  if ( !(_BYTE)word_18000C064 )
    return 0;
  v1 = HIBYTE(word_18000C064);
  v2 = 1;
  if ( HIBYTE(word_18000C064) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_18000C064, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_18000C064);
      v0 = word_18000C064;
    }
    else
    {
      v0 = 1;
      word_18000C064 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
