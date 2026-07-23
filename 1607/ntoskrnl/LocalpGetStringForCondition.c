/*
 * XREFs of LocalpGetStringForCondition @ 0x1406CFDC0
 * Callers:
 *     LocalGetAceCondition @ 0x1406CB600 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     EncloseSubCondition @ 0x1406CC9F8 (EncloseSubCondition.c)
 *     GetOperatorIndexByToken @ 0x1406CD7D8 (GetOperatorIndexByToken.c)
 *     GetPrintableAttributeName @ 0x1406CD7FC (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1406CD9D4 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1406D03A0 (ULongAddStringSize.c)
 */

__int64 __fastcall LocalpGetStringForCondition(
        _DWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r11
  _DWORD *v12; // r8
  unsigned int PrintableAttributeName; // ebx
  int v14; // r14d
  wchar_t *v16; // rdi
  int v17; // r12d
  _QWORD **v18; // r15
  wchar_t **v19; // r13
  char *v20; // r10
  char v21; // cl
  unsigned int v22; // eax
  bool v23; // zf
  unsigned int v24; // eax
  int OperatorIndexByToken; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  wchar_t *v28; // rcx
  unsigned int v29; // eax
  wchar_t *v30; // r15
  size_t v31; // r12
  NTSTATUS v32; // eax
  char v33; // al
  int v34; // r14d
  int v35; // eax
  int v36; // r12d
  __int64 v37; // rsi
  wchar_t **v38; // r13
  _QWORD **v39; // r15
  wchar_t *v40; // r13
  void *v41; // r12
  size_t v42; // r15
  _QWORD *v43; // rdi
  void **v44; // rcx
  __int64 v45; // rdi
  void *v46; // rcx
  int v47; // [rsp+40h] [rbp-C0h]
  char v48; // [rsp+44h] [rbp-BCh]
  wchar_t *v49; // [rsp+48h] [rbp-B8h] BYREF
  int v50; // [rsp+50h] [rbp-B0h]
  unsigned int v51; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+68h] [rbp-98h]
  _QWORD **v55; // [rsp+70h] [rbp-90h]
  wchar_t **v56; // [rsp+78h] [rbp-88h]
  _DWORD *v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  _QWORD *v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v63[256]; // [rsp+B0h] [rbp-50h] BYREF

  v8 = a5;
  v9 = 0LL;
  v10 = a6;
  v12 = a1;
  v57 = a1;
  PrintableAttributeName = 0;
  v60 = a7;
  v14 = 0;
  v61 = a3;
  v52 = a2;
  v58 = a5;
  v59 = a6;
  v49 = 0LL;
  v51 = 0;
  if ( !a1 || !a3 || !a2 )
    return 87LL;
  if ( a2 < 6 || *a1 != 2020897377 )
    return 805LL;
  LODWORD(v16) = 4;
  v54 = 4;
  v17 = -1;
  v47 = -2;
  v50 = -1;
  v18 = &v61;
  v19 = (wchar_t **)&v62;
  v55 = &v61;
  v56 = (wchar_t **)&v62;
  do
  {
    if ( v9 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_76;
    }
    v20 = (char *)v12 + (unsigned int)v16;
    v53 = (__int64)v20;
    v48 = *v20;
    v21 = *v20;
    v22 = (unsigned __int8)*v20;
    if ( v22 > 0x51 )
    {
      if ( (unsigned __int8)*v20 < 0x80u )
        goto LABEL_21;
      if ( (unsigned __int8)*v20 > 0x93u )
      {
        if ( (unsigned __int8)*v20 <= 0x9Fu )
          goto LABEL_21;
        if ( (unsigned __int8)*v20 > 0xA3u )
        {
          if ( (unsigned __int8)*v20 <= 0xF7u || (unsigned __int8)*v20 > 0xFBu )
            goto LABEL_21;
          PrintableAttributeName = GetPrintableAttributeName((__int64)v20, a2 - (unsigned int)v16, v21, &v49, &v51);
          if ( PrintableAttributeName )
          {
LABEL_68:
            v16 = v49;
            goto LABEL_73;
          }
          ++v14;
          ++v47;
          ++v17;
          v63[v9] = v49;
          ++v19;
          ++v9;
          v49 = 0LL;
          ++v18;
          goto LABEL_63;
        }
      }
      if ( (unsigned __int8)(v21 + 96) <= 1u )
      {
        if ( v9 < 2 )
          goto LABEL_21;
        PrintableAttributeName = EncloseSubCondition((void **)&v63[v17]);
        if ( PrintableAttributeName )
          goto LABEL_76;
        v24 = EncloseSubCondition((void **)&v63[v47]);
      }
      else
      {
        if ( v21 != -94 )
        {
LABEL_39:
          OperatorIndexByToken = GetOperatorIndexByToken(*v20);
          if ( OperatorIndexByToken < 0 )
            goto LABEL_21;
          v26 = 3LL * OperatorIndexByToken;
          v27 = -1LL;
          v28 = (&Operators)[v26];
          v53 = v26;
          do
            ++v27;
          while ( v28[v27] );
          v29 = 2 * v27;
          LODWORD(v49) = v29;
          if ( LOBYTE((&Operators)[v26 + 1]) )
          {
            if ( !v9 )
              goto LABEL_21;
            v30 = *v19;
            if ( (int)ULongAddStringSize(v29, *v19, &v49) < 0 )
              goto LABEL_71;
            v31 = (unsigned int)((_DWORD)v49 + 8);
            v16 = (wchar_t *)SddlpAlloc(v31);
            if ( !v16 )
              goto LABEL_70;
            if ( v48 == -94 )
            {
              v32 = RtlStringCchPrintfW(v16, v31 >> 1, L"(%ls%ls)", (&Operators)[v53], v30);
            }
            else
            {
              v33 = *((_BYTE *)&Operators + 8 * v53 + 8);
              if ( (v33 == -121 || v33 == -115)
                && (!wcsnicmp(v30, L"@USER.", 6uLL) || !wcsnicmp(v30, L"@DEVICE.", 8uLL)) )
              {
                PrintableAttributeName = 1336;
                goto LABEL_73;
              }
              v32 = RtlStringCchPrintfW(v16, v31 >> 1, L"(%ls %ls)", (&Operators)[v53], v30);
            }
            if ( v32 < 0 )
              goto LABEL_72;
            SddlpFree(v30);
            v34 = v14 - 1;
            v35 = v47 - 1;
            v36 = v50 - 1;
            v37 = v9 - 1;
            v38 = v19 - 1;
            v39 = v55 - 1;
          }
          else
          {
            if ( v9 < 2 )
              goto LABEL_21;
            v40 = *v19;
            if ( (int)ULongAddStringSize(v29, v40, &v49) < 0
              || (v41 = *v18, (int)ULongAddStringSize((unsigned int)v49, *v18, &v49) < 0) )
            {
LABEL_71:
              PrintableAttributeName = 534;
              goto LABEL_76;
            }
            v42 = (unsigned int)((_DWORD)v49 + 10);
            v16 = (wchar_t *)SddlpAlloc(v42);
            if ( !v16 )
            {
LABEL_70:
              PrintableAttributeName = 8;
              goto LABEL_76;
            }
            if ( RtlStringCchPrintfW(v16, v42 >> 1, L"(%ls %ls %ls)", v41, (&Operators)[v53], v40) < 0 )
            {
LABEL_72:
              PrintableAttributeName = 50;
LABEL_73:
              if ( v16 )
                SddlpFree(v16);
              goto LABEL_76;
            }
            SddlpFree(v40);
            SddlpFree(v41);
            v34 = v14 - 2;
            v35 = v47 - 2;
            v36 = v50 - 2;
            v37 = v9 - 2;
            v38 = v56 - 2;
            v39 = v55 - 2;
          }
          v63[v37] = v16;
          LODWORD(v16) = v54;
          v9 = v37 + 1;
          v14 = v34 + 1;
          v47 = v35 + 1;
          v17 = v36 + 1;
          v51 = 1;
          v19 = v38 + 1;
          v18 = v39 + 1;
          goto LABEL_62;
        }
        if ( v9 < 1 )
          goto LABEL_21;
        v24 = EncloseSubCondition((void **)&v63[v17]);
      }
      PrintableAttributeName = v24;
      if ( v24 )
        goto LABEL_76;
      v20 = (char *)v53;
      goto LABEL_39;
    }
    if ( (unsigned __int8)*v20 >= 0x50u )
      goto LABEL_15;
    if ( *v20 )
    {
      if ( (unsigned __int8)*v20 > 4u && v22 != 16 && v22 != 24 )
        goto LABEL_21;
LABEL_15:
      PrintableAttributeName = GetPrintableOperandValue(v20, a2 - (unsigned int)v16, &v49, &v51, v8, v10, v60, a8);
      if ( PrintableAttributeName )
        goto LABEL_68;
      ++v14;
      ++v47;
      ++v17;
      v63[v9] = v49;
      ++v19;
      ++v9;
      ++v18;
LABEL_62:
      v49 = 0LL;
LABEL_63:
      a2 = v52;
      v12 = v57;
      v8 = v58;
      v10 = v59;
      v50 = v17;
      v56 = v19;
      v55 = v18;
      goto LABEL_64;
    }
    while ( 1 )
    {
      v16 = (wchar_t *)(unsigned int)((_DWORD)v16 + 1);
      v23 = (_DWORD)v16 == a2;
      if ( (unsigned int)v16 >= a2 )
        break;
      if ( *((_BYTE *)v12 + (_QWORD)v16) )
      {
        v23 = (_DWORD)v16 == a2;
        break;
      }
    }
    if ( !v23 )
    {
LABEL_21:
      PrintableAttributeName = 1336;
      goto LABEL_76;
    }
LABEL_64:
    LODWORD(v16) = v51 + (_DWORD)v16;
    v54 = (int)v16;
  }
  while ( (unsigned int)v16 < a2 );
  if ( v14 == 1 )
  {
    v43 = v61;
    v44 = (void **)v61;
    *v61 = v63[0];
    PrintableAttributeName = EncloseSubCondition(v44);
    if ( !PrintableAttributeName )
      return PrintableAttributeName;
    *v43 = 0LL;
    goto LABEL_77;
  }
LABEL_76:
  if ( !v14 )
    return PrintableAttributeName;
LABEL_77:
  v45 = v14;
  if ( !PrintableAttributeName )
    PrintableAttributeName = 1336;
  while ( v45 )
  {
    v46 = (void *)v63[--v45];
    SddlpFree(v46);
  }
  return PrintableAttributeName;
}
