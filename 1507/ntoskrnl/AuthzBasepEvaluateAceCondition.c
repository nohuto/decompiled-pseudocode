/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x14011C690
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x1400CBEF0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1400CCA50 (SepMaximumAccessCheck.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheckEx @ 0x14015A940 (SepMaximumAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140162460 (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140584948 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140015C80 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepResetOperands @ 0x14011CBEC (AuthzBasepResetOperands.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14011CC68 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepPushResult @ 0x14011CD48 (AuthzBasepPushResult.c)
 *     AuthzBasepIsValidExpression @ 0x14011CD68 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x14011CE8C (AuthzBasepEvaluateAttribute.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     __report_rangecheckfailure @ 0x1401DC4F0 (__report_rangecheckfailure.c)
 *     SepPotentialGlobalTableAttribute @ 0x14024FE78 (SepPotentialGlobalTableAttribute.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025004C (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepDeviceMemberOf @ 0x14026A658 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepEvaluateExpression @ 0x14026A79C (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x14026AC24 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepMemberOf @ 0x14026AE70 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x14026B048 (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x14053A26C (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        char a11,
        _DWORD *a12)
{
  _DWORD *v12; // rdi
  _DWORD *v13; // r15
  int SecurityAttributeAndValues; // ebx
  unsigned int v16; // r11d
  _QWORD *v17; // rax
  _DWORD *v18; // r12
  __int64 v19; // rcx
  unsigned int v20; // r14d
  __int64 v21; // rsi
  char *v22; // rdi
  char v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int v26; // ecx
  unsigned int v27; // esi
  unsigned __int64 v28; // r14
  int v29; // eax
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rsi
  int v34; // eax
  _BYTE *v35; // rdi
  __int64 v36; // r14
  PVOID *v37; // rsi
  char IsValidExpression; // al
  unsigned int v40; // ebx
  __int64 v41; // r8
  char v42; // al
  bool v43; // zf
  __int64 v44; // r10
  int ConstantOperand; // eax
  bool v46; // zf
  char v47; // al
  __int64 v48; // rcx
  char v49; // al
  int v50; // r8d
  int v51; // r9d
  char v52; // al
  char v53; // r15
  __int64 v54; // r10
  char v55; // al
  int v56; // eax
  int v57; // eax
  char v58; // al
  int v59; // eax
  int v60; // r10d
  char v61; // al
  int v62; // r8d
  int v63; // r9d
  char v64; // al
  _WORD v65[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v66[4]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v67; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v68[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  PVOID v69; // [rsp+40h] [rbp-C0h] BYREF
  char v70; // [rsp+48h] [rbp-B8h]
  _DWORD *v71; // [rsp+50h] [rbp-B0h]
  int v72; // [rsp+58h] [rbp-A8h] BYREF
  char v73; // [rsp+5Ch] [rbp-A4h]
  bool v74; // [rsp+5Dh] [rbp-A3h]
  int v75; // [rsp+60h] [rbp-A0h] BYREF
  int v76[3]; // [rsp+64h] [rbp-9Ch] BYREF
  _OWORD v77[5]; // [rsp+70h] [rbp-90h] BYREF
  int v78; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-38h]
  unsigned int v80; // [rsp+D0h] [rbp-30h]
  _DWORD *v81; // [rsp+D8h] [rbp-28h]
  unsigned int v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  _QWORD v86[6]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v87[8]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v88[256]; // [rsp+1B0h] [rbp+B0h] BYREF

  v12 = a8;
  v13 = a12;
  v84 = a3;
  SecurityAttributeAndValues = 0;
  v79 = a2;
  v83 = a1;
  v85 = a4;
  v81 = a8;
  v71 = a12;
  v72 = 0;
  memset(v87, 0, sizeof(v87));
  LOWORD(v77[0]) = 0;
  *(_WORD *)((char *)v77 + 5) = 0;
  BYTE7(v77[0]) = 0;
  BYTE4(v77[0]) = 0;
  memset((char *)v77 + 8, 0, 0x48uLL);
  LOWORD(v86[0]) = 0;
  memset((char *)v86 + 4, 0, 0x24uLL);
  v67 = -1;
  LOBYTE(v16) = 0;
  v17 = &v87[1];
  *a12 = -1;
  v18 = 0LL;
  v75 = 0;
  v19 = 2LL;
  v76[0] = 0;
  v78 = 0;
  v65[0] = 0;
  v68[0] = 0;
  v66[0] = 0;
  v73 = 0;
  v70 = 0;
  v69 = 0LL;
  do
  {
    *v17 = 0LL;
    v17 += 8;
    --v19;
  }
  while ( v19 );
  HIDWORD(v86[1]) = 1;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    goto LABEL_46;
  }
  v20 = a9;
  v74 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_46;
  }
  AuthzBasepResetOperands(v77, v65);
  LOBYTE(v16) = 0;
  LODWORD(v21) = 4;
  if ( a9 <= 4 )
    goto LABEL_45;
  while ( 1 )
  {
    v22 = (char *)v12 + (unsigned int)v21;
    v23 = *v22;
    v24 = (unsigned __int8)*v22;
    if ( (unsigned __int8)*v22 > 0x8Bu )
    {
      if ( (unsigned __int8)*v22 > 0x92u )
      {
        if ( (_DWORD)v24 != 147 )
        {
          if ( (unsigned __int8)*v22 <= 0x9Fu )
            goto LABEL_103;
          if ( (unsigned __int8)*v22 > 0xA1u )
          {
            if ( (_DWORD)v24 != 162 )
            {
              if ( (unsigned __int8)*v22 <= 0xF7u || (unsigned __int8)*v22 > 0xFBu )
                goto LABEL_103;
              v25 = (unsigned int)(v21 + 1);
              if ( (_DWORD)v18 == 2 )
              {
                if ( HIDWORD(v77[0]) == 1 )
                  goto LABEL_103;
                v67 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v77[1]);
                SecurityAttributeAndValues = AuthzBasepPushResult(v88, &v72, v67);
                if ( SecurityAttributeAndValues < 0 )
                  goto LABEL_77;
                if ( LOBYTE(v65[0]) != (_BYTE)v16 )
                {
                  ExFreePoolWithTag(*(PVOID *)(v54 + 16), 0);
                  LOBYTE(v16) = 0;
                }
                v87[0] = v87[4];
                v87[1] = v87[5];
                v87[2] = v87[6];
                v87[3] = v87[7];
                v77[0] = *(_OWORD *)((char *)&v77[2] + 8);
                *(_OWORD *)((char *)&v77[1] + 8) = v77[4];
                *(_QWORD *)&v77[1] = v87;
                LOBYTE(v65[0]) = HIBYTE(v65[0]);
                HIBYTE(v65[0]) = v16;
                memset((char *)&v77[2] + 8, 0, 0x28uLL);
                memset(&v87[4], 0, 0x40uLL);
                LOBYTE(v16) = 0;
                LODWORD(v18) = 1;
              }
              if ( v20 - (unsigned int)v25 < 4 )
                goto LABEL_103;
              v26 = *(_DWORD *)((char *)v81 + v25);
              v27 = v25 + 4;
              v82 = v26;
              v80 = v27;
              if ( v20 - v27 < v26 )
                goto LABEL_103;
              if ( v26 > 0xFFFE )
              {
                SecurityAttributeAndValues = -1073741562;
                goto LABEL_77;
              }
              LODWORD(v86[3]) = v26;
              v28 = (unsigned __int64)(unsigned int)v18 << 6;
              v86[4] = (char *)v81 + v27;
              v29 = AuthzBasepUnicodeStringFromOperandValue(
                      v86,
                      0LL,
                      (char *)v87 + v28 + 8,
                      (char *)v65 + (unsigned int)v18);
              LOBYTE(v16) = 0;
              SecurityAttributeAndValues = v29;
              if ( v29 < 0 )
                goto LABEL_77;
              v30 = (_QWORD *)((char *)v87 + v28);
              if ( v23 == -7 )
              {
                if ( a11 )
                  v31 = a5;
                else
                  v31 = v85;
              }
              else if ( v23 == -5 )
              {
                if ( a11 )
                  v31 = a7;
                else
                  v31 = a6;
              }
              else
              {
                v31 = v84;
                if ( v23 != -6 )
                  v31 = v79;
              }
              *v30 = v31;
              *(_QWORD *)&v87[4 * (unsigned __int64)(unsigned int)v18 + 3] = 0LL;
              *((_QWORD *)&v87[4 * (unsigned __int64)(unsigned int)v18 + 3] + 1) = 0LL;
              SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64 *)((char *)v87 + v28));
              if ( SecurityAttributeAndValues != -1073741275 )
              {
LABEL_32:
                LOBYTE(v16) = 0;
LABEL_33:
                if ( SecurityAttributeAndValues >= 0 )
                {
                  v33 = 40LL * (unsigned int)v18;
                  *(_WORD *)((char *)v77 + v33) = WORD4(v87[4 * (unsigned __int64)(unsigned int)v18 + 1]);
                  *(_DWORD *)((char *)v77 + v33 + 4) = v87[4 * (unsigned __int64)(unsigned int)v18 + 2];
                  *(_QWORD *)((char *)&v77[1] + v33) = v30;
LABEL_35:
                  *(_DWORD *)((char *)&v77[1] + v33 + 8) = 0;
                  *(_QWORD *)((char *)&v77[2] + v33) = 0LL;
                  *(_DWORD *)((char *)v77 + v33 + 8) = 0;
                  switch ( v23 )
                  {
                    case -7:
                      *(_DWORD *)((char *)v77 + v33 + 12) = 3;
                      break;
                    case -6:
                      *(_DWORD *)((char *)v77 + v33 + 12) = 4;
                      break;
                    case -5:
                      *(_DWORD *)((char *)v77 + v33 + 12) = 5;
                      break;
                    default:
                      *(_DWORD *)((char *)v77 + v33 + 12) = *v30 != 0LL ? 2 : 6;
                      break;
                  }
                  LODWORD(v18) = (_DWORD)v18 + 1;
                  LODWORD(v21) = v82 + v80;
                  v20 = a9;
                  goto LABEL_40;
                }
                if ( SecurityAttributeAndValues != -1073741275 )
                  goto LABEL_77;
LABEL_144:
                SecurityAttributeAndValues = 0;
                v33 = 40LL * (unsigned int)v18;
                *(_WORD *)((char *)v77 + v33) = 0;
                *(_DWORD *)((char *)v77 + v33 + 4) = 0;
                *(_QWORD *)((char *)&v77[1] + v33) = 0LL;
                if ( *((_BYTE *)v65 + (unsigned int)v18) )
                {
                  ExFreePoolWithTag(*(PVOID *)&v87[4 * (unsigned __int64)(unsigned int)v18 + 1], 0);
                  if ( (unsigned int)v18 >= 2uLL )
                    _report_rangecheckfailure();
                  LOBYTE(v16) = 0;
                  *((_BYTE *)v65 + (unsigned int)v18) = 0;
                }
                goto LABEL_35;
              }
              v32 = v79;
              if ( *v30 != v79 || (*((_DWORD *)SepSingletonGlobal + 4) & 1) == 0 )
              {
                LOBYTE(v16) = 0;
LABEL_29:
                if ( v74 || *v30 != v32 )
                  goto LABEL_144;
                *v30 = 0LL;
                SecurityAttributeAndValues = AuthzBasepQuerySystemSecurityAttributeAndValues((char *)v87 + v28);
                goto LABEL_32;
              }
              v55 = SepPotentialGlobalTableAttribute((PCUNICODE_STRING)((char *)v87 + v28 + 8));
              LOBYTE(v16) = 0;
              if ( !v55 || v73 )
                goto LABEL_29;
              if ( !v70 )
              {
                v56 = SepValidateAndCopyGlobalEntry(v32, &v69);
                LOBYTE(v16) = 0;
                SecurityAttributeAndValues = v56;
                if ( v56 < 0 )
                {
                  v73 = 1;
LABEL_140:
                  if ( SecurityAttributeAndValues != -1073741275 )
                    goto LABEL_33;
                  v32 = v79;
                  goto LABEL_29;
                }
                v70 = 1;
              }
              *v30 = v69;
              v57 = AuthzBasepQuerySecurityAttributeAndValues((__int64 *)((char *)v87 + v28));
              LOBYTE(v16) = 0;
              SecurityAttributeAndValues = v57;
              if ( v57 != -1073741275 )
                goto LABEL_33;
              *v30 = v79;
              goto LABEL_140;
            }
            LODWORD(v24) = (unsigned __int8)*v22;
            LODWORD(v21) = v21 + 1;
            IsValidExpression = AuthzBasepIsValidExpression(v24, v77, (unsigned int)v18, v66);
            LOBYTE(v16) = 0;
            if ( !IsValidExpression )
              goto LABEL_103;
            if ( (_DWORD)v18 == 1 )
            {
              v67 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v77[1]);
              v40 = v67;
              AuthzBasepResetOperands(v77, v65);
              v16 = 0;
            }
            else
            {
              SecurityAttributeAndValues = AuthzBasepPopResult(v88, &v72, &v67);
              if ( SecurityAttributeAndValues < 0 )
                goto LABEL_77;
              v40 = v67;
            }
            if ( v40 == -1 )
            {
              v41 = 0xFFFFFFFFLL;
            }
            else
            {
              v41 = v16;
              LOBYTE(v41) = v40 == 0;
            }
            goto LABEL_59;
          }
          LOBYTE(v24) = *v22;
          LODWORD(v21) = v21 + 1;
          v58 = AuthzBasepIsValidExpression(v24, v77, (unsigned int)v18, v66);
          LOBYTE(v16) = 0;
          if ( !v58 )
            goto LABEL_103;
          if ( (_DWORD)v18 == 2 )
          {
            v75 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v77[1]);
            v59 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v77[3] + 1));
            v76[0] = v59;
          }
          else
          {
            if ( (_DWORD)v18 == 1 )
            {
              v75 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v77[1]);
            }
            else
            {
              SecurityAttributeAndValues = AuthzBasepPopResult(v88, &v72, &v75);
              if ( SecurityAttributeAndValues < 0 )
                goto LABEL_77;
            }
            SecurityAttributeAndValues = AuthzBasepPopResult(v88, &v72, v76);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_77;
            v59 = v76[0];
          }
          if ( v23 == -96 )
          {
            if ( v60 && v59 )
            {
              if ( v60 == -1 || v59 == -1 )
              {
LABEL_166:
                v41 = 0xFFFFFFFFLL;
                goto LABEL_110;
              }
LABEL_109:
              v41 = 1LL;
LABEL_110:
              v67 = v41;
              goto LABEL_59;
            }
          }
          else
          {
            if ( v60 == 1 || v59 == 1 )
              goto LABEL_109;
            if ( v60 == -1 || v59 == -1 )
              goto LABEL_166;
          }
          v41 = v16;
          v67 = v16;
          goto LABEL_59;
        }
        goto LABEL_172;
      }
      if ( (_DWORD)v24 == 146 )
        goto LABEL_111;
      if ( (_DWORD)v24 == 140 )
      {
LABEL_172:
        LOBYTE(v24) = *v22;
        LODWORD(v21) = v21 + 1;
        v61 = AuthzBasepIsValidExpression(v24, v77, (unsigned int)v18, v66);
        LOBYTE(v16) = 0;
        if ( !v61 )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v66[0] )
            goto LABEL_77;
        }
        if ( !v66[0] )
        {
          if ( v23 == -118 || (v64 = 0, v23 == -111) )
            v64 = 1;
          LOBYTE(v63) = a11;
          LOBYTE(v62) = a10;
          SecurityAttributeAndValues = AuthzBasepDeviceMemberOf((unsigned int)v77, v83, v62, v63, v64, (__int64)v68);
        }
        if ( SecurityAttributeAndValues >= 0 )
          v41 = v68[0] != 0;
        else
          v41 = 0xFFFFFFFFLL;
        v53 = v23 + 111;
        goto LABEL_183;
      }
      if ( (_DWORD)v24 != 141 )
      {
        if ( (unsigned __int8)*v22 <= 0x8Du )
          goto LABEL_103;
        if ( (unsigned __int8)*v22 > 0x8Fu )
        {
          if ( (_DWORD)v24 != 144 )
          {
            v46 = (_DWORD)v24 == 145;
LABEL_102:
            if ( !v46 )
              goto LABEL_103;
            goto LABEL_172;
          }
          goto LABEL_111;
        }
        goto LABEL_104;
      }
      goto LABEL_64;
    }
    if ( (_DWORD)v24 == 139 )
      goto LABEL_111;
    if ( (unsigned __int8)*v22 > 0x86u )
    {
      v24 = (unsigned int)(v24 - 135);
      if ( (_DWORD)v24 )
      {
        v24 = (unsigned int)(v24 - 1);
        if ( (_DWORD)v24 )
        {
          v24 = (unsigned int)(v24 - 1);
          if ( (_DWORD)v24 )
          {
            LODWORD(v24) = v24 - 1;
            v46 = (_DWORD)v24 == 0;
            v24 = (unsigned int)v24;
            goto LABEL_102;
          }
LABEL_111:
          LOBYTE(v24) = *v22;
          LODWORD(v21) = v21 + 1;
          v49 = AuthzBasepIsValidExpression(v24, v77, (unsigned int)v18, v66);
          LOBYTE(v16) = 0;
          if ( !v49 )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v66[0] )
              goto LABEL_77;
          }
          if ( !v66[0] )
          {
            if ( v23 == -119 || (v52 = 0, v23 == -112) )
              v52 = 1;
            LOBYTE(v51) = a11;
            LOBYTE(v50) = a10;
            SecurityAttributeAndValues = AuthzBasepMemberOf((unsigned int)v77, v83, v50, v51, v52, (__int64)v68);
          }
          if ( SecurityAttributeAndValues >= 0 )
            v41 = v68[0] != 0;
          else
            v41 = 0xFFFFFFFFLL;
          v53 = v23 + 112;
LABEL_183:
          v67 = v41;
          if ( (v53 & 0xFD) != 0 )
            goto LABEL_59;
LABEL_184:
          if ( (_DWORD)v41 == -1 )
            goto LABEL_59;
LABEL_185:
          v67 = v41 == 0;
          v41 = (_DWORD)v41 == 0;
          goto LABEL_59;
        }
