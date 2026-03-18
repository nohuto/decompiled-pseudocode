/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748
 * Callers:
 *     NtSetSecurityObject @ 0x1404D2930 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     SeMaximumAuditMask @ 0x14024F3D8 (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406D3374 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x1406D3C14 (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1406D7D6C (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepIsAclEqual @ 0x1406D7E3C (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x1406D7EB0 (SepIsSidEqual.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        struct _KPROCESS *a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // ebx
  int v14; // edi
  __int64 v15; // r12
  PACCESS_TOKEN PrimaryToken; // rcx
  char v18; // r15
  unsigned int v19; // r14d
  __int64 v20; // r13
  __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int16 v30; // ax
  __int64 v31; // rax
  UNICODE_STRING *v32; // rax
  __int16 v33; // ax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int16 v36; // ax
  __int64 v37; // rax
  __int16 v38; // ax
  __int64 v39; // rax
  _WORD *v40; // r14
  __int16 v41; // ax
  char *v42; // r12
  __int16 v43; // r11
  unsigned __int16 v44; // ax
  _WORD *v45; // r10
  __int16 v46; // ax
  __int16 v47; // r8
  _WORD *v48; // r13
  unsigned int v49; // esi
  _WORD *v50; // r15
  unsigned __int16 v51; // ax
  __int64 v52; // rsi
  SIZE_T v53; // rax
  bool v54; // zf
  __int16 v55; // cx
  int v56; // edx
  unsigned __int16 v57; // ax
  __int64 v58; // rsi
  SIZE_T v59; // rax
  unsigned __int16 v60; // ax
  __int64 v61; // rsi
  SIZE_T v62; // rax
  unsigned __int16 v63; // ax
  __int64 v64; // rsi
  SIZE_T v65; // rax
  int v66; // edi
  ACCESS_MASK v67; // edi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int16 v76; // ax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int16 v79; // ax
  __int64 v80; // rax
  __int64 v81; // rcx
  int NameString; // eax
  PVOID v83; // r12
  int v84; // r14d
  __int64 v85; // rdi
  unsigned int v86; // ebx
  __int64 v87; // [rsp+58h] [rbp-99h]
  _WORD *v88; // [rsp+60h] [rbp-91h]
  __int64 v89; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+70h] [rbp-81h] BYREF
  PUNICODE_STRING ObjectTypeName; // [rsp+78h] [rbp-79h]
  int v92; // [rsp+80h] [rbp-71h]
  PVOID P; // [rsp+88h] [rbp-69h] BYREF
  PACCESS_TOKEN Token; // [rsp+90h] [rbp-61h]
  PVOID v95; // [rsp+98h] [rbp-59h] BYREF
  __int64 v96; // [rsp+A0h] [rbp-51h]
  void *v97; // [rsp+A8h] [rbp-49h]
  void *Source2; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v100; // [rsp+138h] [rbp+47h]
  __int16 v102; // [rsp+150h] [rbp+5Fh]
  __int16 v103; // [rsp+160h] [rbp+6Fh]

  v13 = 0;
  AuditMask = 0;
  P = 0LL;
  v14 = 0;
  v95 = 0LL;
  v15 = 0LL;
  v96 = 0LL;
  ObjectTypeName = 0LL;
  v92 = 0;
  v87 = 0LL;
  v88 = 0LL;
  v100 = 0;
  v97 = 0LL;
  v102 = 0;
  Source2 = 0LL;
  v103 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  if ( !PrimaryToken )
  {
    SepAuditFailed(3221225596LL);
    return;
  }
  v18 = SepAdtAuditThisEventWithContext(140LL, 1u, 0, (__int64)&SubjectContext);
  if ( v18 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(138LL, 1u, 0, (__int64)&SubjectContext) )
      v14 |= a8 & 8;
    if ( v18 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( a3 && a3->Length )
  {
    ObjectTypeName = a3;
  }
  else if ( a2 )
  {
    v92 = SepQueryTypeString(a2, &v95);
    if ( v92 < 0 )
    {
LABEL_218:
      if ( v95 )
        ExFreePoolWithTag(v95, 0);
      goto LABEL_30;
    }
    v32 = 0LL;
    if ( v95 )
      v32 = (UNICODE_STRING *)v95;
    ObjectTypeName = v32;
  }
  v19 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) != 0 )
  {
    v33 = *(_WORD *)(a10 + 2);
    if ( (v33 & 0x10) == 0 )
      goto LABEL_66;
    if ( (v33 & 0x8000) == 0 )
    {
      v35 = *(_QWORD *)(a10 + 24);
      goto LABEL_68;
    }
    v34 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v34 )
      v35 = a10 + v34;
    else
LABEL_66:
      v35 = 0LL;
LABEL_68:
    SeMaximumAuditMask(v35, v19, (__int64)Token, &AuditMask);
    SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v19, Token, &AuditMask);
    if ( (AuditMask & 0x80000) != 0 && v18 )
      v14 |= a8 & 0x10;
  }
  v20 = a13;
  v21 = *(_WORD *)(a13 + 2);
  if ( (v21 & 0x10) == 0 )
  {
LABEL_48:
    v23 = 0LL;
    goto LABEL_14;
  }
  if ( v21 < 0 )
  {
    v22 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v22 )
    {
      v23 = v22 + a13;
      goto LABEL_14;
    }
    goto LABEL_48;
  }
  v23 = *(_QWORD *)(a13 + 24);
