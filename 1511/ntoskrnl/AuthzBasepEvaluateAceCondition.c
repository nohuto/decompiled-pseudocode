/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x140006054
 * Callers:
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheckEx @ 0x14012BB10 (SepMaximumAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140135D0C (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140652A74 (SepExamineSaclEx.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x14000507C (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepResetOperands @ 0x1400065B8 (AuthzBasepResetOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140006634 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400066A8 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepEvaluateAttribute @ 0x1400067A8 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepPushResult @ 0x140006808 (AuthzBasepPushResult.c)
 *     AuthzBasepIsValidExpression @ 0x140006828 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401A8930 (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402010E8 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepDeviceMemberOf @ 0x14021AB04 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepEvaluateExpression @ 0x14021AC48 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x14021B0D0 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepMemberOf @ 0x14021B31C (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x14021B4F4 (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1403C576C (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
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
  PVOID v18; // r12
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
  bool v42; // zf
  char v43; // al
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
  __int64 v62; // r8
  __int64 v63; // r9
  char v64; // al
  int v65; // [rsp+20h] [rbp-E0h]
  _WORD v66[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v67[4]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v68; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v69[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  PVOID v70; // [rsp+40h] [rbp-C0h] BYREF
  char v71; // [rsp+48h] [rbp-B8h]
  _DWORD *v72; // [rsp+50h] [rbp-B0h]
  int v73; // [rsp+58h] [rbp-A8h] BYREF
  char v74; // [rsp+5Ch] [rbp-A4h]
  bool v75; // [rsp+5Dh] [rbp-A3h]
  int v76; // [rsp+60h] [rbp-A0h] BYREF
  int v77[3]; // [rsp+64h] [rbp-9Ch] BYREF
  _OWORD v78[5]; // [rsp+70h] [rbp-90h] BYREF
  int v79; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-38h]
  unsigned int v81; // [rsp+D0h] [rbp-30h]
  _DWORD *v82; // [rsp+D8h] [rbp-28h]
  unsigned int v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h]
  __int64 v86; // [rsp+F8h] [rbp-8h]
  _QWORD v87[6]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v88[8]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v89[256]; // [rsp+1B0h] [rbp+B0h] BYREF

  v12 = a8;
  v13 = a12;
  v85 = a3;
  SecurityAttributeAndValues = 0;
  v80 = a2;
  v84 = a1;
  v86 = a4;
  v82 = a8;
  v72 = a12;
  v73 = 0;
  memset(v88, 0, sizeof(v88));
  LOWORD(v78[0]) = 0;
  *(_WORD *)((char *)v78 + 5) = 0;
  BYTE7(v78[0]) = 0;
  BYTE4(v78[0]) = 0;
  memset((char *)v78 + 8, 0, 0x48uLL);
  LOWORD(v87[0]) = 0;
  memset((char *)v87 + 4, 0, 0x24uLL);
  v68 = -1;
  LOBYTE(v16) = 0;
  v17 = &v88[1];
  *a12 = -1;
  v18 = 0LL;
  v76 = 0;
  v19 = 2LL;
  v77[0] = 0;
  v79 = 0;
  v66[0] = 0;
  v69[0] = 0;
  v67[0] = 0;
  v74 = 0;
  v71 = 0;
  v70 = 0LL;
  do
  {
    *v17 = 0LL;
    v17 += 8;
    --v19;
  }
  while ( v19 );
  HIDWORD(v87[1]) = 1;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    goto LABEL_46;
  }
  v20 = a9;
  v75 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_46;
  }
  AuthzBasepResetOperands(v78, v66);
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
            goto LABEL_102;
          if ( (unsigned __int8)*v22 > 0xA1u )
          {
            if ( (_DWORD)v24 != 162 )
            {
              if ( (unsigned __int8)*v22 <= 0xF7u || (unsigned __int8)*v22 > 0xFBu )
                goto LABEL_102;
              v25 = (unsigned int)(v21 + 1);
              if ( (_DWORD)v18 == 2 )
              {
                if ( HIDWORD(v78[0]) == 1 )
                  goto LABEL_102;
                v68 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v78[1]);
                SecurityAttributeAndValues = AuthzBasepPushResult(v89, &v73, v68);
                if ( SecurityAttributeAndValues < 0 )
                  goto LABEL_103;
                if ( LOBYTE(v66[0]) != (_BYTE)v16 )
                {
                  ExFreePoolWithTag(*(PVOID *)(v54 + 16), 0);
                  LOBYTE(v16) = 0;
                }
                v88[0] = v88[4];
                v88[1] = v88[5];
                v88[2] = v88[6];
                v88[3] = v88[7];
                v78[0] = *(_OWORD *)((char *)&v78[2] + 8);
                *(_OWORD *)((char *)&v78[1] + 8) = v78[4];
                *(_QWORD *)&v78[1] = v88;
                LOBYTE(v66[0]) = HIBYTE(v66[0]);
                HIBYTE(v66[0]) = v16;
                memset((char *)&v78[2] + 8, 0, 0x28uLL);
                memset(&v88[4], 0, 0x40uLL);
                LOBYTE(v16) = 0;
                LODWORD(v18) = 1;
              }
              if ( v20 - (unsigned int)v25 < 4 )
                goto LABEL_102;
              v26 = *(_DWORD *)((char *)v82 + v25);
              v27 = v25 + 4;
              v83 = v26;
              v81 = v27;
              if ( v20 - v27 < v26 )
                goto LABEL_102;
              if ( v26 > 0xFFFE )
              {
                SecurityAttributeAndValues = -1073741562;
                goto LABEL_103;
              }
              LODWORD(v87[3]) = v26;
              v28 = (unsigned __int64)(unsigned int)v18 << 6;
              v87[4] = (char *)v82 + v27;
              v29 = AuthzBasepUnicodeStringFromOperandValue(
                      v87,
                      0LL,
                      (char *)v88 + v28 + 8,
                      (char *)v66 + (unsigned int)v18);
              LOBYTE(v16) = 0;
              SecurityAttributeAndValues = v29;
              if ( v29 < 0 )
                goto LABEL_103;
              v30 = (_QWORD *)((char *)v88 + v28);
              if ( v23 == -7 )
              {
                if ( a11 )
                  v31 = a5;
                else
                  v31 = v86;
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
                v31 = v85;
                if ( v23 != -6 )
                  v31 = v80;
              }
              *v30 = v31;
              *(_QWORD *)&v88[4 * (unsigned __int64)(unsigned int)v18 + 3] = 0LL;
              *((_QWORD *)&v88[4 * (unsigned __int64)(unsigned int)v18 + 3] + 1) = 0LL;
              SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((char *)v88 + v28);
              if ( SecurityAttributeAndValues != -1073741275 )
              {
LABEL_32:
                LOBYTE(v16) = 0;
LABEL_33:
                if ( SecurityAttributeAndValues >= 0 )
                {
                  v33 = 40LL * (unsigned int)v18;
                  *(_WORD *)((char *)v78 + v33) = WORD4(v88[4 * (unsigned __int64)(unsigned int)v18 + 1]);
                  *(_DWORD *)((char *)v78 + v33 + 4) = v88[4 * (unsigned __int64)(unsigned int)v18 + 2];
                  *(_QWORD *)((char *)&v78[1] + v33) = v30;
LABEL_35:
                  *(_DWORD *)((char *)&v78[1] + v33 + 8) = 0;
                  *(_QWORD *)((char *)&v78[2] + v33) = 0LL;
                  *(_DWORD *)((char *)v78 + v33 + 8) = 0;
                  switch ( v23 )
                  {
                    case -7:
                      *(_DWORD *)((char *)v78 + v33 + 12) = 3;
                      break;
                    case -6:
                      *(_DWORD *)((char *)v78 + v33 + 12) = 4;
                      break;
                    case -5:
                      *(_DWORD *)((char *)v78 + v33 + 12) = 5;
                      break;
                    default:
                      *(_DWORD *)((char *)v78 + v33 + 12) = *v30 != 0LL ? 2 : 6;
                      break;
                  }
                  LODWORD(v18) = (_DWORD)v18 + 1;
                  LODWORD(v21) = v83 + v81;
                  v20 = a9;
                  goto LABEL_40;
                }
                if ( SecurityAttributeAndValues != -1073741275 )
                  goto LABEL_103;
LABEL_145:
                SecurityAttributeAndValues = 0;
                v33 = 40LL * (unsigned int)v18;
                *(_WORD *)((char *)v78 + v33) = 0;
                *(_DWORD *)((char *)v78 + v33 + 4) = 0;
                *(_QWORD *)((char *)&v78[1] + v33) = 0LL;
                if ( *((_BYTE *)v66 + (unsigned int)v18) )
                {
                  ExFreePoolWithTag(*(PVOID *)&v88[4 * (unsigned __int64)(unsigned int)v18 + 1], 0);
                  if ( (unsigned int)v18 >= 2uLL )
                    _report_rangecheckfailure();
                  LOBYTE(v16) = 0;
                  *((_BYTE *)v66 + (unsigned int)v18) = 0;
                }
                goto LABEL_35;
              }
              v32 = v80;
              if ( *v30 == v80 && (SepSingletonGlobal[4] & 1) != 0 && (*(_DWORD *)(v84 + 200) & 0x20000) == 0 )
              {
                v55 = SepPotentialGlobalTableAttribute((PCUNICODE_STRING)((char *)v88 + v28 + 8));
                LOBYTE(v16) = 0;
                if ( v55 && !v74 )
                {
                  if ( !v71 )
                  {
                    v56 = SepValidateAndCopyGlobalEntry(v32, &v70);
                    LOBYTE(v16) = 0;
                    SecurityAttributeAndValues = v56;
                    if ( v56 < 0 )
                    {
                      v74 = 1;
LABEL_141:
                      if ( SecurityAttributeAndValues != -1073741275 )
                        goto LABEL_33;
                      v32 = v80;
                      goto LABEL_29;
                    }
                    v71 = 1;
                  }
                  *v30 = v70;
                  v57 = AuthzBasepQuerySecurityAttributeAndValues((char *)v88 + v28);
                  LOBYTE(v16) = 0;
                  SecurityAttributeAndValues = v57;
                  if ( v57 != -1073741275 )
                    goto LABEL_33;
                  *v30 = v80;
                  goto LABEL_141;
                }
              }
              else
              {
                LOBYTE(v16) = 0;
              }
LABEL_29:
              if ( v75 || *v30 != v32 )
                goto LABEL_145;
              *v30 = 0LL;
              SecurityAttributeAndValues = AuthzBasepQuerySystemSecurityAttributeAndValues((char *)v88 + v28);
              goto LABEL_32;
            }
            LODWORD(v24) = (unsigned __int8)*v22;
            LODWORD(v21) = v21 + 1;
            IsValidExpression = AuthzBasepIsValidExpression(v24, v78, (unsigned int)v18, v67);
            LOBYTE(v16) = 0;
            if ( !IsValidExpression )
              goto LABEL_102;
            if ( (_DWORD)v18 == 1 )
            {
              v68 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v78[1]);
              v40 = v68;
              AuthzBasepResetOperands(v78, v66);
              v16 = 0;
            }
            else
            {
              SecurityAttributeAndValues = AuthzBasepPopResult(v89, &v73, &v68);
              if ( SecurityAttributeAndValues < 0 )
                goto LABEL_103;
              v40 = v68;
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
          v58 = AuthzBasepIsValidExpression(v24, v78, (unsigned int)v18, v67);
          LOBYTE(v16) = 0;
          if ( !v58 )
            goto LABEL_102;
          if ( (_DWORD)v18 == 2 )
          {
            v76 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v78[1]);
            v59 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v78[3] + 1));
            v77[0] = v59;
          }
          else
          {
            if ( (_DWORD)v18 == 1 )
            {
              v76 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v78[1]);
            }
            else
            {
              SecurityAttributeAndValues = AuthzBasepPopResult(v89, &v73, &v76);
              if ( SecurityAttributeAndValues < 0 )
                goto LABEL_103;
            }
            SecurityAttributeAndValues = AuthzBasepPopResult(v89, &v73, v77);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_103;
            v59 = v77[0];
          }
          if ( v23 == -96 )
          {
            if ( v60 && v59 )
            {
              if ( v60 == -1 || v59 == -1 )
              {
LABEL_167:
                v41 = 0xFFFFFFFFLL;
                goto LABEL_110;
              }
LABEL_109:
              v41 = 1LL;
LABEL_110:
              v68 = v41;
              goto LABEL_59;
            }
          }
          else
          {
            if ( v60 == 1 || v59 == 1 )
              goto LABEL_109;
            if ( v60 == -1 || v59 == -1 )
              goto LABEL_167;
          }
          v41 = v16;
          v68 = v16;
          goto LABEL_59;
        }
        goto LABEL_173;
      }
      if ( (_DWORD)v24 == 146 )
        goto LABEL_111;
      if ( (_DWORD)v24 == 140 )
      {
LABEL_173:
        LOBYTE(v24) = *v22;
        LODWORD(v21) = v21 + 1;
        v61 = AuthzBasepIsValidExpression(v24, v78, (unsigned int)v18, v67);
        LOBYTE(v16) = 0;
        if ( !v61 )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v67[0] )
            goto LABEL_103;
        }
        if ( !v67[0] )
        {
          if ( v23 == -118 || (v64 = 0, v23 == -111) )
            v64 = 1;
          LOBYTE(v63) = a11;
          LOBYTE(v62) = a10;
          LOBYTE(v65) = v64;
          SecurityAttributeAndValues = AuthzBasepDeviceMemberOf(v78, v84, v62, v63, v65, v69);
        }
        if ( SecurityAttributeAndValues >= 0 )
          v41 = v69[0] != 0;
        else
          v41 = 0xFFFFFFFFLL;
        v53 = v23 + 111;
        goto LABEL_184;
      }
      if ( (_DWORD)v24 != 141 )
      {
        if ( (unsigned __int8)*v22 <= 0x8Du )
          goto LABEL_102;
        if ( (unsigned __int8)*v22 > 0x8Fu )
        {
          if ( (_DWORD)v24 != 144 )
          {
            v46 = (_DWORD)v24 == 145;
LABEL_101:
            if ( !v46 )
              goto LABEL_102;
            goto LABEL_173;
          }
          goto LABEL_111;
        }
        goto LABEL_104;
      }
      goto LABEL_72;
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
            goto LABEL_101;
          }
