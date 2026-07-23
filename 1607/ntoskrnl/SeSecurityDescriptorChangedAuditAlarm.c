/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x140503F10
 * Callers:
 *     NtSetSecurityObject @ 0x140503BA4 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     SeMaximumAuditMask @ 0x1402197EC (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406900F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x140690880 (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140695650 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepIsAclEqual @ 0x1406957AC (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x140695820 (SepIsSidEqual.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        char *a2,
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
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // r15
  __int64 v21; // rcx
  unsigned int v22; // r14d
  __int64 v23; // r13
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rcx
  __int16 v29; // ax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  char v33; // al
  __int16 v34; // ax
  __int64 v35; // rax
  UNICODE_STRING *v36; // rax
  __int16 v37; // ax
  __int64 v38; // rax
  __int16 v39; // ax
  __int64 v40; // rax
  __int16 v41; // ax
  __int64 v42; // rax
  _WORD *v43; // r15
  __int16 v44; // ax
  char *v45; // r12
  __int16 v46; // r11
  unsigned __int16 v47; // ax
  _WORD *v48; // r10
  __int16 v49; // ax
  __int16 v50; // r8
  _WORD *v51; // r13
  unsigned int v52; // esi
  _WORD *v53; // r14
  unsigned __int16 v54; // ax
  __int64 v55; // rsi
  SIZE_T v56; // rax
  bool v57; // zf
  __int16 v58; // cx
  int v59; // edx
  unsigned __int16 v60; // ax
  __int64 v61; // rsi
  SIZE_T v62; // rax
  unsigned __int16 v63; // ax
  __int64 v64; // rsi
  SIZE_T v65; // rax
  unsigned __int16 v66; // ax
  __int64 v67; // rsi
  SIZE_T v68; // rax
  int v69; // edi
  ACCESS_MASK v70; // edi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int16 v79; // ax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int16 v82; // ax
  __int64 v83; // rax
  __int64 v84; // rcx
  int v85; // r15d
  int v86; // r12d
  __int64 v87; // rdi
  unsigned int v88; // ebx
  __int64 v89; // [rsp+58h] [rbp-99h]
  _WORD *v90; // [rsp+60h] [rbp-91h]
  __int64 v91; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+70h] [rbp-81h] BYREF
  int TypeString; // [rsp+74h] [rbp-7Dh]
  PUNICODE_STRING ObjectTypeName; // [rsp+78h] [rbp-79h]
  PACCESS_TOKEN Token; // [rsp+80h] [rbp-71h]
  PVOID P; // [rsp+88h] [rbp-69h] BYREF
  PVOID v97[2]; // [rsp+90h] [rbp-61h] BYREF
  void *Source2; // [rsp+A0h] [rbp-51h]
  void *v99; // [rsp+A8h] [rbp-49h]
  __int64 v100; // [rsp+B0h] [rbp-41h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-39h] BYREF
  __int16 v102; // [rsp+138h] [rbp+47h]
  __int16 v104; // [rsp+150h] [rbp+5Fh]
  __int16 v105; // [rsp+160h] [rbp+6Fh]

  v13 = 0;
  AuditMask = 0;
  P = 0LL;
  v14 = 0;
  v97[0] = 0LL;
  v15 = 0LL;
  v100 = 0LL;
  ObjectTypeName = 0LL;
  TypeString = 0;
  v89 = 0LL;
  v90 = 0LL;
  v102 = 0;
  v99 = 0LL;
  v104 = 0;
  Source2 = 0LL;
  v105 = 0;
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
  v20 = SepAdtAuditThisEventWithContext(142LL, 1u, 0, (__int64)&SubjectContext);
  if ( v20 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    v33 = SepAdtAuditThisEventWithContext(140LL, 1u, 0, (__int64)&SubjectContext);
    v21 = 0LL;
    if ( v33 )
      v14 |= a8 & 8;
    if ( v20 && a12 )
      v14 |= a8 & 0x40;
  }
  else
  {
    v21 = 0LL;
  }
  if ( a3 && a3->Length )
  {
    ObjectTypeName = a3;
  }
  else
  {
    if ( a2 )
    {
      TypeString = SepQueryTypeString(a2, v97, v18, v19);
      if ( TypeString < 0 )
        goto LABEL_216;
      v36 = 0LL;
      if ( v97[0] )
        v36 = (UNICODE_STRING *)v97[0];
      ObjectTypeName = v36;
    }
    v21 = 0LL;
  }
  v22 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) != 0 )
  {
    v37 = *(_WORD *)(a10 + 2);
    if ( (v37 & 0x10) != 0 )
    {
      if ( v37 < 0 )
      {
        v38 = *(unsigned int *)(a10 + 12);
        if ( (_DWORD)v38 )
          v21 = a10 + v38;
      }
      else
      {
        v21 = *(_QWORD *)(a10 + 24);
      }
    }
    SeMaximumAuditMask(v21, v22, (__int64)Token, &AuditMask);
    SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v22, Token, &AuditMask);
    if ( (AuditMask & 0x80000) != 0 && v20 )
      v14 |= a8 & 0x10;
  }
  v23 = a13;
  v24 = *(_WORD *)(a13 + 2);
  if ( (v24 & 0x10) == 0 )
    goto LABEL_48;
  if ( (v24 & 0x8000) == 0 )
  {
    v26 = *(_QWORD *)(a13 + 24);
    goto LABEL_15;
  }
  v25 = *(unsigned int *)(a13 + 12);
  if ( (_DWORD)v25 )
    v26 = v25 + a13;
  else
