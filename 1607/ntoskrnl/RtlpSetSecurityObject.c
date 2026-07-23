/*
 * XREFs of RtlpSetSecurityObject @ 0x14051DAA0
 * Callers:
 *     SeSetSecurityDescriptorInfo @ 0x14051DA64 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x14069473C (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14000BC80 (RtlFindAceBySid.c)
 *     RtlFindAceByType @ 0x140012620 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x140012AA0 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x1400D1B40 (RtlSidDominatesForTrust.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x14041D040 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x14041D100 (RtlpCombineAcls.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     SepValidOwnerSubjectContext @ 0x14051AF30 (SepValidOwnerSubjectContext.c)
 *     SepValidLabelSubjectContext @ 0x14051B374 (SepValidLabelSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140683FDC (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406843E8 (RtlpCreateServerAcl.c)
 *     SepGetDefaultsSubjectContext @ 0x14069117C (SepGetDefaultsSubjectContext.c)
 */

__int64 __fastcall RtlpSetSecurityObject(__int64 a1, int a2, __int64 a3, __int64 *a4, char a5, int a6, _DWORD *a7)
{
  __int64 v7; // r14
  unsigned __int16 v10; // dx
  unsigned __int16 *v11; // r12
  __int16 v12; // di
  ACL *v13; // r10
  __int64 v14; // rax
  __int16 v15; // cx
  unsigned __int16 *v16; // rbx
  char v17; // cl
  unsigned int v18; // ecx
  unsigned __int8 *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int8 *v22; // r14
  __int16 v23; // cx
  unsigned __int16 *v24; // r15
  __int16 v25; // di
  int v26; // eax
  int v27; // r13d
  unsigned int v28; // r13d
  int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // esi
  unsigned int v32; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v34; // rbx
  char *v35; // rdi
  bool v36; // zf
  __int16 v37; // ax
  __int16 v38; // dx
  __int64 v39; // rcx
  __int64 *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // r14
  char *v43; // rdi
  __int64 v44; // r14
  int ServerAcl; // ebx
  void *v46; // rcx
  void *v47; // r14
  void *v48; // rsi
  void *v49; // rdi
  __int64 v51; // rax
  char v52; // r8
  unsigned __int8 *v53; // r11
  PACL v54; // r10
  __int64 v55; // rdx
  __int16 v56; // cx
  unsigned __int8 *v57; // r9
  unsigned __int8 *v58; // r8
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  __int16 v62; // cx
  __int64 v63; // rcx
  NTSTATUS v64; // eax
  __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int8 *AceBySid; // rax
  __int16 v69; // di
  BOOLEAN *AceByType; // rax
  __int64 v71; // rax
  unsigned int v72; // eax
  __int16 v73; // di
  __int16 v74; // ax
  _DWORD *v75; // rax
  void *TokenTrustLevel; // rax
  unsigned int v77; // r8d
  unsigned int v78; // r8d
  __int16 v79; // cx
  unsigned int v80; // r8d
  __int16 v81; // cx
  __int16 v82; // r9
  __int64 v83; // r8
  int v84; // eax
  __int64 v85; // rax
  __int16 v86; // dx
  __int64 v87; // rcx
  int v88; // ecx
  unsigned __int8 v89; // cl
  __int16 v90; // [rsp+50h] [rbp-B0h]
  ULONG Index; // [rsp+54h] [rbp-ACh] BYREF
  BOOLEAN DominatesTrust; // [rsp+58h] [rbp-A8h] BYREF
  char v93; // [rsp+59h] [rbp-A7h]
  bool v94; // [rsp+5Ah] [rbp-A6h]
  bool v95; // [rsp+5Bh] [rbp-A5h]
  char v96; // [rsp+5Ch] [rbp-A4h]
  char v97; // [rsp+5Dh] [rbp-A3h]
  char v98; // [rsp+5Eh] [rbp-A2h]
  char v99; // [rsp+5Fh] [rbp-A1h]
  char v100; // [rsp+60h] [rbp-A0h]
  char v101; // [rsp+61h] [rbp-9Fh]
  char v102; // [rsp+62h] [rbp-9Eh]
  char v103; // [rsp+63h] [rbp-9Dh]
  char v104[4]; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v105; // [rsp+68h] [rbp-98h]
  PACL Acl; // [rsp+70h] [rbp-90h] BYREF
  int v107; // [rsp+78h] [rbp-88h]
  int v108[2]; // [rsp+80h] [rbp-80h] BYREF
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+88h] [rbp-78h] BYREF
  __int64 v110; // [rsp+90h] [rbp-70h]
  PVOID v111; // [rsp+98h] [rbp-68h]
  PVOID v112; // [rsp+A0h] [rbp-60h]
  void *v113; // [rsp+A8h] [rbp-58h]
  PVOID v114; // [rsp+B0h] [rbp-50h]
  int v115; // [rsp+B8h] [rbp-48h]
  unsigned int Size; // [rsp+BCh] [rbp-44h]
  unsigned int Size_4; // [rsp+C0h] [rbp-40h]
  void *v118; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  void *Src; // [rsp+D8h] [rbp-28h]
  __int64 v121; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v123; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v124; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v125; // [rsp+100h] [rbp+0h]
  PVOID v126; // [rsp+108h] [rbp+8h] BYREF
  PVOID v127; // [rsp+110h] [rbp+10h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT Sid; // [rsp+118h] [rbp+18h] BYREF

  v7 = a3;
  v125 = a4;
  v110 = a3;
  LOBYTE(a3) = 0;
  *(_DWORD *)PoolType.Value = a6;
  v97 = 0;
  v96 = 0;
  v104[0] = 0;
  v10 = *(_WORD *)(v7 + 2);
  v11 = 0LL;
  v98 = 0;
  v103 = 0;
  v12 = 0x8000;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v126 = 0LL;
  P = 0LL;
  v105 = 0LL;
  v121 = 0LL;
  v111 = 0LL;
  v123 = 0LL;
  v112 = 0LL;
  v122 = 0LL;
  v114 = 0LL;
  v124 = 0LL;
  v113 = 0LL;
  DominatesTrust = 0;
  v94 = 0;
  v115 = a3;
  v90 = 0x8000;
  v127 = 0LL;
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x8000) != 0 )
    {
      v60 = *(unsigned int *)(v7 + 12);
      if ( (_DWORD)v60 )
        v13 = (ACL *)(v7 + v60);
      else
        v13 = 0LL;
    }
    else
    {
      v13 = *(ACL **)(v7 + 24);
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *a4;
  Acl = v13;
  v15 = *(_WORD *)(v14 + 2);
  if ( (v15 & 0x10) != 0 )
  {
    if ( v15 < 0 )
    {
      a3 = *(unsigned int *)(v14 + 12);
      if ( (_DWORD)a3 )
      {
        v16 = (unsigned __int16 *)(v14 + a3);
        LOBYTE(a3) = v115;
      }
      else
      {
        LOBYTE(a3) = v115;
        v16 = 0LL;
      }
    }
    else
    {
      v16 = *(unsigned __int16 **)(v14 + 24);
    }
  }
  else
  {
    v16 = 0LL;
  }
  *(_QWORD *)v108 = v16;
  if ( (v15 & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  v93 = (v10 & 0x80u) != 0;
  v95 = (v10 & 0x40) != 0;
  v107 = 2048;
  v17 = a2 & 0x80;
  Size = 1;
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
        if ( (v10 & (unsigned __int16)v107) != 0 )
          LODWORD(a3) = Size;
        v115 = a3;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v94 = (a2 & 4) == 0;
    if ( (v10 & 0x8000) != 0 )
    {
      v71 = *(unsigned int *)(v7 + 4);
      if ( (_DWORD)v71 )
        v19 = (unsigned __int8 *)(v7 + v71);
      else
        v19 = 0LL;
    }
    else
    {
      v19 = *(unsigned __int8 **)(v7 + 8);
    }
    Src = v19;
    v96 = 1;
    if ( (a5 & 8) == 0 )
    {
      SeCaptureSubjectContext(&Sid);
      if ( !SepValidOwnerSubjectContext((__int64 *)&Sid, v19, v93) )
      {
        SeReleaseSubjectContext(&Sid);
        return (unsigned int)-1073741734;
      }
      SeReleaseSubjectContext(&Sid);
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
      v72 = *(_DWORD *)(v7 + 8);
      if ( v72 )
        v22 = (unsigned __int8 *)(v110 + v72);
      else
        v22 = 0LL;
    }
    else
    {
      v22 = *(unsigned __int8 **)(v7 + 16);
    }
    v97 = 1;
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
  v118 = v22;
  if ( !v22 || !RtlValidSid(v22) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0xF8) == 0 )
  {
    v11 = v16;
    goto LABEL_21;
  }
  Size_4 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      AceByType = (BOOLEAN *)RtlFindAceByType(Acl, 0x11u, &Index);
      v105 = AceByType;
      if ( AceByType )
      {
        v36 = (*((_DWORD *)AceByType + 1) & 0xFFFFFFF8) == 0;
        v113 = AceByType + 8;
        DominatesTrust = AceByType[1];
        if ( !v36 )
          break;
      }
      SeCaptureSubjectContext(&Sid);
      if ( !SepValidLabelSubjectContext((__int64 *)&Sid, v113, DominatesTrust) )
      {
        SeReleaseSubjectContext(&Sid);
        break;
      }
      SeReleaseSubjectContext(&Sid);
      ++Index;
      if ( !v105 )
        goto LABEL_79;
    }
    return (unsigned int)-1073740730;
  }
  else
  {
LABEL_79:
    LODWORD(v113) = a2 & 0x80;
    if ( (a2 & 0x80) == 0 )
    {
LABEL_80:
      v52 = a5;
      if ( (a2 & 8) != 0 )
      {
        if ( (a5 & 2) == 0 )
        {
          v54 = Acl;
          v55 = v110;
          v53 = (unsigned __int8 *)Acl;
          v105 = Acl;
          v73 = *(_WORD *)(v110 + 2);
          v74 = v73 & 0xA00;
          v12 = v73 & 0x2000 | 0x8010;
          v90 = v12;
          if ( v74 == 2560 )
          {
            v12 |= v107;
            v90 = v12;
          }
          goto LABEL_83;
        }
        ServerAcl = RtlpComputeMergedAcl(
                      v108[0],
                      ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x1400u,
                      (int)Acl,
                      ((unsigned __int8)*(_WORD *)(v110 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(v110 + 2) >> 2) & 8 | (*(unsigned __int16 *)(v110 + 2) >> 1) & 0x1400u,
                      (__int64)v19,
                      (__int64)v22,
                      (__int64)a7,
                      2,
                      (__int64)&v121,
                      (__int64)&Index);
        if ( ServerAcl < 0 )
        {
          v46 = (void *)v121;
          goto LABEL_60;
        }
        v53 = (unsigned __int8 *)v121;
        v16 = *(unsigned __int16 **)v108;
        v52 = a5;
        v99 = 1;
        v105 = (PVOID)v121;
        v12 = (4 * (Index & 4)) | (4 * (Index & 8)) | (2 * (Index & 0x400)) | (2 * (Index & 0x1000)) | 0x8010;
        v90 = v12;
      }
      else
      {
        v53 = (unsigned __int8 *)v16;
        v105 = v16;
      }
      v54 = Acl;
      v55 = v110;
LABEL_83:
      if ( (a2 & 0x20) != 0 )
      {
        if ( (v52 & 2) != 0 )
        {
          v77 = *(unsigned __int16 *)(v55 + 2);
          ServerAcl = RtlpComputeMergedAcl(
                        v108[0],
                        ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                        (int)Acl,
                        ((unsigned __int8)v77 >> 2) & 4 | (v77 >> 1) & 0x400 | ((unsigned __int8)v77 >> 2) & 8,
                        (__int64)v19,
                        (__int64)v22,
                        (__int64)a7,
                        2,
                        (__int64)&v122,
                        (__int64)&Index);
          if ( ServerAcl < 0 )
          {
            v47 = (void *)v122;
            v46 = v105;
            goto LABEL_61;
          }
          v16 = *(unsigned __int16 **)v108;
          v54 = Acl;
          v53 = (unsigned __int8 *)v105;
          v100 = 1;
          v12 = (4 * (Index & 4)) | (4 * (Index & 8)) | (2 * (Index & 0x400)) | (2 * (Index & 0x1000)) | v90 | 0x10;
          v112 = (PVOID)v122;
          v55 = v110;
          v52 = a5;
          v90 = v12;
        }
        else
        {
          v56 = *(_WORD *)(v55 + 2);
          v112 = v54;
          v12 |= v56 & 0x2000 | 0x10;
          v90 = v12;
          if ( (v56 & 0xA00) == 0xA00 )
          {
            v12 |= v107;
            v90 = v12;
          }
        }
      }
      else
      {
        v112 = v16;
      }
      if ( (a2 & 0x40) != 0 )
      {
        if ( (v52 & 2) != 0 )
        {
          v78 = *(unsigned __int16 *)(v55 + 2);
          ServerAcl = RtlpComputeMergedAcl(
                        v108[0],
                        ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                        (int)Acl,
                        ((unsigned __int8)v78 >> 2) & 4 | (v78 >> 1) & 0x400 | ((unsigned __int8)v78 >> 2) & 8,
                        (__int64)v19,
                        (__int64)v22,
                        (__int64)a7,
                        2,
                        (__int64)&v123,
                        (__int64)&Index);
          if ( ServerAcl < 0 )
          {
            v48 = (void *)v123;
            v46 = v105;
            v47 = v112;
            goto LABEL_62;
          }
          v57 = (unsigned __int8 *)v123;
          v16 = *(unsigned __int16 **)v108;
          v54 = Acl;
          v53 = (unsigned __int8 *)v105;
          v101 = 1;
          v111 = (PVOID)v123;
          v55 = v110;
          v12 = (4 * (Index & 4)) | (4 * (Index & 8)) | (2 * (Index & 0x400)) | (2 * (Index & 0x1000)) | v90 | 0x10;
          v52 = a5;
          v90 = v12;
        }
        else
        {
          v79 = *(_WORD *)(v55 + 2);
          v57 = (unsigned __int8 *)v54;
          v111 = v54;
          v12 |= v79 & 0x2000 | 0x10;
          v90 = v12;
          if ( (v79 & 0xA00) == 0xA00 )
          {
            v12 |= v107;
            v90 = v12;
          }
        }
      }
      else
      {
        v57 = (unsigned __int8 *)v16;
        v111 = v16;
      }
      if ( (_DWORD)v113 )
      {
        if ( (v52 & 2) != 0 )
        {
          v80 = *(unsigned __int16 *)(v55 + 2);
          ServerAcl = RtlpComputeMergedAcl(
                        v108[0],
                        ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                        (int)Acl,
                        ((unsigned __int8)v80 >> 2) & 4 | (v80 >> 1) & 0x400 | ((unsigned __int8)v80 >> 2) & 8,
                        (__int64)v19,
                        (__int64)v22,
                        (__int64)a7,
                        2,
                        (__int64)&v124,
                        (__int64)&Index);
          if ( ServerAcl < 0 )
          {
            v49 = (void *)v124;
            v46 = v105;
            v48 = v111;
            v47 = v112;
LABEL_63:
            if ( v46 && v99 )
              ExFreePoolWithTag(v46, 0);
            if ( v47 && v100 )
              ExFreePoolWithTag(v47, 0);
            if ( v48 && v101 )
              ExFreePoolWithTag(v48, 0);
            if ( v49 && v102 )
              ExFreePoolWithTag(v49, 0);
            if ( v11 && v103 )
              ExFreePoolWithTag(v11, 0);
            if ( v104[0] )
              ExFreePoolWithTag(v127, 0);
            return (unsigned int)ServerAcl;
          }
          v16 = *(unsigned __int16 **)v108;
          v54 = Acl;
          v53 = (unsigned __int8 *)v105;
          v57 = (unsigned __int8 *)v111;
          v102 = 1;
          v55 = v110;
          v12 = (4 * (Index & 4)) | (4 * (Index & 8)) | (2 * (Index & 0x400)) | (2 * (Index & 0x1000)) | v90 | 0x10;
          v58 = (unsigned __int8 *)v124;
          v114 = (PVOID)v124;
          v90 = v12;
        }
        else
        {
          v81 = *(_WORD *)(v55 + 2);
          v58 = (unsigned __int8 *)v54;
          v114 = v54;
          v12 |= v81 & 0x2000 | 0x10;
          v90 = v12;
          if ( (v81 & 0xA00) == 0xA00 )
          {
            v12 |= v107;
            v90 = v12;
          }
        }
      }
      else
      {
        v58 = (unsigned __int8 *)v16;
        v114 = v16;
      }
      if ( Size_4 )
      {
        v12 |= *(_WORD *)(v55 + 2) & 0x2000 | 0x10;
        v90 = v12;
        if ( (*(_WORD *)(v55 + 2) & 0xA00) == 0xA00 )
        {
          v12 |= v107;
          v90 = v12;
        }
      }
      else
      {
        v54 = (PACL)v16;
      }
      v59 = RtlpCombineAcls(v53, (unsigned __int8 *)v54, (unsigned __int8 *)v112, v57, v58, (ACL **)&P, 0LL);
      if ( v59 < 0 )
      {
        ServerAcl = v59;
        goto LABEL_59;
      }
      v11 = (unsigned __int16 *)P;
      if ( !v105 && P && !*((_WORD *)P + 2) )
      {
        ExFreePoolWithTag(P, 0);
        v11 = 0LL;
      }
      v103 = 1;
LABEL_21:
      if ( (a2 & 4) == 0 )
      {
        v61 = *a4;
        v62 = *(_WORD *)(*a4 + 2);
        if ( (v62 & 4) != 0 )
        {
          if ( v62 >= 0 )
          {
            v24 = *(unsigned __int16 **)(v61 + 32);
          }
          else
          {
            v63 = *(unsigned int *)(v61 + 16);
            if ( (_DWORD)v63 )
              v24 = (unsigned __int16 *)(v61 + v63);
            else
              v24 = 0LL;
          }
        }
        else
        {
          v24 = 0LL;
        }
        goto LABEL_28;
      }
      if ( (a5 & 1) == 0 )
      {
        v23 = *(_WORD *)(v110 + 2);
        if ( (v23 & 4) != 0 )
        {
          if ( v23 < 0 )
          {
            v51 = *(unsigned int *)(v110 + 16);
            if ( (_DWORD)v51 )
              v24 = (unsigned __int16 *)(v110 + v51);
            else
              v24 = 0LL;
          }
          else
          {
            v24 = *(unsigned __int16 **)(v110 + 32);
          }
        }
        else
        {
          v24 = 0LL;
        }
        v25 = v23 & 0x1000 | 4 | v12;
        v90 = v25;
        if ( (v23 & 0x500) != 0x500 )
        {
LABEL_27:
          if ( v93 )
          {
            SeCaptureSubjectContext(&Sid);
            SepGetDefaultsSubjectContext(
              (unsigned int)&Sid,
              (unsigned int)&Acl,
              (unsigned int)v108,
              (unsigned int)&P,
              (__int64)&v121,
              (__int64)&v122,
              (__int64)&v123,
              (__int64)&v124);
            ServerAcl = RtlpCreateServerAcl((_DWORD)v24, v95, (_DWORD)P, (unsigned int)&v127, (__int64)v104);
            SeReleaseSubjectContext(&Sid);
            if ( ServerAcl < 0 )
              goto LABEL_57;
            v24 = (unsigned __int16 *)v127;
          }
LABEL_28:
          v26 = 4 * v19[1] + 8;
          v27 = 4 * v19[1] + 11;
          Size_4 = v26;
          v28 = v27 & 0xFFFFFFFC;
          v29 = 4 * v22[1] + 11;
          Size = 4 * v22[1] + 8;
          v30 = v29 & 0xFFFFFFFC;
          LODWORD(Acl) = v30;
          if ( v11 )
            v31 = (v11[1] + 3) & 0xFFFFFFFC;
          else
            v31 = 0;
          if ( v24 )
            v32 = (v24[1] + 3) & 0xFFFFFFFC;
          else
            v32 = 0;
          PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)PoolType.Value, v28 + v30 + 20 + v32 + v31, 0x64536553u);
          v34 = PoolWithTag;
          if ( PoolWithTag )
          {
            v35 = (char *)PoolWithTag + 20;
            v36 = (_BYTE)v115 == 0;
            *PoolWithTag = 0LL;
            PoolWithTag[1] = 0LL;
            *((_DWORD *)PoolWithTag + 4) = 0;
            v37 = v90;
            *(_BYTE *)v34 = 1;
            if ( !v36 )
            {
              v37 = v107 | v90;
              LOBYTE(v90) = v107 | v90;
            }
            *((_WORD *)v34 + 1) |= v37;
            v38 = *((_WORD *)v34 + 1);
            if ( (*(_WORD *)(v110 + 2) & 0x4000) != 0 )
            {
              *((_BYTE *)v34 + 1) = *(_BYTE *)(v110 + 1);
              *((_WORD *)v34 + 1) = v38 | 0x4000;
            }
            if ( v11 )
            {
              memmove((char *)v34 + 20, v11, v11[1]);
              RtlpApplyAclToObject((__int64)v34 + 20, a7);
              *((_DWORD *)v34 + 3) = (_DWORD)v35 - (_DWORD)v34;
              v39 = v11[1];
              if ( v31 > (unsigned int)v39 )
                memset(&v35[v39], 0, v31 - (unsigned int)v39);
              v35 += v31;
            }
            else
            {
              *((_DWORD *)v34 + 3) = 0;
            }
            v40 = v125;
            if ( (v90 & 0x10) == 0 )
              *((_WORD *)v34 + 1) |= *(_WORD *)(*v125 + 2) & 0x2830;
            if ( v24 )
            {
              memmove(v35, v24, v24[1]);
              RtlpApplyAclToObject((__int64)v35, a7);
              *((_DWORD *)v34 + 4) = (_DWORD)v35 - (_DWORD)v34;
              v41 = v24[1];
              if ( v32 > (unsigned int)v41 )
                memset(&v35[v41], 0, v32 - (unsigned int)v41);
              v35 += v32;
            }
            else
            {
              *((_DWORD *)v34 + 4) = 0;
            }
            if ( (v90 & 4) != 0 )
              goto LABEL_48;
            *((_WORD *)v34 + 1) |= *(_WORD *)(*v40 + 2) & 0x140C;
            if ( !v94 )
              goto LABEL_48;
            *(_DWORD *)PoolType.Value = 0;
            *(_WORD *)&PoolType.Value[4] = 768;
            v64 = RtlInitializeSid(&Sid, &PoolType, 1u);
            if ( v64 >= 0 )
            {
              Sid.ImpersonationLevel = 4;
              Index = 0;
              while ( 1 )
              {
                v65 = *((_WORD *)v34 + 1);
                if ( (v65 & 4) != 0 )
                {
                  if ( v65 < 0 )
                  {
                    v66 = *((unsigned int *)v34 + 4);
                    v67 = (_DWORD)v66 ? (__int64)v34 + v66 : 0LL;
                  }
                  else
                  {
                    v67 = v34[4];
                  }
                }
                else
                {
                  v67 = 0LL;
                }
                AceBySid = RtlFindAceBySid(v67, &Sid, &Index);
                if ( !AceBySid )
                  break;
                v89 = AceBySid[1] & 0xF4 | 8;
                ++Index;
                AceBySid[1] = v89;
              }
              v40 = v125;
LABEL_48:
              v42 = Size_4;
              memmove(v35, Src, Size_4);
              if ( (unsigned int)v42 < v28 )
                memset(&v35[v42], 0, v28 - (unsigned int)v42);
              *((_DWORD *)v34 + 1) = (_DWORD)v35 - (_DWORD)v34;
              v43 = &v35[v28];
              if ( !v96 )
                *((_WORD *)v34 + 1) |= *(_WORD *)(*v40 + 2) & 1;
              v44 = Size;
              memmove(v43, v118, Size);
              if ( (unsigned int)v44 < (unsigned int)Acl )
                memset(&v43[v44], 0, (unsigned int)((_DWORD)Acl - v44));
              v36 = v97 == 0;
              *((_DWORD *)v34 + 2) = (_DWORD)v43 - (_DWORD)v34;
              if ( v36 )
                *((_WORD *)v34 + 1) |= *(_WORD *)(*v40 + 2) & 2;
              LODWORD(v113) = 0;
              *v40 = (__int64)v34;
              ServerAcl = (int)v113;
              goto LABEL_57;
            }
            ServerAcl = v64;
          }
          else
          {
            ServerAcl = -1073741801;
          }
LABEL_57:
          if ( v98 )
            ExFreePoolWithTag(v126, 0);
          goto LABEL_59;
        }
        v69 = v25 | 0x400;
LABEL_118:
        v90 = v69;
        goto LABEL_27;
      }
      v82 = *(_WORD *)(v110 + 2);
      if ( (v82 & 4) != 0 )
      {
        if ( v82 < 0 )
        {
          v84 = *(_DWORD *)(v110 + 16);
          if ( v84 )
            LODWORD(v83) = v110 + v84;
          else
            LODWORD(v83) = 0;
        }
        else
        {
          v83 = *(_QWORD *)(v110 + 32);
        }
      }
      else
      {
        LODWORD(v83) = 0;
      }
      v85 = *a4;
      v86 = *(_WORD *)(*a4 + 2);
      if ( (v86 & 4) != 0 )
      {
        if ( v86 < 0 )
        {
          v88 = *(_DWORD *)(v85 + 16);
          if ( v88 )
            LODWORD(v87) = v85 + v88;
          else
            LODWORD(v87) = 0;
        }
        else
        {
          v87 = *(_QWORD *)(v85 + 32);
        }
      }
      else
      {
        LODWORD(v87) = 0;
      }
      ServerAcl = RtlpComputeMergedAcl(
                    v87,
                    v86 & 0x140C,
                    v83,
                    v82 & 0x140C,
                    (__int64)v19,
                    (__int64)v22,
                    (__int64)a7,
                    Size,
                    (__int64)&v126,
                    (__int64)&Index);
      if ( ServerAcl >= 0 )
      {
        v24 = (unsigned __int16 *)v126;
        v98 = 1;
        v69 = Index & 0x1408 | 4 | v12;
        goto LABEL_118;
      }
LABEL_59:
      v46 = v105;
LABEL_60:
      v47 = v112;
LABEL_61:
      v48 = v111;
LABEL_62:
      v49 = v114;
      goto LABEL_63;
    }
    SeCaptureSubjectContext(&Sid);
    if ( SepLocateTokenTrustLevel((__int64 *)&Sid) )
    {
      Index = 0;
      while ( 1 )
      {
        v75 = RtlFindAceByType(Acl, 0x14u, &Index);
        v105 = v75;
        if ( v75 )
        {
          if ( (v75[1] & 0xFF000000) != 0 )
          {
            ServerAcl = -1073740730;
            SeReleaseSubjectContext(&Sid);
            return (unsigned int)ServerAcl;
          }
          TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)&Sid);
          if ( !TokenTrustLevel
            || RtlSidDominatesForTrust(TokenTrustLevel, (char *)v105 + 8, &DominatesTrust) < 0
            || !DominatesTrust )
          {
            break;
          }
          v75 = v105;
        }
        ++Index;
        if ( !v75 )
        {
          SeReleaseSubjectContext(&Sid);
          goto LABEL_80;
        }
      }
    }
    SeReleaseSubjectContext(&Sid);
    return (unsigned int)-1073741790;
  }
}
