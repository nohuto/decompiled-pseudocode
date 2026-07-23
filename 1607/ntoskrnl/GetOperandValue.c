/*
 * XREFs of GetOperandValue @ 0x1406CD058
 * Callers:
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     wcstoxq @ 0x14014FE94 (wcstoxq.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     LocalGetSidForString @ 0x1404BA830 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     SddlpReAlloc @ 0x1406CC528 (SddlpReAlloc.c)
 *     FreeOperandValue @ 0x1406CCBC4 (FreeOperandValue.c)
 *     GetAttributeName @ 0x1406CCBF4 (GetAttributeName.c)
 *     GetBinaryOperandLen @ 0x1406CCE24 (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x1406CCEF0 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x1406CCFE4 (GetNextNoneWhiteSpace.c)
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     GetStringOperandValue @ 0x1406CE014 (GetStringOperandValue.c)
 *     IsValueSizeFixed @ 0x1406CE24C (IsValueSizeFixed.c)
 */

__int64 __fastcall GetOperandValue(
        wchar_t *a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int NextNoneWhiteSpace; // esi
  PVOID v12; // rax
  void *v13; // rbx
  unsigned int AttributeName; // eax
  __int64 v16; // rax
  wchar_t *v17; // rcx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // r11
  unsigned int v23; // edx
  unsigned int v24; // r10d
  unsigned int v25; // r9d
  void *v26; // rax
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdi
  unsigned int v32; // eax
  unsigned int *v33; // rcx
  PSID v34; // rbx
  bool v35; // zf
  int v36; // r11d
  unsigned int v37; // ecx
  __int64 v38; // rax
  size_t v39; // rcx
  PVOID v40; // rax
  __int64 v41; // r9
  __int64 v42; // r9
  int v43; // r8d
  __int64 v44; // r9
  __int64 v45; // r10
  void *v46; // rax
  wint_t *v47; // rdx
  unsigned __int64 v48; // rax
  wint_t *v49; // rbx
  char v50; // bl
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  int v54; // [rsp+30h] [rbp-49h]
  int v55; // [rsp+38h] [rbp-41h]
  char v56; // [rsp+58h] [rbp-21h] BYREF
  char v57; // [rsp+59h] [rbp-20h]
  __int64 v58; // [rsp+60h] [rbp-19h] BYREF
  char *v59; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v60; // [rsp+70h] [rbp-9h]
  _QWORD *v61; // [rsp+78h] [rbp-1h] BYREF
  int v62; // [rsp+80h] [rbp+7h] BYREF
  PSID Sid; // [rsp+88h] [rbp+Fh] BYREF
  wint_t *v64[3]; // [rsp+90h] [rbp+17h] BYREF
  char v67; // [rsp+D0h] [rbp+57h] BYREF

  NextNoneWhiteSpace = 0;
  v64[0] = 0LL;
  v59 = 0LL;
  *a5 = 0;
  Sid = 0LL;
  v67 = 0;
  v61 = 0LL;
  v57 = 0;
  v12 = SddlpAlloc(0x10uLL);
  *a4 = (__int64)v12;
  if ( !v12 )
  {
LABEL_2:
    NextNoneWhiteSpace = 8;
    goto LABEL_3;
  }
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, a4, a5);
LABEL_15:
    NextNoneWhiteSpace = AttributeName;
    if ( !AttributeName )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, a4, a5);
    goto LABEL_15;
  }
  if ( *a1 == 123 )
  {
    v16 = *a4;
    LODWORD(v58) = 1;
    *(_BYTE *)(v16 + 1) = 80;
    if ( !a1[1] )
      goto LABEL_4;
    while ( 1 )
    {
      NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v58);
      if ( NextNoneWhiteSpace )
        break;
      v17 = &a1[(unsigned int)v58];
      if ( *v17 == 123 )
        goto LABEL_44;
      NextNoneWhiteSpace = GetOperandValue((_DWORD)v17, 0, 0, (unsigned int)&v61, (__int64)a5, a6, a7, a8, a9);
      if ( NextNoneWhiteSpace )
        break;
      if ( a3 )
      {
        if ( v57 && v57 != *((_BYTE *)v61 + 1) )
          goto LABEL_44;
        v57 = *((_BYTE *)v61 + 1);
      }
      LOBYTE(v18) = *((_BYTE *)v61 + 1);
      v19 = IsValueSizeFixed(v18);
      v21 = *a4;
      v56 = v19;
      v22 = *(void **)(v21 + 8);
      v23 = v19 == 0 ? 5 : 1;
      if ( v22 )
      {
        v24 = *(_DWORD *)(v21 + 4);
        v25 = v24 + *(_DWORD *)(v20 + 4);
        if ( v25 < v24 || (v60 = v23 + v25, v23 + v25 < v25) )
        {
LABEL_41:
          NextNoneWhiteSpace = 534;
          break;
        }
        v26 = SddlpReAlloc(v24, v23 + v25, v22);
        v27 = *a4;
        *(_QWORD *)(*a4 + 8) = v26;
        if ( !v26 )
          goto LABEL_2;
      }
      else
      {
        v28 = v23 + *(_DWORD *)(v20 + 4);
        v60 = v28;
        if ( v28 < v23 )
          goto LABEL_41;
        v27 = v21;
        *(_QWORD *)(v21 + 8) = SddlpAlloc(v28);
      }
      v29 = *(_QWORD *)(v27 + 8);
      if ( !v29 )
        goto LABEL_2;
      *(_BYTE *)(*(unsigned int *)(v27 + 4) + v29) = *((_BYTE *)v61 + 1);
      if ( v56 )
      {
        v30 = 0;
      }
      else
      {
        v30 = 4;
        *(_DWORD *)(*(unsigned int *)(v27 + 4) + *(_QWORD *)(v27 + 8) + 1LL) = *((_DWORD *)v61 + 1);
      }
      memmove(
        (void *)(*(_QWORD *)(v27 + 8) + 1LL + *(unsigned int *)(v27 + 4) + (__int64)v30),
        (const void *)v61[1],
        *((unsigned int *)v61 + 1));
      *(_DWORD *)(v27 + 4) = v60;
      FreeOperandValue(v61);
      v61 = 0LL;
      LODWORD(v58) = *a5 + v58;
      NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v58);
      if ( NextNoneWhiteSpace )
        break;
      if ( a1[(unsigned int)v58] != 44 )
      {
        if ( a1[(unsigned int)v58] != 125 )
          goto LABEL_44;
        *a5 = v58 + 1;
        goto LABEL_4;
      }
      LODWORD(v58) = v58 + 1;
      if ( !a1[(unsigned int)v58] )
        goto LABEL_4;
    }