LABEL_48:
    v26 = 0LL;
LABEL_15:
  v91 = v26;
  if ( a10 )
  {
    v34 = *(_WORD *)(a10 + 2);
    if ( (v34 & 0x10) != 0 )
    {
      if ( v34 < 0 )
      {
        v35 = *(unsigned int *)(a10 + 12);
        if ( (_DWORD)v35 )
          v15 = a10 + v35;
      }
      else
      {
        v15 = *(_QWORD *)(a10 + 24);
      }
    }
  }
  v27 = a9;
  if ( !a9 )
  {
    v28 = 0LL;
    goto LABEL_18;
  }
  v39 = *(_WORD *)(a9 + 2);
  if ( (v39 & 0x10) == 0 )
  {
LABEL_74:
    v28 = 0LL;
    goto LABEL_18;
  }
  if ( v39 < 0 )
  {
    v40 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v40 )
    {
      v28 = a9 + v40;
      goto LABEL_18;
    }
    goto LABEL_74;
  }
  v28 = *(_QWORD *)(a9 + 24);
LABEL_18:
  if ( a11 )
  {
    v29 = *(_WORD *)(a11 + 2);
    if ( (v29 & 0x10) == 0 )
    {
LABEL_20:
      v30 = 0LL;
      goto LABEL_21;
    }
    if ( v29 < 0 )
    {
      v32 = *(unsigned int *)(a11 + 12);
      if ( !(_DWORD)v32 )
        goto LABEL_20;
      v30 = a11 + v32;
    }
    else
    {
      v30 = *(_QWORD *)(a11 + 24);
    }
  }
  else
  {
    v30 = 0LL;
  }
LABEL_21:
  if ( !a12 )
  {
    v31 = 0LL;
    goto LABEL_23;
  }
  v41 = *(_WORD *)(a12 + 2);
  if ( (v41 & 0x10) == 0 )
  {
LABEL_81:
    v31 = 0LL;
    goto LABEL_23;
  }
  if ( v41 < 0 )
  {
    v42 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v42 )
    {
      v31 = a12 + v42;
      goto LABEL_23;
    }
    goto LABEL_81;
  }
  v31 = *(_QWORD *)(a12 + 24);
