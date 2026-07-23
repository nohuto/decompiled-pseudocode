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
        int a6,
        __int64 a7,
        HANDLE TokenHandle)
{
  HANDLE v8; // rbx
  __int64 *v10; // rax
  __int16 v12; // dx
  __int16 v13; // si
  ACL *v14; // r15
  __int64 v15; // rcx
  void *v16; // rdi
  void *ProcessHeap; // r12
  char v18; // al
  __int64 v19; // rax
  bool v20; // zf
  void *v21; // rax
  _DWORD *v22; // rax
  char *v23; // rcx
  PVOID v24; // rdi
  __int16 v25; // cx
  unsigned __int16 *v26; // r15
  int v27; // r8d
  unsigned int v28; // r8d
  int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ebx
  unsigned int v32; // r12d
  _QWORD *v33; // rdi
  char *v34; // r14
  __int16 v35; // cx
  unsigned __int16 *v36; // r13
  __int64 v37; // rcx
  PVOID *v38; // r13
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rbx
  int v42; // eax
  char *v43; // r14
  __int64 v44; // rsi
  NTSTATUS DefaultTrustSubjectContext; // ebx
  PVOID v46; // r15
  __int16 v48; // r9
  __int64 v49; // r8
  _DWORD *v50; // rax
  __int16 v51; // dx
  __int64 v52; // rcx
  void *v53; // rax
  __int64 v54; // r8
  void *v55; // rax
  __int16 v56; // ax
  PVOID v57; // rax
  int v58; // edx
  _DWORD *AceByType; // rax
  _DWORD *v60; // rdi
  HANDLE v61; // rcx
  void **v62; // rdi
  _DWORD *v63; // rax
  __int64 v64; // r8
  _DWORD *v65; // rbx
  PVOID v66; // r8
  __int16 v67; // ax
  __int16 v68; // cx
  __int16 v69; // cx
  _QWORD *Heap; // rdi
  void *v71; // r8
  int v72; // edx
  char *v73; // rax
  char *v74; // rcx
  __int64 AceBySid; // rax
  char v76; // cl
  char v77; // [rsp+54h] [rbp-ACh]
  char v78; // [rsp+55h] [rbp-ABh]
  bool v79; // [rsp+56h] [rbp-AAh]
  char v80; // [rsp+57h] [rbp-A9h] BYREF
  char v81; // [rsp+58h] [rbp-A8h]
  char v82; // [rsp+59h] [rbp-A7h]
  char v83; // [rsp+5Ah] [rbp-A6h]
  ULONG Index; // [rsp+5Ch] [rbp-A4h] BYREF
  char v85; // [rsp+60h] [rbp-A0h]
  unsigned int v86; // [rsp+64h] [rbp-9Ch] BYREF
  int v87; // [rsp+68h] [rbp-98h]
  PVOID v88; // [rsp+70h] [rbp-90h] BYREF
  PVOID v89; // [rsp+78h] [rbp-88h] BYREF
  int v90[2]; // [rsp+80h] [rbp-80h]
  NTSTATUS v91; // [rsp+88h] [rbp-78h] BYREF
  bool v92; // [rsp+8Ch] [rbp-74h]
  void *v93; // [rsp+90h] [rbp-70h]
  void *v94; // [rsp+98h] [rbp-68h]
  PVOID *v95; // [rsp+A0h] [rbp-60h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h]
  size_t Size; // [rsp+B8h] [rbp-48h]
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE ClientToken; // [rsp+C8h] [rbp-38h]
  BOOL v101; // [rsp+D0h] [rbp-30h]
  ULONG TokenInformationLength; // [rsp+D4h] [rbp-2Ch] BYREF
  PVOID v103; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v104; // [rsp+E0h] [rbp-20h] BYREF
  PVOID HeapHandle; // [rsp+E8h] [rbp-18h]
  PVOID v106; // [rsp+F0h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp-8h] BYREF
  ULONG ReturnLength; // [rsp+100h] [rbp+0h] BYREF
  PVOID v109; // [rsp+108h] [rbp+8h] BYREF
  PSID Sid2; // [rsp+110h] [rbp+10h]
  PVOID v111; // [rsp+118h] [rbp+18h]
  _BYTE TokenInformation[24]; // [rsp+120h] [rbp+20h] BYREF
  int v113; // [rsp+138h] [rbp+38h]
  int v114; // [rsp+13Ch] [rbp+3Ch]
  char Sid[8]; // [rsp+158h] [rbp+58h] BYREF
  int v116; // [rsp+160h] [rbp+60h]

  v8 = TokenHandle;
  ClientToken = TokenHandle;
  v10 = (__int64 *)a4;
  v81 = 0;
  v95 = (PVOID *)a4;
  v12 = *(_WORD *)(a3 + 2);
  v87 = 0;
  v80 = 0;
  LOBYTE(a4) = 0;
  v78 = 0;
  v13 = 0x8000;
  v83 = 0;
  v85 = 0;
  v77 = 0;
  BaseAddress = 0LL;
  Src = 0LL;
  v106 = 0LL;
  v88 = 0LL;
  v104 = 0LL;
  v89 = 0LL;
  v103 = 0LL;
  Sid2 = 0LL;
  v79 = 0;
  v101 = a4;
  v109 = 0LL;
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
    v14 = (ACL *)(a3 + *(unsigned int *)(a3 + 12));
  }
  else
  {
    v14 = *(ACL **)(a3 + 24);
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
  *(_QWORD *)v90 = v16;
  v111 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  if ( (*(_WORD *)(v15 + 2) & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  v82 = (unsigned __int8)v12 >> 7;
  v92 = (v12 & 0x40) != 0;
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
        v101 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*(_DWORD *)(v15 + 4) )
      return (unsigned int)-1073741734;
    v19 = *(unsigned int *)(v15 + 4);
    v20 = v15 + v19 == 0;
    v21 = (void *)(v15 + v19);
    v93 = v21;
    if ( v20 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v79 = (a2 & 4) == 0;
  if ( (v12 & 0x8000) == 0 )
  {
    v53 = *(void **)(a3 + 8);
    goto LABEL_85;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v53 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_85:
    v93 = v53;
    goto LABEL_86;
  }
  v93 = 0LL;
LABEL_86:
  LOBYTE(v87) = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    v91 = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    DefaultTrustSubjectContext = v91;
    if ( v91 < 0 )
      return (unsigned int)DefaultTrustSubjectContext;
    if ( v114 < 1 && v113 == 2 )
      return (unsigned int)-1073741659;
    v8 = ClientToken;
    LOBYTE(v54) = v82;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(ClientToken, v93, v54, &v91) )
      return (unsigned int)-1073741734;
  }
  v21 = v93;
LABEL_12:
  if ( !RtlValidSid(v21) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( (*(_WORD *)(a3 + 2) & 0x8000) != 0 )
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v94 = 0LL;
        goto LABEL_96;
      }
      v55 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    else
    {
      v55 = *(void **)(a3 + 16);
    }
    v94 = v55;
LABEL_96:
    v23 = (char *)v94;
    v81 = 1;
    goto LABEL_18;
  }
  v22 = *v95;
  if ( (*((_WORD *)*v95 + 1) & 0x8000) != 0 )
  {
    if ( !v22[2] )
    {
LABEL_240:
      DefaultTrustSubjectContext = -1073741733;
      goto LABEL_59;
    }
    v23 = (char *)v22 + (unsigned int)v22[2];
  }
  else
  {
    v23 = (char *)*((_QWORD *)v22 + 2);
  }
  v94 = v23;
