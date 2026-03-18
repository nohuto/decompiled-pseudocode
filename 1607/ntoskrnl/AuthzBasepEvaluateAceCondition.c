/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x14009FBFC
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheck @ 0x1400616A0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140062440 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepMaximumAccessCheckEx @ 0x140132FC4 (SepMaximumAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140136148 (SepNormalAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219E60 (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x140691420 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691D50 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14000E280 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SepPotentialGlobalTableAttribute @ 0x1400805F4 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140088740 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepResetOperands @ 0x1400A01BC (AuthzBasepResetOperands.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400A0238 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepPushResult @ 0x1400A0318 (AuthzBasepPushResult.c)
 *     AuthzBasepIsValidExpression @ 0x1400A0338 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x1400A0474 (AuthzBasepEvaluateAttribute.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1250 (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AC1C (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x140234E28 (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x140234E98 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepEvaluateExpression @ 0x140234FB0 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x140235438 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepMemberOf @ 0x140235684 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x14023585C (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1404C9728 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
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
  _DWORD *v13; // r14
  int SecurityAttributeAndValues; // ebx
  _QWORD *v16; // rax
  unsigned int v17; // r11d
  __int64 v18; // rcx
  _DWORD *v19; // r12
  unsigned int v20; // r15d
  __int64 v21; // rsi
  char *v22; // rdi
  char v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int v26; // ecx
  unsigned int v27; // esi
  unsigned __int64 v28; // r15
  int v29; // eax
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rsi
  int v34; // eax
  _BYTE *v35; // rdi
  __int64 v36; // r15
  PVOID *v37; // rsi
  bool v39; // zf
  char v40; // al
  unsigned int v41; // ebx
  __int64 v42; // r8
  char v43; // al
  __int64 v44; // r10
  int ConstantOperand; // eax
  bool v46; // zf
  char IsValidExpression; // al
  int v48; // r8d
  int v49; // r9d
  char v50; // al
  char v51; // r14
  char v52; // al
  __int64 v53; // rcx
  BOOL v54; // eax
  char v55; // al
  int v56; // r8d
  int v57; // r9d
  char v58; // al
  __int64 v59; // r10
  char v60; // al
  int v61; // eax
  int v62; // eax
  char v63; // al
  __int64 v64; // rcx
  __int64 v65; // r8
  char v66; // al
  int v67; // eax
  int v68; // r10d
  _BYTE v69[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v70[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v71; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v72[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  PVOID v73; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v74; // [rsp+48h] [rbp-B8h]
  char v75; // [rsp+50h] [rbp-B0h]
  int v76; // [rsp+54h] [rbp-ACh] BYREF
  char v77; // [rsp+58h] [rbp-A8h]
  bool v78; // [rsp+59h] [rbp-A7h]
  int v79; // [rsp+5Ch] [rbp-A4h] BYREF
  int v80[4]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v81[5]; // [rsp+70h] [rbp-90h] BYREF
  int v82; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-38h]
  unsigned int v84; // [rsp+D0h] [rbp-30h]
  unsigned int v85; // [rsp+D4h] [rbp-2Ch]
  __int64 v86; // [rsp+D8h] [rbp-28h]
  _DWORD *v87; // [rsp+E0h] [rbp-20h]
  __int64 v88; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v89; // [rsp+F0h] [rbp-10h]
  __int64 v90; // [rsp+F8h] [rbp-8h]
  _QWORD v91[6]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v92[8]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v93[256]; // [rsp+1B0h] [rbp+B0h] BYREF

  v12 = a8;
  v13 = a12;
  v90 = a3;
  SecurityAttributeAndValues = 0;
  v83 = a2;
  v86 = a1;
  v89 = a4;
  v87 = a8;
  v74 = a12;
  v76 = 0;
  memset(v92, 0, sizeof(v92));
  LOWORD(v81[0]) = 0;
  BYTE4(v81[0]) = 0;
  memset((char *)v81 + 5, 0, 0x4BuLL);
  LOWORD(v91[0]) = 0;
  memset((char *)v91 + 4, 0, 0x24uLL);
  v71 = -1;
  v88 = -1LL;
  v16 = &v92[1];
  LOBYTE(v17) = 0;
  v18 = 2LL;
  *a12 = -1;
  v19 = 0LL;
  v79 = 0;
  v80[0] = 0;
  v82 = 0;
  v70[0] = 0;
  v72[0] = 0;
  v69[0] = 0;
  v77 = 0;
  v75 = 0;
  v73 = 0LL;
  do
  {
    *v16 = 0LL;
    v16 += 8;
    --v18;
  }
  while ( v18 );
  HIDWORD(v91[1]) = 1;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    goto LABEL_46;
  }
  v20 = a9;
  v78 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_46;
  }
  AuthzBasepResetOperands(v81, v70);
  LOBYTE(v17) = 0;
  LODWORD(v21) = 4;
  if ( a9 <= 4 )
    goto LABEL_45;
  while ( 1 )
  {
    v22 = (char *)v12 + (unsigned int)v21;
    v23 = *v22;
    v24 = (unsigned __int8)*v22;
    if ( (unsigned __int8)*v22 <= 0x8Cu )
    {
      if ( (_DWORD)v24 == 140 )
        goto LABEL_130;
      if ( (unsigned __int8)*v22 > 0x86u )
      {
        v24 = (unsigned int)(v24 - 135);
        if ( !(_DWORD)v24 )
          goto LABEL_69;
        v24 = (unsigned int)(v24 - 1);
        if ( (_DWORD)v24 )
        {
          v24 = (unsigned int)(v24 - 1);
          if ( !(_DWORD)v24 )
            goto LABEL_109;
          v24 = (unsigned int)(v24 - 1);
          if ( (_DWORD)v24 )
          {
            LODWORD(v24) = v24 - 1;
            v46 = (_DWORD)v24 == 0;
            v24 = (unsigned int)v24;
LABEL_108:
            if ( !v46 )
              goto LABEL_197;
LABEL_109:
            LOBYTE(v24) = *v22;
            LODWORD(v21) = v21 + 1;
            IsValidExpression = AuthzBasepIsValidExpression(v24, v81, (unsigned int)v19, v69);
            LOBYTE(v17) = 0;
            if ( !IsValidExpression )
            {
              SecurityAttributeAndValues = -1073741406;
              if ( !v69[0] )
                goto LABEL_82;
            }
            if ( !v69[0] )
            {
              if ( v23 == -119 || (v50 = 0, v23 == -112) )
                v50 = 1;
              LOBYTE(v49) = a11;
              LOBYTE(v48) = a10;
              SecurityAttributeAndValues = AuthzBasepMemberOf((unsigned int)v81, v86, v48, v49, v50, (__int64)v72);
            }
            if ( SecurityAttributeAndValues >= 0 )
              v42 = v72[0] != 0;
            else
              v42 = 0xFFFFFFFFLL;
            v51 = v23 + 112;
LABEL_122:
            v71 = v42;
            if ( (v51 & 0xFD) == 0 )
            {
LABEL_128:
              if ( (_DWORD)v42 != -1 )
                goto LABEL_129;
            }
LABEL_66:
            SecurityAttributeAndValues = AuthzBasepPushResult(v93, &v76, v42);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_82;
            AuthzBasepResetOperands(v81, v70);
            LOBYTE(v17) = 0;
            LODWORD(v19) = 0;
            goto LABEL_40;
          }
LABEL_130:
          LOBYTE(v24) = *v22;
          LODWORD(v21) = v21 + 1;
          v55 = AuthzBasepIsValidExpression(v24, v81, (unsigned int)v19, v69);
          LOBYTE(v17) = 0;
          if ( !v55 )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v69[0] )
              goto LABEL_82;
          }
          if ( !v69[0] )
          {
            if ( v23 == -118 || (v58 = 0, v23 == -111) )
              v58 = 1;
            LOBYTE(v57) = a11;
            LOBYTE(v56) = a10;
            SecurityAttributeAndValues = AuthzBasepDeviceMemberOf((unsigned int)v81, v86, v56, v57, v58, (__int64)v72);
          }
          if ( SecurityAttributeAndValues >= 0 )
            v42 = v72[0] != 0;
          else
            v42 = 0xFFFFFFFFLL;
          v51 = v23 + 111;
          goto LABEL_122;
        }
LABEL_124:
        LOBYTE(v24) = *v22;
        LODWORD(v21) = v21 + 1;
        v52 = AuthzBasepIsValidExpression(v24, v81, (unsigned int)v19, v69);
        LOBYTE(v17) = 0;
        if ( !v52 )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v69[0] )
            goto LABEL_82;
        }
        if ( !v69[0] )
        {
          LOBYTE(v53) = v23;
          AuthzBasepEvaluateExpression(v53, v81, &v71);
          v42 = v71;
          if ( v23 == -114 || v23 == -113 )
            goto LABEL_128;
          goto LABEL_66;
        }
        goto LABEL_189;
      }
      if ( (unsigned __int8)*v22 >= 0x80u )
        goto LABEL_124;
      if ( *v22 )
      {
        if ( (unsigned __int8)*v22 > 4u
          && (_DWORD)v24 != 16
          && (_DWORD)v24 != 24
          && ((unsigned __int8)*v22 <= 0x4Fu || (unsigned __int8)*v22 > 0x51u) )
        {
          goto LABEL_197;
        }
        if ( (_DWORD)v19 == 2 )
        {
          if ( HIDWORD(v81[0]) == 1 )
            goto LABEL_197;
          v71 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v81[1]);
          SecurityAttributeAndValues = AuthzBasepPushResult(v93, &v76, v71);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_82;
          if ( LOBYTE(v70[0]) != (_BYTE)v17 )
          {
            ExFreePoolWithTag(*(PVOID *)(v44 + 16), 0);
            LOBYTE(v17) = 0;
          }
          v92[0] = v92[4];
          v92[1] = v92[5];
          v92[2] = v92[6];
          v92[3] = v92[7];
          v81[0] = *(_OWORD *)((char *)&v81[2] + 8);
          *(_OWORD *)((char *)&v81[1] + 8) = v81[4];
          *(_QWORD *)&v81[1] = v92;
          LOBYTE(v70[0]) = HIBYTE(v70[0]);
          HIBYTE(v70[0]) = v17;
          memset((char *)&v81[2] + 8, 0, 0x28uLL);
          memset(&v92[4], 0, 0x40uLL);
          LODWORD(v19) = 1;
        }
        ConstantOperand = AuthzBasepGetConstantOperand(
                            v22,
                            v20 - (unsigned int)v21,
                            (char *)v81 + 40 * (unsigned int)v19,
                            &v82);
        LOBYTE(v17) = 0;
        SecurityAttributeAndValues = ConstantOperand;
        if ( ConstantOperand < 0 )
          goto LABEL_82;
        LODWORD(v19) = (_DWORD)v19 + 1;
        LODWORD(v21) = v82 + v21;
      }
      else
      {
        while ( 1 )
        {
          v21 = (unsigned int)(v21 + 1);
          v39 = (_DWORD)v21 == v20;
          if ( (unsigned int)v21 >= v20 )
            break;
          if ( *((_BYTE *)v87 + v21) )
          {
            v39 = (_DWORD)v21 == v20;
            break;
          }
        }
        if ( !v39 )
        {
LABEL_197:
          SecurityAttributeAndValues = -1073741406;
          goto LABEL_82;
        }
      }
    }
    else
    {
      if ( (unsigned __int8)*v22 <= 0x93u )
      {
        if ( (_DWORD)v24 == 147 )
          goto LABEL_130;
        if ( (_DWORD)v24 == 141 )
        {
LABEL_69:
          LOBYTE(v24) = *v22;
          LODWORD(v21) = v21 + 1;
          v43 = AuthzBasepIsValidExpression(v24, v81, (unsigned int)v19, v69);
          LOBYTE(v17) = 0;
          if ( !v43 )
            goto LABEL_197;
          v42 = *(_QWORD *)&v81[1] != 0LL;
          v71 = *(_QWORD *)&v81[1] != 0LL;
          if ( v23 == -115 )
          {
LABEL_129:
            v54 = v42 == 0;
            v42 = (_DWORD)v42 == 0;
            v71 = v54;
          }
          goto LABEL_66;
        }
        if ( (unsigned __int8)*v22 <= 0x8Du )
          goto LABEL_197;
        if ( (unsigned __int8)*v22 > 0x8Fu )
        {
          if ( (_DWORD)v24 == 144 )
            goto LABEL_109;
          if ( (_DWORD)v24 != 145 )
          {
            v46 = (_DWORD)v24 == 146;
            goto LABEL_108;
          }
          goto LABEL_130;
        }
        goto LABEL_124;
      }
      if ( (unsigned __int8)*v22 < 0xA0u )
        goto LABEL_197;
      if ( (unsigned __int8)*v22 <= 0xA1u )
      {
        LOBYTE(v24) = *v22;
        LODWORD(v21) = v21 + 1;
        v66 = AuthzBasepIsValidExpression(v24, v81, (unsigned int)v19, v69);
        LOBYTE(v17) = 0;
        if ( !v66 )
          goto LABEL_197;
        if ( (_DWORD)v19 == 2 )
        {
          v79 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v81[1]);
          v67 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v81[3] + 1));
          v80[0] = v67;
        }
        else
        {
          if ( (_DWORD)v19 == 1 )
          {
            v79 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v81[1]);
          }
          else
          {
            SecurityAttributeAndValues = AuthzBasepPopResult(v93, &v76, &v79);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_82;
          }
          SecurityAttributeAndValues = AuthzBasepPopResult(v93, &v76, v80);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_82;
          v67 = v80[0];
        }
        if ( v23 == -96 )
        {
          if ( v68 && v67 )
          {
            if ( v68 == -1 || v67 == -1 )
              goto LABEL_189;
LABEL_195:
            v42 = 1LL;
LABEL_196:
            v71 = v42;
            goto LABEL_66;
          }
LABEL_194:
          v42 = v17;
          v71 = v17;
          goto LABEL_66;
        }
        if ( v68 == 1 || v67 == 1 )
          goto LABEL_195;
        if ( v68 != -1 && v67 != -1 )
          goto LABEL_194;
LABEL_189:
        v42 = 0xFFFFFFFFLL;
        goto LABEL_196;
      }
      if ( (_DWORD)v24 == 162 )
      {
        LODWORD(v24) = (unsigned __int8)*v22;
        LODWORD(v21) = v21 + 1;
        v40 = AuthzBasepIsValidExpression(v24, v81, (unsigned int)v19, v69);
        LOBYTE(v17) = 0;
        if ( !v40 )
          goto LABEL_197;
        if ( (_DWORD)v19 == 1 )
        {
          v71 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v81[1]);
          v41 = v71;
          AuthzBasepResetOperands(v81, v70);
          v17 = 0;
        }
        else
        {
          SecurityAttributeAndValues = AuthzBasepPopResult(v93, &v76, &v71);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_82;
          v41 = v71;
        }
        if ( v41 == -1 )
        {
          v42 = 0xFFFFFFFFLL;
        }
        else
        {
          v42 = v17;
          LOBYTE(v42) = v41 == 0;
        }
        goto LABEL_66;
      }
      if ( (_DWORD)v24 != 163 )
      {
        if ( (unsigned __int8)*v22 <= 0xF7u || (unsigned __int8)*v22 > 0xFBu )
          goto LABEL_197;
        v25 = (unsigned int)(v21 + 1);
        if ( (_DWORD)v19 == 2 )
        {
          if ( HIDWORD(v81[0]) == 1 )
            goto LABEL_197;
          v71 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v81[1]);
          SecurityAttributeAndValues = AuthzBasepPushResult(v93, &v76, v71);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_82;
          if ( LOBYTE(v70[0]) != (_BYTE)v17 )
          {
            ExFreePoolWithTag(*(PVOID *)(v59 + 16), 0);
            LOBYTE(v17) = 0;
          }
          v92[0] = v92[4];
          v92[1] = v92[5];
          v92[2] = v92[6];
          v92[3] = v92[7];
          v81[0] = *(_OWORD *)((char *)&v81[2] + 8);
          *(_OWORD *)((char *)&v81[1] + 8) = v81[4];
          *(_QWORD *)&v81[1] = v92;
          LOBYTE(v70[0]) = HIBYTE(v70[0]);
          HIBYTE(v70[0]) = v17;
          memset((char *)&v81[2] + 8, 0, 0x28uLL);
          memset(&v92[4], 0, 0x40uLL);
          LOBYTE(v17) = 0;
          LODWORD(v19) = 1;
        }
        if ( v20 - (unsigned int)v25 < 4 )
          goto LABEL_197;
        v26 = *(_DWORD *)((char *)v87 + v25);
        v27 = v25 + 4;
        v85 = v26;
        v84 = v27;
        if ( v20 - v27 < v26 )
          goto LABEL_197;
        if ( v26 > 0xFFFE )
        {
          SecurityAttributeAndValues = -1073741562;
          goto LABEL_82;
        }
        LODWORD(v91[3]) = v26;
        v28 = (unsigned __int64)(unsigned int)v19 << 6;
        v91[4] = (char *)v87 + v27;
        v29 = AuthzBasepUnicodeStringFromOperandValue(v91, 0LL, (char *)v92 + v28 + 8, (char *)v70 + (unsigned int)v19);
        LOBYTE(v17) = 0;
        SecurityAttributeAndValues = v29;
        if ( v29 < 0 )
          goto LABEL_82;
        v30 = (_QWORD *)((char *)v92 + v28);
        if ( v23 == -7 )
        {
          if ( a11 )
            v31 = a5;
          else
            v31 = v89;
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
          v31 = v90;
          if ( v23 != -6 )
            v31 = v83;
        }
        *v30 = v31;
        *(_QWORD *)&v92[4 * (unsigned __int64)(unsigned int)v19 + 3] = 0LL;
        *((_QWORD *)&v92[4 * (unsigned __int64)(unsigned int)v19 + 3] + 1) = 0LL;
        SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64 *)((char *)v92 + v28));
        if ( SecurityAttributeAndValues != -1073741275 )
        {
LABEL_32:
          LOBYTE(v17) = 0;
LABEL_33:
          if ( SecurityAttributeAndValues >= 0 )
          {
            v33 = 40LL * (unsigned int)v19;
            *(_WORD *)((char *)v81 + v33) = WORD4(v92[4 * (unsigned __int64)(unsigned int)v19 + 1]);
            *(_DWORD *)((char *)v81 + v33 + 4) = v92[4 * (unsigned __int64)(unsigned int)v19 + 2];
            *(_QWORD *)((char *)&v81[1] + v33) = v30;
LABEL_35:
            *(_DWORD *)((char *)&v81[1] + v33 + 8) = 0;
            *(_QWORD *)((char *)&v81[2] + v33) = 0LL;
            *(_DWORD *)((char *)v81 + v33 + 8) = 0;
            switch ( v23 )
            {
              case -7:
                *(_DWORD *)((char *)v81 + v33 + 12) = 3;
                break;
              case -6:
                *(_DWORD *)((char *)v81 + v33 + 12) = 4;
                break;
              case -5:
                *(_DWORD *)((char *)v81 + v33 + 12) = 5;
                break;
              default:
                *(_DWORD *)((char *)v81 + v33 + 12) = *v30 != 0LL ? 2 : 6;
                break;
            }
            LODWORD(v19) = (_DWORD)v19 + 1;
            LODWORD(v21) = v85 + v84;
            v20 = a9;
            goto LABEL_40;
          }
          if ( SecurityAttributeAndValues != -1073741275 )
            goto LABEL_82;
LABEL_75:
          SecurityAttributeAndValues = 0;
          v33 = 40LL * (unsigned int)v19;
          *(_WORD *)((char *)v81 + v33) = 0;
          *(_DWORD *)((char *)v81 + v33 + 4) = 0;
          *(_QWORD *)((char *)&v81[1] + v33) = 0LL;
          if ( *((_BYTE *)v70 + (unsigned int)v19) )
          {
            ExFreePoolWithTag(*(PVOID *)&v92[4 * (unsigned __int64)(unsigned int)v19 + 1], 0);
            if ( (unsigned int)v19 >= 2uLL )
              _report_rangecheckfailure();
            LOBYTE(v17) = 0;
            *((_BYTE *)v70 + (unsigned int)v19) = 0;
          }
          goto LABEL_35;
        }
        v32 = v83;
        if ( *v30 == v83 && (SepSingletonGlobal[4] & 1) != 0 && (*(_DWORD *)(v86 + 200) & 0x20000) == 0 )
        {
          v60 = SepPotentialGlobalTableAttribute((PCUNICODE_STRING)((char *)v92 + v28 + 8));
          LOBYTE(v17) = 0;
          if ( v60 && !v77 )
          {
            if ( !v75 )
            {
              v61 = SepValidateAndCopyGlobalEntry(v32, &v73);
              LOBYTE(v17) = 0;
              SecurityAttributeAndValues = v61;
              if ( v61 < 0 )
              {
                v77 = 1;
LABEL_158:
                if ( SecurityAttributeAndValues != -1073741275 )
                  goto LABEL_33;
                v32 = v83;
                goto LABEL_29;
              }
              v75 = 1;
            }
            *v30 = v73;
            v62 = AuthzBasepQuerySecurityAttributeAndValues((__int64 *)((char *)v92 + v28));
            LOBYTE(v17) = 0;
            SecurityAttributeAndValues = v62;
            if ( v62 != -1073741275 )
              goto LABEL_33;
            *v30 = v83;
            goto LABEL_158;
          }
        }
        else
        {
          LOBYTE(v17) = 0;
        }