LABEL_14:
  v89 = v23;
  if ( !a10 )
    goto LABEL_15;
  v30 = *(_WORD *)(a10 + 2);
  if ( (v30 & 0x10) == 0 )
  {
LABEL_47:
    v15 = 0LL;
    goto LABEL_15;
  }
  if ( v30 < 0 )
  {
    v31 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v31 )
    {
      v15 = a10 + v31;
      goto LABEL_15;
    }
    goto LABEL_47;
  }
  v15 = *(_QWORD *)(a10 + 24);
LABEL_15:
  v24 = a9;
  if ( !a9 )
  {
    v25 = 0LL;
    goto LABEL_17;
  }
  v36 = *(_WORD *)(a9 + 2);
  if ( (v36 & 0x10) == 0 )
  {
LABEL_76:
    v25 = 0LL;
    goto LABEL_17;
  }
  if ( v36 < 0 )
  {
    v37 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v37 )
    {
      v25 = a9 + v37;
      goto LABEL_17;
    }
    goto LABEL_76;
  }
  v25 = *(_QWORD *)(a9 + 24);
LABEL_17:
  if ( a11 )
  {
    v26 = *(_WORD *)(a11 + 2);
    if ( (v26 & 0x10) == 0 )
    {
LABEL_19:
      v27 = 0LL;
      goto LABEL_20;
    }
    if ( v26 < 0 )
    {
      v29 = *(unsigned int *)(a11 + 12);
      if ( !(_DWORD)v29 )
        goto LABEL_19;
      v27 = a11 + v29;
    }
    else
    {
      v27 = *(_QWORD *)(a11 + 24);
    }
  }
  else
  {
    v27 = 0LL;
  }
LABEL_20:
  if ( !a12 )
  {
    v28 = 0LL;
    goto LABEL_22;
  }
  v38 = *(_WORD *)(a12 + 2);
  if ( (v38 & 0x10) == 0 )
  {
LABEL_83:
    v28 = 0LL;
    goto LABEL_22;
  }
  if ( v38 < 0 )
  {
    v39 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v39 )
    {
      v28 = a12 + v39;
      goto LABEL_22;
    }
    goto LABEL_83;
  }
  v28 = *(_QWORD *)(a12 + 24);
