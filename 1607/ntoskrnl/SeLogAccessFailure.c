/*
 * XREFs of SeLogAccessFailure @ 0x140061150
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SepFlattenAcl @ 0x14021AB40 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x14021ACB0 (SepGetLearningModeObjectInformation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 */

void __fastcall SeLogAccessFailure(__int64 a1, __int64 a2, __int64 a3, ULONGLONG a4, ULONGLONG a5, char a6, char a7)
{
  ULONGLONG v7; // rsi
  char v8; // r12
  __int64 v10; // rbx
  void *v11; // r14
  unsigned __int8 CurrentIrql; // al
  const wchar_t *v13; // rax
  __int64 LearningModeObjectInformation; // rax
  __int64 v15; // rdi
  unsigned __int16 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int16 *v19; // rdx
  const size_t *v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  int *v25; // rax
  unsigned int v26; // r13d
  _DWORD *PoolWithTag; // rax
  unsigned int v28; // r13d
  __int64 v29; // rax
  unsigned int v30; // r13d
  __int64 v31; // rax
  bool v32; // zf
  ULONGLONG v33; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v34; // rdx
  int v35; // eax
  SIZE_T v36; // rdx
  unsigned int v37; // eax
  __int64 *v38; // r9
  __int64 v39; // r10
  __int64 v40; // rax
  PVOID v41; // rax
  unsigned int v42; // ecx
  unsigned int v43; // esi
  _DWORD *v44; // r13
  __int64 v45; // rdi
  unsigned __int8 *v46; // rdx
  __int64 v47; // rax
  ULONG v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r13d
  __int64 v53; // rax
  struct _EVENT_DATA_DESCRIPTOR *v54; // rcx
  unsigned int v55; // eax
  __int16 v56; // r10
  unsigned __int8 *v57; // r9
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r13d
  __int16 v61; // r8
  __int64 v62; // rax
  unsigned __int8 *v63; // rdx
  __int64 v64; // rax
  unsigned int v65; // r13d
  _QWORD *v66; // rcx
  __int64 v67; // rax
  unsigned __int8 *v68; // rdx
  __int64 v69; // rax
  unsigned int v70; // r13d
  _QWORD *v71; // rcx
  __int64 v72; // rax
  ULONGLONG v73; // r15
  bool v74; // sf
  __int64 v75; // rax
  __int64 v76; // rax
  PVOID v77; // r15
  __int64 v78; // rax
  unsigned int v79; // r13d
  struct _EVENT_DATA_DESCRIPTOR *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int16 v83; // ax
  unsigned int v84; // r13d
  __int64 v85; // rax
  ULONGLONG v86; // r15
  int v87; // eax
  PVOID v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned int v92; // r13d
  struct _EVENT_DATA_DESCRIPTOR *v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  char v96; // [rsp+30h] [rbp-D0h] BYREF
  char v97[3]; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v98[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v99[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v100[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  int v101; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v102; // [rsp+44h] [rbp-BCh] BYREF
  char v103; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v104; // [rsp+50h] [rbp-B0h] BYREF
  int v105; // [rsp+58h] [rbp-A8h] BYREF
  int v106; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v107; // [rsp+60h] [rbp-A0h]
  ULONG v108; // [rsp+64h] [rbp-9Ch]
  int v109; // [rsp+68h] [rbp-98h] BYREF
  PVOID v110; // [rsp+70h] [rbp-90h] BYREF
  int v111; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v112; // [rsp+7Ch] [rbp-84h]
  int v113; // [rsp+80h] [rbp-80h] BYREF
  int v114; // [rsp+84h] [rbp-7Ch] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  __int64 v116; // [rsp+90h] [rbp-70h]
  __int64 v117; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  const size_t *v119; // [rsp+B0h] [rbp-50h]
  __int64 v120; // [rsp+B8h] [rbp-48h]
  const size_t *v121; // [rsp+C0h] [rbp-40h]
  __int64 v122; // [rsp+C8h] [rbp-38h]
  const size_t *v123; // [rsp+D0h] [rbp-30h]
  __int64 v124; // [rsp+D8h] [rbp-28h]
  const size_t *v125; // [rsp+E0h] [rbp-20h]
  __int64 v126; // [rsp+E8h] [rbp-18h]
  char *v127; // [rsp+F0h] [rbp-10h]
  __int64 v128; // [rsp+F8h] [rbp-8h]
  int *v129; // [rsp+100h] [rbp+0h]
  __int64 v130; // [rsp+108h] [rbp+8h]
  int *v131; // [rsp+110h] [rbp+10h]
  __int64 v132; // [rsp+118h] [rbp+18h]
  __int64 v133; // [rsp+120h] [rbp+20h]
  __int64 v134; // [rsp+128h] [rbp+28h]
  int *v135; // [rsp+130h] [rbp+30h]
  __int64 v136; // [rsp+138h] [rbp+38h]
  int *v137; // [rsp+140h] [rbp+40h]
  __int64 v138; // [rsp+148h] [rbp+48h]
  PVOID v139; // [rsp+150h] [rbp+50h]
  unsigned int v140; // [rsp+158h] [rbp+58h]
  int v141; // [rsp+15Ch] [rbp+5Ch]

  v7 = a5;
  v8 = 0;
  v116 = a5;
  v97[0] = 0;
  v96 = 0;
  v10 = a1;
  v11 = 0LL;
  v104 = 0LL;
  v99[0] = 0;
  v110 = 0LL;
  v100[0] = 0;
  v109 = 1;
  v101 = 0;
  v98[0] = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( !byte_14032972C || CurrentIrql >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( a1 )
  {
    v105 = *(_DWORD *)(a1 + 192);
    v106 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v10 = PsReferenceEffectiveToken(
            (unsigned int)KeGetCurrentThread(),
            (unsigned int)&v105,
            (unsigned int)&v103,
            (unsigned int)&v106,
            0LL);
    if ( !v10 )
      return;
    v8 = 1;
  }
  if ( a7 )
  {
    v13 = L"Permissive";
    *(_QWORD *)&UserData.Size = 22LL;
  }
  else
  {
    v13 = L"Normal";
    *(_QWORD *)&UserData.Size = 14LL;
  }
  UserData.Ptr = (ULONGLONG)v13;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v97);
  v117 = LearningModeObjectInformation;
  v15 = LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v16 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v17 = v16[1];
    v18 = *v16 + 2LL;
    v119 = (const size_t *)*((_QWORD *)v16 + 1);
    HIDWORD(v120) = 0;
    if ( v18 < v17 )
      LODWORD(v17) = v18;
    LODWORD(v120) = v17;
  }
  else
  {
    v119 = &cchOriginalDestLength;
    v120 = 2LL;
  }
  if ( v15 && (v19 = *(unsigned __int16 **)(v15 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v15 + 32) && (v20 = *(const size_t **)(v15 + 48)) != 0LL )
    {
      v122 = *(unsigned __int16 *)(v15 + 42);
      v121 = v20;
    }
    else
    {
      v21 = v19[1];
      if ( (unsigned __int64)*v19 + 2 < v21 )
        LODWORD(v21) = *v19 + 2;
      v121 = (const size_t *)*((_QWORD *)v19 + 1);
      v122 = (unsigned int)v21;
    }
  }
  else
  {
    v121 = &cchOriginalDestLength;
    v122 = 2LL;
  }
  v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
  if ( v22 )
  {
    v23 = *(unsigned __int16 *)(v22 + 2);
    v123 = *(const size_t **)(v22 + 8);
    v124 = v23;
  }
  else
  {
    v123 = &cchOriginalDestLength;
    v124 = 2LL;
  }
  v125 = &cchOriginalDestLength;
  v127 = &a6;
  v129 = &v105;
  v131 = &v106;
  v133 = v10 + 120;
  v126 = 2LL;
  v128 = 4LL;
  v130 = 4LL;
  v132 = 4LL;
  v134 = 4LL;
  v24 = *(_QWORD *)(v10 + 1080);
  v136 = 4LL;
  if ( v24 )
    v25 = (int *)(v24 + 40);
  else
    v25 = &v101;
  v135 = v25;
  v111 = 1;
  v26 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v10 + 152) + 1LL) + 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x69536553u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = *(_DWORD *)(*(_QWORD *)(v10 + 152) + 8LL);
    memmove(
      PoolWithTag + 1,
      **(const void ***)(v10 + 152),
      4 * *(unsigned __int8 *)(**(_QWORD **)(v10 + 152) + 1LL) + 8);
    v140 = v26;
    v137 = &v111;
    v28 = 12;
    v139 = P;
    v141 = 0;
  }
  else
  {
    v28 = 11;
    v137 = &v101;
  }
  v29 = v28;
  v30 = v28 + 1;
  v31 = 2 * v29;
  v138 = 4LL;
  v32 = *(_QWORD *)(v10 + 784) == 0LL;
  *((_QWORD *)&UserData.Size + v31) = 4LL;
  if ( v32 )
  {
    *(&UserData.Ptr + v31) = (ULONGLONG)&v101;
  }
  else
  {
    *(&UserData.Ptr + v31) = (ULONGLONG)&v109;
    v33 = *(_QWORD *)(v10 + 784);
    v34 = &UserData + v30;
    v35 = *(unsigned __int8 *)(v33 + 1);
    ++v30;
    v34->Ptr = v33;
    v34->Reserved = 0;
    v34->Size = 4 * v35 + 8;
  }
  v107 = v30;
  if ( !*(_DWORD *)(v10 + 800) )
  {
    v50 = 2LL * v30;
    *(&UserData.Ptr + v50) = (ULONGLONG)&v101;
    *((_QWORD *)&UserData.Size + v50) = 4LL;
    goto LABEL_53;
  }
  v36 = 0LL;
  v102 = 0;
  v37 = *(_DWORD *)(v10 + 800);
  v108 = 0;
  if ( v37 )
  {
    v38 = *(__int64 **)(v10 + 792);
    v39 = v37;
    do
    {
      v40 = *v38;
      v38 += 2;
      v36 = (unsigned int)v36 + 4 * *(unsigned __int8 *)(v40 + 1) + 12;
      --v39;
    }
    while ( v39 );
    v108 = v36;
  }
  v41 = ExAllocatePoolWithTag(PagedPool, v36, 0x69536553u);
  v11 = v41;
  if ( v41 )
  {
    v42 = *(_DWORD *)(v10 + 800);
    v102 = v42;
    v112 = 0;
    if ( v42 )
    {
      v43 = v112;
      v44 = v41;
      do
      {
        v45 = 2LL * v43;
        *v44 = *(_DWORD *)(*(_QWORD *)(v10 + 792) + 16LL * v43 + 8);
        v46 = *(unsigned __int8 **)(*(_QWORD *)(v10 + 792) + 16LL * v43);
        memmove(v44 + 1, v46, 4 * v46[1] + 8);
        ++v43;
        v44 += *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 792) + 8 * v45) + 1LL) + 3;
        v42 = v102;
      }
      while ( v43 < v102 );
      v7 = v116;
      v30 = v107;
      v15 = v117;
    }
  }
  else
  {
    v42 = v102;
  }
  v47 = 2LL * v30++;
  *(&UserData.Ptr + v47) = (ULONGLONG)&v102;
  *((_QWORD *)&UserData.Size + v47) = 4LL;
  if ( v42 )
  {
    v48 = v108;
    v49 = 2LL * v30;
    *(&UserData.Ptr + v49) = (ULONGLONG)v11;
    *(&UserData.Size + 2 * v49) = v48;
    *(&UserData.Reserved + 2 * v49) = 0;
LABEL_53:
    ++v30;
  }
  v51 = v30;
  v52 = v30 + 1;
  v53 = 2 * v51;
  *((_QWORD *)&UserData.Size + v53) = 4LL;
  if ( a4 )
  {
    *(&UserData.Ptr + v53) = (ULONGLONG)&v109;
    v54 = &UserData + v52++;
    v55 = 4 * *(unsigned __int8 *)(a4 + 1) + 8;
    v54->Ptr = a4;
    *(_QWORD *)&v54->Size = v55;
  }
  else
  {
    *(&UserData.Ptr + v53) = (ULONGLONG)&v101;
  }
  v56 = *(_WORD *)(v7 + 2);
  v57 = (unsigned __int8 *)SeNullSid;
  v58 = 2LL * v52;
  *(&UserData.Ptr + v58) = v7;
  *((_QWORD *)&UserData.Size + v58) = 1LL;
  v59 = v52 + 1;
  v60 = v52 + 2;
  v59 *= 2LL;
  *(&UserData.Ptr + v59) = v7 + 2;
  *((_QWORD *)&UserData.Size + v59) = 2LL;
  v61 = v56 & 0x8000;
  if ( v56 >= 0 )
  {
    v63 = *(unsigned __int8 **)(v7 + 8);
LABEL_61:
    if ( v63 )
      goto LABEL_63;
    goto LABEL_62;
  }
  v62 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v62 )
  {
    v63 = (unsigned __int8 *)(v7 + v62);
    goto LABEL_61;
  }
