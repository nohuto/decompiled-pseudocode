/*
 * XREFs of NormBuffer__SortBeforeSameClass @ 0x140215568
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x140214FD0 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x140215054 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__PageLookup @ 0x140582044 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x140582054 (Normalization__TableLookup.c)
 */

char __fastcall NormBuffer__SortBeforeSameClass(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int16 *v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int16 *v16; // r11
  unsigned __int16 *v18; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[5];
  v4 = a1[10];
  a1[13] = v2;
  if ( v2 != v4 )
  {
    v18 = (unsigned __int16 *)(v2 - 2);
    LODWORD(v2) = NormBuffer__GetCurrentOutputChar((__int64)a1, &v18);
    v7 = (unsigned __int16 *)(v6 - 2);
    v8 = (unsigned int)v2;
    if ( *(int *)(v5 + 88) > 0xFFFF )
      --v7;
    if ( v18 != v7 )
    {
      v9 = *(_QWORD *)(v5 + 112);
      do
      {
        LOBYTE(v10) = Normalization__PageLookup(v9, v8);
        LOBYTE(v2) = Normalization__TableLookup(v12, v11, v10) & 0x3F;
        if ( (unsigned __int8)v2 < a2 )
          break;
        *(_QWORD *)(v15 + 104) = v14;
        v18 = (unsigned __int16 *)(v14 - 2);
        LODWORD(v2) = NormBuffer__GetCurrentOutputChar(v13, &v18);
        v8 = (unsigned int)v2;
      }
      while ( v18 != v16 );
    }
  }
  return v2;
}