LABEL_18:
  if ( !v23 )
    goto LABEL_240;
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0xF8) == 0 )
  {
    Src = v16;
    v24 = v89;
    goto LABEL_22;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v14, 0x11u, &Index);
      v60 = AceByType;
      if ( AceByType )
      {
        v20 = (AceByType[1] & 0xFFFFFFF8) == 0;
        Sid2 = AceByType + 2;
        HIBYTE(v87) = *((_BYTE *)AceByType + 1);
        if ( !v20 )
          break;
      }
      if ( v8 )
      {
        v91 = NtQueryInformationToken(v8, 0xAu, TokenInformation, 0x38u, &ReturnLength);
        DefaultTrustSubjectContext = v91;
        if ( v91 < 0 )
          return (unsigned int)DefaultTrustSubjectContext;
        if ( v113 == 2 && v114 < 1 )
          return (unsigned int)-1073741659;
      }
      else
      {
        v91 = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
        DefaultTrustSubjectContext = v91;
        if ( v91 < 0 )
          return (unsigned int)DefaultTrustSubjectContext;
      }
      v8 = ClientToken;
      v61 = Handle;
      if ( ClientToken )
        v61 = ClientToken;
      if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v61, Sid2) )
      {
        NtClose(Handle);
        break;
      }
      NtClose(Handle);
      ++Index;
      if ( !v60 )
        goto LABEL_101;
    }
    return (unsigned int)-1073740730;
  }
