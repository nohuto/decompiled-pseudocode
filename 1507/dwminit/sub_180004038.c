/*
 * XREFs of sub_180004038 @ 0x180004038
 * Callers:
 *     sub_180003EA8 @ 0x180003EA8 (sub_180003EA8.c)
 *     sub_1800040A8 @ 0x1800040A8 (sub_1800040A8.c)
 * Callees:
 *     <none>
 */

__int64 sub_180004038()
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