LABEL_22:
  if ( !v23 || !*(_WORD *)(v23 + 4) )
  {
    if ( v15 && *(_WORD *)(v15 + 4) )
      v13 = v14 & 8;
    if ( v25 && *(_WORD *)(v25 + 4) )
      v13 |= v14 & 0x10;
    if ( v27 && *(_WORD *)(v27 + 4) )
      v13 |= v14 & 0x20;
    if ( v28 && *(_WORD *)(v28 + 4) )
    {
      v66 = v14 & 0x40;
LABEL_159:
      v13 |= v66;
    }
    goto LABEL_28;
  }
  if ( !v14 )
    goto LABEL_28;
  v40 = (_WORD *)(v23 + 8);
  if ( v15 && (v41 = *(_WORD *)(v15 + 4)) != 0 )
  {
    v42 = (char *)(v15 + 8);
    v100 = v41;
    v43 = v41;
  }
  else
  {
    v43 = 0;
    v42 = 0LL;
  }
  if ( v25 && (v44 = *(_WORD *)(v25 + 4)) != 0 )
  {
    v45 = (_WORD *)(v25 + 8);
    v88 = (_WORD *)(v25 + 8);
    LODWORD(v87) = v44;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v27 && *(_WORD *)(v27 + 4) )
  {
    v102 = *(_WORD *)(v27 + 4);
    v97 = (void *)(v27 + 8);
  }
  if ( v28 && (v46 = *(_WORD *)(v28 + 4)) != 0 )
  {
    v103 = *(_WORD *)(v28 + 4);
    Source2 = (void *)(v28 + 8);
    v47 = v46;
  }
  else
  {
    v47 = 0;
  }
  v48 = Source2;
  v49 = 0;
  v50 = v97;
  do
  {
    switch ( *(_BYTE *)v40 )
    {
      case 0x11:
        if ( (v14 & 0x10) == 0 )
          goto LABEL_142;
        if ( !v45 )
          goto LABEL_140;
        v63 = v45[1];
        if ( v40[1] != v63 )
          goto LABEL_140;
        v64 = v63;
        v65 = RtlCompareMemory(v40, v45, v63);
        v23 = v89;
        if ( v65 != v64 )
        {
          v45 = v88;
LABEL_140:
          v13 |= 0x10u;
          v14 &= ~0x10u;
LABEL_141:
          v49 = HIDWORD(v87);
          v47 = v103;
          v43 = v100;
LABEL_142:
          v56 = v87;
          v55 = v102;
          goto LABEL_143;
        }
        v43 = v100;
        v54 = (_DWORD)v87 == 1;
        v56 = v87 - 1;
        v55 = v102;
        v47 = v103;
        LODWORD(v87) = v87 - 1;
        if ( v54 )
          v45 = 0LL;
        else
          v45 = (_WORD *)((char *)v88 + v64);
        v88 = v45;
        break;
      case 0x12:
        if ( (v14 & 0x20) == 0 )
          goto LABEL_142;
        if ( !v50
          || (v60 = v50[1], v40[1] != v60)
          || (v61 = v60, v62 = RtlCompareMemory(v40, v50, v60), v23 = v89, v62 != v61) )
        {
          v13 |= 0x20u;
          v14 &= ~0x20u;
          goto LABEL_116;
        }
        v45 = v88;
        v54 = v102 == 1;
        v55 = v102 - 1;
        v43 = v100;
        v47 = v103;
        v56 = v87;
        --v102;
        if ( v54 )
          v50 = 0LL;
        else
          v50 = (_WORD *)((char *)v50 + v61);
        break;
      case 0x13:
        if ( (v14 & 0x40) == 0 )
          goto LABEL_142;
        if ( !v48
          || (v57 = v48[1], v40[1] != v57)
          || (v58 = v57, v59 = RtlCompareMemory(v40, v48, v57), v23 = v89, v59 != v58) )
        {
          v13 |= 0x40u;
          v14 &= ~0x40u;
          goto LABEL_116;
        }
        v45 = v88;
        v54 = v103 == 1;
        v47 = v103 - 1;
        v43 = v100;
        v55 = v102;
        v56 = v87;
        --v103;
        if ( v54 )
          v48 = 0LL;
        else
          v48 = (_WORD *)((char *)v48 + v58);
        break;
      default:
        if ( (v14 & 8) == 0 )
          goto LABEL_142;
        if ( !v42
          || *v42 != *(_BYTE *)v40
          || (v51 = *((_WORD *)v42 + 1), v40[1] != v51)
          || (v52 = v51, v53 = RtlCompareMemory(v40, v42, v51), v23 = v89, v53 != v52) )
        {
          v13 |= 8u;
          v14 &= ~8u;
LABEL_116:
          v45 = v88;
          goto LABEL_141;
        }
        v45 = v88;
        v54 = v100 == 1;
        v43 = v100 - 1;
        v55 = v102;
        v47 = v103;
        v56 = v87;
        --v100;
        if ( v54 )
          v42 = 0LL;
        else
          v42 += v52;
        break;
    }
    v49 = HIDWORD(v87);
LABEL_143:
    ++v49;
    v40 = (_WORD *)((char *)v40 + (unsigned __int16)v40[1]);
    HIDWORD(v87) = v49;
  }
  while ( v49 < *(unsigned __int16 *)(v23 + 4) && v14 );
  v24 = a9;
  v20 = a13;
  if ( v43 )
    v13 |= v14 & 8;
  if ( v55 )
    v13 |= v14 & 0x20;
  if ( v47 )
    v13 |= v14 & 0x40;
  if ( v56 )
  {
    v66 = v14 & 0x10;
    goto LABEL_159;
  }