LABEL_104:
        LOBYTE(v24) = *v22;
        LODWORD(v21) = v21 + 1;
        v47 = AuthzBasepIsValidExpression(v24, v77, (unsigned int)v18, v66);
        LOBYTE(v16) = 0;
        if ( !v47 )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v66[0] )
            goto LABEL_77;
        }
        if ( v66[0] )
          goto LABEL_166;
        LOBYTE(v48) = v23;
        AuthzBasepEvaluateExpression(v48, v77, &v67);
        v41 = v67;
        if ( v23 != -114 && v23 != -113 )
        {
LABEL_59:
          SecurityAttributeAndValues = AuthzBasepPushResult(v88, &v72, v41);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_77;
          AuthzBasepResetOperands(v77, v65);
          LOBYTE(v16) = 0;
          LODWORD(v18) = 0;
          goto LABEL_40;
        }
        goto LABEL_184;
      }
LABEL_64:
      LOBYTE(v24) = *v22;
      LODWORD(v21) = v21 + 1;
      v42 = AuthzBasepIsValidExpression(v24, v77, (unsigned int)v18, v66);
      LOBYTE(v16) = 0;
      if ( !v42 )
        goto LABEL_103;
      v41 = *(_QWORD *)&v77[1] != 0LL;
      v67 = *(_QWORD *)&v77[1] != 0LL;
      if ( v23 != -115 )
        goto LABEL_59;
      goto LABEL_185;
    }
    if ( (unsigned __int8)*v22 >= 0x80u )
      goto LABEL_104;
    if ( *v22 )
    {
      if ( (unsigned __int8)*v22 > 4u
        && (_DWORD)v24 != 16
        && (_DWORD)v24 != 24
        && ((unsigned __int8)*v22 <= 0x4Fu || (unsigned __int8)*v22 > 0x51u) )
      {
        goto LABEL_103;
      }
      if ( (_DWORD)v18 == 2 )
      {
        if ( HIDWORD(v77[0]) == 1 )
          goto LABEL_103;
        v67 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v77[1]);
        SecurityAttributeAndValues = AuthzBasepPushResult(v88, &v72, v67);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_77;
        if ( LOBYTE(v65[0]) != (_BYTE)v16 )
        {
          ExFreePoolWithTag(*(PVOID *)(v44 + 16), 0);
          LOBYTE(v16) = 0;
        }
        v87[0] = v87[4];
        v87[1] = v87[5];
        v87[2] = v87[6];
        v87[3] = v87[7];
        v77[0] = *(_OWORD *)((char *)&v77[2] + 8);
        *(_OWORD *)((char *)&v77[1] + 8) = v77[4];
        *(_QWORD *)&v77[1] = v87;
        LOBYTE(v65[0]) = HIBYTE(v65[0]);
        HIBYTE(v65[0]) = v16;
        memset((char *)&v77[2] + 8, 0, 0x28uLL);
        memset(&v87[4], 0, 0x40uLL);
        LODWORD(v18) = 1;
      }
      ConstantOperand = AuthzBasepGetConstantOperand(
                          v22,
                          v20 - (unsigned int)v21,
                          (char *)v77 + 40 * (unsigned int)v18,
                          &v78);
      LOBYTE(v16) = 0;
      SecurityAttributeAndValues = ConstantOperand;
      if ( ConstantOperand < 0 )
        goto LABEL_77;
      LODWORD(v18) = (_DWORD)v18 + 1;
      LODWORD(v21) = v78 + v21;
    }
    else
    {
      while ( 1 )
      {
        v21 = (unsigned int)(v21 + 1);
        v43 = (_DWORD)v21 == v20;
        if ( (unsigned int)v21 >= v20 )
          break;
        if ( *((_BYTE *)v81 + v21) )
        {
          v43 = (_DWORD)v21 == v20;
          break;
        }
      }
      if ( !v43 )
      {
LABEL_103:
        SecurityAttributeAndValues = -1073741406;
        goto LABEL_77;
      }
    }
LABEL_40:
    if ( (unsigned int)v21 >= v20 )
      break;
    v12 = v81;
  }
  if ( v72 == 1 )
  {
    v34 = v88[0];
LABEL_44:
    v13 = v71;
    *v71 = v34;
    goto LABEL_45;
  }
  if ( !v72 && (_DWORD)v18 == 1 )
  {
    v34 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v77[1]);
    goto LABEL_44;
  }
LABEL_77:
  v13 = v71;
LABEL_45:
  v18 = v69;
LABEL_46:
  v35 = v65;
  v36 = 2LL;
  v37 = (PVOID *)&v87[1];
  do
  {
    if ( *v35 != (_BYTE)v16 )
    {
      ExFreePoolWithTag(*v37, 0);
      LOBYTE(v16) = 0;
    }
    ++v35;
    v37 += 8;
    --v36;
  }
  while ( v36 );
  if ( v70 != (_BYTE)v16 && v18 )
  {
    AuthzBasepFreeSecurityAttributesList(v18);
    ExFreePoolWithTag(v18, 0x74416553u);
  }
  if ( SecurityAttributeAndValues < 0 )
    *v13 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
