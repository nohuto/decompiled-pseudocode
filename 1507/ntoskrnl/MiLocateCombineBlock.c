/*
 * XREFs of MiLocateCombineBlock @ 0x14022AA70
 * Callers:
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 * Callees:
 *     MiCombineCompare @ 0x140227AFC (MiCombineCompare.c)
 */

_QWORD *__fastcall MiLocateCombineBlock(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  int v4; // eax
  _BYTE v6[24]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+48h] [rbp-20h]

  v7 = a2;
  v8 = a3;
  v3 = *(_QWORD **)(a1 + 16 * ((a2 & 0xF) + 6));
  if ( !v3 )
    return 0LL;
  do
  {
    v4 = MiCombineCompare((__int64)v6, (__int64)v3);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        break;
      v3 = (_QWORD *)v3[1];
    }
    else
    {
      v3 = (_QWORD *)*v3;
    }
  }
  while ( v3 );
  if ( v3 )
    return v3;
  else
    return 0LL;
}
