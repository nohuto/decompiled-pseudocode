/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x14009E524
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepMaximumAccessCheckEx @ 0x140133534 (SepMaximumAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401366B8 (SepNormalAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219C8C (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691E34 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14000DE00 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SepPotentialGlobalTableAttribute @ 0x140080674 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepResetOperands @ 0x14009EAE4 (AuthzBasepResetOperands.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14009EB60 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepPushResult @ 0x14009EC40 (AuthzBasepPushResult.c)
 *     AuthzBasepIsValidExpression @ 0x14009EC60 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x14009ED9C (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AA48 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x140234C54 (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x140234CC4 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepEvaluateExpression @ 0x140234DDC (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x140235264 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepMemberOf @ 0x1402354B0 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x140235688 (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1404AF4A8 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
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
  PVOID v19; // r12
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
  __int64 v56; // r8
  __int64 v57; // r9
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
  int v69; // [rsp+20h] [rbp-E0h]
  _BYTE v70[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v71[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v72; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v73[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  PVOID v74; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v75; // [rsp+48h] [rbp-B8h]
  char v76; // [rsp+50h] [rbp-B0h]
  int v77; // [rsp+54h] [rbp-ACh] BYREF
  char v78; // [rsp+58h] [rbp-A8h]
  bool v79; // [rsp+59h] [rbp-A7h]
  int v80; // [rsp+5Ch] [rbp-A4h] BYREF
  int v81[4]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v82[5]; // [rsp+70h] [rbp-90h] BYREF
  int v83; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-38h]
  unsigned int v85; // [rsp+D0h] [rbp-30h]
  unsigned int v86; // [rsp+D4h] [rbp-2Ch]
  __int64 v87; // [rsp+D8h] [rbp-28h]
  _DWORD *v88; // [rsp+E0h] [rbp-20h]
  __int64 v89; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h]
  _QWORD v92[6]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v93[8]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v94[256]; // [rsp+1B0h] [rbp+B0h] BYREF

  v12 = a8;
  v13 = a12;
  v91 = a3;
  SecurityAttributeAndValues = 0;
  v84 = a2;
  v87 = a1;
  v90 = a4;
  v88 = a8;
  v75 = a12;
  v77 = 0;
  memset(v93, 0, sizeof(v93));
  LOWORD(v82[0]) = 0;
  BYTE4(v82[0]) = 0;
  memset((char *)v82 + 5, 0, 0x4BuLL);
  LOWORD(v92[0]) = 0;
  memset((char *)v92 + 4, 0, 0x24uLL);
  v72 = -1;
  v89 = -1LL;
  v16 = &v93[1];
  LOBYTE(v17) = 0;
  v18 = 2LL;
  *a12 = -1;
  v19 = 0LL;
  v80 = 0;
  v81[0] = 0;
  v83 = 0;
  v71[0] = 0;
  v73[0] = 0;
  v70[0] = 0;
  v78 = 0;
  v76 = 0;
  v74 = 0LL;
  do
  {
    *v16 = 0LL;
    v16 += 8;
    --v18;
  }
  while ( v18 );
  HIDWORD(v92[1]) = 1;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    goto LABEL_46;
  }
  v20 = a9;
  v79 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_46;
  }
  AuthzBasepResetOperands(v82, v71);
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
            IsValidExpression = AuthzBasepIsValidExpression(v24, v82, (unsigned int)v19, v70);
            LOBYTE(v17) = 0;
            if ( !IsValidExpression )
            {
              SecurityAttributeAndValues = -1073741406;
              if ( !v70[0] )
                goto LABEL_82;
            }
            if ( !v70[0] )
            {
              if ( v23 == -119 || (v50 = 0, v23 == -112) )
                v50 = 1;
              LOBYTE(v49) = a11;
              LOBYTE(v48) = a10;
              SecurityAttributeAndValues = AuthzBasepMemberOf((unsigned int)v82, v87, v48, v49, v50, (__int64)v73);
            }
            if ( SecurityAttributeAndValues >= 0 )
              v42 = v73[0] != 0;
            else
              v42 = 0xFFFFFFFFLL;
            v51 = v23 + 112;
LABEL_122:
            v72 = v42;
            if ( (v51 & 0xFD) == 0 )
            {
LABEL_128:
              if ( (_DWORD)v42 != -1 )
                goto LABEL_129;
            }
LABEL_66:
            SecurityAttributeAndValues = AuthzBasepPushResult(v94, &v77, v42);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_82;
            AuthzBasepResetOperands(v82, v71);
            LOBYTE(v17) = 0;
            LODWORD(v19) = 0;
            goto LABEL_40;
          }
LABEL_130:
          LOBYTE(v24) = *v22;
          LODWORD(v21) = v21 + 1;
          v55 = AuthzBasepIsValidExpression(v24, v82, (unsigned int)v19, v70);
          LOBYTE(v17) = 0;
          if ( !v55 )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v70[0] )
              goto LABEL_82;
          }
          if ( !v70[0] )
          {
            if ( v23 == -118 || (v58 = 0, v23 == -111) )
              v58 = 1;
            LOBYTE(v57) = a11;
            LOBYTE(v56) = a10;
            LOBYTE(v69) = v58;
            SecurityAttributeAndValues = AuthzBasepDeviceMemberOf(v82, v87, v56, v57, v69, v73);
          }
          if ( SecurityAttributeAndValues >= 0 )
            v42 = v73[0] != 0;
          else
            v42 = 0xFFFFFFFFLL;
          v51 = v23 + 111;
          goto LABEL_122;
        }
LABEL_124:
        LOBYTE(v24) = *v22;
        LODWORD(v21) = v21 + 1;
        v52 = AuthzBasepIsValidExpression(v24, v82, (unsigned int)v19, v70);
        LOBYTE(v17) = 0;
        if ( !v52 )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v70[0] )
            goto LABEL_82;
        }
        if ( !v70[0] )
        {
          LOBYTE(v53) = v23;
          AuthzBasepEvaluateExpression(v53, v82, &v72);
          v42 = v72;
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
          if ( HIDWORD(v82[0]) == 1 )
            goto LABEL_197;
          v72 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v82[1]);
          SecurityAttributeAndValues = AuthzBasepPushResult(v94, &v77, v72);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_82;
          if ( LOBYTE(v71[0]) != (_BYTE)v17 )
          {
            ExFreePoolWithTag(*(PVOID *)(v44 + 16), 0);
            LOBYTE(v17) = 0;
          }
          v93[0] = v93[4];
          v93[1] = v93[5];
          v93[2] = v93[6];
          v93[3] = v93[7];
          v82[0] = *(_OWORD *)((char *)&v82[2] + 8);
          *(_OWORD *)((char *)&v82[1] + 8) = v82[4];
          *(_QWORD *)&v82[1] = v93;
          LOBYTE(v71[0]) = HIBYTE(v71[0]);
          HIBYTE(v71[0]) = v17;
          memset((char *)&v82[2] + 8, 0, 0x28uLL);
          memset(&v93[4], 0, 0x40uLL);
          LODWORD(v19) = 1;
        }
        ConstantOperand = AuthzBasepGetConstantOperand(
                            v22,
                            v20 - (unsigned int)v21,
                            (char *)v82 + 40 * (unsigned int)v19,
                            &v83);
        LOBYTE(v17) = 0;
        SecurityAttributeAndValues = ConstantOperand;
        if ( ConstantOperand < 0 )
          goto LABEL_82;
        LODWORD(v19) = (_DWORD)v19 + 1;
        LODWORD(v21) = v83 + v21;
      }
      else
      {
        while ( 1 )
        {
          v21 = (unsigned int)(v21 + 1);
          v39 = (_DWORD)v21 == v20;
          if ( (unsigned int)v21 >= v20 )
            break;
          if ( *((_BYTE *)v88 + v21) )
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
          v43 = AuthzBasepIsValidExpression(v24, v82, (unsigned int)v19, v70);
          LOBYTE(v17) = 0;
          if ( !v43 )
            goto LABEL_197;
          v42 = *(_QWORD *)&v82[1] != 0LL;
          v72 = *(_QWORD *)&v82[1] != 0LL;
          if ( v23 == -115 )
          {
LABEL_129:
            v54 = v42 == 0;
            v42 = (_DWORD)v42 == 0;
            v72 = v54;
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
        v66 = AuthzBasepIsValidExpression(v24, v82, (unsigned int)v19, v70);
        LOBYTE(v17) = 0;
        if ( !v66 )
          goto LABEL_197;
        if ( (_DWORD)v19 == 2 )
        {
          v80 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v82[1]);
          v67 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v82[3] + 1));
          v81[0] = v67;
        }
        else
        {
          if ( (_DWORD)v19 == 1 )
          {
            v80 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v82[1]);
          }
          else
          {
            SecurityAttributeAndValues = AuthzBasepPopResult(v94, &v77, &v80);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_82;
          }
          SecurityAttributeAndValues = AuthzBasepPopResult(v94, &v77, v81);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_82;
          v67 = v81[0];
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
            v72 = v42;
            goto LABEL_66;
          }
