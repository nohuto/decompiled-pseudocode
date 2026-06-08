/*
 * XREFs of PerfControlLegacyPcc @ 0x1C0008030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfControlLegacyPcc(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, char a7, char a8)
{
  __int64 result; // rax

  if ( a7 )
  {
    if ( !a8 )
    {
      result = (unsigned int)(100 - a2);
      *(_DWORD *)(a1 + 24) = result;
    }
  }
  return result;
}
