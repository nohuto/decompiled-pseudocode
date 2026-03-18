/*
 * XREFs of EncodeAttributeName @ 0x14070A708
 * Callers:
 *     GetPrintableAttributeName @ 0x14070A860 (GetPrintableAttributeName.c)
 *     LocalGetStringForRelativeAttribute @ 0x14070B070 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     iswalnum @ 0x1401729CC (iswalnum.c)
 *     SddlpAlloc @ 0x14070A49C (SddlpAlloc.c)
 */

__int64 __fastcall EncodeAttributeName(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  PVOID v8; // rax
  unsigned int v9; // edi
  __int64 v10; // r15
  wint_t v11; // di
  unsigned int v12; // ecx
  const wchar_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rbp
  __int64 v18; // rbp

  v3 = 0;
  v6 = a1;
  LODWORD(v7) = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
  {
    return 1336;
  }
  else
  {
    v8 = SddlpAlloc(5 * a2 + 2LL);
    *a3 = (__int64)v8;
    if ( v8 )
    {
      v9 = a2 >> 1;
      if ( v9 )
      {
        v10 = v9;
        do
        {
          v11 = *(_WORD *)v6;
          if ( *(_WORD *)v6 >= 0x7Fu )
          {
LABEL_15:
            v14 = *a3;
            v15 = (unsigned int)v7;
            v16 = (unsigned int)(v7 + 1);
            *(_WORD *)(v14 + 2 * v15) = 37;
            *(_WORD *)(v14 + 2 * v16) = a0123456789abcd[(*(_WORD *)v6 >> 12) & 0xF];
            v17 = (unsigned int)(v16 + 1);
            *(_WORD *)(v14 + 2 * v17) = a0123456789abcd[*(_BYTE *)(v6 + 1) & 0xF];
            v18 = (unsigned int)(v17 + 1);
            *(_WORD *)(v14 + 2 * v18) = a0123456789abcd[(*(_WORD *)v6 >> 4) & 0xF];
            v7 = (unsigned int)(v18 + 1);
            *(_WORD *)(v14 + 2 * v7) = a0123456789abcd[*(_BYTE *)v6 & 0xF];
          }
          else
          {
            if ( !iswalnum(v11) )
            {
              v12 = 0;
              v13 = L"#$'*+-./:;?@[\\]^_`{}~";
              while ( *v13 != v11 )
              {
                ++v12;
                ++v13;
                if ( v12 >= 0x15 )
                  goto LABEL_15;
              }
            }
            *(_WORD *)(*a3 + 2LL * (unsigned int)v7) = *(_WORD *)v6;
          }
          LODWORD(v7) = v7 + 1;
          v6 += 2LL;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      return 8;
    }
  }
  return v3;
}