LABEL_28:
  if ( v24 )
  {
    v67 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( (*(_WORD *)(v20 + 2) & 0x8000) != 0 )
        {
          v68 = *(unsigned int *)(v20 + 4);
          v69 = (_DWORD)v68 ? v68 + v20 : 0LL;
        }
        else
        {
          v69 = *(_QWORD *)(v20 + 8);
        }
        if ( (*(_WORD *)(v24 + 2) & 0x8000) != 0 )
        {
          v70 = *(unsigned int *)(v24 + 4);
          v71 = (_DWORD)v70 ? v24 + v70 : 0LL;
        }
        else
        {
          v71 = *(_QWORD *)(v24 + 8);
        }
        if ( !(unsigned __int8)SepIsSidEqual(v71, v69) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( (*(_WORD *)(v20 + 2) & 0x8000) != 0 )
        {
          v72 = *(unsigned int *)(v20 + 8);
          v73 = (_DWORD)v72 ? v72 + v20 : 0LL;
        }
        else
        {
          v73 = *(_QWORD *)(v20 + 16);
        }
        if ( (*(_WORD *)(v24 + 2) & 0x8000) != 0 )
        {
          v74 = *(unsigned int *)(v24 + 8);
          v75 = (_DWORD)v74 ? v24 + v74 : 0LL;
        }
        else
        {
          v75 = *(_QWORD *)(v24 + 16);
        }
        if ( !(unsigned __int8)SepIsSidEqual(v75, v73) )
          v13 |= 2u;
      }
    }
    if ( (v67 & 0x40000) != 0 )
    {
      v76 = *(_WORD *)(v20 + 2);
      if ( (v76 & 4) == 0 )
        goto LABEL_192;
      if ( v76 < 0 )
      {
        v77 = *(unsigned int *)(v20 + 16);
        if ( (_DWORD)v77 )
        {
          v78 = v77 + v20;
          goto LABEL_194;
        }
LABEL_192:
        v78 = 0LL;
      }
      else
      {
        v78 = *(_QWORD *)(v20 + 32);
      }
LABEL_194:
      v79 = *(_WORD *)(v24 + 2);
      if ( (v79 & 4) == 0 )
        goto LABEL_198;
      if ( (v79 & 0x8000) == 0 )
      {
        v81 = *(_QWORD *)(v24 + 32);
        goto LABEL_200;
      }
      v80 = *(unsigned int *)(v24 + 16);
      if ( (_DWORD)v80 )
        v81 = v24 + v80;
      else
LABEL_198:
        v81 = 0LL;
LABEL_200:
      if ( !(unsigned __int8)SepIsAclEqual(v81, v78) )
        v13 |= 4u;
    }
  }
  if ( v13 )
  {
    if ( a2 )
    {
      NameString = SepQueryNameString(a2, (PUNICODE_STRING *)&P);
      v83 = P;
      v92 = NameString;
      if ( NameString < 0 )
      {
LABEL_216:
        if ( v83 )
          ExFreePoolWithTag(v83, 0);
        goto LABEL_218;
      }
      v84 = v96;
      if ( P )
        v84 = (int)P;
    }
    else
    {
      v84 = v96;
      v83 = P;
    }
    v85 = **((_QWORD **)Token + 19);
    if ( (v13 & 8) != 0 )
      SepAdtSecurityDescriptorChangedAuditAlarm(
        (unsigned int)&SubjectContext,
        (unsigned int)SeSubsystemName,
        (_DWORD)ObjectTypeName,
        v84,
        a5,
        v85,
        a10,
        8,
        v20);
    if ( (v13 & 0x20) != 0 )
      SepAdtSecurityDescriptorChangedAuditAlarm(
        (unsigned int)&SubjectContext,
        (unsigned int)SeSubsystemName,
        (_DWORD)ObjectTypeName,
        v84,
        a5,
        v85,
        a11,
        32,
        v20);
    if ( (v13 & 0x40) != 0 )
      SepAdtSecurityDescriptorChangedAuditAlarm(
        (unsigned int)&SubjectContext,
        (unsigned int)SeSubsystemName,
        (_DWORD)ObjectTypeName,
        v84,
        a5,
        v85,
        a12,
        64,
        v20);
    v86 = v13 & 0xFFFFFF97;
    if ( v86 )
      SepAdtSecurityDescriptorChangedAuditAlarm(
        (unsigned int)&SubjectContext,
        (unsigned int)SeSubsystemName,
        (_DWORD)ObjectTypeName,
        v84,
        a5,
        v85,
        v24,
        v86,
        v20);
    goto LABEL_216;
  }
LABEL_30:
  if ( v92 < 0 )
    SepAuditFailed((unsigned int)v92);
  SeReleaseSubjectContext(&SubjectContext);
}