LABEL_29:
        if ( v78 || *v30 != v32 )
          goto LABEL_75;
        *v30 = 0LL;
        SecurityAttributeAndValues = AuthzBasepQuerySystemSecurityAttributeAndValues((char *)v92 + v28);
        goto LABEL_32;
      }
      LODWORD(v24) = (unsigned __int8)*v22;
      LODWORD(v21) = v21 + 1;
      v63 = AuthzBasepIsValidExpression(v24, v81, (unsigned int)v19, v69);
      LOBYTE(v17) = 0;
      if ( !v63 )
      {
        SecurityAttributeAndValues = -1073741406;
        if ( !v69[0] )
          goto LABEL_82;
      }
      if ( v69[0] )
      {
        v65 = 0xFFFFFFFFLL;
      }
      else
      {
        LOBYTE(v64) = v23;
        AuthzBasepComputeExpression(v64, v81, &v88);
        v65 = v88 == -1 ? 0xFFFFFFFFLL : v88 != 0;
      }
      v71 = v65;
      SecurityAttributeAndValues = AuthzBasepPushResult(v93, &v76, v65);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_82;
      AuthzBasepResetOperands(v81, v70);
      LOBYTE(v17) = 0;
    }
LABEL_40:
    if ( (unsigned int)v21 >= v20 )
      break;
    v12 = v87;
  }
  if ( v76 == 1 )
  {
    v34 = v93[0];
LABEL_44:
    v13 = v74;
    *v74 = v34;
    goto LABEL_45;
  }
  if ( !v76 && (_DWORD)v19 == 1 )
  {
    v34 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v81[1]);
    goto LABEL_44;
  }
LABEL_82:
  v13 = v74;
LABEL_45:
  v19 = v73;
LABEL_46:
  v35 = v70;
  v36 = 2LL;
  v37 = (PVOID *)&v92[1];
  do
  {
    if ( *v35 != (_BYTE)v17 )
    {
      ExFreePoolWithTag(*v37, 0);
      LOBYTE(v17) = 0;
    }
    ++v35;
    v37 += 8;
    --v36;
  }
  while ( v36 );
  if ( v75 != (_BYTE)v17 && v19 )
  {
    AuthzBasepFreeSecurityAttributesList(v19);
    ExFreePoolWithTag(v19, 0x74416553u);
  }
  if ( SecurityAttributeAndValues < 0 )
    *v13 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