LABEL_101:
  LODWORD(ClientToken) = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
    goto LABEL_102;
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v8);
  v91 = DefaultTrustSubjectContext;
  if ( DefaultTrustSubjectContext < 0 )
    return (unsigned int)DefaultTrustSubjectContext;
  v62 = (void **)v111;
  if ( !*(_QWORD *)v111 )
  {
LABEL_169:
    RtlFreeHeap(ProcessHeap, 0, v62);
    return (unsigned int)-1073741790;
  }
  Index = 0;
  do
  {
    v63 = RtlFindAceByType(v14, 0x14u, &Index);
    v65 = v63;
    if ( v63 )
    {
      if ( (v63[1] & 0xFF000000) != 0 )
      {
        DefaultTrustSubjectContext = -1073740730;
        v66 = v62;
LABEL_172:
        RtlFreeHeap(ProcessHeap, 0, v66);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      if ( !RtlpValidTrustSubjectContext(*v62, v63 + 2, v64, &v91) )
        goto LABEL_169;
    }
    ++Index;
  }
  while ( v65 );
  RtlFreeHeap(ProcessHeap, 0, v62);
LABEL_102:
  if ( (a2 & 8) == 0 )
  {
    v57 = *(PVOID *)v90;
    v88 = *(PVOID *)v90;
    goto LABEL_107;
  }
  if ( (a5 & 2) != 0 )
  {
    DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                   v90[0],
                                   ((unsigned __int8)*((_WORD *)*v95 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)*v95 + 1) >> 2) & 8 | (*((unsigned __int16 *)*v95 + 1) >> 1) & 0x1400u,
                                   (int)v14,
                                   ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x1400u,
                                   (__int64)v93,
                                   (__int64)v94,
                                   a7,
                                   2,
                                   (__int64)&v88,
                                   (__int64)&v86);
    if ( DefaultTrustSubjectContext >= 0 )
    {
      v83 = 1;
      v13 = (4 * (v86 & 4)) | (4 * (v86 & 8)) | (2 * (v86 & 0x400)) | (2 * (v86 & 0x1000)) | 0x8010;
      goto LABEL_106;
    }
    v46 = v88;
    v24 = v89;
    goto LABEL_61;
  }
  v56 = *(_WORD *)(a3 + 2);
  v88 = v14;
  v13 = v56 & 0x2000 | 0x8010;
  if ( (v56 & 0xA00) == 0xA00 )
    v13 = v56 & 0x2000 | 0x8810;
LABEL_106:
  v57 = *(PVOID *)v90;
LABEL_107:
  if ( (a2 & 0x20) == 0 )
  {
    v89 = v57;
    goto LABEL_109;
  }
  if ( (a5 & 2) == 0 )
  {
    v89 = v14;
    v67 = *(_WORD *)(a3 + 2);
    v13 |= v67 & 0x2000 | 0x10;
    if ( (v67 & 0xA00) == 0xA00 )
      v13 |= 0x800u;
    goto LABEL_180;
  }
  DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                 v90[0],
                                 ((unsigned __int8)*((_WORD *)*v95 + 1) >> 2) & 4 | (*((unsigned __int16 *)*v95 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)*v95 + 1) >> 2) & 8u,
                                 (int)v14,
                                 ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                                 (__int64)v93,
                                 (__int64)v94,
                                 a7,
                                 2,
                                 (__int64)&v89,
                                 (__int64)&v86);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_181;
  BYTE2(v87) = 1;
  v13 |= (4 * (v86 & 4)) | (4 * (v86 & 8)) | (2 * (v86 & 0x400)) | (2 * (v86 & 0x1000)) | 0x10;
