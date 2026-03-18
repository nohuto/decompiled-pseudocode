/*
 * XREFs of SeLogAccessFailure @ 0x1400E6334
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     SepFlattenAcl @ 0x1402011E0 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x140201350 (SepGetLearningModeObjectInformation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 */

void __fastcall SeLogAccessFailure(__int64 a1, __int64 a2, __int64 a3, ULONGLONG a4, ULONGLONG a5, char a6, char a7)
{
  ULONG v7; // r12d
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // al
  const wchar_t *v10; // rax
  __int64 LearningModeObjectInformation; // rax
  PVOID *v12; // r15
  unsigned __int16 *v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int16 *v15; // rdx
  __int16 *v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  int *v21; // rax
  unsigned int v22; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v24; // rdi
  int *v25; // rax
  unsigned int v26; // edi
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rdx
  ULONGLONG v32; // rcx
  int v33; // eax
  unsigned int v34; // eax
  __int64 *v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rax
  PVOID v38; // rax
  _DWORD *v39; // r13
  unsigned int v40; // ecx
  unsigned int v41; // r15d
  __int64 v42; // rbx
  unsigned __int8 *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  ULONGLONG v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // edi
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  PSID v53; // r9
  _WORD *v54; // r13
  __int16 v55; // r10
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // edi
  __int16 v59; // r8
  __int64 v60; // rax
  ULONGLONG v61; // rdx
  __int64 v62; // rcx
  unsigned int v63; // edi
  int v64; // eax
  __int64 v65; // rax
  ULONGLONG v66; // rdx
  __int64 v67; // rcx
  unsigned int v68; // edi
  int v69; // eax
  __int64 v70; // rax
  ULONGLONG v71; // rbx
  int v72; // eax
  PVOID v73; // r12
  bool v74; // sf
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // edi
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned int v82; // edi
  __int64 v83; // rax
  ULONGLONG v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  PVOID v87; // rbx
  __int64 v88; // rax
  unsigned int v89; // edi
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int16 v93; // [rsp+38h] [rbp-D0h] BYREF
  char v94[2]; // [rsp+3Ah] [rbp-CEh] BYREF
  _WORD v95[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v96; // [rsp+40h] [rbp-C8h] BYREF
  int v97; // [rsp+44h] [rbp-C4h] BYREF
  int v98; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v99; // [rsp+4Ch] [rbp-BCh] BYREF
  int v100; // [rsp+50h] [rbp-B8h] BYREF
  int v101; // [rsp+54h] [rbp-B4h] BYREF
  int v102; // [rsp+58h] [rbp-B0h] BYREF
  int v103; // [rsp+5Ch] [rbp-ACh] BYREF
  PVOID v104; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v105; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v106; // [rsp+70h] [rbp-98h]
  int v107; // [rsp+78h] [rbp-90h] BYREF
  int v108; // [rsp+80h] [rbp-88h] BYREF
  int v109; // [rsp+84h] [rbp-84h] BYREF
  PVOID v110; // [rsp+88h] [rbp-80h]
  PVOID P; // [rsp+90h] [rbp-78h]
  ULONGLONG v112; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  __int16 *v114; // [rsp+B8h] [rbp-50h]
  __int64 v115; // [rsp+C0h] [rbp-48h]
  __int16 *v116; // [rsp+C8h] [rbp-40h]
  __int64 v117; // [rsp+D0h] [rbp-38h]
  __int16 *v118; // [rsp+D8h] [rbp-30h]
  __int64 v119; // [rsp+E0h] [rbp-28h]
  __int16 *v120; // [rsp+E8h] [rbp-20h]
  __int64 v121; // [rsp+F0h] [rbp-18h]
  char *v122; // [rsp+F8h] [rbp-10h]
  __int64 v123; // [rsp+100h] [rbp-8h]
  int *v124; // [rsp+108h] [rbp+0h]
  __int64 v125; // [rsp+110h] [rbp+8h]
  int *v126; // [rsp+118h] [rbp+10h]
  __int64 v127; // [rsp+120h] [rbp+18h]
  __int64 v128; // [rsp+128h] [rbp+20h]
  __int64 v129; // [rsp+130h] [rbp+28h]
  int *v130; // [rsp+138h] [rbp+30h]
  __int64 v131; // [rsp+140h] [rbp+38h]
  int *v132; // [rsp+148h] [rbp+40h]
  __int64 v133; // [rsp+150h] [rbp+48h]
  _DWORD *v134; // [rsp+158h] [rbp+50h]
  unsigned int v135; // [rsp+160h] [rbp+58h]
  int v136; // [rsp+164h] [rbp+5Ch]

  v7 = 0;
  v106 = 0LL;
  v8 = a1;
  v104 = 0LL;
  LOWORD(v97) = 0;
  v105 = 0LL;
  LOWORD(v96) = 0;
  v94[0] = 0;
  v98 = 0;
  v93 = 0;
  v95[0] = 0;
  v112 = a4;
  v101 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( !byte_140306784 || CurrentIrql >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( a1 )
  {
    v103 = *(_DWORD *)(a1 + 192);
    v102 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v8 = PsReferenceEffectiveToken(
           (unsigned int)KeGetCurrentThread(),
           (unsigned int)&v103,
           (unsigned int)&v100,
           (unsigned int)&v102,
           0LL);
    if ( !v8 )
      return;
    HIBYTE(v93) = 1;
  }
  if ( a7 )
  {
    v10 = L"Permissive";
    *(_QWORD *)&UserData.Size = 22LL;
  }
  else
  {
    v10 = L"Normal";
    *(_QWORD *)&UserData.Size = 14LL;
  }
  UserData.Ptr = (ULONGLONG)v10;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v94);
  v110 = (PVOID)LearningModeObjectInformation;
  v12 = (PVOID *)LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v13 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v14 = v13[1];
    if ( (unsigned __int64)*v13 + 2 < v14 )
      LODWORD(v14) = *v13 + 2;
    v114 = (__int16 *)*((_QWORD *)v13 + 1);
    v115 = (unsigned int)v14;
  }
  else
  {
    v114 = &word_140167200;
    v115 = 2LL;
  }
  if ( LearningModeObjectInformation && (v15 = *(unsigned __int16 **)(LearningModeObjectInformation + 24)) != 0LL )
  {
    if ( *(_QWORD *)(LearningModeObjectInformation + 32)
      && (v16 = *(__int16 **)(LearningModeObjectInformation + 48)) != 0LL )
    {
      LODWORD(v117) = *(unsigned __int16 *)(LearningModeObjectInformation + 42);
      v116 = v16;
    }
    else
    {
      v17 = v15[1];
      if ( (unsigned __int64)*v15 + 2 < v17 )
        LODWORD(v17) = *v15 + 2;
      v116 = (__int16 *)*((_QWORD *)v15 + 1);
      LODWORD(v117) = v17;
    }
    HIDWORD(v117) = 0;
  }
  else
  {
    v116 = &word_140167200;
    v117 = 2LL;
  }
  v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
  if ( v18 )
  {
    v19 = *(unsigned __int16 *)(v18 + 2);
    v118 = *(__int16 **)(v18 + 8);
    v119 = v19;
  }
  else
  {
    v118 = &word_140167200;
    v119 = 2LL;
  }
  v120 = &word_140167200;
  v122 = &a6;
  v124 = &v103;
  v126 = &v102;
  v128 = v8 + 120;
  v121 = 2LL;
  v123 = 4LL;
  v125 = 4LL;
  v127 = 4LL;
  v129 = 4LL;
  v20 = *(_QWORD *)(v8 + 1080);
  v131 = 4LL;
  if ( v20 )
    v21 = (int *)(v20 + 40);
  else
    v21 = &v98;
  v130 = v21;
  v108 = 1;
  v22 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v8 + 152) + 1LL) + 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x69536553u);
  P = PoolWithTag;
  v24 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_DWORD *)(*(_QWORD *)(v8 + 152) + 8LL);
    memmove(PoolWithTag + 1, **(const void ***)(v8 + 152), 4 * *(unsigned __int8 *)(**(_QWORD **)(v8 + 152) + 1LL) + 8);
    v134 = v24;
    v25 = &v108;
    v26 = 12;
    v135 = v22;
    v136 = 0;
  }
  else
  {
    v25 = &v98;
    v26 = 11;
  }
  v132 = v25;
  v27 = v26;
  v28 = v26 + 1;
  v29 = 2 * v27;
  v133 = 4LL;
  v30 = *(_QWORD *)(v8 + 784) == 0LL;
  *((_QWORD *)&UserData.Size + v29) = 4LL;
  if ( v30 )
  {
    *(&UserData.Ptr + v29) = (ULONGLONG)&v98;
  }
  else
  {
    *(&UserData.Ptr + v29) = (ULONGLONG)&v101;
    v31 = 2LL * v28;
    v32 = *(_QWORD *)(v8 + 784);
    ++v28;
    v33 = *(unsigned __int8 *)(v32 + 1);
    *(&UserData.Ptr + v31) = v32;
    *(&UserData.Reserved + 2 * v31) = 0;
    *(&UserData.Size + 2 * v31) = 4 * v33 + 8;
  }
  if ( !*(_DWORD *)(v8 + 800) )
  {
    v46 = 2LL * v28;
    *(&UserData.Ptr + v46) = (ULONGLONG)&v98;
    *((_QWORD *)&UserData.Size + v46) = 4LL;
    goto LABEL_54;
  }
  v99 = 0;
  v34 = *(_DWORD *)(v8 + 800);
  if ( v34 )
  {
    v35 = *(__int64 **)(v8 + 792);
    v36 = v34;
    do
    {
      v37 = *v35;
      v35 += 2;
      v7 += 4 * *(unsigned __int8 *)(v37 + 1) + 12;
      --v36;
    }
    while ( v36 );
  }
  v38 = ExAllocatePoolWithTag(PagedPool, v7, 0x69536553u);
  v106 = v38;
  v39 = v38;
  if ( v38 )
  {
    v40 = *(_DWORD *)(v8 + 800);
    v99 = v40;
    if ( v40 )
    {
      v41 = 0;
      do
      {
        v42 = 2LL * v41;
        *v39 = *(_DWORD *)(*(_QWORD *)(v8 + 792) + 16LL * v41 + 8);
        v43 = *(unsigned __int8 **)(*(_QWORD *)(v8 + 792) + 16LL * v41);
        memmove(v39 + 1, v43, 4 * v43[1] + 8);
        ++v41;
        v39 += *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 792) + 8 * v42) + 1LL) + 3;
        v40 = v99;
      }
      while ( v41 < v99 );
      v12 = (PVOID *)v110;
      v39 = v106;
    }
    else
    {
      v39 = v38;
    }
  }
  else
  {
    v40 = v99;
  }
  v44 = 2LL * v28++;
  *(&UserData.Ptr + v44) = (ULONGLONG)&v99;
  *((_QWORD *)&UserData.Size + v44) = 4LL;
  if ( v40 )
  {
    v45 = 2LL * v28;
    *(&UserData.Size + 2 * v45) = v7;
    *(&UserData.Reserved + 2 * v45) = 0;
    *(&UserData.Ptr + v45) = (ULONGLONG)v39;
LABEL_54:
    ++v28;
  }
  v47 = v112;
  v48 = v28;
  v49 = v28 + 1;
  v50 = 2 * v48;
  *((_QWORD *)&UserData.Size + v50) = 4LL;
  if ( v47 )
  {
    *(&UserData.Ptr + v50) = (ULONGLONG)&v101;
    v51 = 2LL * v49++;
    v52 = 4 * *(unsigned __int8 *)(v47 + 1) + 8;
    *(&UserData.Ptr + v51) = v47;
    *(&UserData.Size + 2 * v51) = v52;
    *(&UserData.Reserved + 2 * v51) = 0;
  }
  else
  {
    *(&UserData.Ptr + v50) = (ULONGLONG)&v98;
  }
  v53 = SeNullSid;
  v54 = (_WORD *)(a5 + 2);
  v55 = *(_WORD *)(a5 + 2);
  v56 = 2LL * v49;
  *(&UserData.Ptr + v56) = a5;
  *((_QWORD *)&UserData.Size + v56) = 1LL;
  v57 = v49 + 1;
  v58 = v49 + 2;
  v57 *= 2LL;
  *(&UserData.Ptr + v57) = a5 + 2;
  *((_QWORD *)&UserData.Size + v57) = 2LL;
  v59 = v55 & 0x8000;
  if ( v55 >= 0 )
  {
    v61 = *(_QWORD *)(a5 + 8);
LABEL_62:
    if ( v61 )
      goto LABEL_64;
    goto LABEL_63;
  }
  v60 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v60 )
  {
    v61 = a5 + v60;
    goto LABEL_62;
  }