LABEL_111:
          LOBYTE(v24) = *v22;
          LODWORD(v21) = v21 + 1;
          v49 = AuthzBasepIsValidExpression(v24, v78, (unsigned int)v18, v67);
          LOBYTE(v16) = 0;
          if ( !v49 )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v67[0] )
              goto LABEL_103;
          }
          if ( !v67[0] )
          {
            if ( v23 == -119 || (v52 = 0, v23 == -112) )
              v52 = 1;
            LOBYTE(v51) = a11;
            LOBYTE(v50) = a10;
            SecurityAttributeAndValues = AuthzBasepMemberOf((unsigned int)v78, v84, v50, v51, v52, (__int64)v69);
          }
          if ( SecurityAttributeAndValues >= 0 )
            v41 = v69[0] != 0;
          else
            v41 = 0xFFFFFFFFLL;
          v53 = v23 + 112;
LABEL_184:
          v68 = v41;
          if ( (v53 & 0xFD) != 0 )
            goto LABEL_59;
LABEL_185:
          if ( (_DWORD)v41 == -1 )
            goto LABEL_59;
LABEL_186:
          v68 = v41 == 0;
          v41 = (_DWORD)v41 == 0;
          goto LABEL_59;
        }
LABEL_104:
        LOBYTE(v24) = *v22;
        LODWORD(v21) = v21 + 1;
        v47 = AuthzBasepIsValidExpression(v24, v78, (unsigned int)v18, v67);
        LOBYTE(v16) = 0;
        if ( !v47 )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v67[0] )
            goto LABEL_103;
        }
        if ( v67[0] )
          goto LABEL_167;
        LOBYTE(v48) = v23;
        AuthzBasepEvaluateExpression(v48, v78, &v68);
        v41 = v68;
        if ( v23 != -114 && v23 != -113 )
        {
LABEL_59:
          SecurityAttributeAndValues = AuthzBasepPushResult(v89, &v73, v41);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_103;
          AuthzBasepResetOperands(v78, v66);
          LOBYTE(v16) = 0;
          LODWORD(v18) = 0;
          goto LABEL_40;
        }
        goto LABEL_185;
      }