LABEL_180:
  v57 = *(PVOID *)v90;
LABEL_109:
  if ( (a2 & 0x40) == 0 )
  {
    v104 = v57;
    goto LABEL_111;
  }
  if ( (a5 & 2) == 0 )
  {
    v68 = *(_WORD *)(a3 + 2);
    v104 = v14;
    v13 |= v68 & 0x2000 | 0x10;
    if ( (v68 & 0xA00) == 0xA00 )
      v13 |= 0x800u;
    goto LABEL_190;
  }
  DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                 v90[0],
                                 ((unsigned __int8)*((_WORD *)*v95 + 1) >> 2) & 4 | (*((unsigned __int16 *)*v95 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)*v95 + 1) >> 2) & 8u,
                                 (int)v14,
                                 ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                                 (__int64)v93,
                                 (__int64)v94,
                                 a7,
                                 2,
                                 (__int64)&v104,
                                 (__int64)&v86);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_181;
  v85 = 1;
  v13 |= (4 * (v86 & 4)) | (4 * (v86 & 8)) | (2 * (v86 & 0x400)) | (2 * (v86 & 0x1000)) | 0x10;
LABEL_190:
  v57 = *(PVOID *)v90;
LABEL_111:
  if ( !(_DWORD)ClientToken )
  {
    v103 = v57;
    goto LABEL_113;
  }
  if ( (a5 & 2) == 0 )
  {
    v69 = *(_WORD *)(a3 + 2);
    v103 = v14;
    v13 |= v69 & 0x2000 | 0x10;
    if ( (v69 & 0xA00) == 0xA00 )
      v13 |= 0x800u;
    goto LABEL_194;
  }
  DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                 v90[0],
                                 ((unsigned __int8)*((_WORD *)*v95 + 1) >> 2) & 4 | (*((unsigned __int16 *)*v95 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)*v95 + 1) >> 2) & 8u,
                                 (int)v14,
                                 ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                                 (__int64)v93,
                                 (__int64)v94,
                                 a7,
                                 2,
                                 (__int64)&v103,
                                 (__int64)&v86);
  if ( DefaultTrustSubjectContext < 0 )
  {
LABEL_181:
    v24 = v89;
LABEL_182:
    v46 = v88;
    goto LABEL_61;
  }
  v77 = 1;
  v13 |= (4 * (v86 & 4)) | (4 * (v86 & 8)) | (2 * (v86 & 0x400)) | (2 * (v86 & 0x1000)) | 0x10;
LABEL_194:
  LODWORD(v57) = v90[0];
LABEL_113:
  if ( (_DWORD)Size )
  {
    v13 |= *(_WORD *)(a3 + 2) & 0x2000 | 0x10;
    if ( (*(_WORD *)(a3 + 2) & 0xA00) == 0xA00 )
      v13 |= 0x800u;
  }
  else
  {
    LODWORD(v14) = (_DWORD)v57;
  }
  v24 = v89;
  v58 = (int)v14;
  v46 = v88;
  DefaultTrustSubjectContext = RtlpCombineAcls(
                                 (_DWORD)v88,
                                 v58,
                                 (_DWORD)v89,
                                 (_DWORD)v104,
                                 (__int64)v103,
                                 (__int64)&v106,
                                 0LL);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_61;
  Src = v106;
  if ( !v46 && v106 && !*((_WORD *)v106 + 2) )
  {
    RtlFreeHeap(ProcessHeap, 0, v106);
    Src = 0LL;
  }
  v78 = 1;
