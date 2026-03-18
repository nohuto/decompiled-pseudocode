/*
 * XREFs of GetOperandValue @ 0x1406886A0
 * Callers:
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406898FC (LocalGetConditionForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     wcstoxq @ 0x1401464F8 (wcstoxq.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     LocalGetSidForString @ 0x140686904 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 *     SddlpFree @ 0x140687B40 (SddlpFree.c)
 *     SddlpReAlloc @ 0x140687B70 (SddlpReAlloc.c)
 *     FreeOperandValue @ 0x14068820C (FreeOperandValue.c)
 *     GetAttributeName @ 0x14068823C (GetAttributeName.c)
 *     GetBinaryOperandLen @ 0x14068846C (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x140688538 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x14068862C (GetNextNoneWhiteSpace.c)
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     GetStringOperandValue @ 0x14068969C (GetStringOperandValue.c)
 *     IsValueSizeFixed @ 0x1406898D4 (IsValueSizeFixed.c)
 */

__int64 GetOperandValue(wchar_t *a1, char a2, char a3, ...)
{
  __int64 *v4; // rdi
  unsigned int NextNoneWhiteSpace; // esi
  PVOID v6; // rax
  void *v7; // rbx
  unsigned int AttributeName; // eax
  __int64 v10; // rax
  wchar_t *v11; // rcx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // r11
  unsigned int v17; // edx
  unsigned int v18; // r10d
  unsigned int v19; // r9d
  void *v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  size_t v25; // r8
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // rdi
  unsigned int v29; // eax
  unsigned int *v30; // rcx
  PSID v31; // rbx
  bool v32; // zf
  int v33; // r11d
  unsigned int v34; // ecx
  __int64 v35; // rax
  size_t v36; // rcx
  PVOID v37; // rax
  __int64 v38; // r9
  __int64 v39; // r9
  int v40; // r8d
  __int64 v41; // r9
  __int64 v42; // r10
  unsigned __int64 v43; // rax
  wint_t *v44; // rdx
  unsigned __int64 v45; // rax
  wint_t *v46; // rbx
  char v47; // bl
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  int v51; // [rsp+30h] [rbp-49h]
  int v52; // [rsp+38h] [rbp-41h]
  char v53; // [rsp+58h] [rbp-21h] BYREF
  char v54; // [rsp+59h] [rbp-20h]
  __int64 v55; // [rsp+60h] [rbp-19h] BYREF
  char *v56; // [rsp+68h] [rbp-11h] BYREF
  _QWORD *v57; // [rsp+70h] [rbp-9h] BYREF
  int v58; // [rsp+78h] [rbp-1h] BYREF
  PSID Sid; // [rsp+80h] [rbp+7h] BYREF
  wint_t *v60[4]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 v63; // [rsp+D0h] [rbp+57h] BYREF
  va_list va; // [rsp+D0h] [rbp+57h]
  unsigned int *v65; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+5Fh]
  __int64 v67; // [rsp+E0h] [rbp+67h]
  __int64 v68; // [rsp+E8h] [rbp+6Fh]
  __int64 v69; // [rsp+F0h] [rbp+77h]
  __int64 v70; // [rsp+F8h] [rbp+7Fh]
  va_list va2; // [rsp+100h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v63 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v65 = va_arg(va2, unsigned int *);
  v67 = va_arg(va2, _QWORD);
  v68 = va_arg(va2, _QWORD);
  v69 = va_arg(va2, _QWORD);
  v70 = va_arg(va2, _QWORD);
  v4 = (__int64 *)v63;
  NextNoneWhiteSpace = 0;
  v60[0] = 0LL;
  v56 = 0LL;
  *v65 = 0;
  Sid = 0LL;
  v53 = 0;
  v57 = 0LL;
  v54 = 0;
  v6 = SddlpAlloc(0x10uLL);
  *v4 = (__int64)v6;
  if ( !v6 )
  {
LABEL_2:
    NextNoneWhiteSpace = 8;
    goto LABEL_3;
  }
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, v4, v65);
LABEL_15:
    NextNoneWhiteSpace = AttributeName;
    if ( !AttributeName )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, v4, v65);
    goto LABEL_15;
  }
  if ( *a1 == 123 )
  {
    v10 = *v4;
    LODWORD(v55) = 1;
    *(_BYTE *)(v10 + 1) = 80;
    if ( !a1[1] )
      goto LABEL_4;
    while ( 1 )
    {
      NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v55);
      if ( NextNoneWhiteSpace )
        break;
      v11 = &a1[(unsigned int)v55];
      if ( *v11 == 123 )
        goto LABEL_44;
      NextNoneWhiteSpace = GetOperandValue((_DWORD)v11, 0, 0, (unsigned int)&v57, (__int64)v65, v67, v68, v69, v70);
      if ( NextNoneWhiteSpace )
        break;
      if ( a3 )
      {
        if ( v54 && v54 != *((_BYTE *)v57 + 1) )
          goto LABEL_44;
        v54 = *((_BYTE *)v57 + 1);
      }
      LOBYTE(v12) = *((_BYTE *)v57 + 1);
      v13 = IsValueSizeFixed(v12);
      v15 = *v4;
      LOBYTE(v63) = v13;
      v16 = *(void **)(v15 + 8);
      v17 = v13 == 0 ? 5 : 1;
      if ( v16 )
      {
        v18 = *(_DWORD *)(v15 + 4);
        v19 = v18 + *(_DWORD *)(v14 + 4);
        if ( v19 < v18 || (LODWORD(Sid) = v17 + v19, v17 + v19 < v19) )
        {
LABEL_41:
          NextNoneWhiteSpace = 534;
          break;
        }
        v20 = SddlpReAlloc(v18, v17 + v19, v16);
        v21 = *v4;
        *(_QWORD *)(*v4 + 8) = v20;
        if ( !v20 )
          goto LABEL_2;
      }
      else
      {
        v22 = v17 + *(_DWORD *)(v14 + 4);
        LODWORD(Sid) = v22;
        if ( v22 < v17 )
          goto LABEL_41;
        v21 = v15;
        *(_QWORD *)(v15 + 8) = SddlpAlloc(v22);
      }
      v23 = *(_QWORD *)(v21 + 8);
      if ( !v23 )
        goto LABEL_2;
      *(_BYTE *)(*(unsigned int *)(v21 + 4) + v23) = *((_BYTE *)v57 + 1);
      if ( (_BYTE)v63 )
      {
        v24 = 0;
      }
      else
      {
        v24 = 4;
        *(_DWORD *)(*(unsigned int *)(v21 + 4) + *(_QWORD *)(v21 + 8) + 1LL) = *((_DWORD *)v57 + 1);
      }
      memmove(
        (void *)(*(_QWORD *)(v21 + 8) + *(unsigned int *)(v21 + 4) + v24 + 1LL),
        (const void *)v57[1],
        *((unsigned int *)v57 + 1));
      *(_DWORD *)(v21 + 4) = (_DWORD)Sid;
      FreeOperandValue(v57);
      v57 = 0LL;
      LODWORD(v55) = *v65 + v55;
      NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v55);
      if ( NextNoneWhiteSpace )
        break;
      if ( a1[(unsigned int)v55] != 44 )
      {
        if ( a1[(unsigned int)v55] != 125 )
          goto LABEL_44;
        *v65 = v55 + 1;
        goto LABEL_4;
      }
      LODWORD(v55) = v55 + 1;
      if ( !a1[(unsigned int)v55] )
        goto LABEL_4;
    }
