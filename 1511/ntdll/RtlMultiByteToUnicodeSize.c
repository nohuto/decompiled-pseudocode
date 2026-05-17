/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x180083150
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x180083120 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMultiByteToUnicodeSize(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  int v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( NlsMbCodePageTag )
  {
    while ( a3 )
    {
      v5 = *a2;
      --a3;
      ++a2;
      if ( NlsLeadByteInfoTable[v5] )
      {
        if ( !a3 )
        {
          v3 += 2;
          break;
        }
        --a3;
        ++a2;
      }
      v3 += 2;
    }
    *a1 = v3;
  }
  else
  {
    *a1 = 2 * a3;
  }
  return 0LL;
}
