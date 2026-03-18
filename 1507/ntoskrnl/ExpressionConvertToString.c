/*
 * XREFs of ExpressionConvertToString @ 0x14071DFC0
 * Callers:
 *     FilterConvertToString @ 0x14071E3D4 (FilterConvertToString.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     RtlStringCbCopyExW @ 0x1400CF88C (RtlStringCbCopyExW.c)
 *     ConvertDevpropertyToString @ 0x14071D904 (ConvertDevpropertyToString.c)
 */

__int64 __fastcall ExpressionConvertToString(_DWORD *a1, unsigned int a2, wchar_t *a3, unsigned int *a4)
{
  size_t v7; // rdi
  wchar_t *v8; // r14
  int v9; // ecx
  int v10; // eax
  const wchar_t *v11; // r8
  __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r12d
  signed int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  const wchar_t *v25; // r8
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  size_t v32; // rdx
  size_t pcbRemaining; // [rsp+30h] [rbp-10h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v36; // [rsp+80h] [rbp+40h] BYREF
  unsigned int *v37; // [rsp+98h] [rbp+58h]

  v37 = a4;
  pcbRemaining = 0LL;
  v7 = 0LL;
  ppszDestEnd = 0LL;
  v8 = 0LL;
  v36 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( a2 >= 2 )
    *a3 = 0;
  v10 = *a1 & 0xFF00000;
  if ( v10 )
  {
    switch ( v10 )
    {
      case 1048576:
        v11 = L"AND(";
        break;
      case 2097152:
        goto LABEL_12;
      case 3145728:
        v11 = L"OR(";
        break;
      case 4194304:
LABEL_12:
        v11 = L")";
        break;
      case 5242880:
        v11 = L"NOT(";
        break;
      case 6291456:
        goto LABEL_12;
      default:
        return (unsigned int)-1073741811;
    }
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
    if ( a4 )
      *a4 = v13;
    if ( v13 > a2 )
      return (unsigned int)-1073741789;
    else
      return (unsigned int)RtlStringCbCopyW(a3, a2, v11);
  }
  v14 = 6;
  if ( a2 >= 6 )
  {
    v9 = RtlStringCbCopyExW(a3, a2, L"[{", &ppszDestEnd, &pcbRemaining, 0x400u);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v7 = pcbRemaining;
    v8 = ppszDestEnd;
  }
  v15 = -1LL;
  v16 = *a1 & 0xF0000;
  if ( (*a1 & 0x10000) != 0 )
  {
    v16 = *a1 & 0xE0000;
    v17 = -1LL;
    do
      ++v17;
    while ( aNot_0[v17] );
    v14 = 2 * v17 + 6;
    if ( v14 <= a2 )
    {
      v9 = RtlStringCbCopyExW(v8, v7, L"(NOT)", &ppszDestEnd, &pcbRemaining, 0x400u);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v7 = pcbRemaining;
      v8 = ppszDestEnd;
    }
  }
  if ( (v16 & 0x20000) != 0 )
  {
    v16 &= ~0x20000u;
    v18 = -1LL;
    do
      ++v18;
    while ( aIgnoreCase[v18] );
    v14 += 2 * v18;
    if ( v14 <= a2 )
    {
      v9 = RtlStringCbCopyExW(v8, v7, L"(IGNORE_CASE)", &ppszDestEnd, &pcbRemaining, 0x400u);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v7 = pcbRemaining;
      v8 = ppszDestEnd;
    }
  }
  if ( v16 )
    return (unsigned int)-1073741811;
  v19 = v14 + 2;
  if ( v19 <= a2 )
  {
    v9 = RtlStringCbCopyExW(v8, v7, L"}", &ppszDestEnd, &pcbRemaining, 0x400u);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v7 = pcbRemaining;
    v8 = ppszDestEnd;
  }
  v20 = *a1 & 0xF000FFFF;
  if ( v20 > 4096 )
  {
    if ( v20 != 0x10000000 )
      return (unsigned int)-1073741811;
    v25 = L"(array_contains)";
  }
  else if ( v20 == 4096 )
  {
    v25 = L"(list_contains)";
  }
  else if ( v20 > 6 )
  {
    v26 = v20 - 7;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
              return (unsigned int)-1073741811;
            v25 = L"(contains)";
          }
          else
          {
            v25 = L"(ends_with)";
          }
        }
        else
        {
          v25 = L"(begins_with)";
        }
      }
      else
      {
        v25 = L"(|)";
      }
    }
    else
    {
      v25 = L"(&)";
    }
  }
  else if ( v20 == 6 )
  {
    v25 = L"(<=)";
  }
  else
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 != 1 )
              return (unsigned int)-1073741811;
            v25 = L"(>=)";
          }
          else
          {
            v25 = L"(<)";
          }
        }
        else
        {
          v25 = L"(>)";
        }
      }
      else
      {
        v25 = L"(==)";
      }
    }
    else
    {
      v25 = L"(Exists)";
    }
  }
  do
    ++v15;
  while ( v25[v15] );
  v30 = v19 + 2 * v15;
  if ( v30 <= a2 )
  {
    v9 = RtlStringCbCopyExW(v8, v7, v25, &ppszDestEnd, &pcbRemaining, 0x400u);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v7 = pcbRemaining;
    v8 = ppszDestEnd;
  }
  v9 = ConvertDevpropertyToString((__int64)(a1 + 2), v7, v8, &v36);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741789 )
  {
    v9 = 0;
    v31 = v36 + v30;
    v32 = v36 - 2LL;
    if ( v7 >= v32 )
    {
      v7 += 2LL - v36;
      v8 += v32 >> 1;
    }
    if ( v31 > a2 || (v9 = RtlStringCbCopyExW(v8, v7, L"]", &ppszDestEnd, &pcbRemaining, 0x400u), v9 >= 0) )
    {
      if ( v37 )
        *v37 = v31;
      if ( v31 > a2 )
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v9;
}