LABEL_62:
  v63 = v57;
LABEL_63:
  v64 = 16LL * v60;
  v65 = v60 + 1;
  v66 = (ULONGLONG *)((char *)&UserData.Ptr + v64);
  LODWORD(v64) = v63[1];
  *v66 = v63;
  v66[1] = (unsigned int)(4 * v64 + 8);
  if ( !v61 )
  {
    v68 = *(unsigned __int8 **)(v7 + 8);
LABEL_67:
    if ( v68 )
      goto LABEL_69;
    goto LABEL_68;
  }
  v67 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v67 )
  {
    v68 = (unsigned __int8 *)(v7 + v67);
    goto LABEL_67;
  }
LABEL_68:
  v68 = v57;
LABEL_69:
  v69 = 16LL * v65;
  v70 = v65 + 1;
  v71 = (ULONGLONG *)((char *)&UserData.Ptr + v69);
  LODWORD(v69) = v68[1];
  *v71 = v68;
  v71[1] = (unsigned int)(4 * v69 + 8);
  if ( (v56 & 4) == 0 )
    goto LABEL_77;
  if ( v61 )
  {
    v72 = *(unsigned int *)(v7 + 16);
    if ( (_DWORD)v72 )
    {
      v73 = v7 + v72;
      goto LABEL_74;
    }
LABEL_77:
    v75 = v70;
    goto LABEL_78;
  }
  v73 = *(_QWORD *)(v7 + 32);