LABEL_72:
      LOBYTE(v24) = *v22;
      LODWORD(v21) = v21 + 1;
      v43 = AuthzBasepIsValidExpression(v24, v78, (unsigned int)v18, v67);
      LOBYTE(v16) = 0;
      if ( !v43 )
        goto LABEL_102;
      v41 = *(_QWORD *)&v78[1] != 0LL;
      v68 = *(_QWORD *)&v78[1] != 0LL;
      if ( v23 != -115 )
        goto LABEL_59;
      goto LABEL_186;
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
        goto LABEL_102;
      }
      if ( (_DWORD)v18 == 2 )
      {
        if ( HIDWORD(v78[0]) == 1 )
          goto LABEL_102;
        v68 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v78[1]);
        SecurityAttributeAndValues = AuthzBasepPushResult(v89, &v73, v68);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_103;
        if ( LOBYTE(v66[0]) != (_BYTE)v16 )
        {
          ExFreePoolWithTag(*(PVOID *)(v44 + 16), 0);
          LOBYTE(v16) = 0;
        }
        v88[0] = v88[4];
        v88[1] = v88[5];
        v88[2] = v88[6];
        v88[3] = v88[7];
        v78[0] = *(_OWORD *)((char *)&v78[2] + 8);
        *(_OWORD *)((char *)&v78[1] + 8) = v78[4];
        *(_QWORD *)&v78[1] = v88;
        LOBYTE(v66[0]) = HIBYTE(v66[0]);
        HIBYTE(v66[0]) = v16;
        memset((char *)&v78[2] + 8, 0, 0x28uLL);
        memset(&v88[4], 0, 0x40uLL);
        LODWORD(v18) = 1;
      }
      ConstantOperand = AuthzBasepGetConstantOperand(
                          v22,
                          v20 - (unsigned int)v21,
                          (char *)v78 + 40 * (unsigned int)v18,
                          &v79);
      LOBYTE(v16) = 0;
      SecurityAttributeAndValues = ConstantOperand;
      if ( ConstantOperand < 0 )
        goto LABEL_103;
      LODWORD(v18) = (_DWORD)v18 + 1;
      LODWORD(v21) = v79 + v21;
    }
    else
    {
      while ( 1 )
      {
        v21 = (unsigned int)(v21 + 1);
        v42 = (_DWORD)v21 == v20;
        if ( (unsigned int)v21 >= v20 )
          break;
        if ( *((_BYTE *)v82 + v21) )
        {
          v42 = (_DWORD)v21 == v20;
          break;
        }
      }
      if ( !v42 )
      {
LABEL_102:
        SecurityAttributeAndValues = -1073741406;
        goto LABEL_103;
      }
    }
LABEL_40:
    if ( (unsigned int)v21 >= v20 )
      break;
    v12 = v82;
  }
  if ( v73 == 1 )
  {
    v34 = v89[0];
LABEL_44:
    v13 = v72;
    *v72 = v34;
    goto LABEL_45;
  }
  if ( !v73 && (_DWORD)v18 == 1 )
  {
    v34 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v78[1]);
    goto LABEL_44;
  }
LABEL_103:
  v13 = v72;
LABEL_45:
  v18 = v70;
LABEL_46:
  v35 = v66;
  v36 = 2LL;
  v37 = (PVOID *)&v88[1];
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
  if ( v71 != (_BYTE)v16 && v18 )
  {
    AuthzBasepFreeSecurityAttributesList(v18);
    ExFreePoolWithTag(v18, 0x74416553u);
  }
  if ( SecurityAttributeAndValues < 0 )
    *v13 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
