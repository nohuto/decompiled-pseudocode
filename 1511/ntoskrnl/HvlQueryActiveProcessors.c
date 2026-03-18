/*
 * XREFs of HvlQueryActiveProcessors @ 0x1401AE990
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveProcessors(unsigned int *a1, int *a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned int v5; // r9d
  int *v6; // r10
  __int64 v7; // r11
  int v8; // eax

  if ( (HvlpFlags & 4) == 0 )
    return 3221225506LL;
  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v4 = HvlpLogicalProcessorCount;
  if ( a2 )
  {
    v5 = *a1;
    if ( HvlpLogicalProcessorCount < *a1 )
      v5 = HvlpLogicalProcessorCount;
    if ( v5 )
    {
      v6 = &dword_140387144;
      v7 = v5;
      do
      {
        v8 = *v6;
        v6 += 26;
        *a2++ = v8;
        --v7;
      }
      while ( v7 );
    }
    result = *a1 < v4 ? 0xC0000023 : 0;
  }
  *a1 = v4;
  return result;
}