LABEL_74:
  if ( !v73 )
    goto LABEL_77;
  v74 = (int)SepFlattenAcl(v73, &v104, &v113, v99) < 0;
  v75 = v70;
  if ( !v74 )
  {
    v76 = 2LL * v70;
    *(&UserData.Ptr + v76) = v73;
    v77 = v104;
    *((_QWORD *)&UserData.Size + v76) = 1LL;
    v78 = v70 + 1;
    v79 = v70 + 2;
    v78 *= 2LL;
    *(&UserData.Ptr + v78) = (ULONGLONG)v99;
    *((_QWORD *)&UserData.Size + v78) = 2LL;
    v80 = &UserData + v79;
    LODWORD(v78) = v113;
    v80->Ptr = (ULONGLONG)v77;
    *(_QWORD *)&v80->Size = (unsigned int)v78;
    goto LABEL_79;
  }
LABEL_78:
  v77 = v104;
  v81 = 2 * v75;
  v79 = v70 + 1;
  *(&UserData.Ptr + v81) = (ULONGLONG)&v96;
  *((_QWORD *)&UserData.Size + v81) = 1LL;
  v82 = 16LL * v79;
  *(_QWORD *)((char *)&UserData.Size + v82) = 2LL;
  *(ULONGLONG *)((char *)&UserData.Ptr + v82) = (ULONGLONG)v98;
