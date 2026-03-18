/*
 * XREFs of CmpParseCacheComputeRegHashKey @ 0x1403BB524
 * Callers:
 *     CmpParseCacheAllocEntry @ 0x1403BB2A0 (CmpParseCacheAllocEntry.c)
 *     CmpParseCacheLookup @ 0x1403BB324 (CmpParseCacheLookup.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpParseCacheComputeRegHashKey(__int64 a1)
{
  unsigned int v1; // ebx
  WCHAR *v2; // rdi
  __int64 v3; // rsi
  WCHAR v4; // ax
  int v5; // ecx

  v1 = 0;
  v2 = *(WCHAR **)(a1 + 8);
  if ( *(_WORD *)a1 )
  {
    v3 = (unsigned __int16)(((unsigned __int16)(*(_WORD *)a1 - 1) >> 1) + 1);
    while ( 1 )
    {
      v4 = *v2;
      if ( *v2 != 92 )
        break;
LABEL_7:
      ++v2;
      if ( !--v3 )
        return v1;
    }
    if ( v4 >= 0x61u )
    {
      if ( v4 <= 0x7Au )
      {
        v5 = v4 - 32;
        goto LABEL_6;
      }
      v4 = RtlUpcaseUnicodeChar(v4);
    }
    v5 = v4;
LABEL_6:
    v1 = v5 + 37 * v1;
    goto LABEL_7;
  }
  return v1;
}
