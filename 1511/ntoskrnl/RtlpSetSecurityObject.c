/*
 * XREFs of RtlpSetSecurityObject @ 0x14046B8C0
 * Callers:
 *     SeSetSecurityDescriptorInfo @ 0x14046B884 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x1406550A4 (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140079E80 (RtlFindAceBySid.c)
 *     RtlSidDominatesForTrust @ 0x14007A050 (RtlSidDominatesForTrust.c)
 *     RtlFindAceByType @ 0x14009DDA0 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x1400E194C (SepLocateTokenTrustLevel.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepValidLabelSubjectContext @ 0x1403C2800 (SepValidLabelSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
 *     RtlpApplyAclToObject @ 0x14046C220 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x140497990 (RtlpCombineAcls.c)
 *     RtlInitializeSid @ 0x1404AA898 (RtlInitializeSid.c)
 *     SepValidOwnerSubjectContext @ 0x1404AC868 (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140646FA8 (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406473B4 (RtlpCreateServerAcl.c)
 *     SepGetDefaultsSubjectContext @ 0x140651DB8 (SepGetDefaultsSubjectContext.c)
 */

__int64 __fastcall RtlpSetSecurityObject(__int64 a1, int a2, __int64 a3, __int64 *a4, char a5, int a6, __int64 a7)
{
  __int64 v7; // r14
  unsigned __int16 v10; // dx
  unsigned __int16 *v11; // r12
  __int16 v12; // di
  ACL *v13; // r10
  __int64 v14; // rcx
  __int16 v15; // ax
  unsigned __int16 *v16; // rbx
  char v17; // al
  unsigned int v18; // eax
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
  void *v46; // r14
  void *v47; // rsi
  void *v48; // rdi
  __int64 v50; // rax
  char v51; // r8
  int v52; // r11d
  PACL v53; // r10
  __int64 v54; // rdx
  __int16 v55; // cx
  int v56; // r9d
  __int64 v57; // r8
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int16 v61; // cx
  __int64 v62; // rcx
  NTSTATUS v63; // eax
  __int16 v64; // ax
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int8 *AceBySid; // rax
  BOOLEAN *AceByType; // rax
  __int16 v69; // di
  __int64 v70; // rax
  unsigned int v71; // eax
  __int16 v72; // di
  __int16 v73; // ax
  _DWORD *v74; // rax
  void *TokenTrustLevel; // rax
  unsigned int v76; // r8d
  unsigned int v77; // r8d
  __int16 v78; // cx
  unsigned int v79; // r8d
  __int16 v80; // cx
  __int16 v81; // r9
  __int64 v82; // r8
  int v83; // eax
  __int64 v84; // rax
  __int16 v85; // dx
  __int64 v86; // rcx
  int v87; // ecx
  unsigned __int8 v88; // cl
  __int16 v89; // [rsp+50h] [rbp-B0h]
  ULONG Index; // [rsp+54h] [rbp-ACh] BYREF
  BOOLEAN DominatesTrust; // [rsp+58h] [rbp-A8h] BYREF
  bool v92; // [rsp+59h] [rbp-A7h]
  bool v93; // [rsp+5Ah] [rbp-A6h]
  char v94; // [rsp+5Bh] [rbp-A5h]
  char v95; // [rsp+5Ch] [rbp-A4h]
  char v96; // [rsp+5Dh] [rbp-A3h]
  char v97; // [rsp+5Eh] [rbp-A2h] BYREF
  char v98; // [rsp+5Fh] [rbp-A1h]
  char v99; // [rsp+60h] [rbp-A0h]
  char v100; // [rsp+61h] [rbp-9Fh]
  bool v101; // [rsp+62h] [rbp-9Eh]
  char v102; // [rsp+63h] [rbp-9Dh]
  char v103; // [rsp+64h] [rbp-9Ch]
  PACL Acl; // [rsp+68h] [rbp-98h] BYREF
  int v105; // [rsp+70h] [rbp-90h]
  PVOID v106; // [rsp+78h] [rbp-88h]
  int v107[2]; // [rsp+80h] [rbp-80h] BYREF
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+88h] [rbp-78h] BYREF
  __int64 v109; // [rsp+90h] [rbp-70h]
  PVOID v110; // [rsp+98h] [rbp-68h]
  PVOID v111; // [rsp+A0h] [rbp-60h]
  void *v112; // [rsp+A8h] [rbp-58h]
  PVOID v113; // [rsp+B0h] [rbp-50h]
  unsigned int v114; // [rsp+B8h] [rbp-48h]
  int v115; // [rsp+BCh] [rbp-44h]
  size_t Size; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+C8h] [rbp-38h] BYREF
  void *v118; // [rsp+D0h] [rbp-30h]
  __int64 v119; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v120; // [rsp+E0h] [rbp-20h] BYREF
  void *Src; // [rsp+E8h] [rbp-18h]
  __int64 v122; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v123; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v124; // [rsp+100h] [rbp+0h]
  PVOID v125; // [rsp+108h] [rbp+8h] BYREF
  PVOID v126; // [rsp+110h] [rbp+10h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT Sid; // [rsp+118h] [rbp+18h] BYREF

  v7 = a3;
  v124 = a4;
  v109 = a3;
  LOBYTE(a3) = 0;
  *(_DWORD *)PoolType.Value = a6;
  v102 = 0;
  v103 = 0;
  v97 = 0;
  v10 = *(_WORD *)(v7 + 2);
  v11 = 0LL;
  v96 = 0;
  v95 = 0;
  v12 = 0x8000;
  v98 = 0;
  v94 = 0;
  v99 = 0;
  v100 = 0;
  v126 = 0LL;
  P = 0LL;
  v106 = 0LL;
  v120 = 0LL;
  v111 = 0LL;
  v122 = 0LL;
  v110 = 0LL;
  v123 = 0LL;
  v113 = 0LL;
  v119 = 0LL;
  v112 = 0LL;
  DominatesTrust = 0;
  v92 = 0;
  v115 = a3;
  v89 = 0x8000;
  v125 = 0LL;
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x8000) != 0 )
    {
      v59 = *(unsigned int *)(v7 + 12);
      if ( (_DWORD)v59 )
        v13 = (ACL *)(v7 + v59);
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
  *(_QWORD *)v107 = v16;
  if ( (v15 & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  v93 = (v10 & 0x80u) != 0;
  v101 = (v10 & 0x40) != 0;
  v105 = 2048;
  v17 = a2 & 0x80;
  v114 = 1;
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
        if ( ((unsigned __int16)v105 & v10) != 0 )
          LODWORD(a3) = v114;
        v115 = a3;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v92 = (a2 & 4) == 0;
    if ( (v10 & 0x8000) != 0 )
    {
      v70 = *(unsigned int *)(v7 + 4);
      if ( (_DWORD)v70 )
        v19 = (unsigned __int8 *)(v7 + v70);
      else
        v19 = 0LL;
    }
    else
    {
      v19 = *(unsigned __int8 **)(v7 + 8);
    }
    Src = v19;
    v103 = 1;
    if ( (a5 & 8) == 0 )
    {
      SeCaptureSubjectContext(&Sid);
      if ( !(unsigned __int8)SepValidOwnerSubjectContext(&Sid, v19, v93) )
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
      v71 = *(_DWORD *)(v7 + 8);
      if ( v71 )
        v22 = (unsigned __int8 *)(v109 + v71);
      else
        v22 = 0LL;
    }
    else
    {
      v22 = *(unsigned __int8 **)(v7 + 16);
    }
    v102 = 1;
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
LABEL_21:
    if ( (a2 & 4) == 0 )
    {
      v60 = *a4;
      v61 = *(_WORD *)(*a4 + 2);
      if ( (v61 & 4) != 0 )
      {
        if ( v61 >= 0 )
        {
          v24 = *(unsigned __int16 **)(v60 + 32);
        }
        else
        {
          v62 = *(unsigned int *)(v60 + 16);
          if ( (_DWORD)v62 )
            v24 = (unsigned __int16 *)(v60 + v62);
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
      v23 = *(_WORD *)(v109 + 2);
      if ( (v23 & 4) != 0 )
      {
        if ( v23 < 0 )
        {
          v50 = *(unsigned int *)(v109 + 16);
          if ( (_DWORD)v50 )
            v24 = (unsigned __int16 *)(v109 + v50);
          else
            v24 = 0LL;
        }
        else
        {
          v24 = *(unsigned __int16 **)(v109 + 32);
        }
      }
      else
      {
        v24 = 0LL;
      }
      v25 = v23 & 0x1000 | 4 | v12;
      v89 = v25;
      if ( (v23 & 0x500) != 0x500 )
      {
LABEL_27:
        if ( v93 )
        {
          SeCaptureSubjectContext(&Sid);
          SepGetDefaultsSubjectContext(
            (unsigned int)&Sid,
            (unsigned int)&Acl,
            (unsigned int)v107,
            (unsigned int)&P,
            (__int64)&v120,
            (__int64)&v123,
            (__int64)&v122,
            (__int64)&v119);
          ServerAcl = RtlpCreateServerAcl((_DWORD)v24, v101, (_DWORD)P, (unsigned int)&v125, (__int64)&v97);
          SeReleaseSubjectContext(&Sid);
          if ( ServerAcl < 0 )
            goto LABEL_57;
          v24 = (unsigned __int16 *)v125;
        }
LABEL_28:
        v26 = 4 * v19[1] + 8;
        v27 = 4 * v19[1] + 11;
        LODWORD(Size) = v26;
        v28 = v27 & 0xFFFFFFFC;
        v29 = 4 * v22[1] + 11;
        v114 = 4 * v22[1] + 8;
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
          v37 = v89;
          *(_BYTE *)v34 = 1;
          if ( !v36 )
          {
            v37 = v105 | v89;
            LOBYTE(v89) = v105 | v89;
          }
          *((_WORD *)v34 + 1) |= v37;
          v38 = *((_WORD *)v34 + 1);
          if ( (*(_WORD *)(v109 + 2) & 0x4000) != 0 )
          {
            *((_BYTE *)v34 + 1) = *(_BYTE *)(v109 + 1);
            *((_WORD *)v34 + 1) = v38 | 0x4000;
          }
          if ( v11 )
          {
            memmove((char *)v34 + 20, v11, v11[1]);
            RtlpApplyAclToObject((char *)v34 + 20, a7);
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
          v40 = v124;
          if ( (v89 & 0x10) == 0 )
            *((_WORD *)v34 + 1) |= *(_WORD *)(*v124 + 2) & 0x2830;
          if ( v24 )
          {
            memmove(v35, v24, v24[1]);
            RtlpApplyAclToObject(v35, a7);
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
          if ( (v89 & 4) != 0 )
            goto LABEL_48;
          *((_WORD *)v34 + 1) |= *(_WORD *)(*v40 + 2) & 0x140C;
          if ( !v92 )
            goto LABEL_48;
          *(_DWORD *)PoolType.Value = 0;
          *(_WORD *)&PoolType.Value[4] = 768;
          v63 = RtlInitializeSid(&Sid, &PoolType, 1u);
          if ( v63 >= 0 )
          {
            Sid.ImpersonationLevel = 4;
            Index = 0;
            while ( 1 )
            {
              v64 = *((_WORD *)v34 + 1);
              if ( (v64 & 4) != 0 )
              {
                if ( v64 < 0 )
                {
                  v65 = *((unsigned int *)v34 + 4);
                  v66 = (_DWORD)v65 ? (__int64)v34 + v65 : 0LL;
                }
                else
                {
                  v66 = v34[4];
                }
              }
              else
              {
                v66 = 0LL;
              }
              AceBySid = RtlFindAceBySid(v66, &Sid, &Index);
              if ( !AceBySid )
                break;
              v88 = AceBySid[1] & 0xF4 | 8;
              ++Index;
              AceBySid[1] = v88;
            }
            v40 = v124;
LABEL_48:
            v42 = (unsigned int)Size;
            memmove(v35, Src, (unsigned int)Size);
            if ( (unsigned int)v42 < v28 )
              memset(&v35[v42], 0, v28 - (unsigned int)v42);
            *((_DWORD *)v34 + 1) = (_DWORD)v35 - (_DWORD)v34;
            v43 = &v35[v28];
            if ( !v103 )
              *((_WORD *)v34 + 1) |= *(_WORD *)(*v40 + 2) & 1;
            v44 = v114;
            memmove(v43, v118, v114);
            if ( (unsigned int)v44 < (unsigned int)Acl )
              memset(&v43[v44], 0, (unsigned int)((_DWORD)Acl - v44));
            v36 = v102 == 0;
            *((_DWORD *)v34 + 2) = (_DWORD)v43 - (_DWORD)v34;
            if ( v36 )
              *((_WORD *)v34 + 1) |= *(_WORD *)(*v40 + 2) & 2;
            LODWORD(v112) = 0;
            *v40 = (__int64)v34;
            ServerAcl = (int)v112;
            goto LABEL_57;
          }
          ServerAcl = v63;
        }
        else
        {
          ServerAcl = -1073741801;
        }
LABEL_57:
        if ( v96 )
          ExFreePoolWithTag(v126, 0);
        goto LABEL_59;
      }
      v69 = v25 | 0x400;
LABEL_132:
      v89 = v69;
      goto LABEL_27;
    }
    v81 = *(_WORD *)(v109 + 2);
    if ( (v81 & 4) != 0 )
    {
      if ( v81 < 0 )
      {
        v83 = *(_DWORD *)(v109 + 16);
        if ( v83 )
          LODWORD(v82) = v109 + v83;
        else
          LODWORD(v82) = 0;
      }
      else
      {
        v82 = *(_QWORD *)(v109 + 32);
      }
    }
    else
    {
      LODWORD(v82) = 0;
    }
    v84 = *a4;
    v85 = *(_WORD *)(*a4 + 2);
    if ( (v85 & 4) != 0 )
    {
      if ( v85 < 0 )
      {
        v87 = *(_DWORD *)(v84 + 16);
        if ( v87 )
          LODWORD(v86) = v84 + v87;
        else
          LODWORD(v86) = 0;
      }
      else
      {
        v86 = *(_QWORD *)(v84 + 32);
      }
    }
    else
    {
      LODWORD(v86) = 0;
    }
    ServerAcl = RtlpComputeMergedAcl(
                  v86,
                  v85 & 0x140C,
                  v82,
                  v81 & 0x140C,
                  (__int64)v19,
                  (__int64)v22,
                  a7,
                  v114,
                  (__int64)&v126,
                  (__int64)&Index);
    if ( ServerAcl >= 0 )
    {
      v24 = (unsigned __int16 *)v126;
      v96 = 1;
      v69 = Index & 0x1408 | 4 | v12;
      goto LABEL_132;
    }
LABEL_59:
    v46 = v110;
LABEL_60:
    v47 = v111;
LABEL_61:
    v48 = v113;
    goto LABEL_62;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      AceByType = (BOOLEAN *)RtlFindAceByType(Acl, 0x11u, &Index);
      v106 = AceByType;
      if ( AceByType )
      {
        v36 = (*((_DWORD *)AceByType + 1) & 0xFFFFFFF8) == 0;
        v112 = AceByType + 8;
        DominatesTrust = AceByType[1];
        if ( !v36 )
          break;
      }
      SeCaptureSubjectContext(&Sid);
      if ( !SepValidLabelSubjectContext((__int64 *)&Sid, v112, DominatesTrust) )
      {
        SeReleaseSubjectContext(&Sid);
        break;
      }
      SeReleaseSubjectContext(&Sid);
      ++Index;
      if ( !v106 )
        goto LABEL_76;
    }
    return (unsigned int)-1073740730;
  }
  else
  {
LABEL_76:
    LODWORD(v112) = a2 & 0x80;
    if ( (a2 & 0x80) == 0 )
    {
LABEL_77:
      v51 = a5;
      if ( (a2 & 8) != 0 )
      {
        if ( (a5 & 2) == 0 )
        {
          v53 = Acl;
          v54 = v109;
          v52 = (int)Acl;
          v106 = Acl;
          v72 = *(_WORD *)(v109 + 2);
          v73 = v72 & 0xA00;
          v12 = v72 & 0x2000 | 0x8010;
          v89 = v12;
          if ( v73 == 2560 )
          {
            v12 |= v105;
            v89 = v12;
          }
          goto LABEL_80;
        }
        ServerAcl = RtlpComputeMergedAcl(
                      v107[0],
                      ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x1400u,
                      (int)Acl,
                      ((unsigned __int8)*(_WORD *)(v109 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(v109 + 2) >> 2) & 8 | (*(unsigned __int16 *)(v109 + 2) >> 1) & 0x1400u,
                      (__int64)v19,
                      (__int64)v22,
                      a7,
                      2,
                      (__int64)&v120,
                      (__int64)&Index);
        if ( ServerAcl < 0 )
        {
          v106 = (PVOID)v120;
          goto LABEL_59;
        }
        v52 = v120;
        v16 = *(unsigned __int16 **)v107;
        v51 = a5;
        v98 = 1;
        v106 = (PVOID)v120;
        v12 = (4 * (Index & 4)) | (4 * (Index & 8)) | (2 * (Index & 0x400)) | (2 * (Index & 0x1000)) | 0x8010;
        v89 = v12;
      }
      else
      {
        v52 = (int)v16;
        v106 = v16;
      }
      v53 = Acl;
      v54 = v109;
LABEL_80:
      if ( (a2 & 0x20) != 0 )
      {
        if ( (v51 & 2) != 0 )
        {
          v76 = *(unsigned __int16 *)(v54 + 2);
          ServerAcl = RtlpComputeMergedAcl(
                        v107[0],
                        ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                        (int)Acl,
                        ((unsigned __int8)v76 >> 2) & 4 | (v76 >> 1) & 0x400 | ((unsigned __int8)v76 >> 2) & 8,
                        (__int64)v19,
                        (__int64)v22,
                        a7,
                        2,
                        (__int64)&v123,
                        (__int64)&Index);
          if ( ServerAcl < 0 )
          {
            v46 = (void *)v123;
            goto LABEL_60;
          }
          v16 = *(unsigned __int16 **)v107;
          v53 = Acl;
          v52 = (int)v106;
          v94 = 1;
          v12 = (4 * (Index & 4)) | (4 * (Index & 8)) | (2 * (Index & 0x400)) | (2 * (Index & 0x1000)) | v89 | 0x10;
          v110 = (PVOID)v123;
          v54 = v109;
          v51 = a5;
          v89 = v12;
        }
        else
        {
          v55 = *(_WORD *)(v54 + 2);
          v110 = v53;
          v12 |= v55 & 0x2000 | 0x10;
          v89 = v12;
          if ( (v55 & 0xA00) == 0xA00 )
          {
            v12 |= v105;
            v89 = v12;
          }
        }
      }
      else
      {
        v110 = v16;
      }
      if ( (a2 & 0x40) != 0 )
      {
        if ( (v51 & 2) != 0 )
        {
          v77 = *(unsigned __int16 *)(v54 + 2);
          ServerAcl = RtlpComputeMergedAcl(
                        v107[0],
                        ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                        (int)Acl,
                        ((unsigned __int8)v77 >> 2) & 4 | (v77 >> 1) & 0x400 | ((unsigned __int8)v77 >> 2) & 8,
                        (__int64)v19,
                        (__int64)v22,
                        a7,
                        2,
                        (__int64)&v122,
                        (__int64)&Index);
          if ( ServerAcl < 0 )
          {
            v47 = (void *)v122;
            v46 = v110;
            goto LABEL_61;
          }
          v56 = v122;
          v16 = *(unsigned __int16 **)v107;
          v53 = Acl;
          v52 = (int)v106;
          v99 = 1;
          v111 = (PVOID)v122;
          v54 = v109;
          v12 = (4 * (Index & 4)) | (4 * (Index & 8)) | (2 * (Index & 0x400)) | (2 * (Index & 0x1000)) | v89 | 0x10;
          v51 = a5;
          v89 = v12;
        }
        else
        {
          v78 = *(_WORD *)(v54 + 2);
          v56 = (int)v53;
          v111 = v53;
          v12 |= v78 & 0x2000 | 0x10;
          v89 = v12;
          if ( (v78 & 0xA00) == 0xA00 )
          {
            v12 |= v105;
            v89 = v12;
          }
        }
      }
      else
      {
        v56 = (int)v16;
        v111 = v16;
      }
      if ( (_DWORD)v112 )
      {
        if ( (v51 & 2) != 0 )
        {
          v79 = *(unsigned __int16 *)(v54 + 2);
          ServerAcl = RtlpComputeMergedAcl(
                        v107[0],
                        ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*a4 + 2) >> 2) & 8u,
                        (int)Acl,
                        ((unsigned __int8)v79 >> 2) & 4 | (v79 >> 1) & 0x400 | ((unsigned __int8)v79 >> 2) & 8,
                        (__int64)v19,
                        (__int64)v22,
                        a7,
                        2,
                        (__int64)&v119,
                        (__int64)&Index);
          if ( ServerAcl < 0 )
          {
            v48 = (void *)v119;
            v47 = v111;
            v46 = v110;
LABEL_62:
            if ( v106 && v98 )
              ExFreePoolWithTag(v106, 0);
            if ( v46 && v94 )
              ExFreePoolWithTag(v46, 0);
            if ( v47 && v99 )
              ExFreePoolWithTag(v47, 0);
            if ( v48 && v100 )
              ExFreePoolWithTag(v48, 0);
            if ( v11 && v95 )
              ExFreePoolWithTag(v11, 0);
            if ( v97 )
              ExFreePoolWithTag(v125, 0);
            return (unsigned int)ServerAcl;
          }
          LODWORD(v16) = v107[0];
          LODWORD(v53) = (_DWORD)Acl;
          v52 = (int)v106;
          v56 = (int)v111;
          v100 = 1;
          v54 = v109;
          v12 = (4 * (Index & 4)) | (4 * (Index & 8)) | (2 * (Index & 0x400)) | (2 * (Index & 0x1000)) | v89 | 0x10;
          v57 = v119;
          v113 = (PVOID)v119;
          v89 = v12;
        }
        else
        {
          v80 = *(_WORD *)(v54 + 2);
          v57 = (__int64)v53;
          v113 = v53;
          v12 |= v80 & 0x2000 | 0x10;
          v89 = v12;
          if ( (v80 & 0xA00) == 0xA00 )
          {
            v12 |= v105;
            v89 = v12;
          }
        }
      }
      else
      {
        v57 = (__int64)v16;
        v113 = v16;
      }
      if ( (_DWORD)Size )
      {
        v12 |= *(_WORD *)(v54 + 2) & 0x2000 | 0x10;
        v89 = v12;
        if ( (*(_WORD *)(v54 + 2) & 0xA00) == 0xA00 )
        {
          v12 |= v105;
          v89 = v12;
        }
      }
      else
      {
        LODWORD(v53) = (_DWORD)v16;
      }
      v58 = RtlpCombineAcls(v52, (_DWORD)v53, (_DWORD)v110, v56, v57, (__int64)&P, 0LL);
      if ( v58 < 0 )
      {
        ServerAcl = v58;
        goto LABEL_59;
      }
      v11 = (unsigned __int16 *)P;
      if ( !v106 && P && !*((_WORD *)P + 2) )
      {
        ExFreePoolWithTag(P, 0);
        v11 = 0LL;
      }
      v95 = 1;
      goto LABEL_21;
    }
    SeCaptureSubjectContext(&Sid);
    if ( SepLocateTokenTrustLevel((__int64 *)&Sid) )
    {
      Index = 0;
      while ( 1 )
      {
        v74 = RtlFindAceByType(Acl, 0x14u, &Index);
        v106 = v74;
        if ( v74 )
        {
          if ( (v74[1] & 0xFF000000) != 0 )
          {
            ServerAcl = -1073740730;
            SeReleaseSubjectContext(&Sid);
            return (unsigned int)ServerAcl;
          }
          TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)&Sid);
          if ( !TokenTrustLevel
            || RtlSidDominatesForTrust(TokenTrustLevel, (char *)v106 + 8, &DominatesTrust) < 0
            || !DominatesTrust )
          {
            break;
          }
          v74 = v106;
        }
        ++Index;
        if ( !v74 )
        {
          SeReleaseSubjectContext(&Sid);
          goto LABEL_77;
        }
      }
    }
    SeReleaseSubjectContext(&Sid);
    return (unsigned int)-1073741790;
  }
}
