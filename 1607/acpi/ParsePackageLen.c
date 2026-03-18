/*
 * XREFs of ParsePackageLen @ 0x1C0061828
 * Callers:
 *     ParseFieldConnection @ 0x1C00614D8 (ParseFieldConnection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParsePackageLen(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // r8d
  unsigned __int8 *v4; // r11
  unsigned __int8 v5; // r9
  unsigned __int8 i; // bl
  int v7; // eax
  unsigned __int8 v8; // cl

  if ( a2 )
    *a2 = *a1;
  v3 = *(unsigned __int8 *)*a1;
  v4 = (unsigned __int8 *)(*a1 + 1LL);
  *a1 = v4;
  v5 = (v3 >> 6) & 3;
  if ( v5 )
  {
    v3 &= 0xFu;
    for ( i = 0; i < v5; ++i )
    {
      v7 = *v4++;
      v8 = i;
      *a1 = v4;
      v3 |= v7 << (8 * v8 + 4);
    }
  }
  if ( a2 )
    *a2 += v3;
  return v3;
}