LABEL_63:
  v61 = (ULONGLONG)v53;
LABEL_64:
  v62 = v58;
  v63 = v58 + 1;
  v62 *= 2LL;
  v64 = 4 * *(unsigned __int8 *)(v61 + 1) + 8;
  *(&UserData.Ptr + v62) = v61;
  *(&UserData.Size + 2 * v62) = v64;
  *(&UserData.Reserved + 2 * v62) = 0;
  if ( !v59 )
  {
    v66 = *(_QWORD *)(a5 + 8);
LABEL_68:
    if ( v66 )
      goto LABEL_70;
    goto LABEL_69;
  }
  v65 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v65 )
  {
    v66 = a5 + v65;
    goto LABEL_68;
  }
LABEL_69:
  v66 = (ULONGLONG)v53;
LABEL_70:
  v67 = v63;
  v68 = v63 + 1;
  v67 *= 2LL;
  v69 = 4 * *(unsigned __int8 *)(v66 + 1) + 8;
  *(&UserData.Ptr + v67) = v66;
  *(&UserData.Size + 2 * v67) = v69;
  *(&UserData.Reserved + 2 * v67) = 0;
  if ( (v55 & 4) == 0 )
    goto LABEL_78;
  if ( v59 )
  {
    v70 = *(unsigned int *)(a5 + 16);
    if ( (_DWORD)v70 )
    {
      v71 = a5 + v70;
      goto LABEL_75;
    }
LABEL_78:
    v73 = v104;
    v75 = v68;
    goto LABEL_79;
  }
  v71 = *(_QWORD *)(a5 + 32);
