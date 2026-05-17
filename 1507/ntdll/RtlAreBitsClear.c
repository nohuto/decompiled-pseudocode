/*
 * XREFs of RtlAreBitsClear @ 0x180077AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // r9
  unsigned int v4; // r11d
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  _DWORD *v7; // r10
  bool result; // al
  unsigned int v9; // r8d

  v3 = a2;
  v4 = a2 + a3 - 1;
  if ( v4 >= *(_DWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest(*(const signed __int32 **)(a1 + 8), a2);
    return 0;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (_DWORD *)(v5 + 4 * ((unsigned __int64)a2 >> 5));
  v7 = (_DWORD *)(v5 + 4 * ((unsigned __int64)v4 >> 5));
  if ( v6 == v7 )
  {
    v9 = 0xFFFFFFFF >> (32 - a3) << v3;
    return (v9 & *v6) == 0;
  }
  if ( ((-1 << v3) & *v6) != 0 )
    return 0;
  if ( ++v6 == v7 )
  {
LABEL_11:
    v9 = 0xFFFFFFFF >> (-1 - v4);
    return (v9 & *v6) == 0;
  }
  result = 0;
  while ( !*v6 )
  {
    if ( ++v6 == v7 )
      goto LABEL_11;
  }
  return result;
}
