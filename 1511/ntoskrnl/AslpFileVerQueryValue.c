/*
 * XREFs of AslpFileVerQueryValue @ 0x1406834D4
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140682D1C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x1406832F8 (AslpFileQueryVersionString.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileVerQueryValue(unsigned __int16 *a1, const wchar_t *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned __int16 *v7; // rsi
  wchar_t *v8; // r12
  NTSTATUS v9; // edi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  size_t v12; // rdi
  wchar_t *v13; // rax
  wchar_t *v14; // rdi
  _WORD *v15; // r10
  unsigned __int64 v16; // rcx
  unsigned __int16 v17; // dx
  __int64 v18; // rax
  const wchar_t *v19; // r11
  unsigned __int16 *v20; // r15
  wchar_t v21; // r12
  int v22; // edx
  __int64 v23; // rcx
  _WORD *v25; // [rsp+30h] [rbp-58h]
  wchar_t *v26; // [rsp+38h] [rbp-50h]
  const wchar_t *i; // [rsp+48h] [rbp-40h]
  __int16 v28; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v5 = -1LL;
  v7 = a1;
  v8 = 0LL;
  *a4 = 0;
  if ( a1[2] )
  {
    v9 = -1073741811;
    goto LABEL_45;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
    goto LABEL_44;
  if ( v11 <= 1 )
    v11 = 1LL;
  v12 = 2 * v11;
  if ( !is_mul_ok(v11, 2uLL) )
  {
LABEL_44:
    v9 = -1073741675;
    goto LABEL_45;
  }
  v13 = (wchar_t *)AslAlloc(v11, 2 * v11);
  v26 = v13;
  v8 = v13;
  if ( !v13 )
  {
    v9 = -1073741801;
    goto LABEL_45;
  }
  *v13 = 0;
  v9 = RtlStringCchCopyW(v13, v12, a2);
  if ( v9 < 0 )
  {
LABEL_45:
    AslLogCallPrintf(1LL);
LABEL_46:
    v4 = v9;
    goto LABEL_47;
  }
  v14 = v8;
  if ( *v7 < 8u )
  {
    v9 = -1073741811;
    goto LABEL_45;
  }
  v15 = (unsigned __int16 *)((char *)v7 + *v7 - 2);
  v25 = v15;
  v28 = *v15;
  *v15 = 0;
  while ( *v14 )
  {
    for ( ; *v14 == 92; ++v14 )
      ;
    if ( *v14 )
    {
      v16 = (unsigned int)((_DWORD)v15 - (_DWORD)v7 + 2);
      if ( (unsigned __int64)(int)v16 < 8 )
        goto LABEL_43;
      v17 = *v7;
      if ( *v7 > (unsigned __int16)((_WORD)v15 - (_WORD)v7 + 2) )
        goto LABEL_43;
      v18 = -1LL;
      do
        ++v18;
      while ( v7[v18 + 3] );
      v16 = ((v7[1] + 3) & 0xFFFFFFFC) + ((2 * (_DWORD)v18 + 11) & 0xFFFFFFFC);
      if ( (unsigned int)v16 > v17 )
        goto LABEL_43;
      v19 = v14;
      v20 = (unsigned __int16 *)((char *)v7 + v17);
      v7 = (unsigned __int16 *)((char *)v7 + (unsigned int)v16);
      for ( i = v14; *v14; ++v14 )
      {
        if ( *v14 == 92 )
          break;
      }
      v21 = *v14;
      v22 = 1;
      *v14 = 0;
      if ( v7 < v20 )
      {
        do
        {
          v16 = 8LL;
          if ( *v7 <= 8u )
            break;
          v16 = (char *)v20 - (char *)v7;
          if ( *v7 > (char *)v20 - (char *)v7 )
            break;
          if ( !wcsicmp(v19, v7 + 3) )
          {
            v22 = 0;
            break;
          }
          v22 = 1;
          v19 = i;
          v16 = (*v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
          v7 = (unsigned __int16 *)((char *)v7 + v16);
        }
        while ( v7 < v20 );
        v15 = v25;
      }
      *v14 = v21;
      if ( v22 )
      {
LABEL_43:
        v9 = -1073741275;
        v8 = v26;
        *v15 = v28;
        goto LABEL_46;
      }
    }
  }
  *a4 = v7[1];
  v23 = -1LL;
  do
    ++v23;
  while ( v7[v23 + 3] );
  v16 = (unsigned __int64)v7 + ((2 * v23 + 11) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v16 >= (unsigned __int64)v7 + *v7 )
  {
    do
      ++v5;
    while ( v7[v5 + 3] );
    v16 = (unsigned __int64)&v7[v5 + 3];
  }
  v8 = v26;
  *a3 = v16;
  *v15 = v28;
LABEL_47:
  AslFree(v16, v8);
  return v4;
}