LABEL_79:
  v83 = *(_WORD *)(v7 + 2);
  v84 = v79 + 1;
  if ( (v83 & 0x10) == 0 )
    goto LABEL_89;
  if ( v83 < 0 )
  {
    v85 = *(unsigned int *)(v7 + 12);
    if ( (_DWORD)v85 )
    {
      v86 = v7 + v85;
      goto LABEL_84;
    }
LABEL_89:
    v88 = v110;
    v89 = v84;
    goto LABEL_90;
  }
  v86 = *(_QWORD *)(v7 + 24);
LABEL_84:
  if ( !v86 )
  {
    v77 = v104;
    goto LABEL_89;
  }
  v87 = SepFlattenAcl(v86, &v110, &v114, v100);
  v88 = v110;
  v74 = v87 < 0;
  v89 = v84;
  if ( v74 )
  {
    v77 = v104;
LABEL_90:
    v94 = 2 * v89;
    v92 = v84 + 1;
    *(&UserData.Ptr + v94) = (ULONGLONG)&v96;
    *((_QWORD *)&UserData.Size + v94) = 1LL;
    v95 = 2LL * v92;
    *((_QWORD *)&UserData.Size + v95) = 2LL;
    *(&UserData.Ptr + v95) = (ULONGLONG)v98;
    goto LABEL_91;
  }
  v90 = 2LL * v84;
  *(&UserData.Ptr + v90) = v86;
  v77 = v104;
  *((_QWORD *)&UserData.Size + v90) = 1LL;
  v91 = v84 + 1;
  v92 = v84 + 2;
  v91 *= 2LL;
  *(&UserData.Ptr + v91) = (ULONGLONG)v100;
  *((_QWORD *)&UserData.Size + v91) = 2LL;
  v93 = &UserData + v92;
  LODWORD(v91) = v114;
  v93->Ptr = (ULONGLONG)v88;
  *(_QWORD *)&v93->Size = (unsigned int)v91;
LABEL_91:
  EtwWrite(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, v92 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v77 )
    ExFreePoolWithTag(v77, 0);
  if ( v88 )
    ExFreePoolWithTag(v88, 0);
  if ( v8 )
    ObfDereferenceObjectWithTag((PVOID)v10, 0x746C6644u);
  if ( v97[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v15 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v15 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v15 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v15 + 24), 0);
    ExFreePoolWithTag((PVOID)v15, 0);
  }
}