LABEL_194:
          v42 = v17;
          v72 = v17;
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
        v40 = AuthzBasepIsValidExpression(v24, v82, (unsigned int)v19, v70);
        LOBYTE(v17) = 0;
        if ( !v40 )
          goto LABEL_197;
        if ( (_DWORD)v19 == 1 )
        {
          v72 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v82[1]);
          v41 = v72;
          AuthzBasepResetOperands(v82, v71);
          v17 = 0;
        }
        else
        {
          SecurityAttributeAndValues = AuthzBasepPopResult(v94, &v77, &v72);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_82;
          v41 = v72;
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
          if ( HIDWORD(v82[0]) == 1 )
            goto LABEL_197;
          v72 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v82[1]);
          SecurityAttributeAndValues = AuthzBasepPushResult(v94, &v77, v72);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_82;
          if ( LOBYTE(v71[0]) != (_BYTE)v17 )
          {
            ExFreePoolWithTag(*(PVOID *)(v59 + 16), 0);
            LOBYTE(v17) = 0;
          }
          v93[0] = v93[4];
          v93[1] = v93[5];
          v93[2] = v93[6];
          v93[3] = v93[7];
          v82[0] = *(_OWORD *)((char *)&v82[2] + 8);
          *(_OWORD *)((char *)&v82[1] + 8) = v82[4];
          *(_QWORD *)&v82[1] = v93;
          LOBYTE(v71[0]) = HIBYTE(v71[0]);
          HIBYTE(v71[0]) = v17;
          memset((char *)&v82[2] + 8, 0, 0x28uLL);
          memset(&v93[4], 0, 0x40uLL);
          LOBYTE(v17) = 0;
          LODWORD(v19) = 1;
        }
        if ( v20 - (unsigned int)v25 < 4 )
          goto LABEL_197;
        v26 = *(_DWORD *)((char *)v88 + v25);
        v27 = v25 + 4;
        v86 = v26;
        v85 = v27;
        if ( v20 - v27 < v26 )
          goto LABEL_197;
        if ( v26 > 0xFFFE )
        {
          SecurityAttributeAndValues = -1073741562;
          goto LABEL_82;
        }
        LODWORD(v92[3]) = v26;
        v28 = (unsigned __int64)(unsigned int)v19 << 6;
        v92[4] = (char *)v88 + v27;
        v29 = AuthzBasepUnicodeStringFromOperandValue(v92, 0LL, (char *)v93 + v28 + 8, (char *)v71 + (unsigned int)v19);
        LOBYTE(v17) = 0;
        SecurityAttributeAndValues = v29;
        if ( v29 < 0 )
          goto LABEL_82;
        v30 = (_QWORD *)((char *)v93 + v28);
        if ( v23 == -7 )
        {
          if ( a11 )
            v31 = a5;
          else
            v31 = v90;
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
          v31 = v91;
          if ( v23 != -6 )
            v31 = v84;
        }
        *v30 = v31;
        *(_QWORD *)&v93[4 * (unsigned __int64)(unsigned int)v19 + 3] = 0LL;
        *((_QWORD *)&v93[4 * (unsigned __int64)(unsigned int)v19 + 3] + 1) = 0LL;
        SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64 *)((char *)v93 + v28));
        if ( SecurityAttributeAndValues != -1073741275 )
        {
LABEL_32:
          LOBYTE(v17) = 0;
LABEL_33:
          if ( SecurityAttributeAndValues >= 0 )
          {
            v33 = 40LL * (unsigned int)v19;
            *(_WORD *)((char *)v82 + v33) = WORD4(v93[4 * (unsigned __int64)(unsigned int)v19 + 1]);
            *(_DWORD *)((char *)v82 + v33 + 4) = v93[4 * (unsigned __int64)(unsigned int)v19 + 2];
            *(_QWORD *)((char *)&v82[1] + v33) = v30;
LABEL_35:
            *(_DWORD *)((char *)&v82[1] + v33 + 8) = 0;
            *(_QWORD *)((char *)&v82[2] + v33) = 0LL;
            *(_DWORD *)((char *)v82 + v33 + 8) = 0;
            switch ( v23 )
            {
              case -7:
                *(_DWORD *)((char *)v82 + v33 + 12) = 3;
                break;
              case -6:
                *(_DWORD *)((char *)v82 + v33 + 12) = 4;
                break;
              case -5:
                *(_DWORD *)((char *)v82 + v33 + 12) = 5;
                break;
              default:
                *(_DWORD *)((char *)v82 + v33 + 12) = *v30 != 0LL ? 2 : 6;
                break;
            }
            LODWORD(v19) = (_DWORD)v19 + 1;
            LODWORD(v21) = v86 + v85;
            v20 = a9;
            goto LABEL_40;
          }
          if ( SecurityAttributeAndValues != -1073741275 )
            goto LABEL_82;
LABEL_75:
          SecurityAttributeAndValues = 0;
          v33 = 40LL * (unsigned int)v19;
          *(_WORD *)((char *)v82 + v33) = 0;
          *(_DWORD *)((char *)v82 + v33 + 4) = 0;
          *(_QWORD *)((char *)&v82[1] + v33) = 0LL;
          if ( *((_BYTE *)v71 + (unsigned int)v19) )
          {
            ExFreePoolWithTag(*(PVOID *)&v93[4 * (unsigned __int64)(unsigned int)v19 + 1], 0);
            if ( (unsigned int)v19 >= 2uLL )
              _report_rangecheckfailure();
            LOBYTE(v17) = 0;
            *((_BYTE *)v71 + (unsigned int)v19) = 0;
          }
          goto LABEL_35;
        }
        v32 = v84;
        if ( *v30 == v84 && (SepSingletonGlobal[4] & 1) != 0 && (*(_DWORD *)(v87 + 200) & 0x20000) == 0 )
        {
          v60 = SepPotentialGlobalTableAttribute((PCUNICODE_STRING)((char *)v93 + v28 + 8));
          LOBYTE(v17) = 0;
          if ( v60 && !v78 )
          {
            if ( !v76 )
            {
              v61 = SepValidateAndCopyGlobalEntry(v32, &v74);
              LOBYTE(v17) = 0;
              SecurityAttributeAndValues = v61;
              if ( v61 < 0 )
              {
                v78 = 1;
LABEL_158:
                if ( SecurityAttributeAndValues != -1073741275 )
                  goto LABEL_33;
                v32 = v84;
                goto LABEL_29;
              }
              v76 = 1;
            }
            *v30 = v74;
            v62 = AuthzBasepQuerySecurityAttributeAndValues((__int64 *)((char *)v93 + v28));
            LOBYTE(v17) = 0;
            SecurityAttributeAndValues = v62;
            if ( v62 != -1073741275 )
              goto LABEL_33;
            *v30 = v84;
            goto LABEL_158;
          }
        }
        else
        {
          LOBYTE(v17) = 0;
        }
