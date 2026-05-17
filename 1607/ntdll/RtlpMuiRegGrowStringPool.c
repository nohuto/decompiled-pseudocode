/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x1800F4F84
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x180040D0C (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x1800F5694 (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *a1, __int64 a2, int a3, char a4)
{
  int v4; // r10d
  int v5; // eax
  __int64 v6; // rdx
  int v7; // r8d

  if ( a1 )
  {
    v4 = a1[2];
    if ( a3 < 0 )
      a3 = 16;
    v5 = a3 + a1[5];
    v6 = (unsigned int)a1[3] + 1;
    v7 = a1[4];
    if ( (int)v6 < v4 )
      v6 = a1[2];
    if ( v5 < v7 )
      v5 = a1[4];
    if ( a4 || (_DWORD)v6 != v4 || v5 != v7 )
      return RtlpMuiRegResizeStringPool(a1, v6, (unsigned __int16)v5);
  }
  return (__int64)a1;
}
