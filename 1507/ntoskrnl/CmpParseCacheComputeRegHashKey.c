/*
 * XREFs of CmpParseCacheComputeRegHashKey @ 0x14044C048
 * Callers:
 *     CmpParseCacheLookup @ 0x14044BDF8 (CmpParseCacheLookup.c)
 *     CmpParseCacheAllocEntry @ 0x1404EA4A4 (CmpParseCacheAllocEntry.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
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
