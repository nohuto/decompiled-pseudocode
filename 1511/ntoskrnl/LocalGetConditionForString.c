/*
 * XREFs of LocalGetConditionForString @ 0x1406898FC
 * Callers:
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     iswspace @ 0x140144964 (iswspace.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 *     SddlpFree @ 0x140687B40 (SddlpFree.c)
 *     AppendCondition @ 0x140687D98 (AppendCondition.c)
 *     FreeOperandValue @ 0x14068820C (FreeOperandValue.c)
 *     GetConditionToken @ 0x1406884B0 (GetConditionToken.c)
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     GetOperatorIndexByToken @ 0x140688E5C (GetOperatorIndexByToken.c)
 *     IsValueSizeFixed @ 0x1406898D4 (IsValueSizeFixed.c)
 */

__int64 __fastcall LocalGetConditionForString(
        wint_t *a1,
        wint_t **a2,
        _QWORD *a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  wint_t *v8; // rsi
  int v10; // r14d
  unsigned int appended; // ebx
  unsigned int v12; // edi
  int v13; // r15d
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rax
  const void **v19; // rcx
  int v20; // eax
  __int16 v21; // r11
  char ConditionToken; // al
  char v23; // r10
  __int64 v24; // rax
  __int64 v25; // rsi
  char v26; // al
  int OperatorIndexByToken; // eax
  char v28; // r9
  int v29; // eax
  char v30; // r11
  __int64 v31; // r9
  int v32; // eax
  char v33; // r11
  char v34; // r11
  __int64 v35; // r9
  __int64 v36; // r9
  int v37; // r10d
  __int64 v38; // rax
  char *v39; // rdi
  char v40; // al
  int v41; // eax
  int v42; // r10d
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // r9
  int v48; // r10d
  char v49; // cl
  char v50; // al
  unsigned int OperandValue; // eax
  char v52; // al
  const void **v53; // r15
  __int64 v54; // rdi
  char v55; // al
  const void **v56; // rdi
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  __int64 v60; // [rsp+40h] [rbp-C0h]
  char v61; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v62; // [rsp+51h] [rbp-AFh]
  char v63; // [rsp+53h] [rbp-ADh]
  char v64; // [rsp+54h] [rbp-ACh]
  int v65[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v66[2]; // [rsp+60h] [rbp-A0h]
  unsigned int v67; // [rsp+68h] [rbp-98h] BYREF
  wint_t *v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  wint_t **v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v74[256]; // [rsp+A0h] [rbp-60h] BYREF

  v68 = a1;
  v8 = a1;
  v72 = a2;
  v71 = a5;
  v10 = 0;
  v70 = a6;
  appended = 0;
  v12 = 0;
  v73 = a7;
  v13 = 0;
  *(_QWORD *)v66 = a3;
  v14 = 0LL;
  v62 = 0;
  v69 = 0LL;
  v63 = 0;
  if ( a1 && a2 && a3 && a4 )
  {
    *a3 = 0LL;
    v15 = -1LL;
    *a4 = 0;
    do
      ++v15;
    while ( a1[v15] );
    if ( (unsigned int)v15 >= 3 && *a1 == 40 )
    {
      v16 = (unsigned int)(v15 + 1);
      if ( (_DWORD)v15 != -1 )
      {
        *a4 = v16;
        v17 = 2 * v16;
        if ( v17 <= 0xFFFFFFFF )
        {
          *a4 = v17;
          v18 = SddlpAlloc((unsigned int)v17);
          v19 = *(const void ***)v66;
          **(_QWORD **)v66 = v18;
          if ( !v18 )
          {
            appended = 8;
            goto LABEL_118;
          }
          *v18 = 2020897377;
          v65[0] = 4;
          if ( !*v8 )
          {
LABEL_107:
            v54 = v10;
            if ( v10 )
            {
              while ( 1 )
              {
                v55 = v74[--v54];
                v61 = v55;
                if ( v55 == -2 )
                  break;
                LODWORD(Size) = 1;
                appended = AppendCondition(v19, a4, (unsigned int *)v65, &v61, Size);
                if ( appended )
                  goto LABEL_118;
                v19 = *(const void ***)v66;
                if ( !v54 )
                  goto LABEL_115;
              }
              appended = 1336;
            }
LABEL_115:
            *a4 = v65[0];
            *v72 = v8;
LABEL_116:
            if ( v14 )
              FreeOperandValue((_QWORD *)v14);
LABEL_118:
            if ( *a4 != 4 && !appended )
              return appended;
            goto LABEL_122;
          }
          while ( 1 )
          {
            v20 = iswspace(*v8);
            v21 = 0;
            if ( !v20 )
              break;
            ++v8;
LABEL_103:
            v68 = v8;
            if ( *v8 == v21 )
              goto LABEL_106;
          }
          if ( v10 == 255 )
          {
            appended = 1001;
            goto LABEL_118;
          }
          ConditionToken = GetConditionToken(v8, &v67);
          v21 = 0;
          v64 = ConditionToken;
          v23 = ConditionToken;
          if ( ConditionToken )
          {
            if ( ConditionToken == -2 )
            {
              if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 )
                goto LABEL_32;
              v24 = v10;
              v12 = 1;
              ++v10;
              v74[v24] = v23;
              goto LABEL_102;
            }
            v25 = v10;
            if ( ConditionToken == -1 )
            {
              if ( !v10 || v12 == 3 || v12 == 1 )
                goto LABEL_32;
              HIBYTE(v62) = v74[v10 - 1] == 0xFE;
              while ( 1 )
              {
                v26 = v74[--v25];
                --v10;
                LOBYTE(v62) = v26;
                v61 = v26;
                if ( v26 == -2 )
                  break;
                LODWORD(Size) = 1;
                appended = AppendCondition(*(const void ***)v66, a4, (unsigned int *)v65, &v61, Size);
                if ( appended )
                  goto LABEL_118;
                if ( !v25 )
                {
                  LOBYTE(v62) = v61;
                  if ( v61 != -2 )
                    goto LABEL_32;
                  break;
                }
              }
              if ( !v10 )
              {
                v8 = &v68[v67];
LABEL_106:
                v19 = *(const void ***)v66;
                goto LABEL_107;
              }
              OperatorIndexByToken = GetOperatorIndexByToken(v74[v10 - 1]);
              if ( OperatorIndexByToken != -1
                && !v28
                && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 19) != (_BYTE)v21
                && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8) != 0xA2 )
              {
                goto LABEL_32;
              }
              v12 = 2;
            }
            else
            {
              v29 = GetOperatorIndexByToken(ConditionToken);
              v31 = 3LL * v29;
              v65[1] = *((_DWORD *)&Operators + 6 * v29 + 3);
              if ( *((_BYTE *)&Operators + 24 * v29 + 18) != v30 && v12 != 4 && (v12 != 2 || HIBYTE(v62) == v30) )
                goto LABEL_32;
              v61 = (char)(&Operators)[3 * v29 + 1];
              if ( v61 )
              {
                if ( v12 > 1 )
                {
                  if ( v12 != 3 )
                    goto LABEL_32;
                  v32 = GetOperatorIndexByToken(v74[v10 - 1]);
                  if ( *((_BYTE *)&Operators + 24 * v32 + 19) != v33 )
                    goto LABEL_32;
                }
              }
              v34 = *((_BYTE *)&Operators + 8 * v31 + 19);
              if ( !v34 && (v12 & 0xFFFFFFFC) == 0 && v12 != 2 )
                goto LABEL_32;
              if ( v13 == 5 )
                goto LABEL_32;
              if ( v10 )
              {
                if ( v34 )
                {
                  v35 = v10 - 1;
                  if ( v10 - 1 >= 0 )
                  {
                    while ( (unsigned int)GetOperatorIndexByToken(v74[v35]) == -1 )
                    {
                      v35 = v36 - 1;
                      if ( v35 < 0 )
                        goto LABEL_59;
                    }
                    v38 = 3LL * (int)GetOperatorIndexByToken(v74[v37]);
                    if ( *((_BYTE *)&Operators + 8 * v38 + 19) )
                    {
                      if ( *((_BYTE *)&Operators + 8 * v38 + 8) != 0xA2 )
                      {
LABEL_32:
                        appended = 1336;
                        goto LABEL_118;
                      }
                    }
                  }
                }
              }
LABEL_59:
              if ( v61 || !v34 )
              {
                v21 = 0;
                v13 = 0;
              }
              else
              {
                v13 = 5;
                v21 = 0;
              }
              if ( v10 )
              {
                v39 = &v74[v10 - 1];
                while ( 1 )
                {
                  v40 = *v39;
                  if ( *v39 == -2 )
                    break;
                  LOBYTE(v62) = *v39;
                  v61 = v40;
                  v41 = GetOperatorIndexByToken(v62);
                  if ( v42 > *((_DWORD *)&Operators + 6 * v41 + 3) )
                    break;
                  LODWORD(Size) = 1;
                  --v10;
                  --v39;
                  v43 = AppendCondition(*(const void ***)v66, a4, (unsigned int *)v65, &v61, Size);
                  v21 = 0;
                  appended = v43;
                  if ( v43 )
                    goto LABEL_118;
                  LOBYTE(v62) = v61;
                  if ( !&v39[1LL - (_QWORD)v74] )
                    goto LABEL_71;
                }
                v44 = v10++;
                v74[v44] = v64;
              }
LABEL_71:
              v12 = 3;
            }
          }
          else
          {
            if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 || v13 == 3 )
              goto LABEL_32;
            if ( !v13 )
            {
              v13 = 5;
              if ( !v10 )
                goto LABEL_89;
              v45 = v10 - 1;
              if ( v10 - 1 < 0 )
                goto LABEL_89;
              while ( 1 )
              {
                LOBYTE(v62) = v74[v45];
                v46 = GetOperatorIndexByToken(v62);
                if ( v46 != -1 )
                  break;
                --v48;
                v45 = v47 - 1;
                if ( v45 < 0 )
                  goto LABEL_88;
              }
              v49 = *((_BYTE *)&Operators + 24 * v46 + 8);
              if ( (unsigned __int8)(v49 + 119) > 3u
                && (unsigned __int8)(v49 + 112) > 3u
                && BYTE1((&Operators)[3 * v46 + 1]) != (_BYTE)v21 )
              {
                v13 = 4;
              }
              if ( v49 == -121 || v49 == -115 )
                v63 = 1;
LABEL_88:
              if ( v48 < 0 )
LABEL_89:
                v13 = 4;
            }
            v12 = v13;
            v50 = 1;
            if ( v13 != 4 )
              v50 = v21;
            LOBYTE(v60) = a8;
            OperandValue = GetOperandValue(v8, v50, v21, &v69, &v67, v71, v70, v73, v60);
            v14 = v69;
            appended = OperandValue;
            if ( OperandValue )
              goto LABEL_116;
            if ( v63 )
            {
              v52 = *(_BYTE *)(v69 + 1) + 7;
              v63 = 0;
              if ( (v52 & 0xFD) == 0 )
              {
                appended = 1336;
                goto LABEL_116;
              }
            }
            v53 = *(const void ***)v66;
            LODWORD(Sizea) = 1;
            appended = AppendCondition(*(const void ***)v66, a4, (unsigned int *)v65, (const void *)(v69 + 1), Sizea);
            if ( appended )
              goto LABEL_116;
            if ( !IsValueSizeFixed(*(_BYTE *)(v14 + 1)) )
            {
              LODWORD(Size) = 4;
              appended = AppendCondition(v53, a4, (unsigned int *)v65, (const void *)(v14 + 4), Size);
              if ( appended )
                goto LABEL_116;
            }
            if ( *(_DWORD *)(v14 + 4) )
            {
              LODWORD(Size) = *(_DWORD *)(v14 + 4);
              appended = AppendCondition(v53, a4, (unsigned int *)v65, *(const void **)(v14 + 8), Size);
              if ( appended )
                goto LABEL_116;
            }
            FreeOperandValue((_QWORD *)v14);
            v21 = 0;
            v14 = 0LL;
            v69 = 0LL;
            v13 = 3;
          }
          v8 = v68;
LABEL_102:
          v8 += v67;
          goto LABEL_103;
        }
      }
      appended = 534;
      *a4 = -1;
    }
    else
    {
      appended = 1336;
    }
LABEL_122:
    v56 = *(const void ***)v66;
    if ( **(_QWORD **)v66 )
    {
      SddlpFree(**(void ***)v66);
      *v56 = 0LL;
      *a4 = 0;
    }
    return appended;
  }
  return 87LL;
}
