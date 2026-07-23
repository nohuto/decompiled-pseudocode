/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x1800EC210
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x18001B9DC (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x1800EC920 (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *a1, __int64 a2, int a3, char a4)
{
  int v4; // r10d
  int v5; // eax
  int v6; // edx
  int v7; // r8d

  if ( a1 )
  {
    v4 = a1[2];
    if ( a3 < 0 )
      a3 = 16;
    v5 = a3 + a1[5];
    v6 = a1[3] + 1;
    v7 = a1[4];
    if ( v6 < v4 )
      v6 = a1[2];
    if ( v5 < v7 )
      v5 = a1[4];
    if ( a4 || v6 != v4 || v5 != v7 )
      return RtlpMuiRegResizeStringPool(a1);
  }
  return (__int64)a1;
}