LABEL_75:
  if ( !v71 )
    goto LABEL_78;
  v72 = SepFlattenAcl(v71, &v104, &v107, &v97);
  v73 = v104;
  v74 = v72 < 0;
  v75 = v68;
  if ( !v74 )
  {
    v76 = 2LL * v68;
    *(&UserData.Ptr + v76) = v71;
    *((_QWORD *)&UserData.Size + v76) = 1LL;
    v77 = v68 + 1;
    v78 = v68 + 2;
    v77 *= 2LL;
    *(&UserData.Ptr + v77) = (ULONGLONG)&v97;
    *((_QWORD *)&UserData.Size + v77) = 2LL;
    LODWORD(v77) = v107;
    v79 = 2LL * v78;
    *(&UserData.Reserved + 2 * v79) = 0;
    *(&UserData.Ptr + v79) = (ULONGLONG)v73;
    *(&UserData.Size + 2 * v79) = v77;
    goto LABEL_80;
  }
LABEL_79:
  v80 = 2 * v75;
  v78 = v68 + 1;
  *(&UserData.Ptr + v80) = (ULONGLONG)&v93;
  *((_QWORD *)&UserData.Size + v80) = 1LL;
  v81 = 16LL * v78;
  *(_QWORD *)((char *)&UserData.Size + v81) = 2LL;
  *(ULONGLONG *)((char *)&UserData.Ptr + v81) = (ULONGLONG)v95;