LABEL_22:
  if ( (a2 & 4) == 0 )
  {
    v73 = (char *)*v95;
    if ( (*((_BYTE *)*v95 + 2) & 4) != 0 )
    {
      if ( *((__int16 *)v73 + 1) >= 0 )
      {
        v26 = (unsigned __int16 *)*((_QWORD *)v73 + 4);
      }
      else if ( *((_DWORD *)v73 + 4) )
      {
        v26 = (unsigned __int16 *)&v73[*((unsigned int *)v73 + 4)];
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
    v48 = *(_WORD *)(a3 + 2);
    if ( (v48 & 4) != 0 )
    {
      if ( (v48 & 0x8000) == 0 )
      {
        v49 = *(_QWORD *)(a3 + 32);
LABEL_76:
        v50 = *v95;
        v51 = *((_WORD *)*v95 + 1);
        if ( (v51 & 4) != 0 )
        {
          if ( v51 < 0 )
          {
            LODWORD(v52) = 0;
            if ( v50[4] )
              LODWORD(v52) = (_DWORD)v50 + v50[4];
          }
          else
          {
            v52 = *((_QWORD *)v50 + 4);
          }
        }
        else
        {
          LODWORD(v52) = 0;
        }
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       v52,
                                       v51 & 0x140C,
                                       v49,
                                       v48 & 0x140C,
                                       (__int64)v93,
                                       (__int64)v94,
                                       a7,
                                       1,
                                       (__int64)&BaseAddress,
                                       (__int64)&v86);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v26 = (unsigned __int16 *)BaseAddress;
          BYTE1(v87) = 1;
          v13 |= v86 & 0x1408 | 4;
          goto LABEL_29;
        }
        goto LABEL_182;
      }
      if ( *(_DWORD *)(a3 + 16) )
      {
        LODWORD(v49) = a3 + *(_DWORD *)(a3 + 16);
        goto LABEL_76;
      }
    }
    LODWORD(v49) = 0;
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
  if ( v82 )
  {
    TokenInformationLength = 76;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
    if ( !Heap )
    {
      DefaultTrustSubjectContext = -1073741801;
      goto LABEL_59;
    }
    DefaultTrustSubjectContext = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
    v71 = Heap;
    if ( DefaultTrustSubjectContext >= 0 )
    {
      DefaultTrustSubjectContext = NtQueryInformationToken(
                                     Handle,
                                     4u,
                                     Heap,
                                     TokenInformationLength,
                                     &TokenInformationLength);
      NtClose(Handle);
      if ( DefaultTrustSubjectContext >= 0 )
      {
        LOBYTE(v72) = v92;
        DefaultTrustSubjectContext = RtlpCreateServerAcl((_DWORD)v26, v72, *Heap, (unsigned int)&v109, (__int64)&v80);
        RtlFreeHeap(ProcessHeap, 0, Heap);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v26 = (unsigned __int16 *)v109;
          goto LABEL_30;
        }
        goto LABEL_59;
      }
      v71 = Heap;
    }
    RtlFreeHeap(ProcessHeap, 0, v71);
    goto LABEL_59;
  }
