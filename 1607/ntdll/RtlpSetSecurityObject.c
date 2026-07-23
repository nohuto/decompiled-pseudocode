/*
 * XREFs of RtlpSetSecurityObject @ 0x180003850
 * Callers:
 *     RtlSetSecurityObject @ 0x180003820 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x180090C60 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlpApplyAclToObject @ 0x1800040B4 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800061A8 (RtlpCombineAcls.c)
 *     RtlInitializeSid @ 0x18000D5E0 (RtlInitializeSid.c)
 *     RtlValidSid @ 0x180014F70 (RtlValidSid.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18006B240 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlFindAceByType @ 0x18007A430 (RtlFindAceByType.c)
 *     RtlpComputeMergedAcl @ 0x18008FC58 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A8730 (NtOpenProcessToken.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E0DCC (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E11E8 (RtlpValidLabelSubjectContext.c)
 *     RtlpValidTrustSubjectContext @ 0x1800E1348 (RtlpValidTrustSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800E1A9C (RtlFindAceBySid.c)
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
  unsigned __int16 v12; // dx
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
  NTSTATUS ServerAcl; // ebx
  void *v46; // r15
  __int16 v48; // r9
  __int64 v49; // r8
  _DWORD *v50; // rax
  __int16 v51; // dx
  __int64 v52; // rcx
  void *v53; // rax
  __int64 v54; // r8
  void *v55; // rax
  __int16 v56; // ax
  void *v57; // rax
  __int16 v58; // dx
  __int16 v59; // r8
  int v60; // edx
  _DWORD *AceByType; // rax
  _DWORD *v62; // rdi
  HANDLE v63; // rcx
  _QWORD *v64; // rdi
  _DWORD *v65; // rax
  __int64 v66; // r8
  _DWORD *v67; // rbx
  PVOID v68; // r8
  __int16 v69; // ax
  __int16 v70; // cx
  __int16 v71; // cx
  _QWORD *Heap; // rdi
  void *v73; // r8
  int v74; // edx
  char *v75; // rax
  char *v76; // rcx
  __int64 AceBySid; // rax
  char v78; // cl
  char v79; // [rsp+51h] [rbp-AFh]
  bool v80; // [rsp+52h] [rbp-AEh]
  char v81; // [rsp+53h] [rbp-ADh]
  char v82; // [rsp+54h] [rbp-ACh]
  char v83; // [rsp+55h] [rbp-ABh]
  char v84; // [rsp+56h] [rbp-AAh]
  char v85; // [rsp+57h] [rbp-A9h]
  char v86; // [rsp+58h] [rbp-A8h]
  char v87; // [rsp+59h] [rbp-A7h]
  char v88; // [rsp+5Ah] [rbp-A6h]
  char v89; // [rsp+5Bh] [rbp-A5h] BYREF
  int v90; // [rsp+5Ch] [rbp-A4h]
  ULONG Index; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v92[3]; // [rsp+64h] [rbp-9Ch] BYREF
  int v93[2]; // [rsp+70h] [rbp-90h]
  PVOID v94; // [rsp+78h] [rbp-88h] BYREF
  NTSTATUS v95; // [rsp+80h] [rbp-80h] BYREF
  bool v96; // [rsp+84h] [rbp-7Ch]
  void *v97; // [rsp+88h] [rbp-78h]
  void *v98; // [rsp+90h] [rbp-70h]
  PVOID *v99; // [rsp+98h] [rbp-68h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A0h] [rbp-60h] BYREF
  size_t Size; // [rsp+A8h] [rbp-58h]
  HANDLE Handle; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h]
  HANDLE ClientToken; // [rsp+C0h] [rbp-40h]
  BOOL v105; // [rsp+C8h] [rbp-38h]
  ULONG TokenInformationLength; // [rsp+CCh] [rbp-34h] BYREF
  PVOID v107; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v108; // [rsp+D8h] [rbp-28h] BYREF
  PVOID HeapHandle; // [rsp+E0h] [rbp-20h]
  ULONG ReturnLength; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v111; // [rsp+F0h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v113; // [rsp+100h] [rbp+0h] BYREF
  PSID Sid2; // [rsp+108h] [rbp+8h]
  PVOID v115; // [rsp+110h] [rbp+10h]
  _BYTE TokenInformation[24]; // [rsp+118h] [rbp+18h] BYREF
  int v117; // [rsp+130h] [rbp+30h]
  int v118; // [rsp+134h] [rbp+34h]
  char Sid[8]; // [rsp+150h] [rbp+50h] BYREF
  int v120; // [rsp+158h] [rbp+58h]

  v8 = TokenHandle;
  ClientToken = TokenHandle;
  v10 = (__int64 *)a4;
  v82 = 0;
  v99 = (PVOID *)a4;
  v12 = *(_WORD *)(a3 + 2);
  v81 = 0;
  v89 = 0;
  LOBYTE(a4) = 0;
  v83 = 0;
  v88 = 0;
  v13 = 0x8000;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  BaseAddress = 0LL;
  Src = 0LL;
  v111 = 0LL;
  *(_QWORD *)&v92[1] = 0LL;
  v107 = 0LL;
  v94 = 0LL;
  v108 = 0LL;
  Sid2 = 0LL;
  v80 = 0;
  v105 = a4;
  v113 = 0LL;
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
  *(_QWORD *)v93 = v16;
  v115 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  if ( (*(_WORD *)(v15 + 2) & 0x8000) == 0 )
    return (unsigned int)-1073741593;
  v90 = 2048;
  v79 = (unsigned __int8)v12 >> 7;
  v96 = (v12 & 0x40) != 0;
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
        v105 = (v12 & (unsigned __int16)v90) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*(_DWORD *)(v15 + 4) )
      return (unsigned int)-1073741734;
    v19 = *(unsigned int *)(v15 + 4);
    v20 = v15 + v19 == 0;
    v21 = (void *)(v15 + v19);
    v97 = v21;
    if ( v20 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v80 = (a2 & 4) == 0;
  if ( (v12 & 0x8000) == 0 )
  {
    v53 = *(void **)(a3 + 8);
    goto LABEL_85;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v53 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_85:
    v97 = v53;
    goto LABEL_86;
  }
  v97 = 0LL;
LABEL_86:
  v81 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    v95 = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    ServerAcl = v95;
    if ( v95 < 0 )
      return (unsigned int)ServerAcl;
    if ( v118 < 1 && v117 == 2 )
      return (unsigned int)-1073741659;
    v8 = ClientToken;
    LOBYTE(v54) = v79;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(ClientToken, v97, v54, &v95) )
      return (unsigned int)-1073741734;
  }
  v21 = v97;
LABEL_12:
  if ( !RtlValidSid(v21) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( (*(_WORD *)(a3 + 2) & 0x8000) != 0 )
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v98 = 0LL;
        goto LABEL_96;
      }
      v55 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    else
    {
      v55 = *(void **)(a3 + 16);
    }
    v98 = v55;
LABEL_96:
    v23 = (char *)v98;
    v82 = 1;
    goto LABEL_18;
  }
  v22 = *v99;
  if ( (*((_WORD *)*v99 + 1) & 0x8000) != 0 )
  {
    if ( !v22[2] )
    {
LABEL_242:
      ServerAcl = -1073741733;
      goto LABEL_59;
    }
    v23 = (char *)v22 + (unsigned int)v22[2];
  }
  else
  {
    v23 = (char *)*((_QWORD *)v22 + 2);
  }
  v98 = v23;
LABEL_18:
  if ( !v23 )
    goto LABEL_242;
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0xF8) == 0 )
  {
    Src = v16;
    v24 = v94;
LABEL_22:
    if ( (a2 & 4) == 0 )
    {
      v75 = (char *)*v99;
      if ( (*((_BYTE *)*v99 + 2) & 4) != 0 )
      {
        if ( *((__int16 *)v75 + 1) >= 0 )
        {
          v26 = (unsigned __int16 *)*((_QWORD *)v75 + 4);
        }
        else if ( *((_DWORD *)v75 + 4) )
        {
          v26 = (unsigned __int16 *)&v75[*((unsigned int *)v75 + 4)];
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
    v48 = *(_WORD *)(a3 + 2);
    if ( (v48 & 4) == 0 )
      goto LABEL_204;
    if ( (v48 & 0x8000) == 0 )
    {
      v49 = *(_QWORD *)(a3 + 32);
      goto LABEL_74;
    }
    if ( *(_DWORD *)(a3 + 16) )
      LODWORD(v49) = a3 + *(_DWORD *)(a3 + 16);
    else
LABEL_204:
      LODWORD(v49) = 0;
LABEL_74:
    v50 = *v99;
    v51 = *((_WORD *)*v99 + 1);
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
    ServerAcl = RtlpComputeMergedAcl(
                  v52,
                  v51 & 0x140C,
                  v49,
                  v48 & 0x140C,
                  (__int64)v97,
                  (__int64)v98,
                  a7,
                  1,
                  (__int64)&BaseAddress,
                  (__int64)v92);
    if ( ServerAcl < 0 )
      goto LABEL_183;
    v26 = (unsigned __int16 *)BaseAddress;
    v83 = 1;
    v13 |= v92[0] & 0x1408 | 4;
LABEL_29:
    if ( v79 )
    {
      TokenInformationLength = 76;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
      if ( !Heap )
      {
        ServerAcl = -1073741801;
        goto LABEL_59;
      }
      ServerAcl = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
      v73 = Heap;
      if ( ServerAcl >= 0 )
      {
        ServerAcl = NtQueryInformationToken(Handle, 4u, Heap, TokenInformationLength, &TokenInformationLength);
        NtClose(Handle);
        if ( ServerAcl >= 0 )
        {
          LOBYTE(v74) = v96;
          ServerAcl = RtlpCreateServerAcl((_DWORD)v26, v74, *Heap, (unsigned int)&v113, (__int64)&v89);
          RtlFreeHeap(ProcessHeap, 0, Heap);
          if ( ServerAcl < 0 )
            goto LABEL_59;
          v26 = (unsigned __int16 *)v113;
          goto LABEL_30;
        }
        v73 = Heap;
      }
      RtlFreeHeap(ProcessHeap, 0, v73);
      goto LABEL_59;
    }
LABEL_30:
    v27 = 4 * *((unsigned __int8 *)v97 + 1) + 11;
    LODWORD(Size) = 4 * *((unsigned __int8 *)v97 + 1) + 8;
    v28 = v27 & 0xFFFFFFFC;
    LODWORD(ClientToken) = v28;
    v29 = 4 * *((unsigned __int8 *)v98 + 1) + 11;
    v95 = 4 * *((unsigned __int8 *)v98 + 1) + 8;
    v30 = v29 & 0xFFFFFFFC;
    v92[0] = v30;
    if ( Src )
      v31 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v31 = 0;
    if ( v26 )
      v32 = (v26[1] + 3) & 0xFFFFFFFC;
    else
      v32 = 0;
    v33 = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v30 + v32 + v31 + v28 + 20);
    if ( v33 )
    {
      *v33 = 0LL;
      v33[1] = 0LL;
      *((_DWORD *)v33 + 4) = 0;
      *(_BYTE *)v33 = 1;
      v34 = (char *)v33 + 20;
      if ( v105 )
        v13 |= v90;
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
      v38 = v99;
      if ( (v13 & 0x10) == 0 )
        *((_WORD *)v33 + 1) |= *((_WORD *)*v99 + 1) & 0x2830;
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
      if ( (v13 & 4) != 0 || (*((_WORD *)v33 + 1) |= *((_WORD *)*v38 + 1) & 0x140C, !v80) )
      {
LABEL_50:
        v40 = (unsigned int)Size;
        memmove(v34, v97, (unsigned int)Size);
        v41 = (unsigned int)ClientToken;
        if ( (unsigned int)v40 < (unsigned int)ClientToken )
          memset(&v34[v40], 0, (unsigned int)((_DWORD)ClientToken - v40));
        v42 = (_DWORD)v34 - (_DWORD)v33;
        v43 = &v34[v41];
        *((_DWORD *)v33 + 1) = v42;
        if ( !v81 )
          *((_WORD *)v33 + 1) |= *((_WORD *)*v38 + 1) & 1;
        v44 = (unsigned int)v95;
        memmove(v43, v98, (unsigned int)v95);
        if ( (unsigned int)v44 < v92[0] )
          memset(&v43[v44], 0, (unsigned int)(v92[0] - v44));
        *((_DWORD *)v33 + 2) = (_DWORD)v43 - (_DWORD)v33;
        if ( !v82 )
          *((_WORD *)v33 + 1) |= *((_WORD *)*v38 + 1) & 2;
        ProcessHeap = HeapHandle;
        RtlFreeHeap(HeapHandle, 0, *v38);
        *v38 = v33;
        ServerAcl = 0;
        goto LABEL_59;
      }
      *(_DWORD *)IdentifierAuthority.Value = 0;
      *(_WORD *)&IdentifierAuthority.Value[4] = 768;
      ServerAcl = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      if ( ServerAcl >= 0 )
      {
        v120 = 4;
        Index = 0;
        while ( 1 )
        {
          if ( (*((_BYTE *)v33 + 2) & 4) == 0 )
            goto LABEL_237;
          if ( (*((_WORD *)v33 + 1) & 0x8000) != 0 )
            break;
          v76 = (char *)v33[4];
LABEL_239:
          AceBySid = RtlFindAceBySid(v76, Sid, &Index);
          if ( !AceBySid )
          {
            v38 = v99;
            goto LABEL_50;
          }
          v78 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
          ++Index;
          *(_BYTE *)(AceBySid + 1) = v78;
        }
        if ( *((_DWORD *)v33 + 4) )
        {
          v76 = (char *)v33 + *((unsigned int *)v33 + 4);
          goto LABEL_239;
        }
LABEL_237:
        v76 = 0LL;
        goto LABEL_239;
      }
    }
    else
    {
      ServerAcl = -1073741801;
    }
    ProcessHeap = HeapHandle;
LABEL_59:
    v46 = *(void **)&v92[1];
    v24 = v94;
    if ( v83 )
      RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    goto LABEL_61;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v14, 0x11u, &Index);
      v62 = AceByType;
      if ( AceByType )
      {
        v20 = (AceByType[1] & 0xFFFFFFF8) == 0;
        Sid2 = AceByType + 2;
        if ( !v20 )
          return (unsigned int)-1073740730;
      }
      if ( v8 )
      {
        v95 = NtQueryInformationToken(v8, 0xAu, TokenInformation, 0x38u, &ReturnLength);
        ServerAcl = v95;
        if ( v95 < 0 )
          return (unsigned int)ServerAcl;
        if ( v117 == 2 && v118 < 1 )
          return (unsigned int)-1073741659;
      }
      else
      {
        v95 = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
        ServerAcl = v95;
        if ( v95 < 0 )
          return (unsigned int)ServerAcl;
      }
      v8 = ClientToken;
      v63 = Handle;
      if ( ClientToken )
        v63 = ClientToken;
      if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v63, Sid2) )
        break;
      NtClose(Handle);
      ++Index;
      if ( !v62 )
        goto LABEL_101;
    }
    NtClose(Handle);
    return (unsigned int)-1073740730;
  }
LABEL_101:
  LODWORD(ClientToken) = a2 & 0x80;
  if ( (a2 & 0x80) == 0 )
    goto LABEL_102;
  ServerAcl = RtlpGetDefaultTrustSubjectContext(v8);
  v95 = ServerAcl;
  if ( ServerAcl < 0 )
    return (unsigned int)ServerAcl;
  v64 = v115;
  if ( !*(_QWORD *)v115 )
  {
LABEL_169:
    RtlFreeHeap(ProcessHeap, 0, v64);
    return (unsigned int)-1073741790;
  }
  Index = 0;
  do
  {
    v65 = RtlFindAceByType(v14, 0x14u, &Index);
    v67 = v65;
    if ( v65 )
    {
      if ( (v65[1] & 0xFF000000) != 0 )
      {
        ServerAcl = -1073740730;
        v68 = v64;
LABEL_172:
        RtlFreeHeap(ProcessHeap, 0, v68);
        return (unsigned int)ServerAcl;
      }
      if ( !(unsigned __int8)RtlpValidTrustSubjectContext(*v64, v65 + 2, v66, &v95) )
        goto LABEL_169;
    }
    ++Index;
  }
  while ( v67 );
  RtlFreeHeap(ProcessHeap, 0, v64);
LABEL_102:
  if ( (a2 & 8) == 0 )
  {
    v57 = *(void **)v93;
    *(_QWORD *)&v92[1] = *(_QWORD *)v93;
    goto LABEL_107;
  }
  if ( (a5 & 2) != 0 )
  {
    ServerAcl = RtlpComputeMergedAcl(
                  v93[0],
                  ((unsigned __int8)*((_WORD *)*v99 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)*v99 + 1) >> 2) & 8 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x1400u,
                  (int)v14,
                  ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x1400u,
                  (__int64)v97,
                  (__int64)v98,
                  a7,
                  2,
                  (__int64)&v92[1],
                  (__int64)v92);
    if ( ServerAcl >= 0 )
    {
      v84 = 1;
      v13 = (4 * (v92[0] & 4)) | (4 * (v92[0] & 8)) | (2 * (v92[0] & 0x400)) | (2 * (v92[0] & 0x1000)) | 0x8010;
      goto LABEL_106;
    }
    v46 = *(void **)&v92[1];
    v24 = v94;
    goto LABEL_61;
  }
  v56 = *(_WORD *)(a3 + 2);
  *(_QWORD *)&v92[1] = v14;
  v13 = v56 & 0x2000 | 0x8010;
  if ( (v56 & 0xA00) == 0xA00 )
    v13 |= v90;
LABEL_106:
  v57 = *(void **)v93;
LABEL_107:
  if ( (a2 & 0x20) == 0 )
  {
    v58 = v90;
    v94 = v57;
    goto LABEL_109;
  }
  if ( (a5 & 2) == 0 )
  {
    v94 = v14;
    v69 = *(_WORD *)(a3 + 2);
    v13 |= v69 & 0x2000 | 0x10;
    if ( (v69 & 0xA00) == 0xA00 )
    {
      v58 = v90;
      v13 |= v90;
    }
    else
    {
LABEL_180:
      v58 = v90;
    }
    v57 = *(void **)v93;
LABEL_109:
    if ( (a2 & 0x40) != 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        ServerAcl = RtlpComputeMergedAcl(
                      v93[0],
                      ((unsigned __int8)*((_WORD *)*v99 + 1) >> 2) & 4 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)*v99 + 1) >> 2) & 8u,
                      (int)v14,
                      ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                      (__int64)v97,
                      (__int64)v98,
                      a7,
                      2,
                      (__int64)&v107,
                      (__int64)v92);
        if ( ServerAcl < 0 )
          goto LABEL_182;
        v86 = 1;
        v13 |= (4 * (v92[0] & 4)) | (4 * (v92[0] & 8)) | (2 * (v92[0] & 0x400)) | (2 * (v92[0] & 0x1000)) | 0x10;
      }
      else
      {
        v70 = *(_WORD *)(a3 + 2);
        v107 = v14;
        v13 |= v70 & 0x2000 | 0x10;
        if ( (v70 & 0xA00) == 0xA00 )
          v13 |= v58;
      }
      v57 = *(void **)v93;
    }
    else
    {
      v107 = v57;
    }
    if ( !(_DWORD)ClientToken )
    {
      v59 = v90;
      v108 = v57;
LABEL_113:
      if ( (_DWORD)Size )
      {
        v13 |= *(_WORD *)(a3 + 2) & 0x2000 | 0x10;
        if ( (*(_WORD *)(a3 + 2) & 0xA00) == 0xA00 )
          v13 |= v59;
      }
      else
      {
        LODWORD(v14) = (_DWORD)v57;
      }
      v24 = v94;
      v60 = (int)v14;
      v46 = *(void **)&v92[1];
      ServerAcl = RtlpCombineAcls(v92[1], v60, (_DWORD)v94, (_DWORD)v107, (__int64)v108, (__int64)&v111, 0LL);
      if ( ServerAcl < 0 )
        goto LABEL_61;
      Src = v111;
      if ( !v46 && v111 && !*((_WORD *)v111 + 2) )
      {
        RtlFreeHeap(ProcessHeap, 0, v111);
        Src = 0LL;
      }
      v88 = 1;
      goto LABEL_22;
    }
    if ( (a5 & 2) != 0 )
    {
      ServerAcl = RtlpComputeMergedAcl(
                    v93[0],
                    ((unsigned __int8)*((_WORD *)*v99 + 1) >> 2) & 4 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)*v99 + 1) >> 2) & 8u,
                    (int)v14,
                    ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                    (__int64)v97,
                    (__int64)v98,
                    a7,
                    2,
                    (__int64)&v108,
                    (__int64)v92);
      if ( ServerAcl < 0 )
        goto LABEL_182;
      v87 = 1;
      v13 |= (4 * (v92[0] & 4)) | (4 * (v92[0] & 8)) | (2 * (v92[0] & 0x400)) | (2 * (v92[0] & 0x1000)) | 0x10;
    }
    else
    {
      v71 = *(_WORD *)(a3 + 2);
      v108 = v14;
      v13 |= v71 & 0x2000 | 0x10;
      if ( (v71 & 0xA00) == 0xA00 )
      {
        v59 = v90;
        v13 |= v90;
        goto LABEL_196;
      }
    }
    v59 = v90;
LABEL_196:
    LODWORD(v57) = v93[0];
    goto LABEL_113;
  }
  ServerAcl = RtlpComputeMergedAcl(
                v93[0],
                ((unsigned __int8)*((_WORD *)*v99 + 1) >> 2) & 4 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)*v99 + 1) >> 2) & 8u,
                (int)v14,
                ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 4 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x400 | ((unsigned __int8)*(_WORD *)(a3 + 2) >> 2) & 8u,
                (__int64)v97,
                (__int64)v98,
                a7,
                2,
                (__int64)&v94,
                (__int64)v92);
  if ( ServerAcl >= 0 )
  {
    v85 = 1;
    v13 |= (4 * (v92[0] & 4)) | (4 * (v92[0] & 8)) | (2 * (v92[0] & 0x400)) | (2 * (v92[0] & 0x1000)) | 0x10;
    goto LABEL_180;
  }
LABEL_182:
  v24 = v94;
LABEL_183:
  v46 = *(void **)&v92[1];
LABEL_61:
  if ( v46 && v84 )
    RtlFreeHeap(ProcessHeap, 0, v46);
  if ( v24 && v85 )
    RtlFreeHeap(ProcessHeap, 0, v24);
  if ( v107 && v86 )
    RtlFreeHeap(ProcessHeap, 0, v107);
  if ( v108 && v87 )
    RtlFreeHeap(ProcessHeap, 0, v108);
  if ( Src && v88 )
    RtlFreeHeap(ProcessHeap, 0, Src);
  if ( v89 )
  {
    v68 = v113;
    goto LABEL_172;
  }
  return (unsigned int)ServerAcl;
}