LABEL_80:
  v82 = v78 + 1;
  if ( (*v54 & 0x10) == 0 )
    goto LABEL_88;
  if ( (*v54 & 0x8000) != 0 )
  {
    v83 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v83 )
    {
      v84 = a5 + v83;
      goto LABEL_85;
    }
LABEL_88:
    v85 = v82;
    goto LABEL_89;
  }
  v84 = *(_QWORD *)(a5 + 24);
LABEL_85:
  if ( !v84 )
    goto LABEL_88;
  v74 = (int)SepFlattenAcl(v84, &v105, &v109, &v96) < 0;
  v85 = v82;
  if ( v74 )
  {
LABEL_89:
    v87 = v105;
    v91 = 2 * v85;
    v89 = v82 + 1;
    *(&UserData.Ptr + v91) = (ULONGLONG)&v93;
    *((_QWORD *)&UserData.Size + v91) = 1LL;
    v92 = 2LL * v89;
    *((_QWORD *)&UserData.Size + v92) = 2LL;
    *(&UserData.Ptr + v92) = (ULONGLONG)v95;
    goto LABEL_90;
  }
  v86 = 2LL * v82;
  *(&UserData.Ptr + v86) = v84;
  v87 = v105;
  *((_QWORD *)&UserData.Size + v86) = 1LL;
  v88 = v82 + 1;
  v89 = v82 + 2;
  v88 *= 2LL;
  *(&UserData.Ptr + v88) = (ULONGLONG)&v96;
  *((_QWORD *)&UserData.Size + v88) = 2LL;
  LODWORD(v88) = v109;
  v90 = 2LL * v89;
  *(&UserData.Ptr + v90) = (ULONGLONG)v87;
  *(&UserData.Size + 2 * v90) = v88;
  *(&UserData.Reserved + 2 * v90) = 0;
LABEL_90:
  EtwWrite(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, v89 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v106 )
    ExFreePoolWithTag(v106, 0);
  if ( v73 )
    ExFreePoolWithTag(v73, 0);
  if ( v87 )
    ExFreePoolWithTag(v87, 0);
  if ( HIBYTE(v93) )
    ObfDereferenceObject((PVOID)v8);
  if ( v94[0] )
  {
    ExFreePoolWithTag(*((PVOID *)v12[2] + 1), 0);
    ExFreePoolWithTag(v12[2], 0);
    ExFreePoolWithTag(*((PVOID *)v12[3] + 1), 0);
    ExFreePoolWithTag(v12[3], 0);
    ExFreePoolWithTag(v12, 0);
  }
}