LABEL_3:
    FreeOperandValue((_QWORD *)*v4);
    *v4 = 0LL;
LABEL_4:
    v7 = v56;
    goto LABEL_5;
  }
  v25 = -1LL;
  do
    ++v25;
  while ( aSid[v25] );
  if ( wcsnicmp(a1, L"SID", v25) )
  {
    GetBinaryOperandLen(a1, &v55);
    v34 = v55;
    if ( *a1 == 35 )
    {
      if ( (unsigned int)v55 >= 2 )
      {
        *v65 = v55;
        v35 = *v4;
        v36 = v34 >> 1;
        LODWORD(v65) = v36;
        *(_BYTE *)(v35 + 1) = 24;
        *(_DWORD *)(v35 + 4) = v36;
        v37 = SddlpAlloc(v36);
        *(_QWORD *)(*v4 + 8) = v37;
        if ( v37 )
        {
          v38 = (int)v55 - 1;
          if ( v38 < 1 )
            goto LABEL_4;
          while ( GetDigitFromChar(a1[v38], (unsigned __int64 *)va)
               && GetDigitFromChar(a1[v39 - 1], (unsigned int **)va1) )
          {
            v38 = v41 - 2;
            *(_BYTE *)((unsigned int)(v40 - 1) + *(_QWORD *)(v42 + 8)) = v63 | (16 * (_BYTE)v65);
            if ( v38 < 1 )
              goto LABEL_4;
          }
        }
        goto LABEL_2;
      }
LABEL_44:
      NextNoneWhiteSpace = 1336;
      goto LABEL_3;
    }
    if ( !(_DWORD)v55 )
      goto LABEL_44;
    v58 = v33;
    *v65 = v55;
    v43 = wcstoxq(0LL, a1, v60, 0, 1, &v58);
    v44 = v60[0];
    v63 = v43;
    if ( v60[0] == a1 && !v43 )
      goto LABEL_44;
    if ( v60[0] != &a1[(unsigned int)v55] || v58 )
      goto LABEL_44;
    if ( *a1 == 45 )
    {
      v45 = wcstoxq(0LL, ++a1, v60, 0, 1, &v58);
      if ( v45 >= v63 && v45 )
        goto LABEL_44;
      v44 = v60[0];
      LOBYTE(v65) = 2;
    }
    else if ( *a1 == 43 )
    {
      LOBYTE(v65) = 1;
      ++a1;
    }
    else
    {
      LOBYTE(v65) = 3;
    }
    if ( *a1 == 48 )
    {
      v46 = a1 + 1;
      if ( v46 >= v44 || ((*v46 - 88) & 0xFFDF) != 0 )
        v47 = 1;
      else
        v47 = 3;
    }
    else
    {
      v47 = 2;
    }
    v48 = *v4;
    *(_BYTE *)(v48 + 1) = 4;
    *(_DWORD *)(v48 + 4) = 10;
    v49 = SddlpAlloc(0xAuLL);
    v50 = *v4;
    *(_QWORD *)(*v4 + 8) = v49;
    if ( v49 )
    {
      *v49 = v63;
      *(_WORD *)(*(_QWORD *)(v50 + 8) + 8LL) = (unsigned __int8)v65;
      *(_BYTE *)(*(_QWORD *)(v50 + 8) + 9LL) = v47;
      goto LABEL_4;
    }
    goto LABEL_2;
  }
  v26 = -1LL;
  do
    ++v26;
  while ( aSid[v26] );
  LODWORD(v55) = v26;
  NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v55);
  if ( NextNoneWhiteSpace )
    goto LABEL_3;
  if ( a1[(unsigned int)v55] != 40 )
  {
    NextNoneWhiteSpace = 1336;
LABEL_53:
    v4 = (__int64 *)v63;
    goto LABEL_3;
  }
  v27 = v55 + 1;
  v55 = 2LL * (unsigned int)(v55 + 1);
  NextNoneWhiteSpace = LocalGetSidForString((wchar_t *)((char *)a1 + v55), &Sid, &v56, &v53, v67, v51, v52, v70);
  if ( NextNoneWhiteSpace
    || (LODWORD(v55) = ((&v56[-v55] - (char *)a1) >> 1) + v27,
        (NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v55)) != 0) )
  {
    v56 = (char *)Sid;
    goto LABEL_53;
  }
  v4 = (__int64 *)v63;
  if ( a1[(unsigned int)v55] != 41 )
  {
    NextNoneWhiteSpace = 1336;
    v56 = (char *)Sid;
    goto LABEL_3;
  }
  v28 = *(_QWORD *)v63;
  v29 = v55 + 1;
  v30 = v65;
  v31 = Sid;
  *(_BYTE *)(*(_QWORD *)v63 + 1LL) = 81;
  *v30 = v29;
  *(_DWORD *)(v28 + 4) = RtlLengthSid(v31);
  v32 = v53 == 0;
  *(_QWORD *)(v28 + 8) = v31;
  v7 = 0LL;
  *(_BYTE *)v28 = v32;
LABEL_5:
  if ( v57 )
    FreeOperandValue(v57);
  if ( v7 && v53 )
    SddlpFree(v7);
  return NextNoneWhiteSpace;
}