LABEL_30:
  v27 = 4 * *((unsigned __int8 *)v93 + 1) + 11;
  LODWORD(Size) = 4 * *((unsigned __int8 *)v93 + 1) + 8;
  v28 = v27 & 0xFFFFFFFC;
  LODWORD(ClientToken) = v28;
  v29 = 4 * *((unsigned __int8 *)v94 + 1) + 11;
  v91 = 4 * *((unsigned __int8 *)v94 + 1) + 8;
  v30 = v29 & 0xFFFFFFFC;
  v86 = v30;
  if ( Src )
    v31 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
  else
    v31 = 0;
  if ( v26 )
    v32 = (v26[1] + 3) & 0xFFFFFFFC;
  else
    v32 = 0;
  v33 = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v30 + v32 + v31 + v28 + 20);
  if ( !v33 )
  {
    DefaultTrustSubjectContext = -1073741801;
    goto LABEL_225;
  }
  *v33 = 0LL;
  v33[1] = 0LL;
  *((_DWORD *)v33 + 4) = 0;
  *(_BYTE *)v33 = 1;
  v34 = (char *)v33 + 20;
  if ( v101 )
    v13 |= 0x800u;
  *((_WORD *)v33 + 1) |= v13;
  v35 = *((_WORD *)v33 + 1);
  if ( (*(_WORD *)(a3 + 2) & 0x4000) != 0 )
  {
    *((_BYTE *)v33 + 1) = *(_BYTE *)(a3 + 1);
    *((_WORD *)v33 + 1) = v35 | 0x4000;
  }
  v36 = (unsigned __int16 *)Src;
  if ( Src )
  {
    memmove((char *)v33 + 20, Src, *((unsigned __int16 *)Src + 1));
    RtlpApplyAclToObject((char *)v33 + 20, a7);
    *((_DWORD *)v33 + 3) = 20;
    v37 = v36[1];
    if ( v31 > (unsigned int)v37 )
      memset(&v34[v37], 0, v31 - (unsigned int)v37);
    v34 += v31;
  }
  else
  {
    *((_DWORD *)v33 + 3) = 0;
  }
  v38 = v95;
  if ( (v13 & 0x10) == 0 )
    *((_WORD *)v33 + 1) |= *((_WORD *)*v95 + 1) & 0x2830;
  if ( v26 )
  {
    memmove(v34, v26, v26[1]);
    RtlpApplyAclToObject(v34, a7);
    *((_DWORD *)v33 + 4) = (_DWORD)v34 - (_DWORD)v33;
    v39 = v26[1];
    if ( v32 > (unsigned int)v39 )
      memset(&v34[v39], 0, v32 - (unsigned int)v39);
    v34 += v32;
  }
  else
  {
    *((_DWORD *)v33 + 4) = 0;
  }
  if ( (v13 & 4) != 0 || (*((_WORD *)v33 + 1) |= *((_WORD *)*v38 + 1) & 0x140C, !v79) )
  {
LABEL_50:
    v40 = (unsigned int)Size;
    memmove(v34, v93, (unsigned int)Size);
    v41 = (unsigned int)ClientToken;
    if ( (unsigned int)v40 < (unsigned int)ClientToken )
      memset(&v34[v40], 0, (unsigned int)((_DWORD)ClientToken - v40));
    v42 = (_DWORD)v34 - (_DWORD)v33;
    v43 = &v34[v41];
    *((_DWORD *)v33 + 1) = v42;
    if ( !(_BYTE)v87 )
      *((_WORD *)v33 + 1) |= *((_WORD *)*v38 + 1) & 1;
    v44 = (unsigned int)v91;
    memmove(v43, v94, (unsigned int)v91);
    if ( (unsigned int)v44 < v86 )
      memset(&v43[v44], 0, v86 - (unsigned int)v44);
    *((_DWORD *)v33 + 2) = (_DWORD)v43 - (_DWORD)v33;
    if ( !v81 )
      *((_WORD *)v33 + 1) |= *((_WORD *)*v38 + 1) & 2;
    ProcessHeap = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, *v38);
    *v38 = v33;
    DefaultTrustSubjectContext = 0;
  }
  else
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    DefaultTrustSubjectContext = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    if ( DefaultTrustSubjectContext >= 0 )
    {
      v116 = 4;
      Index = 0;
      while ( 1 )
      {
        if ( (*((_BYTE *)v33 + 2) & 4) == 0 )
          goto LABEL_235;
        if ( (*((_WORD *)v33 + 1) & 0x8000) != 0 )
          break;
        v74 = (char *)v33[4];
LABEL_237:
        AceBySid = RtlFindAceBySid(v74, Sid, &Index);
        if ( !AceBySid )
        {
          v38 = v95;
          goto LABEL_50;
        }
        v76 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
        ++Index;
        *(_BYTE *)(AceBySid + 1) = v76;
      }
      if ( *((_DWORD *)v33 + 4) )
      {
        v74 = (char *)v33 + *((unsigned int *)v33 + 4);
        goto LABEL_237;
      }
LABEL_235:
      v74 = 0LL;
      goto LABEL_237;
    }
LABEL_225:
    ProcessHeap = HeapHandle;
  }
LABEL_59:
  v46 = v88;
  v24 = v89;
  if ( BYTE1(v87) )
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
LABEL_61:
  if ( v46 && v83 )
    RtlFreeHeap(ProcessHeap, 0, v46);
  if ( v24 && BYTE2(v87) )
    RtlFreeHeap(ProcessHeap, 0, v24);
  if ( v104 && v85 )
    RtlFreeHeap(ProcessHeap, 0, v104);
  if ( v103 && v77 )
    RtlFreeHeap(ProcessHeap, 0, v103);
  if ( Src && v78 )
    RtlFreeHeap(ProcessHeap, 0, Src);
  if ( v80 )
  {
    v66 = v109;
    goto LABEL_172;
  }
  return (unsigned int)DefaultTrustSubjectContext;
}