LABEL_3:
    FreeOperandValue((_QWORD *)*a4);
    *a4 = 0LL;
LABEL_4:
    v13 = v59;
    goto LABEL_5;
  }
  if ( wcsnicmp(a1, L"SID", 3uLL) )
  {
    GetBinaryOperandLen(a1, &v58);
    v37 = v58;
    if ( *a1 == 35 )
    {
      if ( (unsigned int)v58 >= 2 )
      {
        *a5 = v58;
        v38 = *a4;
        v39 = v37 >> 1;
        LODWORD(a5) = v39;
        *(_BYTE *)(v38 + 1) = 24;
        *(_DWORD *)(v38 + 4) = v39;
        v40 = SddlpAlloc(v39);
        *(_QWORD *)(*a4 + 8) = v40;
        if ( v40 )
        {
          v41 = (int)v58 - 1;
          if ( v41 < 1 )
            goto LABEL_4;
          while ( GetDigitFromChar(a1[v41], &v56) && GetDigitFromChar(a1[v42 - 1], &a5) )
          {
            v41 = v44 - 2;
            *(_BYTE *)((unsigned int)(v43 - 1) + *(_QWORD *)(v45 + 8)) = v56 | (16 * (_BYTE)a5);
            if ( v41 < 1 )
              goto LABEL_4;
          }
        }
        goto LABEL_2;
      }
LABEL_44:
      NextNoneWhiteSpace = 1336;
      goto LABEL_3;
    }
    if ( !(_DWORD)v58 )
      goto LABEL_44;
    v62 = v36;
    *a5 = v58;
    v46 = (void *)wcstoxq(0LL, a1, v64, 0, 1, &v62);
    v47 = v64[0];
    Sid = v46;
    if ( v64[0] == a1 && !v46 )
      goto LABEL_44;
    if ( v64[0] != &a1[(unsigned int)v58] || v62 )
      goto LABEL_44;
    if ( *a1 == 45 )
    {
      v48 = wcstoxq(0LL, ++a1, v64, 0, 1, &v62);
      if ( v48 >= (unsigned __int64)Sid && v48 )
        goto LABEL_44;
      v47 = v64[0];
      LOBYTE(a5) = 2;
    }
    else if ( *a1 == 43 )
    {
      LOBYTE(a5) = 1;
      ++a1;
    }
    else
    {
      LOBYTE(a5) = 3;
    }
    if ( *a1 == 48 )
    {
      v49 = a1 + 1;
      if ( v49 >= v47 || ((*v49 - 88) & 0xFFDF) != 0 )
        v50 = 1;
      else
        v50 = 3;
    }
    else
    {
      v50 = 2;
    }
    v51 = *a4;
    *(_BYTE *)(v51 + 1) = 4;
    *(_DWORD *)(v51 + 4) = 10;
    v52 = SddlpAlloc(0xAuLL);
    v53 = *a4;
    *(_QWORD *)(*a4 + 8) = v52;
    if ( v52 )
    {
      *v52 = Sid;
      *(_WORD *)(*(_QWORD *)(v53 + 8) + 8LL) = (unsigned __int8)a5;
      *(_BYTE *)(*(_QWORD *)(v53 + 8) + 9LL) = v50;
      goto LABEL_4;
    }
    goto LABEL_2;
  }
  LODWORD(v58) = 3;
  NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v58);
  if ( NextNoneWhiteSpace )
    goto LABEL_3;
  if ( a1[(unsigned int)v58] != 40 )
    goto LABEL_44;
  v60 = v58 + 1;
  v58 = 2LL * (unsigned int)(v58 + 1);
  NextNoneWhiteSpace = LocalGetSidForString((wchar_t *)((char *)a1 + v58), &Sid, &v59, &v67, a6, v54, v55, a9);
  if ( NextNoneWhiteSpace )
    goto LABEL_52;
  LODWORD(v58) = ((&v59[-v58] - (char *)a1) >> 1) + v60;
  NextNoneWhiteSpace = GetNextNoneWhiteSpace((__int64)a1, &v58);
  if ( NextNoneWhiteSpace )
    goto LABEL_52;
  if ( a1[(unsigned int)v58] != 41 )
  {
    NextNoneWhiteSpace = 1336;
LABEL_52:
    v59 = (char *)Sid;
    goto LABEL_3;
  }
  v31 = *a4;
  v32 = v58 + 1;
  v33 = a5;
  v34 = Sid;
  *(_BYTE *)(v31 + 1) = 81;
  *v33 = v32;
  *(_DWORD *)(v31 + 4) = RtlLengthSid(v34);
  v35 = v67 == 0;
  *(_QWORD *)(v31 + 8) = v34;
  v13 = 0LL;
  *(_BYTE *)v31 = v35;
LABEL_5:
  if ( v61 )
    FreeOperandValue(v61);
  if ( v13 && v67 )
    SddlpFree(v13);
  return NextNoneWhiteSpace;
}
