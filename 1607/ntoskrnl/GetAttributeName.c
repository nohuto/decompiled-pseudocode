/*
 * XREFs of GetAttributeName @ 0x1406CCBF4
 * Callers:
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     iswalnum @ 0x14014E2E4 (iswalnum.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     DecodeAttributeName @ 0x1406CC818 (DecodeAttributeName.c)
 *     IsLegalAttributeChar2 @ 0x1406CE220 (IsLegalAttributeChar2.c)
 */

__int64 __fastcall GetAttributeName(wchar_t *Str1, __int64 *a2, unsigned int *a3)
{
  const wchar_t *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int16 v8; // cx
  wint_t v9; // bp
  int v10; // edx
  const wchar_t *v11; // rcx
  _BYTE *v12; // rdx
  unsigned int *v13; // rcx
  unsigned int v14; // eax
  bool v15; // zf
  PVOID v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  v22 = 0LL;
  v5 = Str1;
  v6 = 0;
  v7 = 0;
  if ( wcsnicmp(Str1, L"@", 1uLL) )
  {
    while ( 1 )
    {
      v9 = v5[v7];
      if ( v9 > 0xFFu )
        break;
      if ( !iswalnum(v9) )
      {
        v10 = 0;
        v11 = L":./_@";
        while ( *v11 != v9 )
        {
          ++v10;
          ++v11;
          if ( (unsigned __int64)v10 >= 5 )
            goto LABEL_10;
        }
      }
      if ( !v5[v7] )
        break;
      ++v7;
    }
  }
  else
  {
    while ( (unsigned __int8)IsLegalAttributeChar2(v5[v7]) && v8 )
      ++v7;
  }
LABEL_10:
  if ( v7 >= 8 && !wcsnicmp(v5, L"@DEVICE.", 8uLL) )
  {
    if ( v7 != 8 )
    {
      v5 += 8;
      v12 = (_BYTE *)(*a2 + 1);
      v13 = (unsigned int *)(*a2 + 4);
      *v12 = -5;
      v14 = 2 * v7 - 16;
      goto LABEL_27;
    }
    return 1336;
  }
  if ( v7 < 0xA || wcsnicmp(v5, L"@RESOURCE.", 0xAuLL) )
  {
    if ( v7 < 6 || wcsnicmp(v5, L"@USER.", 6uLL) )
    {
      if ( !v7 || !wcsnicmp(v5, L"@", 1uLL) )
        return 1336;
      v12 = (_BYTE *)(*a2 + 1);
      v13 = (unsigned int *)(*a2 + 4);
      *v12 = -8;
      v14 = 2 * v7;
    }
    else
    {
      if ( v7 == 6 )
        return 1336;
      v5 += 6;
      v12 = (_BYTE *)(*a2 + 1);
      v13 = (unsigned int *)(*a2 + 4);
      *v12 = -7;
      v14 = 2 * v7 - 12;
    }
  }
  else
  {
    if ( v7 == 10 )
      return 1336;
    v5 += 10;
    v12 = (_BYTE *)(*a2 + 1);
    v13 = (unsigned int *)(*a2 + 4);
    *v12 = -6;
    v14 = 2 * v7 - 20;
  }
LABEL_27:
  *v13 = v14;
  v15 = *v12 == 0xF8;
  *a3 = v7;
  if ( v15 )
  {
    v16 = SddlpAlloc(v14);
    v17 = *a2;
    *(_QWORD *)(*a2 + 8) = v16;
    if ( v16 )
      memmove(v16, v5, *(unsigned int *)(v17 + 4));
    else
      return 8;
  }
  else
  {
    v6 = DecodeAttributeName((__int64)v5, *v13, &v22);
    if ( !v6 )
    {
      v18 = *a2;
      v19 = -1LL;
      v20 = v22;
      *(_QWORD *)(*a2 + 8) = v22;
      do
        ++v19;
      while ( *(_WORD *)(v20 + 2 * v19) );
      *(_DWORD *)(v18 + 4) = 2 * v19;
    }
  }
  return v6;
}
