/*
 * XREFs of ExpressionConvertToString @ 0x1406E4664
 * Callers:
 *     FilterConvertToString @ 0x1406E4A6C (FilterConvertToString.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     RtlStringCbCopyExW @ 0x14010AC6C (RtlStringCbCopyExW.c)
 *     ConvertDevpropertyToString @ 0x1406E3FA8 (ConvertDevpropertyToString.c)
 */

__int64 __fastcall ExpressionConvertToString(_DWORD *a1, unsigned int a2, wchar_t *a3, unsigned int *a4)
{
  size_t v8; // rdi
  wchar_t *v9; // rsi
  int v10; // ecx
  int v11; // eax
  const wchar_t *v12; // r8
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  int v16; // ebx
  unsigned int v17; // r15d
  signed int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  const wchar_t *v23; // r8
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rax
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  size_t v31; // rdx
  size_t pcbRemaining; // [rsp+30h] [rbp-10h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v35; // [rsp+70h] [rbp+30h] BYREF

  pcbRemaining = 0LL;
  ppszDestEnd = 0LL;
  v8 = 0LL;
  v35 = 0;
  v9 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( a2 >= 2 )
    *a3 = 0;
  v11 = *a1 & 0xFF00000;
  if ( v11 )
  {
    switch ( v11 )
    {
      case 1048576:
        v12 = L"AND(";
        break;
      case 2097152:
        goto LABEL_12;
      case 3145728:
        v12 = L"OR(";
        break;
      case 4194304:
LABEL_12:
        v12 = L")";
        break;
      case 5242880:
        v12 = L"NOT(";
        break;
      case 6291456:
        goto LABEL_12;
      default:
        return (unsigned int)-1073741811;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
    if ( a4 )
      *a4 = v14;
    if ( v14 > a2 )
      return (unsigned int)-1073741789;
    else
      return (unsigned int)RtlStringCbCopyW(a3, a2, v12);
  }
  v15 = 6;
  if ( a2 >= 6 )
  {
    v10 = RtlStringCbCopyExW(a3, a2, L"[{", &ppszDestEnd, &pcbRemaining, 0x400u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v8 = pcbRemaining;
    v9 = ppszDestEnd;
  }
  v16 = *a1 & 0xF0000;
  if ( (*a1 & 0x10000) != 0 )
  {
    v16 = *a1 & 0xE0000;
    v15 = 16;
    if ( a2 >= 0x10 )
    {
      v10 = RtlStringCbCopyExW(v9, v8, L"(NOT)", &ppszDestEnd, &pcbRemaining, 0x400u);
      if ( v10 < 0 )
        return (unsigned int)v10;
      v8 = pcbRemaining;
      v9 = ppszDestEnd;
    }
  }
  if ( (v16 & 0x20000) != 0 )
  {
    v16 &= ~0x20000u;
    v15 += 26;
    if ( v15 <= a2 )
    {
      v10 = RtlStringCbCopyExW(v9, v8, L"(IGNORE_CASE)", &ppszDestEnd, &pcbRemaining, 0x400u);
      if ( v10 < 0 )
        return (unsigned int)v10;
      v8 = pcbRemaining;
      v9 = ppszDestEnd;
    }
  }
  if ( v16 )
    return (unsigned int)-1073741811;
  v17 = v15 + 2;
  if ( v17 <= a2 )
  {
    v10 = RtlStringCbCopyExW(v9, v8, L"}", &ppszDestEnd, &pcbRemaining, 0x400u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v8 = pcbRemaining;
    v9 = ppszDestEnd;
  }
  v18 = *a1 & 0xF000FFFF;
  if ( v18 > 4096 )
  {
    if ( v18 != 0x10000000 )
      return (unsigned int)-1073741811;
    v23 = L"(array_contains)";
  }
  else if ( v18 == 4096 )
  {
    v23 = L"(list_contains)";
  }
  else if ( v18 > 6 )
  {
    v24 = v18 - 7;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 != 1 )
              return (unsigned int)-1073741811;
            v23 = L"(contains)";
          }
          else
          {
            v23 = L"(ends_with)";
          }
        }
        else
        {
          v23 = L"(begins_with)";
        }
      }
      else
      {
        v23 = L"(|)";
      }
    }
    else
    {
      v23 = L"(&)";
    }
  }
  else if ( v18 == 6 )
  {
    v23 = L"(<=)";
  }
  else
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 != 1 )
              return (unsigned int)-1073741811;
            v23 = L"(>=)";
          }
          else
          {
            v23 = L"(<)";
          }
        }
        else
        {
          v23 = L"(>)";
        }
      }
      else
      {
        v23 = L"(==)";
      }
    }
    else
    {
      v23 = L"(Exists)";
    }
  }
  v28 = -1LL;
  do
    ++v28;
  while ( v23[v28] );
  v29 = v17 + 2 * v28;
  if ( v29 <= a2 )
  {
    v10 = RtlStringCbCopyExW(v9, v8, v23, &ppszDestEnd, &pcbRemaining, 0x400u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v8 = pcbRemaining;
    v9 = ppszDestEnd;
  }
  v10 = ConvertDevpropertyToString((__int64)(a1 + 2), v8, v9, &v35);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
  {
    v10 = 0;
    v30 = v35 + v29;
    v31 = v35 - 2LL;
    if ( v8 >= v31 )
    {
      v8 += 2LL - v35;
      v9 += v31 >> 1;
    }
    if ( v30 > a2 || (v10 = RtlStringCbCopyExW(v9, v8, L"]", &ppszDestEnd, &pcbRemaining, 0x400u), v10 >= 0) )
    {
      if ( a4 )
        *a4 = v30;
      if ( v30 > a2 )
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v10;
}
