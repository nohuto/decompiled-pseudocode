/*
 * XREFs of RtlpSetSecurityObject @ 0x18005D220
 * Callers:
 *     RtlSetSecurityObject @ 0x18005D1F0 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x18008E2E0 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x180003344 (RtlpValidTrustSubjectContext.c)
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpApplyAclToObject @ 0x18005DB84 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005DC30 (RtlpValidOwnerSubjectContext.c)
 *     RtlFindAceByType @ 0x180061000 (RtlFindAceByType.c)
 *     RtlpCombineAcls @ 0x180061054 (RtlpCombineAcls.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180061730 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 *     RtlpComputeMergedAcl @ 0x18008BA0C (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A7390 (NtOpenProcessToken.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800D83C4 (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800D877C (RtlpValidLabelSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800D8FF0 (RtlFindAceBySid.c)
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
  __int16 v12; // dx
  __int16 v13; // si
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  void *v16; // rdi
  void *ProcessHeap; // r12
  char v18; // al
  __int64 v19; // rax
  bool v20; // zf
  _BYTE *v21; // rax
  unsigned __int64 v22; // rax
  _BYTE *v23; // rcx
  unsigned __int64 v24; // rdi
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
  unsigned __int64 *v39; // r13
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rbx
  int v43; // eax
  char *v44; // r14
  __int64 v45; // rsi
  int DefaultTrustSubjectContext; // ebx
  unsigned __int64 v47; // r15
  __int16 v49; // r9
  __int64 v50; // r8
  unsigned __int64 v51; // rax
  __int16 v52; // dx
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // r8
  void *v56; // rax
  __int16 v57; // ax
  unsigned __int64 v58; // rax
  int v59; // edx
  __int64 AceByType; // rax
  __int64 v61; // rdi
  __int64 v62; // r8
  HANDLE v63; // rcx
  __int64 *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rbx
  unsigned __int64 v68; // r8
  __int16 v69; // ax
  __int16 v70; // cx
  __int16 v71; // cx
  _QWORD *Heap; // rdi
  unsigned __int64 v73; // r8
  int v74; // edx
  unsigned __int64 v75; // rax
  __int64 v76; // rcx
  __int64 AceBySid; // rax
  char v78; // cl
  char *v79; // [rsp+20h] [rbp-E0h]
  char v80; // [rsp+54h] [rbp-ACh]
  char v81; // [rsp+55h] [rbp-ABh]
  bool v82; // [rsp+56h] [rbp-AAh]
  char v83; // [rsp+57h] [rbp-A9h] BYREF
  char v84; // [rsp+58h] [rbp-A8h]
  char v85; // [rsp+59h] [rbp-A7h]
  char v86; // [rsp+5Ah] [rbp-A6h]
  int v87; // [rsp+5Ch] [rbp-A4h] BYREF
  char v88; // [rsp+60h] [rbp-A0h]
  unsigned int v89; // [rsp+64h] [rbp-9Ch] BYREF
  char v90; // [rsp+68h] [rbp-98h]
  char v91; // [rsp+69h] [rbp-97h]
  char v92; // [rsp+6Ah] [rbp-96h]
  char v93; // [rsp+6Bh] [rbp-95h]
  unsigned __int64 v94; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v95; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v96; // [rsp+80h] [rbp-80h]
  int InformationToken; // [rsp+88h] [rbp-78h] BYREF
  bool v98; // [rsp+8Ch] [rbp-74h]
  void *v99; // [rsp+90h] [rbp-70h]
  void *v100; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v101; // [rsp+A0h] [rbp-60h]
  int v102; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v103; // [rsp+ACh] [rbp-54h]
  void *Src; // [rsp+B0h] [rbp-50h]
  size_t Size; // [rsp+B8h] [rbp-48h]
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  void *v107; // [rsp+C8h] [rbp-38h]
  BOOL v108; // [rsp+D0h] [rbp-30h]
  int v109; // [rsp+D4h] [rbp-2Ch]
  unsigned __int64 v110; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v111; // [rsp+E0h] [rbp-20h] BYREF
  void *v112; // [rsp+E8h] [rbp-18h]
  _WORD *v113; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v114; // [rsp+F8h] [rbp-8h] BYREF
  char v115[8]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v116; // [rsp+108h] [rbp+8h] BYREF
  __int64 v117; // [rsp+110h] [rbp+10h]
  __int64 *v118; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v119[24]; // [rsp+120h] [rbp+20h] BYREF
  int v120; // [rsp+138h] [rbp+38h]
  int v121; // [rsp+13Ch] [rbp+3Ch]
  char v122[8]; // [rsp+158h] [rbp+58h] BYREF
  int v123; // [rsp+160h] [rbp+60h]

  v8 = a8;
  v107 = a8;
  v10 = (__int64 *)a4;
  v84 = 0;
  v101 = (unsigned __int64 *)a4;
  v12 = *(_WORD *)(a3 + 2);
  v90 = 0;
  v83 = 0;
  LOBYTE(a4) = 0;
  v91 = 0;
  v81 = 0;
  v13 = 0x8000;
  v86 = 0;
  v92 = 0;
  v88 = 0;
  v80 = 0;
  v114 = 0LL;
  Src = 0LL;
  v113 = 0LL;
  v94 = 0LL;
  v111 = 0LL;
  v95 = 0LL;
  v110 = 0LL;
  v117 = 0LL;
  v93 = 0;
  v82 = 0;
  v108 = a4;
  v116 = 0LL;
  if ( (v12 & 0x10) == 0 )
    goto LABEL_2;
  if ( v12 < 0 )
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
  v96 = (unsigned __int64)v16;
  v118 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v112 = ProcessHeap;
  if ( (*(_WORD *)(v15 + 2) & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  v85 = (unsigned __int8)v12 >> 7;
  v98 = (v12 & 0x40) != 0;
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
        v108 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*(_DWORD *)(v15 + 4) )
      return (unsigned int)-1073741734;
    v19 = *(unsigned int *)(v15 + 4);
    v20 = v15 + v19 == 0;
    v21 = (_BYTE *)(v15 + v19);
    v99 = v21;
    if ( v20 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v82 = (a2 & 4) == 0;
  if ( (v12 & 0x8000) == 0 )
  {
    v54 = *(void **)(a3 + 8);
    goto LABEL_85;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v54 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_85:
    v99 = v54;
    goto LABEL_86;
  }
  v99 = 0LL;
LABEL_86:
  v90 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    InformationToken = NtQueryInformationToken(a8, 10LL, v119);
    DefaultTrustSubjectContext = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)DefaultTrustSubjectContext;
    if ( v121 < 1 && v120 == 2 )
      return (unsigned int)-1073741659;
    v8 = v107;
    LOBYTE(v55) = v85;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v107, v99, v55, &InformationToken, v115) )
      return (unsigned int)-1073741734;
  }
  v21 = v99;
LABEL_12:
  if ( !RtlValidSid(v21) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( (*(_WORD *)(a3 + 2) & 0x8000) != 0 )
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v100 = 0LL;
        goto LABEL_96;
      }
      v56 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    else
    {
      v56 = *(void **)(a3 + 16);
    }
    v100 = v56;
LABEL_96:
    v23 = v100;
    v84 = 1;
    goto LABEL_18;
  }
  v22 = *v101;
  if ( (*(_WORD *)(*v101 + 2) & 0x8000) != 0 )
  {
    if ( !*(_DWORD *)(v22 + 8) )
    {
LABEL_240:
      DefaultTrustSubjectContext = -1073741733;
      goto LABEL_59;
    }
    v23 = (_BYTE *)(v22 + *(unsigned int *)(v22 + 8));
  }
  else
  {
    v23 = *(_BYTE **)(v22 + 16);
  }
  v100 = v23;
LABEL_18:
  if ( !v23 )
    goto LABEL_240;
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0xF8) == 0 )
  {
    Src = v16;
    v24 = v95;
    goto LABEL_22;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    v87 = 0;
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v14, 17LL, &v87);
      v61 = AceByType;
      if ( AceByType )
      {
        v20 = (*(_DWORD *)(AceByType + 4) & 0xFFFFFFF8) == 0;
        v117 = AceByType + 8;
        v93 = *(_BYTE *)(AceByType + 1);
        if ( !v20 )
          break;
      }
      if ( v8 )
      {
        v79 = v115;
        InformationToken = NtQueryInformationToken(v8, 10LL, v119);
        DefaultTrustSubjectContext = InformationToken;
        if ( InformationToken < 0 )
          return (unsigned int)DefaultTrustSubjectContext;
        if ( v120 == 2 && v121 < 1 )
          return (unsigned int)-1073741659;
      }
      else
      {
        InformationToken = NtOpenProcessToken(-1LL, 8LL, &Handle);
        DefaultTrustSubjectContext = InformationToken;
        if ( InformationToken < 0 )
          return (unsigned int)DefaultTrustSubjectContext;
      }
      v8 = v107;
      v63 = Handle;
      LOBYTE(v62) = v93;
      if ( v107 )
        v63 = v107;
      if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v63, v117, v62, &InformationToken, v79) )
      {
        NtClose(Handle);
        break;
      }
      NtClose(Handle);
      ++v87;
      if ( !v61 )
        goto LABEL_101;
    }
    return (unsigned int)-1073740730;
  }
LABEL_101:
  LODWORD(v107) = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
    goto LABEL_102;
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v8, &v118);
  InformationToken = DefaultTrustSubjectContext;
  if ( DefaultTrustSubjectContext < 0 )
    return (unsigned int)DefaultTrustSubjectContext;
  v64 = v118;
  if ( !*v118 )
  {
LABEL_169:
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v64);
    return (unsigned int)-1073741790;
  }
  v87 = 0;
  do
  {
    v65 = RtlFindAceByType(v14, 20LL, &v87);
    v67 = v65;
    if ( v65 )
    {
      if ( (*(_DWORD *)(v65 + 4) & 0xFF000000) != 0 )
      {
        DefaultTrustSubjectContext = -1073740730;
        v68 = (unsigned __int64)v64;
LABEL_172:
        RtlFreeHeap((__int64)ProcessHeap, 0, v68);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      if ( !RtlpValidTrustSubjectContext(*v64, v65 + 8, v66, &InformationToken) )
        goto LABEL_169;
    }
    ++v87;
  }
  while ( v67 );
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v64);
LABEL_102:
  if ( (a2 & 8) == 0 )
  {
    v58 = v96;
    v94 = v96;
    goto LABEL_107;
  }
  if ( (a5 & 2) != 0 )
  {
    DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                   v96,
                                   ((unsigned __int8)*(_WORD *)(*v101 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(*v101 + 2) >> 2) & 8 | (*(unsigned __int16 *)(*v101 + 2) >> 1) & 0x1400u,
                                   v14,
                                   ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x1400u,
                                   (__int64)v99,
                                   (__int64)v100,
                                   a7,
                                   2,
                                   (__int64)&v94,
                                   (__int64)&v89);
    if ( DefaultTrustSubjectContext >= 0 )
    {
      v86 = 1;
      v13 = (4 * (v89 & 4)) | (4 * (v89 & 8)) | (2 * (v89 & 0x400)) | (2 * (v89 & 0x1000)) | 0x8010;
      goto LABEL_106;
    }
    v47 = v94;
    v24 = v95;
    goto LABEL_61;
  }
  v57 = *(_WORD *)(a3 + 2);
  v94 = v14;
  v13 = v57 & 0x2000 | 0x8010;
  if ( (v57 & 0xA00) == 0xA00 )
    v13 = v57 & 0x2000 | 0x8810;
LABEL_106:
  v58 = v96;
LABEL_107:
  if ( (a2 & 0x20) == 0 )
  {
    v95 = v58;
    goto LABEL_109;
  }
  if ( (a5 & 2) == 0 )
  {
    v95 = v14;
    v69 = *(_WORD *)(a3 + 2);
    v13 |= v69 & 0x2000 | 0x10;
    if ( (v69 & 0xA00) == 0xA00 )
      v13 |= 0x800u;
    goto LABEL_180;
  }
  DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                 v96,
                                 ((unsigned __int8)*(_WORD *)(*v101 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*v101 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*v101 + 2) >> 2) & 8u,
                                 v14,
                                 ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                                 (__int64)v99,
                                 (__int64)v100,
                                 a7,
                                 2,
                                 (__int64)&v95,
                                 (__int64)&v89);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_181;
  v92 = 1;
  v13 |= (4 * (v89 & 4)) | (4 * (v89 & 8)) | (2 * (v89 & 0x400)) | (2 * (v89 & 0x1000)) | 0x10;
LABEL_180:
  v58 = v96;
LABEL_109:
  if ( (a2 & 0x40) == 0 )
  {
    v111 = v58;
    goto LABEL_111;
  }
  if ( (a5 & 2) == 0 )
  {
    v70 = *(_WORD *)(a3 + 2);
    v111 = v14;
    v13 |= v70 & 0x2000 | 0x10;
    if ( (v70 & 0xA00) == 0xA00 )
      v13 |= 0x800u;
    goto LABEL_190;
  }
  DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                 v96,
                                 ((unsigned __int8)*(_WORD *)(*v101 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*v101 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*v101 + 2) >> 2) & 8u,
                                 v14,
                                 ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                                 (__int64)v99,
                                 (__int64)v100,
                                 a7,
                                 2,
                                 (__int64)&v111,
                                 (__int64)&v89);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_181;
  v88 = 1;
  v13 |= (4 * (v89 & 4)) | (4 * (v89 & 8)) | (2 * (v89 & 0x400)) | (2 * (v89 & 0x1000)) | 0x10;
LABEL_190:
  v58 = v96;
LABEL_111:
  if ( !(_DWORD)v107 )
  {
    v110 = v58;
    goto LABEL_113;
  }
  if ( (a5 & 2) == 0 )
  {
    v71 = *(_WORD *)(a3 + 2);
    v110 = v14;
    v13 |= v71 & 0x2000 | 0x10;
    if ( (v71 & 0xA00) == 0xA00 )
      v13 |= 0x800u;
    goto LABEL_194;
  }
  DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                 v96,
                                 ((unsigned __int8)*(_WORD *)(*v101 + 2) >> 2) & 4 | (*(unsigned __int16 *)(*v101 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(*v101 + 2) >> 2) & 8u,
                                 v14,
                                 ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                                 (__int64)v99,
                                 (__int64)v100,
                                 a7,
                                 2,
                                 (__int64)&v110,
                                 (__int64)&v89);
  if ( DefaultTrustSubjectContext < 0 )
  {
LABEL_181:
    v24 = v95;
LABEL_182:
    v47 = v94;
    goto LABEL_61;
  }
  v80 = 1;
  v13 |= (4 * (v89 & 4)) | (4 * (v89 & 8)) | (2 * (v89 & 0x400)) | (2 * (v89 & 0x1000)) | 0x10;
LABEL_194:
  LODWORD(v58) = v96;
LABEL_113:
  if ( (_DWORD)Size )
  {
    v13 |= *(_WORD *)(a3 + 2) & 0x2000 | 0x10;
    if ( (*(_WORD *)(a3 + 2) & 0xA00) == 0xA00 )
      v13 |= 0x800u;
  }
  else
  {
    LODWORD(v14) = v58;
  }
  v24 = v95;
  v59 = v14;
  v47 = v94;
  DefaultTrustSubjectContext = RtlpCombineAcls(v94, v59, v95, v111, v110, (__int64)&v113, 0LL);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_61;
  Src = v113;
  if ( !v47 && v113 && !v113[2] )
  {
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v113);
    Src = 0LL;
  }
  v81 = 1;
LABEL_22:
  if ( (a2 & 4) == 0 )
  {
    v75 = *v101;
    if ( (*(_BYTE *)(*v101 + 2) & 4) != 0 )
    {
      if ( *(__int16 *)(v75 + 2) >= 0 )
      {
        v26 = *(unsigned __int16 **)(v75 + 32);
      }
      else if ( *(_DWORD *)(v75 + 16) )
      {
        v26 = (unsigned __int16 *)(v75 + *(unsigned int *)(v75 + 16));
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
  if ( (a5 & 1) != 0 )
  {
    v49 = *(_WORD *)(a3 + 2);
    if ( (v49 & 4) != 0 )
    {
      if ( (v49 & 0x8000) == 0 )
      {
        v50 = *(_QWORD *)(a3 + 32);
LABEL_76:
        v51 = *v101;
        v52 = *(_WORD *)(*v101 + 2);
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
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       v53,
                                       v52 & 0x140C,
                                       v50,
                                       v49 & 0x140C,
                                       (__int64)v99,
                                       (__int64)v100,
                                       a7,
                                       1,
                                       (__int64)&v114,
                                       (__int64)&v89);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v26 = v114;
          v91 = 1;
          v13 |= v89 & 0x1408 | 4;
          goto LABEL_29;
        }
        goto LABEL_182;
      }
      if ( *(_DWORD *)(a3 + 16) )
      {
        LODWORD(v50) = a3 + *(_DWORD *)(a3 + 16);
        goto LABEL_76;
      }
    }
    LODWORD(v50) = 0;
    goto LABEL_76;
  }
  v25 = *(_WORD *)(a3 + 2);
  if ( (v25 & 4) == 0 )
    goto LABEL_206;
  if ( v25 < 0 )
  {
    if ( *(_DWORD *)(a3 + 16) )
    {
      v26 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
      goto LABEL_27;
    }
LABEL_206:
    v26 = 0LL;
    goto LABEL_27;
  }
  v26 = *(unsigned __int16 **)(a3 + 32);
LABEL_27:
  v13 |= v25 & 0x1000 | 4;
  if ( (v25 & 0x500) == 0x500 )
    v13 |= 0x400u;
LABEL_29:
  if ( v85 )
  {
    v109 = 76;
    Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 76LL);
    if ( !Heap )
    {
      DefaultTrustSubjectContext = -1073741801;
      goto LABEL_59;
    }
    DefaultTrustSubjectContext = NtOpenProcessToken(-1LL, 8LL, &Handle);
    v73 = (unsigned __int64)Heap;
    if ( DefaultTrustSubjectContext >= 0 )
    {
      DefaultTrustSubjectContext = NtQueryInformationToken(Handle, 4LL, Heap);
      NtClose(Handle);
      if ( DefaultTrustSubjectContext >= 0 )
      {
        LOBYTE(v74) = v98;
        DefaultTrustSubjectContext = RtlpCreateServerAcl((_DWORD)v26, v74, *Heap, (unsigned int)&v116, (__int64)&v83);
        RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v26 = v116;
          goto LABEL_30;
        }
        goto LABEL_59;
      }
      v73 = (unsigned __int64)Heap;
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v73);
    goto LABEL_59;
  }
LABEL_30:
  v27 = 4 * *((unsigned __int8 *)v99 + 1) + 11;
  LODWORD(Size) = 4 * *((unsigned __int8 *)v99 + 1) + 8;
  v28 = v27 & 0xFFFFFFFC;
  LODWORD(v107) = v28;
  v29 = 4 * *((unsigned __int8 *)v100 + 1) + 11;
  InformationToken = 4 * *((unsigned __int8 *)v100 + 1) + 8;
  v30 = v29 & 0xFFFFFFFC;
  v89 = v30;
  if ( Src )
    v31 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
  else
    v31 = 0;
  if ( v26 )
    v32 = (v26[1] + 3) & 0xFFFFFFFC;
  else
    v32 = 0;
  v33 = RtlAllocateHeap((__int64)v112, NtdllBaseTag + 1310720, v30 + v32 + v31 + v28 + 20);
  if ( !v33 )
  {
    DefaultTrustSubjectContext = -1073741801;
    goto LABEL_225;
  }
  *(_QWORD *)v33 = 0LL;
  *(_QWORD *)(v33 + 8) = 0LL;
  *(_DWORD *)(v33 + 16) = 0;
  *(_BYTE *)v33 = 1;
  v34 = (char *)(v33 + 20);
  if ( v108 )
    v13 |= 0x800u;
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
  v39 = v101;
  if ( (v13 & 0x10) == 0 )
    *(_WORD *)(v33 + 2) |= *(_WORD *)(*v101 + 2) & 0x2830;
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
  if ( (v13 & 4) != 0 || (*(_WORD *)(v33 + 2) |= *(_WORD *)(*v39 + 2) & 0x140C, !v82) )
  {
LABEL_50:
    v41 = (unsigned int)Size;
    memmove(v34, v99, (unsigned int)Size);
    v42 = (unsigned int)v107;
    if ( (unsigned int)v41 < (unsigned int)v107 )
      memset(&v34[v41], 0, (unsigned int)((_DWORD)v107 - v41));
    v43 = (_DWORD)v34 - v33;
    v44 = &v34[v42];
    *(_DWORD *)(v33 + 4) = v43;
    if ( !v90 )
      *(_WORD *)(v33 + 2) |= *(_WORD *)(*v39 + 2) & 1;
    v45 = (unsigned int)InformationToken;
    memmove(v44, v100, (unsigned int)InformationToken);
    if ( (unsigned int)v45 < v89 )
      memset(&v44[v45], 0, v89 - (unsigned int)v45);
    *(_DWORD *)(v33 + 8) = (_DWORD)v44 - v33;
    if ( !v84 )
      *(_WORD *)(v33 + 2) |= *(_WORD *)(*v39 + 2) & 2;
    ProcessHeap = v112;
    RtlFreeHeap((__int64)v112, 0, *v39);
    *v39 = v33;
    DefaultTrustSubjectContext = 0;
  }
  else
  {
    LOBYTE(v35) = 1;
    v102 = 0;
    v103 = 768;
    DefaultTrustSubjectContext = RtlInitializeSid(v122, &v102, v35);
    if ( DefaultTrustSubjectContext >= 0 )
    {
      v123 = 4;
      v87 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v33 + 2) & 4) == 0 )
          goto LABEL_235;
        if ( (*(_WORD *)(v33 + 2) & 0x8000) != 0 )
          break;
        v76 = *(_QWORD *)(v33 + 32);
LABEL_237:
        AceBySid = RtlFindAceBySid(v76, v122, &v87);
        if ( !AceBySid )
        {
          v39 = v101;
          goto LABEL_50;
        }
        v78 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
        ++v87;
        *(_BYTE *)(AceBySid + 1) = v78;
      }
      if ( *(_DWORD *)(v33 + 16) )
      {
        v76 = v33 + *(unsigned int *)(v33 + 16);
        goto LABEL_237;
      }
LABEL_235:
      v76 = 0LL;
      goto LABEL_237;
    }
LABEL_225:
    ProcessHeap = v112;
  }
LABEL_59:
  v47 = v94;
  v24 = v95;
  if ( v91 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v114);
LABEL_61:
  if ( v47 && v86 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v47);
  if ( v24 && v92 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v24);
  if ( v111 && v88 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v111);
  if ( v110 && v80 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v110);
  if ( Src && v81 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Src);
  if ( v83 )
  {
    v68 = (unsigned __int64)v116;
    goto LABEL_172;
  }
  return (unsigned int)DefaultTrustSubjectContext;
}
