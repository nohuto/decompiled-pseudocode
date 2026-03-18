/*
 * XREFs of RtlpSetSecurityObject @ 0x1404CD280
 * Callers:
 *     SeSetSecurityDescriptorInfo @ 0x1404CF374 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x1406D6F1C (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 *     SepLocateTokenTrustLevel @ 0x140045658 (SepLocateTokenTrustLevel.c)
 *     RtlFindAceByType @ 0x1400459A0 (RtlFindAceByType.c)
 *     RtlFindAceBySid @ 0x1400CEE90 (RtlFindAceBySid.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepValidLabelSubjectContext @ 0x14046DA40 (SepValidLabelSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     RtlpCombineAcls @ 0x140487120 (RtlpCombineAcls.c)
 *     RtlpApplyAclToObject @ 0x140487630 (RtlpApplyAclToObject.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x14053E024 (SepValidOwnerSubjectContext.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 *     RtlpComputeMergedAcl @ 0x1406CA01C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406CA428 (RtlpCreateServerAcl.c)
 *     SepGetDefaultsSubjectContext @ 0x1406D44D4 (SepGetDefaultsSubjectContext.c)
 */

__int64 __fastcall RtlpSetSecurityObject(__int64 a1, int a2, __int64 a3, __int64 *a4, char a5, int a6, _DWORD *a7)
{
  __int64 v7; // r12
  unsigned __int16 v10; // dx
  unsigned __int16 *v11; // r13
  __int16 v12; // di
  __int64 v13; // r10
  __int64 v14; // rcx
  __int16 v15; // ax
  unsigned __int16 *v16; // r15
  char v17; // al
  unsigned int v18; // eax
  unsigned __int8 *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int8 *v22; // r12
  __int16 v23; // cx
  unsigned __int16 *v24; // r15
  __int16 v25; // di
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // esi
  unsigned int v30; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v32; // rbx
  char *v33; // rdi
  bool v34; // zf
  __int16 v35; // ax
  __int16 v36; // dx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 *v39; // r14
  __int64 v40; // r15
  __int64 v41; // rsi
  int v42; // eax
  char *v43; // rdi
  __int64 v44; // rsi
  int ServerAcl; // r15d
  void *v46; // rcx
  void *v47; // rsi
  void *v48; // rdi
  void *v49; // rbx
  unsigned __int8 *v51; // rax
  unsigned __int8 *v52; // r10
  unsigned __int8 *v53; // r8
  __int64 v54; // rdx
  unsigned __int8 *v55; // r11
  unsigned __int8 *v56; // r9
  __int64 v57; // rax
  __int16 v58; // cx
  __int64 v59; // rcx
  __int16 v60; // ax
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int8 *AceBySid; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int16 v66; // cx
  __int16 v67; // di
  __int64 v68; // rax
  unsigned int v69; // eax
  __int16 v70; // di
  __int16 v71; // ax
  _DWORD *AceByType; // rax
  __int64 TokenTrustLevel; // rax
  __int16 v74; // cx
  __int16 v75; // cx
  __int16 v76; // r9
  __int64 v77; // r8
  int v78; // eax
  __int64 v79; // rax
  __int16 v80; // dx
  __int64 v81; // rcx
  int v82; // ecx
  unsigned __int8 v83; // cl
  __int16 v84; // [rsp+50h] [rbp-B0h]
  unsigned int v85; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v86; // [rsp+58h] [rbp-A8h] BYREF
  bool v87; // [rsp+5Ah] [rbp-A6h]
  char v88; // [rsp+5Bh] [rbp-A5h]
  char v89; // [rsp+5Ch] [rbp-A4h]
  char v90; // [rsp+5Dh] [rbp-A3h]
  char v91; // [rsp+5Eh] [rbp-A2h] BYREF
  char v92; // [rsp+5Fh] [rbp-A1h]
  bool v93; // [rsp+60h] [rbp-A0h]
  char v94; // [rsp+61h] [rbp-9Fh]
  char v95; // [rsp+62h] [rbp-9Eh]
  char v96; // [rsp+63h] [rbp-9Dh]
  char v97; // [rsp+64h] [rbp-9Ch]
  PVOID v98; // [rsp+68h] [rbp-98h]
  int v99[2]; // [rsp+70h] [rbp-90h] BYREF
  int v100; // [rsp+78h] [rbp-88h]
  PVOID v101; // [rsp+80h] [rbp-80h]
  struct _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+88h] [rbp-78h] BYREF
  PVOID v103; // [rsp+90h] [rbp-70h]
  __int64 v104; // [rsp+98h] [rbp-68h]
  PVOID v105; // [rsp+A0h] [rbp-60h]
  unsigned int v106; // [rsp+A8h] [rbp-58h]
  int v107; // [rsp+ACh] [rbp-54h]
  unsigned __int16 *v108; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h]
  size_t Size; // [rsp+C0h] [rbp-40h]
  char *v111; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v113; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v114; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v115; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v116; // [rsp+F0h] [rbp-10h]
  __int64 v117; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v118; // [rsp+100h] [rbp+0h] BYREF
  PVOID v119; // [rsp+108h] [rbp+8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+110h] [rbp+10h] BYREF

  v7 = a3;
  v116 = a4;
  v104 = a3;
  LOBYTE(a3) = 0;
  *(_DWORD *)PoolType.Value = a6;
  v96 = 0;
  v97 = 0;
  v91 = 0;
  v10 = *(_WORD *)(v7 + 2);
  v11 = 0LL;
  v90 = 0;
  v89 = 0;
  v12 = 0x8000;
  v95 = 0;
  v92 = 0;
  v94 = 0;
  v88 = 0;
  v118 = 0LL;
  P = 0LL;
  v98 = 0LL;
  v114 = 0LL;
  v103 = 0LL;
  v117 = 0LL;
  v101 = 0LL;
  v115 = 0LL;
  v105 = 0LL;
  v113 = 0LL;
  v111 = 0LL;
  v86 = 0;
  v107 = a3;
  v84 = 0x8000;
  v119 = 0LL;
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x8000) != 0 )
    {
      v64 = *(unsigned int *)(v7 + 12);
      if ( (_DWORD)v64 )
        v13 = v7 + v64;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = *(_QWORD *)(v7 + 24);
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *a4;
  *(_QWORD *)v99 = v13;
  v15 = *(_WORD *)(v14 + 2);
  if ( (v15 & 0x10) != 0 )
  {
    if ( (v15 & 0x8000) == 0 )
    {
      v16 = *(unsigned __int16 **)(v14 + 24);
      goto LABEL_7;
    }
    a3 = *(unsigned int *)(v14 + 12);
    if ( (_DWORD)a3 )
    {
      v16 = (unsigned __int16 *)(v14 + a3);
      LOBYTE(a3) = v107;
LABEL_7:
      v108 = v16;
      goto LABEL_8;
    }
    LOBYTE(a3) = v107;
    v16 = 0LL;
    v108 = 0LL;
  }
  else
  {
    v16 = 0LL;
    v108 = 0LL;
  }
LABEL_8:
  if ( (v15 & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  v87 = (v10 & 0x80u) != 0;
  v93 = (v10 & 0x40) != 0;
  v100 = 2048;
  v17 = a2 & 0x80;
  v106 = 1;
  if ( (a2 & 0x10000) != 0 )
  {
    LOBYTE(a2) = -1;
    if ( !v17 )
      LOBYTE(a2) = 127;
    if ( !v16 && !v13 )
    {
      LOBYTE(a2) = a2 & 7;
      if ( (v10 & 0x10) != 0 )
      {
        LOBYTE(a2) = a2 | 8;
      }
      else
      {
        LODWORD(a3) = (unsigned __int8)a3;
        if ( ((unsigned __int16)v100 & v10) != 0 )
          LODWORD(a3) = v106;
        v107 = a3;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    HIBYTE(v86) = (a2 & 4) == 0;
    if ( (v10 & 0x8000) != 0 )
    {
      v68 = *(unsigned int *)(v7 + 4);
      if ( (_DWORD)v68 )
        v19 = (unsigned __int8 *)(v7 + v68);
      else
        v19 = 0LL;
    }
    else
    {
      v19 = *(unsigned __int8 **)(v7 + 8);
    }
    Src = v19;
    v97 = 1;
    if ( (a5 & 8) == 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      if ( !(unsigned __int8)SepValidOwnerSubjectContext(&SubjectContext, v19, v87) )
      {
        SeReleaseSubjectContext(&SubjectContext);
        return (unsigned int)-1073741734;
      }
      SeReleaseSubjectContext(&SubjectContext);
    }
  }
  else
  {
    v18 = *(_DWORD *)(v14 + 4);
    if ( !v18 )
      return (unsigned int)-1073741734;
    v19 = (unsigned __int8 *)(v14 + v18);
    Src = v19;
    if ( !v19 )
      return (unsigned int)-1073741734;
  }
  if ( !RtlValidSid(v19) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( (*(_WORD *)(v7 + 2) & 0x8000) != 0 )
    {
      v69 = *(_DWORD *)(v7 + 8);
      if ( v69 )
        v22 = (unsigned __int8 *)(v104 + v69);
      else
        v22 = 0LL;
    }
    else
    {
      v22 = *(unsigned __int8 **)(v7 + 16);
    }
    v96 = 1;
  }
  else
  {
    v20 = *a4;
    if ( (*(_WORD *)(*a4 + 2) & 0x8000) != 0 )
    {
      v21 = *(unsigned int *)(v20 + 8);
      if ( !(_DWORD)v21 )
        return (unsigned int)-1073741733;
      v22 = (unsigned __int8 *)(v20 + v21);
    }
    else
    {
      v22 = *(unsigned __int8 **)(v20 + 16);
    }
  }
  if ( !v22 || !RtlValidSid(v22) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0xF8) == 0 )
  {
    v11 = v16;
    goto LABEL_22;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_80:
    LODWORD(v111) = a2 & 0x80;
    if ( (a2 & 0x80) != 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      if ( SepLocateTokenTrustLevel((__int64 *)&SubjectContext) )
      {
        v85 = 0;
        while ( 1 )
        {
          AceByType = RtlFindAceByType(*(__int64 *)v99, 20, &v85);
          v98 = AceByType;
          if ( AceByType )
          {
            if ( (AceByType[1] & 0xFF000000) != 0 )
            {
              ServerAcl = -1073740730;
              SeReleaseSubjectContext(&SubjectContext);
              return (unsigned int)ServerAcl;
            }
            TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
            if ( !TokenTrustLevel
              || (int)RtlSidDominatesForTrust(TokenTrustLevel, (__int64)v98 + 8, &v86) < 0
              || !(_BYTE)v86 )
            {
              break;
            }
            AceByType = v98;
          }
          ++v85;
          if ( !AceByType )
          {
            SeReleaseSubjectContext(&SubjectContext);
            goto LABEL_81;
          }
        }
      }
      SeReleaseSubjectContext(&SubjectContext);
      return (unsigned int)-1073741790;
    }
LABEL_81:
    if ( (a2 & 8) != 0 )
    {
      if ( (a5 & 2) == 0 )
      {
        v53 = *(unsigned __int8 **)v99;
        v54 = v104;
        v52 = *(unsigned __int8 **)v99;
        v98 = *(PVOID *)v99;
        v70 = *(_WORD *)(v104 + 2);
        v71 = v70 & 0xA00;
        v12 = v70 & 0x2000 | 0x8010;
        v84 = v12;
        if ( v71 == 2560 )
        {
          v12 |= v100;
          v84 = v12;
        }
        goto LABEL_84;
      }
      v19 = (unsigned __int8 *)Src;
      ServerAcl = RtlpComputeMergedAcl(
                    (int)v16,
                    ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x1400u,
                    v99[0],
                    ((unsigned __int8)*(_WORD *)(v104 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(v104 + 2) >> 2) & 8 | (*(unsigned __int16 *)(v104 + 2) >> 1) & 0x1400u,
                    (__int64)Src,
                    (__int64)v22,
                    (__int64)a7,
                    2,
                    (__int64)&v114,
                    (__int64)&v85);
      if ( ServerAcl < 0 )
      {
        v46 = (void *)v114;
        goto LABEL_61;
      }
      v52 = (unsigned __int8 *)v114;
      v16 = v108;
      v95 = 1;
      v98 = (PVOID)v114;
      v12 = (4 * (v85 & 4)) | (4 * (v85 & 8)) | (2 * (v85 & 0x400)) | (2 * (v85 & 0x1000)) | 0x8010;
      v84 = v12;
    }
    else
    {
      v52 = (unsigned __int8 *)v16;
      v98 = v16;
    }
    v53 = *(unsigned __int8 **)v99;
    v54 = v104;
LABEL_84:
    if ( (a2 & 0x20) != 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        v19 = (unsigned __int8 *)Src;
        ServerAcl = RtlpComputeMergedAcl(
                      (int)v16,
                      ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                      v99[0],
                      ((unsigned __int8)*(_WORD *)(v54 + 2) >> 2) & 4 | (*(unsigned __int16 *)(v54 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(v54 + 2) >> 2) & 8u,
                      (__int64)Src,
                      (__int64)v22,
                      (__int64)a7,
                      2,
                      (__int64)&v115,
                      (__int64)&v85);
        if ( ServerAcl < 0 )
        {
          v47 = (void *)v115;
          v46 = v98;
          goto LABEL_62;
        }
        v55 = (unsigned __int8 *)v115;
        v16 = v108;
        v52 = (unsigned __int8 *)v98;
        v92 = 1;
        v101 = (PVOID)v115;
        v54 = v104;
        v12 = (4 * (v85 & 4)) | (4 * (v85 & 8)) | (2 * (v85 & 0x400)) | (2 * (v85 & 0x1000)) | v84 | 0x10;
        v53 = *(unsigned __int8 **)v99;
        v84 = v12;
      }
      else
      {
        v66 = *(_WORD *)(v54 + 2);
        v55 = v53;
        v101 = v53;
        v12 |= v66 & 0x2000 | 0x10;
        v84 = v12;
        if ( (v66 & 0xA00) == 0xA00 )
        {
          v12 |= v100;
          v84 = v12;
        }
      }
    }
    else
    {
      v55 = (unsigned __int8 *)v16;
      v101 = v16;
    }
    if ( (a2 & 0x40) != 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        v19 = (unsigned __int8 *)Src;
        ServerAcl = RtlpComputeMergedAcl(
                      (int)v16,
                      ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                      v99[0],
                      ((unsigned __int8)*(_WORD *)(v54 + 2) >> 2) & 4 | (*(unsigned __int16 *)(v54 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(v54 + 2) >> 2) & 8u,
                      (__int64)Src,
                      (__int64)v22,
                      (__int64)a7,
                      2,
                      (__int64)&v117,
                      (__int64)&v85);
        if ( ServerAcl < 0 )
        {
          v48 = (void *)v117;
          v46 = v98;
          v47 = v101;
          goto LABEL_63;
        }
        v56 = (unsigned __int8 *)v117;
        v16 = v108;
        v52 = (unsigned __int8 *)v98;
        v55 = (unsigned __int8 *)v101;
        v94 = 1;
        v103 = (PVOID)v117;
        v54 = v104;
        v12 = (4 * (v85 & 4)) | (4 * (v85 & 8)) | (2 * (v85 & 0x400)) | (2 * (v85 & 0x1000)) | v84 | 0x10;
        v53 = *(unsigned __int8 **)v99;
        v84 = v12;
      }
      else
      {
        v74 = *(_WORD *)(v54 + 2);
        v56 = v53;
        v103 = v53;
        v12 |= v74 & 0x2000 | 0x10;
        v84 = v12;
        if ( (v74 & 0xA00) == 0xA00 )
        {
          v12 |= v100;
          v84 = v12;
        }
      }
    }
    else
    {
      v56 = (unsigned __int8 *)v16;
      v103 = v16;
    }
    if ( (_DWORD)v111 )
    {
      if ( (a5 & 2) != 0 )
      {
        v19 = (unsigned __int8 *)Src;
        ServerAcl = RtlpComputeMergedAcl(
                      (int)v16,
                      ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                      v99[0],
                      ((unsigned __int8)*(_WORD *)(v54 + 2) >> 2) & 4 | (*(unsigned __int16 *)(v54 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(v54 + 2) >> 2) & 8u,
                      (__int64)Src,
                      (__int64)v22,
                      (__int64)a7,
                      2,
                      (__int64)&v113,
                      (__int64)&v85);
        if ( ServerAcl < 0 )
        {
          v49 = (void *)v113;
          v46 = v98;
          v48 = v103;
          v47 = v101;
LABEL_64:
          if ( v46 && v95 )
            ExFreePoolWithTag(v46, 0);
          if ( v47 && v92 )
            ExFreePoolWithTag(v47, 0);
          if ( v48 && v94 )
            ExFreePoolWithTag(v48, 0);
          if ( v49 && v88 )
            ExFreePoolWithTag(v49, 0);
          if ( v11 && v89 )
            ExFreePoolWithTag(v11, 0);
          if ( v91 )
            ExFreePoolWithTag(v119, 0);
          return (unsigned int)ServerAcl;
        }
        v16 = v108;
        v52 = (unsigned __int8 *)v98;
        v56 = (unsigned __int8 *)v103;
        v55 = (unsigned __int8 *)v101;
        v88 = 1;
        v54 = v104;
        v12 = (4 * (v85 & 4)) | (4 * (v85 & 8)) | (2 * (v85 & 0x400)) | (2 * (v85 & 0x1000)) | v84 | 0x10;
        v53 = (unsigned __int8 *)v113;
        v105 = (PVOID)v113;
        v84 = v12;
      }
      else
      {
        v75 = *(_WORD *)(v54 + 2);
        v105 = v53;
        v12 |= v75 & 0x2000 | 0x10;
        v84 = v12;
        if ( (v75 & 0xA00) == 0xA00 )
        {
          v12 |= v100;
          v84 = v12;
        }
      }
    }
    else
    {
      v53 = (unsigned __int8 *)v16;
      v105 = v16;
    }
    if ( (_DWORD)Size )
    {
      v16 = *(unsigned __int16 **)v99;
      v12 |= *(_WORD *)(v54 + 2) & 0x2000 | 0x10;
      v84 = v12;
      if ( (*(_WORD *)(v54 + 2) & 0xA00) == 0xA00 )
      {
        v12 |= v100;
        v84 = v12;
      }
    }
    ServerAcl = RtlpCombineAcls(v52, (unsigned __int8 *)v16, v55, v56, v53, (ACL **)&P, 0LL);
    if ( ServerAcl < 0 )
      goto LABEL_60;
    v11 = (unsigned __int16 *)P;
    if ( !v98 && P && !*((_WORD *)P + 2) )
    {
      ExFreePoolWithTag(P, 0);
      v11 = 0LL;
    }
    v89 = 1;
LABEL_22:
    if ( (a2 & 4) == 0 )
    {
      v57 = *a4;
      v58 = *(_WORD *)(*a4 + 2);
      if ( (v58 & 4) != 0 )
      {
        if ( v58 >= 0 )
        {
          v24 = *(unsigned __int16 **)(v57 + 32);
        }
        else
        {
          v59 = *(unsigned int *)(v57 + 16);
          if ( (_DWORD)v59 )
            v24 = (unsigned __int16 *)(v57 + v59);
          else
            v24 = 0LL;
        }
      }
      else
      {
        v24 = 0LL;
      }
      goto LABEL_29;
    }
    if ( (a5 & 1) != 0 )
    {
      v76 = *(_WORD *)(v104 + 2);
      if ( (v76 & 4) != 0 )
      {
        if ( v76 < 0 )
        {
          v78 = *(_DWORD *)(v104 + 16);
          if ( v78 )
            LODWORD(v77) = v104 + v78;
          else
            LODWORD(v77) = 0;
        }
        else
        {
          v77 = *(_QWORD *)(v104 + 32);
        }
      }
      else
      {
        LODWORD(v77) = 0;
      }
      v79 = *a4;
      v80 = *(_WORD *)(*a4 + 2);
      if ( (v80 & 4) != 0 )
      {
        if ( v80 < 0 )
        {
          v82 = *(_DWORD *)(v79 + 16);
          if ( v82 )
            LODWORD(v81) = v79 + v82;
          else
            LODWORD(v81) = 0;
        }
        else
        {
          v81 = *(_QWORD *)(v79 + 32);
        }
      }
      else
      {
        LODWORD(v81) = 0;
      }
      ServerAcl = RtlpComputeMergedAcl(
                    v81,
                    v80 & 0x140C,
                    v77,
                    v76 & 0x140C,
                    (__int64)v19,
                    (__int64)v22,
                    (__int64)a7,
                    v106,
                    (__int64)&v118,
                    (__int64)&v85);
      if ( ServerAcl < 0 )
      {
LABEL_60:
        v46 = v98;
LABEL_61:
        v47 = v101;
LABEL_62:
        v48 = v103;
LABEL_63:
        v49 = v105;
        goto LABEL_64;
      }
      v24 = (unsigned __int16 *)v118;
      v90 = 1;
      v67 = v85 & 0x1408 | 4 | v12;
    }
    else
    {
      v23 = *(_WORD *)(v104 + 2);
      if ( (v23 & 4) != 0 )
      {
        if ( v23 < 0 )
        {
          v65 = *(unsigned int *)(v104 + 16);
          if ( (_DWORD)v65 )
            v24 = (unsigned __int16 *)(v104 + v65);
          else
            v24 = 0LL;
        }
        else
        {
          v24 = *(unsigned __int16 **)(v104 + 32);
        }
      }
      else
      {
        v24 = 0LL;
      }
      v25 = v23 & 0x1000 | 4 | v12;
      v84 = v25;
      if ( (v23 & 0x500) != 0x500 )
      {
LABEL_28:
        if ( v87 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          SepGetDefaultsSubjectContext(
            (unsigned int)&SubjectContext,
            (unsigned int)v99,
            (unsigned int)&v108,
            (unsigned int)&P,
            (__int64)&v114,
            (__int64)&v115,
            (__int64)&v117,
            (__int64)&v113);
          ServerAcl = RtlpCreateServerAcl((_DWORD)v24, v93, (_DWORD)P, (unsigned int)&v119, (__int64)&v91);
          SeReleaseSubjectContext(&SubjectContext);
          if ( ServerAcl < 0 )
            goto LABEL_58;
          v24 = (unsigned __int16 *)v119;
        }
LABEL_29:
        v26 = 4 * v19[1] + 11;
        LODWORD(Size) = 4 * v19[1] + 8;
        v27 = v22[1];
        v28 = v26 & 0xFFFFFFFC;
        LODWORD(v111) = v28;
        v106 = 4 * v27 + 8;
        v99[0] = (4 * v27 + 11) & 0xFFFFFFFC;
        if ( v11 )
          v29 = (v11[1] + 3) & 0xFFFFFFFC;
        else
          v29 = 0;
        if ( v24 )
          v30 = (v24[1] + 3) & 0xFFFFFFFC;
        else
          v30 = 0;
        PoolWithTag = ExAllocatePoolWithTag(
                        *(POOL_TYPE *)PoolType.Value,
                        ((4 * v27 + 11) & 0xFFFFFFFC) + v30 + v29 + v28 + 20,
                        0x64536553u);
        v32 = PoolWithTag;
        if ( PoolWithTag )
        {
          v33 = (char *)PoolWithTag + 20;
          v34 = (_BYTE)v107 == 0;
          *PoolWithTag = 0LL;
          PoolWithTag[1] = 0LL;
          *((_DWORD *)PoolWithTag + 4) = 0;
          v35 = v84;
          *(_BYTE *)v32 = 1;
          if ( !v34 )
          {
            v35 = v100 | v84;
            LOBYTE(v84) = v100 | v84;
          }
          *((_WORD *)v32 + 1) |= v35;
          v36 = *((_WORD *)v32 + 1);
          if ( (*(_WORD *)(v104 + 2) & 0x4000) != 0 )
          {
            *((_BYTE *)v32 + 1) = *(_BYTE *)(v104 + 1);
            *((_WORD *)v32 + 1) = v36 | 0x4000;
          }
          if ( v11 )
          {
            memmove((char *)v32 + 20, v11, v11[1]);
            RtlpApplyAclToObject((__int64)v32 + 20, a7);
            *((_DWORD *)v32 + 3) = (_DWORD)v33 - (_DWORD)v32;
            v37 = v11[1];
            if ( v29 > (unsigned int)v37 )
              memset(&v33[v37], 0, v29 - (unsigned int)v37);
            v33 += v29;
          }
          else
          {
            *((_DWORD *)v32 + 3) = 0;
          }
          if ( (v84 & 0x10) == 0 )
            *((_WORD *)v32 + 1) |= *(_WORD *)(*v116 + 2) & 0x2830;
          if ( v24 )
          {
            memmove(v33, v24, v24[1]);
            RtlpApplyAclToObject((__int64)v33, a7);
            *((_DWORD *)v32 + 4) = (_DWORD)v33 - (_DWORD)v32;
            v38 = v24[1];
            if ( v30 > (unsigned int)v38 )
              memset(&v33[v38], 0, v30 - (unsigned int)v38);
            v33 += v30;
          }
          else
          {
            *((_DWORD *)v32 + 4) = 0;
          }
          v39 = v116;
          if ( (v84 & 4) != 0 )
            goto LABEL_49;
          *((_WORD *)v32 + 1) |= *(_WORD *)(*v116 + 2) & 0x140C;
          if ( !HIBYTE(v86) )
            goto LABEL_49;
          *(_DWORD *)PoolType.Value = 0;
          *(_WORD *)&PoolType.Value[4] = 768;
          ServerAcl = RtlInitializeSid(&SubjectContext, &PoolType, 1u);
          if ( ServerAcl >= 0 )
          {
            SubjectContext.ImpersonationLevel = 4;
            v85 = 0;
            while ( 1 )
            {
              v60 = *((_WORD *)v32 + 1);
              if ( (v60 & 4) != 0 )
              {
                if ( v60 < 0 )
                {
                  v61 = *((unsigned int *)v32 + 4);
                  v62 = (_DWORD)v61 ? (__int64)v32 + v61 : 0LL;
                }
                else
                {
                  v62 = v32[4];
                }
              }
              else
              {
                v62 = 0LL;
              }
              AceBySid = RtlFindAceBySid(v62, &SubjectContext, &v85);
              if ( !AceBySid )
                break;
              v83 = AceBySid[1] & 0xF4 | 8;
              ++v85;
              AceBySid[1] = v83;
            }
            v39 = v116;
LABEL_49:
            v40 = (unsigned int)Size;
            memmove(v33, Src, (unsigned int)Size);
            v41 = (unsigned int)v111;
            if ( (unsigned int)v40 < (unsigned int)v111 )
              memset(&v33[v40], 0, (unsigned int)((_DWORD)v111 - v40));
            v42 = (int)v33;
            v43 = &v33[v41];
            v34 = v97 == 0;
            *((_DWORD *)v32 + 1) = v42 - (_DWORD)v32;
            if ( v34 )
              *((_WORD *)v32 + 1) |= *(_WORD *)(*v39 + 2) & 1;
            v44 = v106;
            memmove(v43, v22, v106);
            if ( (unsigned int)v44 < v99[0] )
              memset(&v43[v44], 0, (unsigned int)(v99[0] - v44));
            v34 = v96 == 0;
            *((_DWORD *)v32 + 2) = (_DWORD)v43 - (_DWORD)v32;
            if ( v34 )
              *((_WORD *)v32 + 1) |= *(_WORD *)(*v39 + 2) & 2;
            *v39 = (__int64)v32;
            ServerAcl = 0;
          }
        }
        else
        {
          ServerAcl = -1073741801;
        }
LABEL_58:
        if ( v90 )
          ExFreePoolWithTag(v118, 0);
        goto LABEL_60;
      }
      v67 = v25 | 0x400;
    }
    v84 = v67;
    goto LABEL_28;
  }
  v85 = 0;
  while ( 1 )
  {
    v51 = RtlFindAceByType(*(__int64 *)v99, 17, &v85);
    v98 = v51;
    if ( v51 )
    {
      v34 = (*((_DWORD *)v51 + 1) & 0xFFFFFFF8) == 0;
      v111 = (char *)(v51 + 8);
      LOBYTE(v86) = v51[1];
      if ( !v34 )
        break;
    }
    SeCaptureSubjectContext(&SubjectContext);
    if ( !SepValidLabelSubjectContext((__int64 *)&SubjectContext, v111, v86) )
    {
      SeReleaseSubjectContext(&SubjectContext);
      break;
    }
    SeReleaseSubjectContext(&SubjectContext);
    ++v85;
    if ( !v98 )
      goto LABEL_80;
  }
  return (unsigned int)-1073740730;
}