LABEL_29:
        if ( v79 || *v30 != v32 )
          goto LABEL_75;
        *v30 = 0LL;
        SecurityAttributeAndValues = AuthzBasepQuerySystemSecurityAttributeAndValues((char *)v93 + v28);
        goto LABEL_32;
      }
      LODWORD(v24) = (unsigned __int8)*v22;
      LODWORD(v21) = v21 + 1;
      v63 = AuthzBasepIsValidExpression(v24, v82, (unsigned int)v19, v70);
      LOBYTE(v17) = 0;
      if ( !v63 )
      {
        SecurityAttributeAndValues = -1073741406;
        if ( !v70[0] )
          goto LABEL_82;
      }
      if ( v70[0] )
      {
        v65 = 0xFFFFFFFFLL;
      }
      else
      {
        LOBYTE(v64) = v23;
        AuthzBasepComputeExpression(v64, v82, &v89);
        v65 = v89 == -1 ? 0xFFFFFFFFLL : v89 != 0;
      }
      v72 = v65;
      SecurityAttributeAndValues = AuthzBasepPushResult(v94, &v77, v65);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_82;
      AuthzBasepResetOperands(v82, v71);
      LOBYTE(v17) = 0;
    }
LABEL_40:
    if ( (unsigned int)v21 >= v20 )
      break;
    v12 = v88;
  }
  if ( v77 == 1 )
  {
    v34 = v94[0];
LABEL_44:
    v13 = v75;
    *v75 = v34;
    goto LABEL_45;
  }
  if ( !v77 && (_DWORD)v19 == 1 )
  {
    v34 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v82[1]);
    goto LABEL_44;
  }
LABEL_82:
  v13 = v75;
LABEL_45:
  v19 = v74;
LABEL_46:
  v35 = v71;
  v36 = 2LL;
  v37 = (PVOID *)&v93[1];
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
  if ( v76 != (_BYTE)v17 && v19 )
  {
    AuthzBasepFreeSecurityAttributesList(v19);
    ExFreePoolWithTag(v19, 0x74416553u);
  }
  if ( SecurityAttributeAndValues < 0 )
    *v13 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
