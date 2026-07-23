/*
 * XREFs of EtwpValidateFlagExtension @ 0x1404D083C
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateFlagExtension(unsigned int *a1)
{
  int v1; // r8d
  unsigned __int64 v3; // r9
  unsigned __int16 *v4; // r10
  unsigned __int16 v5; // dx
  unsigned __int16 *v6; // rcx
  unsigned __int16 v7; // dx
  unsigned __int16 i; // r8
  unsigned __int16 v9; // ax

  v1 = a1[18];
  if ( v1 >= 0 )
    return 0LL;
  if ( BYTE2(v1) != 0xFF )
    return 3221225485LL;
  if ( (unsigned __int16)v1 < 0xB0u )
    return 3221225485LL;
  v3 = *a1;
  if ( v3 < (unsigned __int64)(unsigned __int16)v1 + 4 )
    return 3221225485LL;
  v4 = (unsigned __int16 *)((char *)a1 + (unsigned __int16)v1);
  if ( (((_BYTE)v1 + (_BYTE)a1) & 1) != 0 )
    return 3221226181LL;
  v5 = *v4;
  if ( !*v4 || 4 * (unsigned __int64)v5 > (unsigned int)v3 - (unsigned __int16)v1 )
    return 3221225485LL;
  v6 = v4 + 2;
  v7 = v5 - 1;
  for ( i = 0; i < v4[1]; ++i )
  {
    if ( ((unsigned __int8)v6 & 1) != 0 )
      return 3221226181LL;
    if ( !v7 )
      return 3221225485LL;
    v9 = *v6;
    if ( v7 < *v6 )
      return 3221225485LL;
    v7 -= v9;
    v6 += 2 * v9;
  }
  return v7 != 0 ? 0xC000000D : 0;
}
