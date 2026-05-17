/*
 * XREFs of RtlpSetSecurityObject @ 0x180003850
 * Callers:
 *     RtlSetSecurityObject @ 0x180003820 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x180090C70 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlpApplyAclToObject @ 0x1800040B4 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800061B8 (RtlpCombineAcls.c)
 *     RtlInitializeSid @ 0x18000D5F0 (RtlInitializeSid.c)
 *     RtlValidSid @ 0x180014F80 (RtlValidSid.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18006B250 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlFindAceByType @ 0x18007A440 (RtlFindAceByType.c)
 *     RtlpComputeMergedAcl @ 0x18008FC68 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A8730 (NtOpenProcessToken.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E0D0C (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E1128 (RtlpValidLabelSubjectContext.c)
 *     RtlpValidTrustSubjectContext @ 0x1800E1288 (RtlpValidTrustSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800E19DC (RtlFindAceBySid.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        int a2,
        __int64 a3,
        _BOOL8 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbx
  __int64 *v10; // rax
  unsigned __int16 v12; // dx
  __int16 v13; // si
  __int64 v14; // r15
  __int64 v15; // rcx
  void *v16; // rdi
  void *ProcessHeap; // r12
  char v18; // al
  __int64 v19; // rax
  bool v20; // zf
  void *v21; // rax
  __int64 v22; // rax
  void *v23; // rcx
  __int64 v24; // rdi
  __int16 v25; // cx
  unsigned __int16 *v26; // r15
  int v27; // r8d
  unsigned int v28; // r8d
  int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ebx
  unsigned int v32; // r12d
  __int64 v33; // rdi
  char *v34; // r14
  __int64 v35; // r8
  __int16 v36; // cx
  unsigned __int16 *v37; // r13
  __int64 v38; // rcx
  __int64 *v39; // r13
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rbx
  int v43; // eax
  char *v44; // r14
  __int64 v45; // rsi
  int ServerAcl; // ebx
  __int64 v47; // r15
  __int16 v49; // r9
  __int64 v50; // r8
  __int64 v51; // rax
  __int16 v52; // dx
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // r8
  void *v56; // rax
  __int16 v57; // ax
  __int64 v58; // rax
  __int16 v59; // dx
  __int16 v60; // r8
  int v61; // edx
  __int64 AceByType; // rax
  __int64 v63; // rdi
  __int64 v64; // r8
  HANDLE v65; // rcx
  unsigned __int16 *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rbx
  unsigned __int16 *v70; // r8
  __int16 v71; // ax
  __int16 v72; // cx
  __int16 v73; // cx
  _QWORD *Heap; // rdi
  _QWORD *v75; // r8
  int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 AceBySid; // rax
  char v80; // cl
  char v81; // [rsp+50h] [rbp-B0h]
  char v82; // [rsp+51h] [rbp-AFh]
  bool v83; // [rsp+52h] [rbp-AEh]
  char v84; // [rsp+53h] [rbp-ADh]
  char v85; // [rsp+54h] [rbp-ACh]
  char v86; // [rsp+55h] [rbp-ABh]
  char v87; // [rsp+56h] [rbp-AAh]
  char v88; // [rsp+57h] [rbp-A9h]
  char v89; // [rsp+58h] [rbp-A8h]
  char v90; // [rsp+59h] [rbp-A7h]
  char v91; // [rsp+5Ah] [rbp-A6h]
  char v92; // [rsp+5Bh] [rbp-A5h] BYREF
  int v93; // [rsp+5Ch] [rbp-A4h]
  int v94; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v95; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v96; // [rsp+68h] [rbp-98h] BYREF
  __int64 v97; // [rsp+70h] [rbp-90h]
  __int64 v98; // [rsp+78h] [rbp-88h] BYREF
  int InformationToken; // [rsp+80h] [rbp-80h] BYREF
  bool v100; // [rsp+84h] [rbp-7Ch]
  void *v101; // [rsp+88h] [rbp-78h]
  void *v102; // [rsp+90h] [rbp-70h]
  __int64 *v103; // [rsp+98h] [rbp-68h]
  int v104; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v105; // [rsp+A4h] [rbp-5Ch]
  size_t Size; // [rsp+A8h] [rbp-58h]
  HANDLE Handle; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h]
  void *v109; // [rsp+C0h] [rbp-40h]
  BOOL v110; // [rsp+C8h] [rbp-38h]
  int v111; // [rsp+CCh] [rbp-34h]
  __int64 v112; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v113; // [rsp+D8h] [rbp-28h] BYREF
  void *v114; // [rsp+E0h] [rbp-20h]
  _WORD *v115; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v116; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 *v117; // [rsp+100h] [rbp+0h] BYREF
  __int64 v118; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v119; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v120[24]; // [rsp+118h] [rbp+18h] BYREF
  int v121; // [rsp+130h] [rbp+30h]
  int v122; // [rsp+134h] [rbp+34h]
  char v123[8]; // [rsp+150h] [rbp+50h] BYREF
  int v124; // [rsp+158h] [rbp+58h]

  v8 = a8;
  v109 = a8;
  v10 = (__int64 *)a4;
  v85 = 0;
  v103 = (__int64 *)a4;
  v12 = *(_WORD *)(a3 + 2);
  v84 = 0;
  v92 = 0;
  LOBYTE(a4) = 0;
  v86 = 0;
  v91 = 0;
  v13 = 0x8000;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v116 = 0LL;
  Src = 0LL;
  v115 = 0LL;
  v96 = 0LL;
  v112 = 0LL;
  v98 = 0LL;
  v113 = 0LL;
  v118 = 0LL;
  v81 = 0;
  v83 = 0;
  v110 = a4;
  v117 = 0LL;
  if ( (v12 & 0x10) == 0 )
    goto LABEL_2;
  if ( (v12 & 0x8000) != 0 )
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = a3 + *(unsigned int *)(a3 + 12);
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 24);
  }
LABEL_3:
  v15 = *v10;
  if ( (*(_BYTE *)(*v10 + 2) & 0x10) == 0 )
  {
LABEL_127:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( (*(_WORD *)(v15 + 2) & 0x8000) != 0 )
  {
    if ( *(_DWORD *)(v15 + 12) )
    {
      v16 = (void *)(v15 + *(unsigned int *)(v15 + 12));
      goto LABEL_7;
    }
    goto LABEL_127;
  }
  v16 = *(void **)(v15 + 24);
LABEL_7:
  Handle = 0LL;
  v97 = (__int64)v16;
  v119 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v114 = ProcessHeap;
  if ( (*(_WORD *)(v15 + 2) & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  v93 = 2048;
  v82 = (unsigned __int8)v12 >> 7;
  v100 = (v12 & 0x40) != 0;
  v18 = a2 & 0x80;
  if ( (a2 & 0x10000) != 0 )
  {
    LOBYTE(a2) = -1;
    if ( !v18 )
      LOBYTE(a2) = 127;
    if ( !v16 && !v14 )
    {
      LOBYTE(a2) = a2 & 7;
      if ( (v12 & 0x10) != 0 )
        LOBYTE(a2) = a2 | 8;
      else
        v110 = (v12 & (unsigned __int16)v93) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*(_DWORD *)(v15 + 4) )
      return (unsigned int)-1073741734;
    v19 = *(unsigned int *)(v15 + 4);
    v20 = v15 + v19 == 0;
    v21 = (void *)(v15 + v19);
    v101 = v21;
    if ( v20 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v83 = (a2 & 4) == 0;
  if ( (v12 & 0x8000) == 0 )
  {
    v54 = *(void **)(a3 + 8);
    goto LABEL_85;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v54 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_85:
    v101 = v54;
    goto LABEL_86;
  }
  v101 = 0LL;
LABEL_86:
  v84 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    InformationToken = NtQueryInformationToken(a8, 10LL, v120);
    ServerAcl = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)ServerAcl;
    if ( v122 < 1 && v121 == 2 )
      return (unsigned int)-1073741659;
    v8 = v109;
    LOBYTE(v55) = v82;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v109, v101, v55, &InformationToken) )
      return (unsigned int)-1073741734;
  }
  v21 = v101;
LABEL_12:
  if ( !(unsigned __int8)RtlValidSid(v21) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( (*(_WORD *)(a3 + 2) & 0x8000) != 0 )
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v102 = 0LL;
        goto LABEL_96;
      }
      v56 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    else
    {
      v56 = *(void **)(a3 + 16);
    }
    v102 = v56;
LABEL_96:
    v23 = v102;
    v85 = 1;
    goto LABEL_18;
  }
  v22 = *v103;
  if ( (*(_WORD *)(*v103 + 2) & 0x8000) != 0 )
  {
    if ( !*(_DWORD *)(v22 + 8) )
    {
LABEL_242:
      ServerAcl = -1073741733;
      goto LABEL_59;
    }
    v23 = (void *)(v22 + *(unsigned int *)(v22 + 8));
  }
  else
  {
    v23 = *(void **)(v22 + 16);
  }
  v102 = v23;
LABEL_18:
  if ( !v23 )
    goto LABEL_242;
  if ( !(unsigned __int8)RtlValidSid(v23) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0xF8) == 0 )
  {
    Src = v16;
    v24 = v98;
LABEL_22:
    if ( (a2 & 4) == 0 )
    {
      v77 = *v103;
      if ( (*(_BYTE *)(*v103 + 2) & 4) != 0 )
      {
        if ( *(__int16 *)(v77 + 2) >= 0 )
        {
          v26 = *(unsigned __int16 **)(v77 + 32);
        }
        else if ( *(_DWORD *)(v77 + 16) )
        {
          v26 = (unsigned __int16 *)(v77 + *(unsigned int *)(v77 + 16));
        }
        else
        {
          v26 = 0LL;
        }
      }
      else
      {
        v26 = 0LL;
      }
      goto LABEL_30;
    }
    if ( (a5 & 1) == 0 )
    {
      v25 = *(_WORD *)(a3 + 2);
      if ( (v25 & 4) == 0 )
        goto LABEL_208;
      if ( v25 >= 0 )
      {
        v26 = *(unsigned __int16 **)(a3 + 32);
        goto LABEL_27;
      }
      if ( *(_DWORD *)(a3 + 16) )
        v26 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
      else
LABEL_208:
        v26 = 0LL;
LABEL_27:
      v13 |= v25 & 0x1000 | 4;
      if ( (v25 & 0x500) == 0x500 )
        v13 |= 0x400u;
      goto LABEL_29;
    }
    v49 = *(_WORD *)(a3 + 2);
    if ( (v49 & 4) == 0 )
      goto LABEL_204;
    if ( (v49 & 0x8000) == 0 )
    {
      v50 = *(_QWORD *)(a3 + 32);
      goto LABEL_74;
    }
    if ( *(_DWORD *)(a3 + 16) )
      LODWORD(v50) = a3 + *(_DWORD *)(a3 + 16);
    else
LABEL_204:
      LODWORD(v50) = 0;
LABEL_74:
    v51 = *v103;
    v52 = *(_WORD *)(*v103 + 2);
    if ( (v52 & 4) != 0 )
    {
      if ( v52 < 0 )
      {
        LODWORD(v53) = 0;
        if ( *(_DWORD *)(v51 + 16) )
          LODWORD(v53) = v51 + *(_DWORD *)(v51 + 16);
      }
      else
      {
        v53 = *(_QWORD *)(v51 + 32);
      }
    }
    else
    {
      LODWORD(v53) = 0;
    }
    ServerAcl = RtlpComputeMergedAcl(
                  v53,
                  v52 & 0x140C,
                  v50,
                  v49 & 0x140C,
                  (__int64)v101,
                  (__int64)v102,
                  a7,
                  1,
                  (__int64)&v116,
                  (__int64)&v95);
    if ( ServerAcl < 0 )
      goto LABEL_183;
    v26 = v116;
    v86 = 1;
    v13 |= v95 & 0x1408 | 4;
LABEL_29:
    if ( v82 )
    {
      v111 = 76;
      Heap = (_QWORD *)RtlAllocateHeap(ProcessHeap, (unsigned int)(NtdllBaseTag + 1310720), 76LL);
      if ( !Heap )
      {
        ServerAcl = -1073741801;
        goto LABEL_59;
      }
      ServerAcl = NtOpenProcessToken(-1LL, 8LL, &Handle);
      v75 = Heap;
      if ( ServerAcl >= 0 )
      {
        ServerAcl = NtQueryInformationToken(Handle, 4LL, Heap);
        NtClose(Handle);
        if ( ServerAcl >= 0 )
        {
          LOBYTE(v76) = v100;
          ServerAcl = RtlpCreateServerAcl((_DWORD)v26, v76, *Heap, (unsigned int)&v117, (__int64)&v92);
          RtlFreeHeap(ProcessHeap, 0LL, Heap);
          if ( ServerAcl < 0 )
            goto LABEL_59;
          v26 = v117;
          goto LABEL_30;
        }
        v75 = Heap;
      }
      RtlFreeHeap(ProcessHeap, 0LL, v75);
      goto LABEL_59;
    }
LABEL_30:
    v27 = 4 * *((unsigned __int8 *)v101 + 1) + 11;
    LODWORD(Size) = 4 * *((unsigned __int8 *)v101 + 1) + 8;
    v28 = v27 & 0xFFFFFFFC;
    LODWORD(v109) = v28;
    v29 = 4 * *((unsigned __int8 *)v102 + 1) + 11;
    InformationToken = 4 * *((unsigned __int8 *)v102 + 1) + 8;
    v30 = v29 & 0xFFFFFFFC;
    v95 = v30;
    if ( Src )
      v31 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v31 = 0;
    if ( v26 )
      v32 = (v26[1] + 3) & 0xFFFFFFFC;
    else
      v32 = 0;
    v33 = RtlAllocateHeap(v114, (unsigned int)(NtdllBaseTag + 1310720), v30 + v32 + v31 + v28 + 20);
    if ( v33 )
    {
      *(_QWORD *)v33 = 0LL;
      *(_QWORD *)(v33 + 8) = 0LL;
      *(_DWORD *)(v33 + 16) = 0;
      *(_BYTE *)v33 = 1;
      v34 = (char *)(v33 + 20);
      if ( v110 )
        v13 |= v93;
      *(_WORD *)(v33 + 2) |= v13;
      v35 = 0x4000LL;
      v36 = *(_WORD *)(v33 + 2);
      if ( (*(_WORD *)(a3 + 2) & 0x4000) != 0 )
      {
        *(_BYTE *)(v33 + 1) = *(_BYTE *)(a3 + 1);
        *(_WORD *)(v33 + 2) = v36 | 0x4000;
      }
      v37 = (unsigned __int16 *)Src;
      if ( Src )
      {
        memmove((void *)(v33 + 20), Src, *((unsigned __int16 *)Src + 1));
        RtlpApplyAclToObject(v33 + 20, a7);
        *(_DWORD *)(v33 + 12) = 20;
        v38 = v37[1];
        if ( v31 > (unsigned int)v38 )
          memset(&v34[v38], 0, v31 - (unsigned int)v38);
        v34 += v31;
      }
      else
      {
        *(_DWORD *)(v33 + 12) = 0;
      }
      v39 = v103;
      if ( (v13 & 0x10) == 0 )
        *(_WORD *)(v33 + 2) |= *(_WORD *)(*v103 + 2) & 0x2830;
      if ( v26 )
      {
        memmove(v34, v26, v26[1]);
        RtlpApplyAclToObject(v34, a7);
        *(_DWORD *)(v33 + 16) = (_DWORD)v34 - v33;
        v40 = v26[1];
        if ( v32 > (unsigned int)v40 )
          memset(&v34[v40], 0, v32 - (unsigned int)v40);
        v34 += v32;
      }
      else
      {
        *(_DWORD *)(v33 + 16) = 0;
      }
      if ( (v13 & 4) != 0 || (*(_WORD *)(v33 + 2) |= *(_WORD *)(*v39 + 2) & 0x140C, !v83) )
      {
LABEL_50:
        v41 = (unsigned int)Size;
        memmove(v34, v101, (unsigned int)Size);
        v42 = (unsigned int)v109;
        if ( (unsigned int)v41 < (unsigned int)v109 )
          memset(&v34[v41], 0, (unsigned int)((_DWORD)v109 - v41));
        v43 = (_DWORD)v34 - v33;
        v44 = &v34[v42];
        *(_DWORD *)(v33 + 4) = v43;
        if ( !v84 )
          *(_WORD *)(v33 + 2) |= *(_WORD *)(*v39 + 2) & 1;
        v45 = (unsigned int)InformationToken;
        memmove(v44, v102, (unsigned int)InformationToken);
        if ( (unsigned int)v45 < v95 )
          memset(&v44[v45], 0, v95 - (unsigned int)v45);
        *(_DWORD *)(v33 + 8) = (_DWORD)v44 - v33;
        if ( !v85 )
          *(_WORD *)(v33 + 2) |= *(_WORD *)(*v39 + 2) & 2;
        ProcessHeap = v114;
        RtlFreeHeap(v114, 0LL, *v39);
        *v39 = v33;
        ServerAcl = 0;
        goto LABEL_59;
      }
      v104 = 0;
      LOBYTE(v35) = 1;
      v105 = 768;
      ServerAcl = RtlInitializeSid(v123, &v104, v35);
      if ( ServerAcl >= 0 )
      {
        v124 = 4;
        v94 = 0;
        while ( 1 )
        {
          if ( (*(_BYTE *)(v33 + 2) & 4) == 0 )
            goto LABEL_237;
          if ( (*(_WORD *)(v33 + 2) & 0x8000) != 0 )
            break;
          v78 = *(_QWORD *)(v33 + 32);
LABEL_239:
          AceBySid = RtlFindAceBySid(v78, v123, &v94);
          if ( !AceBySid )
          {
            v39 = v103;
            goto LABEL_50;
          }
          v80 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
          ++v94;
          *(_BYTE *)(AceBySid + 1) = v80;
        }
        if ( *(_DWORD *)(v33 + 16) )
        {
          v78 = v33 + *(unsigned int *)(v33 + 16);
          goto LABEL_239;
        }
LABEL_237:
        v78 = 0LL;
        goto LABEL_239;
      }
    }
    else
    {
      ServerAcl = -1073741801;
    }
    ProcessHeap = v114;
LABEL_59:
    v47 = v96;
    v24 = v98;
    if ( v86 )
      RtlFreeHeap(ProcessHeap, 0LL, v116);
    goto LABEL_61;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    v94 = 0;
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v14, 17LL, &v94);
      v63 = AceByType;
      if ( AceByType )
      {
        v20 = (*(_DWORD *)(AceByType + 4) & 0xFFFFFFF8) == 0;
        v118 = AceByType + 8;
        v81 = *(_BYTE *)(AceByType + 1);
        if ( !v20 )
          return (unsigned int)-1073740730;
      }
      if ( v8 )
      {
        InformationToken = NtQueryInformationToken(v8, 10LL, v120);
        ServerAcl = InformationToken;
        if ( InformationToken < 0 )
          return (unsigned int)ServerAcl;
        if ( v121 == 2 && v122 < 1 )
          return (unsigned int)-1073741659;
      }
      else
      {
        InformationToken = NtOpenProcessToken(-1LL, 8LL, &Handle);
        ServerAcl = InformationToken;
        if ( InformationToken < 0 )
          return (unsigned int)ServerAcl;
      }
      v8 = v109;
      v65 = Handle;
      LOBYTE(v64) = v81;
      if ( v109 )
        v65 = v109;
      if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v65, v118, v64, &InformationToken) )
        break;
      NtClose(Handle);
      ++v94;
      if ( !v63 )
        goto LABEL_101;
    }
    NtClose(Handle);
    return (unsigned int)-1073740730;
  }
LABEL_101:
  LODWORD(v109) = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
    goto LABEL_102;
  ServerAcl = RtlpGetDefaultTrustSubjectContext(v8, &v119);
  InformationToken = ServerAcl;
  if ( ServerAcl < 0 )
    return (unsigned int)ServerAcl;
  v66 = v119;
  if ( !*(_QWORD *)v119 )
  {
LABEL_169:
    RtlFreeHeap(ProcessHeap, 0LL, v66);
    return (unsigned int)-1073741790;
  }
  v94 = 0;
  do
  {
    v67 = RtlFindAceByType(v14, 20LL, &v94);
    v69 = v67;
    if ( v67 )
    {
      if ( (*(_DWORD *)(v67 + 4) & 0xFF000000) != 0 )
      {
        ServerAcl = -1073740730;
        v70 = v66;
LABEL_172:
        RtlFreeHeap(ProcessHeap, 0LL, v70);
        return (unsigned int)ServerAcl;
      }
      if ( !(unsigned __int8)RtlpValidTrustSubjectContext(*(_QWORD *)v66, v67 + 8, v68, &InformationToken) )
        goto LABEL_169;
    }
    ++v94;
  }
  while ( v69 );
  RtlFreeHeap(ProcessHeap, 0LL, v66);
LABEL_102:
  if ( (a2 & 8) == 0 )
  {
    v58 = v97;
    v96 = v97;
    goto LABEL_107;
  }
  if ( (a5 & 2) != 0 )
  {
    ServerAcl = RtlpComputeMergedAcl(
                  v97,
                  ((unsigned __int8)*(_WORD *)(*v103 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(*v103 + 2) >> 2) & 8 | (*(unsigned __int16 *)(*v103 + 2) >> 1) & 0x1400u,
                  v14,
                  ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x1400u,
                  (__int64)v101,
                  (__int64)v102,
                  a7,
                  2,
                  (__int64)&v96,
                  (__int64)&v95);
    if ( ServerAcl >= 0 )
    {
      v87 = 1;
      v13 = (4 * (v95 & 4)) | (4 * (v95 & 8)) | (2 * (v95 & 0x400)) | (2 * (v95 & 0x1000)) | 0x8010;
      goto LABEL_106;
    }
    v47 = v96;
    v24 = v98;
    goto LABEL_61;
  }
  v57 = *(_WORD *)(a3 + 2);
  v96 = v14;
  v13 = v57 & 0x2000 | 0x8010;
  if ( (v57 & 0xA00) == 0xA00 )
    v13 |= v93;
LABEL_106:
  v58 = v97;
LABEL_107:
  if ( (a2 & 0x20) == 0 )
  {
    v59 = v93;
    v98 = v58;
    goto LABEL_109;
  }
  if ( (a5 & 2) == 0 )
  {
    v98 = v14;
    v71 = *(_WORD *)(a3 + 2);
    v13 |= v71 & 0x2000 | 0x10;
    if ( (v71 & 0xA00) == 0xA00 )
    {
      v59 = v93;
      v13 |= v93;
    }
    else
    {
LABEL_180:
      v59 = v93;
    }
    v58 = v97;
LABEL_109:
    if ( (a2 & 0x40) != 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      v97,
                      ((unsigned __int8)*(_WORD *)(*v103 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*v103 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*v103 + 2) >> 2) & 8u,
                      v14,
                      ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                      (__int64)v101,
                      (__int64)v102,
                      a7,
                      2,
                      (__int64)&v112,
                      (__int64)&v95);
        if ( ServerAcl < 0 )
          goto LABEL_182;
        v89 = 1;
        v13 |= (4 * (v95 & 4)) | (4 * (v95 & 8)) | (2 * (v95 & 0x400)) | (2 * (v95 & 0x1000)) | 0x10;
      }
      else
      {
        v72 = *(_WORD *)(a3 + 2);
        v112 = v14;
        v13 |= v72 & 0x2000 | 0x10;
        if ( (v72 & 0xA00) == 0xA00 )
          v13 |= v59;
      }
      v58 = v97;
    }
    else
    {
      v112 = v58;
    }
    if ( !(_DWORD)v109 )
    {
      v60 = v93;
      v113 = v58;
LABEL_113:
      if ( (_DWORD)Size )
      {
        v13 |= *(_WORD *)(a3 + 2) & 0x2000 | 0x10;
        if ( (*(_WORD *)(a3 + 2) & 0xA00) == 0xA00 )
          v13 |= v60;
      }
      else
      {
        LODWORD(v14) = v58;
      }
      v24 = v98;
      v61 = v14;
      v47 = v96;
      ServerAcl = RtlpCombineAcls(v96, v61, v98, v112, v113, (__int64)&v115, 0LL);
      if ( ServerAcl < 0 )
        goto LABEL_61;
      Src = v115;
      if ( !v47 && v115 && !v115[2] )
      {
        RtlFreeHeap(ProcessHeap, 0LL, v115);
        Src = 0LL;
      }
      v91 = 1;
      goto LABEL_22;
    }
    if ( (a5 & 2) != 0 )
    {
      ServerAcl = RtlpComputeMergedAcl(
                    v97,
                    ((unsigned __int8)*(_WORD *)(*v103 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*v103 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*v103 + 2) >> 2) & 8u,
                    v14,
                    ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                    (__int64)v101,
                    (__int64)v102,
                    a7,
                    2,
                    (__int64)&v113,
                    (__int64)&v95);
      if ( ServerAcl < 0 )
        goto LABEL_182;
      v90 = 1;
      v13 |= (4 * (v95 & 4)) | (4 * (v95 & 8)) | (2 * (v95 & 0x400)) | (2 * (v95 & 0x1000)) | 0x10;
    }
    else
    {
      v73 = *(_WORD *)(a3 + 2);
      v113 = v14;
      v13 |= v73 & 0x2000 | 0x10;
      if ( (v73 & 0xA00) == 0xA00 )
      {
        v60 = v93;
        v13 |= v93;
        goto LABEL_196;
      }
    }
    v60 = v93;
LABEL_196:
    LODWORD(v58) = v97;
    goto LABEL_113;
  }
  ServerAcl = RtlpComputeMergedAcl(
                v97,
                ((unsigned __int8)*(_WORD *)(*v103 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*v103 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*v103 + 2) >> 2) & 8u,
                v14,
                ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                (__int64)v101,
                (__int64)v102,
                a7,
                2,
                (__int64)&v98,
                (__int64)&v95);
  if ( ServerAcl >= 0 )
  {
    v88 = 1;
    v13 |= (4 * (v95 & 4)) | (4 * (v95 & 8)) | (2 * (v95 & 0x400)) | (2 * (v95 & 0x1000)) | 0x10;
    goto LABEL_180;
  }
LABEL_182:
  v24 = v98;
LABEL_183:
  v47 = v96;
LABEL_61:
  if ( v47 && v87 )
    RtlFreeHeap(ProcessHeap, 0LL, v47);
  if ( v24 && v88 )
    RtlFreeHeap(ProcessHeap, 0LL, v24);
  if ( v112 && v89 )
    RtlFreeHeap(ProcessHeap, 0LL, v112);
  if ( v113 && v90 )
    RtlFreeHeap(ProcessHeap, 0LL, v113);
  if ( Src && v91 )
    RtlFreeHeap(ProcessHeap, 0LL, Src);
  if ( v92 )
  {
    v70 = v117;
    goto LABEL_172;
  }
  return (unsigned int)ServerAcl;
}