LABEL_23:
  if ( !v26 || !*(_WORD *)(v26 + 4) )
  {
    if ( v15 && *(_WORD *)(v15 + 4) )
      v13 = v14 & 8;
    if ( v28 && *(_WORD *)(v28 + 4) )
      v13 |= v14 & 0x10;
    if ( v30 && *(_WORD *)(v30 + 4) )
      v13 |= v14 & 0x20;
    if ( v31 && *(_WORD *)(v31 + 4) )
    {
      v69 = v14 & 0x40;
LABEL_159:
      v13 |= v69;
    }
    goto LABEL_29;
  }
  if ( !v14 )
    goto LABEL_29;
  v43 = (_WORD *)(v26 + 8);
  if ( v15 && (v44 = *(_WORD *)(v15 + 4)) != 0 )
  {
    v45 = (char *)(v15 + 8);
    v102 = v44;
    v46 = v44;
  }
  else
  {
    v46 = 0;
    v45 = 0LL;
  }
  if ( v28 && (v47 = *(_WORD *)(v28 + 4)) != 0 )
  {
    v48 = (_WORD *)(v28 + 8);
    v90 = (_WORD *)(v28 + 8);
    LODWORD(v89) = v47;
  }
  else
  {
    v48 = 0LL;
  }
  if ( v30 && *(_WORD *)(v30 + 4) )
  {
    v104 = *(_WORD *)(v30 + 4);
    v99 = (void *)(v30 + 8);
  }
  if ( v31 && (v49 = *(_WORD *)(v31 + 4)) != 0 )
  {
    v105 = *(_WORD *)(v31 + 4);
    Source2 = (void *)(v31 + 8);
    v50 = v49;
  }
  else
  {
    v50 = 0;
  }
  v51 = Source2;
  v52 = 0;
  v53 = v99;
  do
  {
    switch ( *(_BYTE *)v43 )
    {
      case 0x11:
        if ( (v14 & 0x10) == 0 )
          goto LABEL_140;
        if ( !v48 )
          goto LABEL_138;
        v66 = v48[1];
        if ( v43[1] != v66 )
          goto LABEL_138;
        v67 = v66;
        v68 = RtlCompareMemory(v43, v48, v66);
        v26 = v91;
        if ( v68 != v67 )
        {
          v48 = v90;
LABEL_138:
          v13 |= 0x10u;
          v14 &= ~0x10u;
LABEL_139:
          v52 = HIDWORD(v89);
          v50 = v105;
          v46 = v102;
LABEL_140:
          v59 = v89;
          v58 = v104;
          goto LABEL_141;
        }
        v46 = v102;
        v57 = (_DWORD)v89 == 1;
        v59 = v89 - 1;
        v58 = v104;
        v50 = v105;
        LODWORD(v89) = v89 - 1;
        if ( v57 )
          v48 = 0LL;
        else
          v48 = (_WORD *)((char *)v90 + v67);
        v90 = v48;
        break;
      case 0x12:
        if ( (v14 & 0x20) == 0 )
          goto LABEL_140;
        if ( !v53
          || (v63 = v53[1], v43[1] != v63)
          || (v64 = v63, v65 = RtlCompareMemory(v43, v53, v63), v26 = v91, v65 != v64) )
        {
          v13 |= 0x20u;
          v14 &= ~0x20u;
          goto LABEL_114;
        }
        v48 = v90;
        v57 = v104 == 1;
        v58 = v104 - 1;
        v46 = v102;
        v50 = v105;
        v59 = v89;
        --v104;
        if ( v57 )
          v53 = 0LL;
        else
          v53 = (_WORD *)((char *)v53 + v64);
        break;
      case 0x13:
        if ( (v14 & 0x40) == 0 )
          goto LABEL_140;
        if ( !v51
          || (v60 = v51[1], v43[1] != v60)
          || (v61 = v60, v62 = RtlCompareMemory(v43, v51, v60), v26 = v91, v62 != v61) )
        {
          v13 |= 0x40u;
          v14 &= ~0x40u;
          goto LABEL_114;
        }
        v48 = v90;
        v57 = v105 == 1;
        v50 = v105 - 1;
        v46 = v102;
        v58 = v104;
        v59 = v89;
        --v105;
        if ( v57 )
          v51 = 0LL;
        else
          v51 = (_WORD *)((char *)v51 + v61);
        break;
      default:
        if ( (v14 & 8) == 0 )
          goto LABEL_140;
        if ( !v45
          || *v45 != *(_BYTE *)v43
          || (v54 = *((_WORD *)v45 + 1), v43[1] != v54)
          || (v55 = v54, v56 = RtlCompareMemory(v43, v45, v54), v26 = v91, v56 != v55) )
        {
          v13 |= 8u;
          v14 &= ~8u;
LABEL_114:
          v48 = v90;
          goto LABEL_139;
        }
        v48 = v90;
        v57 = v102 == 1;
        v46 = v102 - 1;
        v58 = v104;
        v50 = v105;
        v59 = v89;
        --v102;
        if ( v57 )
          v45 = 0LL;
        else
          v45 += v55;
        break;
    }
    v52 = HIDWORD(v89);
LABEL_141:
    ++v52;
    v43 = (_WORD *)((char *)v43 + (unsigned __int16)v43[1]);
    HIDWORD(v89) = v52;
  }
  while ( v52 < *(unsigned __int16 *)(v26 + 4) && v14 );
  v27 = a9;
  v23 = a13;
  if ( v46 )
    v13 |= v14 & 8;
  if ( v58 )
    v13 |= v14 & 0x20;
  if ( v50 )
    v13 |= v14 & 0x40;
  if ( v59 )
  {
    v69 = v14 & 0x10;
    goto LABEL_159;
  }
