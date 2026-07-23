/*
 * XREFs of RtlAreBitsClearEx @ 0x140211DE8
 * Callers:
 *     MiHotAddPartitionMemory @ 0x1406606BC (MiHotAddPartitionMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // r9
  unsigned __int64 v4; // r11
  bool result; // al
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r10
  unsigned __int64 v9; // r9

  v3 = a3;
  v4 = a3 + a2 - 1;
  if ( v4 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (_QWORD *)(v6 + 8 * (a2 >> 6));
  v8 = (_QWORD *)(v6 + 8 * (v4 >> 6));
  if ( v7 == v8 )
  {
    v9 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - v3) << a2;
    return (*v7 & v9) == 0;
  }
  if ( ((-1LL << a2) & *v7) != 0 )
    return 0;
  if ( ++v7 == v8 )
  {
LABEL_13:
    v9 = 0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v4);
    return (*v7 & v9) == 0;
  }
  result = 0;
  while ( !*v7 )
  {
    if ( ++v7 == v8 )
      goto LABEL_13;
  }
  return result;
}
