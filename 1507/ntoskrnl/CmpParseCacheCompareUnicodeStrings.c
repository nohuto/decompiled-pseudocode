/*
 * XREFs of CmpParseCacheCompareUnicodeStrings @ 0x14044C208
 * Callers:
 *     CmpParseCacheLookupByHash @ 0x14044C0C8 (CmpParseCacheLookupByHash.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 */

bool __fastcall CmpParseCacheCompareUnicodeStrings(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4)
{
  WCHAR *v4; // rbx
  char v5; // di
  char v6; // r12
  WCHAR *v7; // r14
  char v8; // r8
  int v9; // r10d
  WCHAR *v10; // r13
  WCHAR *v11; // rsi
  WCHAR v12; // bp
  int v13; // r15d
  WCHAR v14; // ax
  int v15; // ecx
  __int16 v16; // si
  int v18; // [rsp+20h] [rbp-58h]
  char v19; // [rsp+80h] [rbp+8h]
  char v20; // [rsp+88h] [rbp+10h]

  v4 = (WCHAR *)*((_QWORD *)a1 + 1);
  v5 = 0;
  v6 = 1;
  v7 = (WCHAR *)*((_QWORD *)a2 + 1);
  v8 = 1;
  v9 = 0;
  v19 = 1;
  v20 = 0;
  v18 = 0;
  v10 = &v4[(unsigned __int64)*a1 >> 1];
  v11 = &v7[(unsigned __int64)*a2 >> 1];
  if ( v4 < v10 )
  {
    while ( 1 )
    {
      if ( v7 >= v11 )
      {
LABEL_13:
        v9 = v18;
        break;
      }
      if ( v8 )
      {
        while ( v4 < v10 && *v4 == 92 )
          ++v4;
        do
        {
          if ( *v7 != 92 )
            break;
          ++v7;
        }
        while ( v7 < v11 );
        v20 = 1;
        v8 = 0;
        v19 = 0;
        goto LABEL_12;
      }
      v12 = *v4;
      if ( *v4 >= 0x61u )
      {
        if ( v12 > 0x7Au )
          v13 = RtlUpcaseUnicodeChar(v12);
        else
          v13 = v12 - 32;
      }
      else
      {
        v13 = v12;
      }
      v14 = *v7;
      if ( *v7 >= 0x61u )
      {
        if ( v14 <= 0x7Au )
        {
          v15 = v14 - 32;
          goto LABEL_8;
        }
        v14 = RtlUpcaseUnicodeChar(v14);
      }
      v15 = v14;
LABEL_8:
      if ( v13 != v15 )
      {
        v6 = 0;
        goto LABEL_13;
      }
      if ( v12 == 92 )
      {
        v8 = 1;
        v19 = 1;
      }
      else
      {
        v8 = v19;
        ++v4;
        ++v7;
        if ( v20 )
        {
          ++v18;
          v20 = 0;
        }
      }
LABEL_12:
      if ( v4 >= v10 )
        goto LABEL_13;
    }
  }
  v16 = 2 * (v11 - v7);
  *(_WORD *)a3 = v16;
  *(_WORD *)(a3 + 2) = v16;
  *(_QWORD *)(a3 + 8) = v7;
  *a4 = v9;
  if ( v6 )
    return v4 == v10;
  return v5;
}