LABEL_29:
  if ( v27 )
  {
    v70 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( (*(_WORD *)(v23 + 2) & 0x8000) != 0 )
        {
          v71 = *(unsigned int *)(v23 + 4);
          v72 = (_DWORD)v71 ? v71 + v23 : 0LL;
        }
        else
        {
          v72 = *(_QWORD *)(v23 + 8);
        }
        if ( (*(_WORD *)(v27 + 2) & 0x8000) != 0 )
        {
          v73 = *(unsigned int *)(v27 + 4);
          v74 = (_DWORD)v73 ? v27 + v73 : 0LL;
        }
        else
        {
          v74 = *(_QWORD *)(v27 + 8);
        }
        if ( !(unsigned __int8)SepIsSidEqual(v74, v72) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( (*(_WORD *)(v23 + 2) & 0x8000) != 0 )
        {
          v75 = *(unsigned int *)(v23 + 8);
          v76 = (_DWORD)v75 ? v75 + v23 : 0LL;
        }
        else
        {
          v76 = *(_QWORD *)(v23 + 16);
        }
        if ( (*(_WORD *)(v27 + 2) & 0x8000) != 0 )
        {
          v77 = *(unsigned int *)(v27 + 8);
          v78 = (_DWORD)v77 ? v27 + v77 : 0LL;
        }
        else
        {
          v78 = *(_QWORD *)(v27 + 16);
        }
        if ( !(unsigned __int8)SepIsSidEqual(v78, v76) )
          v13 |= 2u;
      }
    }
    if ( (v70 & 0x40000) != 0 )
    {
      v79 = *(_WORD *)(v23 + 2);
      if ( (v79 & 4) == 0 )
        goto LABEL_192;
      if ( v79 < 0 )
      {
        v80 = *(unsigned int *)(v23 + 16);
        if ( (_DWORD)v80 )
        {
          v81 = v80 + v23;
          goto LABEL_194;
        }
LABEL_192:
        v81 = 0LL;
      }
      else
      {
        v81 = *(_QWORD *)(v23 + 32);
      }
LABEL_194:
      v82 = *(_WORD *)(v27 + 2);
      if ( (v82 & 4) == 0 )
        goto LABEL_198;
      if ( (v82 & 0x8000) == 0 )
      {
        v84 = *(_QWORD *)(v27 + 32);
        goto LABEL_200;
      }
      v83 = *(unsigned int *)(v27 + 16);
      if ( (_DWORD)v83 )
        v84 = v27 + v83;
      else
LABEL_198:
        v84 = 0LL;
LABEL_200:
      if ( !(unsigned __int8)SepIsAclEqual(v84, v81) )
        v13 |= 4u;
    }
  }
  if ( v13 )
  {
    if ( !a2 )
    {
      v85 = v100;
LABEL_208:
      v86 = (int)ObjectTypeName;
      v87 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          (_DWORD)ObjectTypeName,
          v85,
          a5,
          v87,
          a10,
          8,
          v23);
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v86,
          v85,
          a5,
          v87,
          a11,
          32,
          v23);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v86,
          v85,
          a5,
          v87,
          a12,
          64,
          v23);
      v88 = v13 & 0xFFFFFF97;
      if ( v88 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v86,
          v85,
          a5,
          v87,
          v27,
          v88,
          v23);
      goto LABEL_216;
    }
    TypeString = SepQueryNameString(a2, &P);
    if ( TypeString >= 0 )
    {
      v85 = v100;
      if ( P )
        v85 = (int)P;
      goto LABEL_208;
    }
LABEL_216:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v97[0] )
      ExFreePoolWithTag(v97[0], 0);
  }
  if ( TypeString < 0 )
    SepAuditFailed((unsigned int)TypeString);
  SeReleaseSubjectContext(&SubjectContext);
}
