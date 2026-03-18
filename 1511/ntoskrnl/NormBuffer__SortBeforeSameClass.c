/*
 * XREFs of NormBuffer__SortBeforeSameClass @ 0x1401FB404
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1401FAE68 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1401FAEEC (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__PageLookup @ 0x14054F7A8 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x14054F7B8 (Normalization__TableLookup.c)
 */

char __fastcall NormBuffer__SortBeforeSameClass(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r11
  unsigned __int16 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int16 *v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[5];
  v4 = a1[10];
  a1[13] = v2;
  if ( v2 != v4 )
  {
    v16 = (unsigned __int16 *)(v2 - 2);
    LODWORD(v2) = NormBuffer__GetCurrentOutputChar((__int64)a1, &v16);
    v6 = (unsigned __int16 *)(v4 - 2);
    v7 = (unsigned int)v2;
    if ( *(int *)(v5 + 88) > 0xFFFF )
      --v6;
    if ( v16 != v6 )
    {
      v8 = *(_QWORD *)(v5 + 112);
      do
      {
        LOBYTE(v9) = Normalization__PageLookup(v8, v7);
        LOBYTE(v2) = Normalization__TableLookup(v11, v10, v9) & 0x3F;
        if ( (unsigned __int8)v2 < a2 )
          break;
        *(_QWORD *)(v14 + 104) = v13;
        v16 = (unsigned __int16 *)(v13 - 2);
        LODWORD(v2) = NormBuffer__GetCurrentOutputChar(v12, &v16);
        v7 = (unsigned int)v2;
      }
      while ( v16 != v6 );
    }
  }
  return v2;
}
