/*
 * XREFs of LocalpGetStringForCondition @ 0x14070B8B8
 * Callers:
 *     LocalGetAceCondition @ 0x140709E98 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     SddlpAlloc @ 0x14070A49C (SddlpAlloc.c)
 *     SddlpFree @ 0x14070A4E0 (SddlpFree.c)
 *     EncloseSubCondition @ 0x14070A658 (EncloseSubCondition.c)
 *     GetPrintableAttributeName @ 0x14070A860 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x14070AA38 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x14070BED0 (ULongAddStringSize.c)
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
  __int64 v8; // r10
  __int64 v10; // r11
  _DWORD *v11; // r9
  unsigned int v12; // r8d
  unsigned int PrintableAttributeName; // ebx
  int v14; // r13d
  __int64 v16; // r12
  void **v17; // r15
  __int64 v18; // rsi
  int v19; // edx
  wchar_t **v20; // r14
  char *v21; // rdi
  bool v22; // zf
  unsigned int v23; // eax
  _BYTE *v24; // r8
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned int v29; // eax
  wchar_t *v30; // r14
  size_t v31; // r15
  wchar_t *v32; // rax
  wchar_t *v33; // rdi
  NTSTATUS v34; // eax
  char v35; // al
  int v36; // r13d
  int v37; // edx
  int v38; // eax
  __int64 v39; // rsi
  wchar_t **v40; // r14
  __int64 *v41; // r15
  wchar_t *v42; // r12
  void *v43; // r15
  size_t v44; // r14
  _QWORD *v45; // rdi
  void **v46; // rcx
  __int64 v47; // rdi
  void *v48; // rcx
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh]
  wchar_t *v51; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 v52; // [rsp+50h] [rbp-B0h]
  unsigned int v53; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v54; // [rsp+58h] [rbp-A8h]
  wchar_t **v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+68h] [rbp-98h]
  __int64 *v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  _DWORD *v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  _QWORD *v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v65[256]; // [rsp+B0h] [rbp-50h] BYREF

  v8 = a5;
  v10 = a6;
  v11 = a1;
  v12 = a2;
  v54 = a2;
  v60 = a1;
  PrintableAttributeName = 0;
  v62 = a3;
  v14 = 0;
  v59 = a5;
  v58 = a6;
  v61 = a7;
  v51 = 0LL;
  v53 = 0;
  if ( !a1 || !a3 || !a2 )
    return 87LL;
  if ( a2 < 6 || *a1 != 2020897377 )
    return 805LL;
  LODWORD(v16) = 4;
  v56 = 4;
  v49 = -2;
  v17 = (void **)&v63;
  v18 = 0LL;
  v57 = &v63;
  v19 = -1;
  v20 = (wchar_t **)&v64;
  v50 = -1;
  v55 = (wchar_t **)&v64;
  do
  {
    if ( v18 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_80;
    }
    v21 = (char *)v11 + (unsigned int)v16;
    v52 = *v21;
    if ( v52 > 0x51u )
    {
      if ( v52 < 0x80u )
        goto LABEL_21;
      if ( v52 > 0x93u )
      {
        if ( v52 <= 0x9Fu )
          goto LABEL_21;
        if ( v52 > 0xA2u )
        {
          if ( v52 <= 0xF7u || v52 > 0xFBu )
            goto LABEL_21;
          PrintableAttributeName = GetPrintableAttributeName((__int64)v21, v12 - (unsigned int)v16, v52, &v51, &v53);
          if ( PrintableAttributeName )
          {
LABEL_72:
            v33 = v51;
            goto LABEL_77;
          }
          ++v14;
          ++v20;
          ++v49;
          v19 = v50 + 1;
          v65[v18++] = v51;
          ++v17;
          v51 = 0LL;
          goto LABEL_67;
        }
      }
      if ( (unsigned __int8)(v52 + 96) <= 1u )
      {
        if ( v18 < 2 )
          goto LABEL_21;
        PrintableAttributeName = EncloseSubCondition((void **)&v65[v19]);
        if ( PrintableAttributeName )
          goto LABEL_80;
        v23 = EncloseSubCondition((void **)&v65[v49]);
      }
      else
      {
        if ( v52 != 0xA2 )
        {
LABEL_39:
          v24 = &unk_1402AE028;
          v25 = 0;
          v26 = 0LL;
          while ( *v24 != *v21 )
          {
            ++v25;
            ++v26;
            v24 += 24;
            if ( (unsigned __int64)v25 >= 0x17 )
            {
              v25 = -1;
              v26 = -1LL;
              break;
            }
          }
          if ( v25 < 0 )
          {
LABEL_21:
            PrintableAttributeName = 1336;
            goto LABEL_80;
          }
          v27 = 3 * v26;
          v28 = -1LL;
          v63 = 3 * v26;
          do
            ++v28;
          while ( (&Operators)[3 * v26][v28] );
          v29 = 2 * v28;
          LODWORD(v51) = v29;
          if ( LOBYTE((&Operators)[3 * v26 + 1]) )
          {
            if ( !v18 )
              goto LABEL_21;
            v30 = *v20;
            if ( (int)ULongAddStringSize(v29, v30, &v51) < 0 )
              goto LABEL_75;
            v31 = (unsigned int)((_DWORD)v51 + 8);
            v32 = (wchar_t *)SddlpAlloc(v31);
            v33 = v32;
            if ( !v32 )
              goto LABEL_74;
            if ( v52 == 0xA2 )
            {
              v34 = RtlStringCchPrintfW(v32, v31 >> 1, L"(%ls%ls)", (&Operators)[v27], v30);
            }
            else
            {
              v35 = *((_BYTE *)&Operators + 8 * v27 + 8);
              if ( (v35 == -121 || v35 == -115)
                && (!wcsnicmp(v30, L"@USER.", 6uLL) || !wcsnicmp(v30, L"@DEVICE.", 8uLL)) )
              {
                PrintableAttributeName = 1336;
                goto LABEL_77;
              }
              v34 = RtlStringCchPrintfW(v33, v31 >> 1, L"(%ls %ls)", (&Operators)[v27], v30);
            }
            if ( v34 < 0 )
              goto LABEL_76;
            SddlpFree(v30);
            v36 = v14 - 1;
            v37 = v50 - 1;
            v38 = v49 - 1;
            v39 = v18 - 1;
            v40 = v55 - 1;
            v41 = v57 - 1;
          }
          else
          {
            if ( v18 < 2 )
              goto LABEL_21;
            v42 = *v20;
            if ( (int)ULongAddStringSize(v29, *v20, &v51) < 0
              || (v43 = *v17, (int)ULongAddStringSize((unsigned int)v51, v43, &v51) < 0) )
            {
LABEL_75:
              PrintableAttributeName = 534;
              goto LABEL_80;
            }
            v44 = (unsigned int)((_DWORD)v51 + 10);
            v33 = (wchar_t *)SddlpAlloc(v44);
            if ( !v33 )
            {
LABEL_74:
              PrintableAttributeName = 8;
              goto LABEL_80;
            }
            if ( RtlStringCchPrintfW(v33, v44 >> 1, L"(%ls %ls %ls)", v43, (&Operators)[v63], v42) < 0 )
            {
LABEL_76:
              PrintableAttributeName = 50;
LABEL_77:
              if ( v33 )
                SddlpFree(v33);
              goto LABEL_80;
            }
            SddlpFree(v42);
            SddlpFree(v43);
            v36 = v14 - 2;
            v37 = v50 - 2;
            v38 = v49 - 2;
            v39 = v18 - 2;
            v40 = v55 - 2;
            v41 = v57 - 2;
          }
          LODWORD(v16) = v56;
          v65[v39] = v33;
          v14 = v36 + 1;
          v18 = v39 + 1;
          v49 = v38 + 1;
          v19 = v37 + 1;
          v53 = 1;
          v20 = v40 + 1;
          v17 = (void **)(v41 + 1);
          goto LABEL_66;
        }
        if ( v18 < 1 )
          goto LABEL_21;
        v23 = EncloseSubCondition((void **)&v65[v19]);
      }
      PrintableAttributeName = v23;
      if ( v23 )
        goto LABEL_80;
      goto LABEL_39;
    }
    if ( v52 >= 0x50u )
      goto LABEL_15;
    if ( v52 )
    {
      if ( v52 > 4u && v52 != 16 && v52 != 24 )
        goto LABEL_21;
LABEL_15:
      PrintableAttributeName = GetPrintableOperandValue(v21, v12 - (unsigned int)v16, &v51, &v53, v8, v10, v61, a8);
      if ( PrintableAttributeName )
        goto LABEL_72;
      ++v14;
      ++v20;
      ++v49;
      v19 = v50 + 1;
      v65[v18++] = v51;
      ++v17;
LABEL_66:
      v51 = 0LL;
LABEL_67:
      v12 = v54;
      v11 = v60;
      v8 = v59;
      v10 = v58;
      v50 = v19;
      v55 = v20;
      v57 = (__int64 *)v17;
      goto LABEL_68;
    }
    while ( 1 )
    {
      v16 = (unsigned int)(v16 + 1);
      v22 = (_DWORD)v16 == v12;
      if ( (unsigned int)v16 >= v12 )
        break;
      if ( *((_BYTE *)v11 + v16) )
      {
        v22 = (_DWORD)v16 == v12;
        break;
      }
    }
    if ( !v22 )
      goto LABEL_21;
LABEL_68:
    LODWORD(v16) = v53 + v16;
    v56 = v16;
  }
  while ( (unsigned int)v16 < v12 );
  if ( v14 == 1 )
  {
    v45 = v62;
    v46 = (void **)v62;
    *v62 = v65[0];
    PrintableAttributeName = EncloseSubCondition(v46);
    if ( !PrintableAttributeName )
      return PrintableAttributeName;
    *v45 = 0LL;
    goto LABEL_81;
  }
LABEL_80:
  if ( !v14 )
    return PrintableAttributeName;
LABEL_81:
  v47 = v14;
  if ( !PrintableAttributeName )
    PrintableAttributeName = 1336;
  while ( v47 )
  {
    v48 = (void *)v65[--v47];
    SddlpFree(v48);
  }
  return PrintableAttributeName;
}
