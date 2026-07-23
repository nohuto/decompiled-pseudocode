/*
 * XREFs of HvlQueryActiveProcessors @ 0x1401BAD8C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveProcessors(unsigned int *a1, int *a2)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  int *v5; // r10
  __int64 v6; // r11
  int v7; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v3 = HvlpActiveProcessorCount;
  if ( a2 )
  {
    v4 = *a1;
    if ( HvlpActiveProcessorCount < *a1 )
      v4 = HvlpActiveProcessorCount;
    if ( v4 )
    {
      v5 = &dword_1403AF024;
      v6 = v4;
      do
      {
        v7 = *v5;
        v5 += 28;
        *a2++ = v7;
        --v6;
      }
      while ( v6 );
    }
    result = *a1 < v3 ? 0xC0000023 : 0;
  }
  *a1 = v3;
  return result;
}
