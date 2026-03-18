/*
 * XREFs of ExUpdateLicenseData_0 @ 0x1404D95E0
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     ExUpdateLicenseData @ 0x1406ECA00 (ExUpdateLicenseData.c)
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 * Callees:
 *     RtlULongLongToULong @ 0x1400198DC (RtlULongLongToULong.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateSection @ 0x14017F930 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PtFuncCompare @ 0x1404DA31C (PtFuncCompare.c)
 *     MmMapViewInSystemSpace @ 0x14051B270 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_14051E368 @ 0x14051E368 (sub_14051E368.c)
 *     sub_14051F71C @ 0x14051F71C (sub_14051F71C.c)
 *     sub_14055A6D8 @ 0x14055A6D8 (sub_14055A6D8.c)
 *     sub_14055D174 @ 0x14055D174 (sub_14055D174.c)
 *     sub_1406ECE98 @ 0x1406ECE98 (sub_1406ECE98.c)
 */

__int64 __fastcall ExUpdateLicenseData_0(int a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  PVOID v6; // rsi
  _QWORD *PoolWithTag; // r15
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned __int8 *v10; // r15
  char *v11; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rdi
  __int64 v14; // r9
  char v15; // cl
  unsigned int v16; // edx
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  NTSTATUS v19; // edi
  int v20; // r12d
  PVOID v21; // rsi
  unsigned int *v22; // rsi
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  struct _KTHREAD *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r9
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  unsigned int v30; // ebx
  struct _KTHREAD *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r9
  unsigned __int8 *v34; // r13
  unsigned int v35; // esi
  unsigned int v36; // r14d
  unsigned int v37; // r15d
  unsigned int v38; // r12d
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int16 v42; // ax
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  struct _KTHREAD *v45; // rax
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rbx
  PVOID v50; // rdi
  unsigned int v51; // ebx
  unsigned __int64 v52; // rax
  unsigned int v53; // edx
  unsigned __int8 *v54; // rcx
  int v55; // esi
  __int64 v56; // r10
  unsigned int v57; // r8d
  unsigned int v58; // r9d
  int v59; // edx
  unsigned int v60; // ecx
  int v61; // esi
  unsigned __int8 *v62; // r9
  __int64 v63; // r10
  unsigned int v64; // edx
  unsigned int v65; // r8d
  int v66; // ecx
  int v67; // eax
  int v68; // ebx
  int v69; // eax
  int v70; // eax
  struct _KTHREAD *v71; // rcx
  __int16 v72; // ax
  struct _KTHREAD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // r9
  __int64 v76; // rdi
  struct _KTHREAD *v77; // rcx
  __int16 v78; // ax
  struct _KTHREAD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rdi
  int v84; // eax
  int v85; // eax
  unsigned __int64 v86; // rax
  __int64 v87; // r8
  unsigned __int8 *v88; // r9
  int v89; // edx
  __int64 v90; // r11
  unsigned int v91; // r8d
  unsigned int v92; // r10d
  int v93; // ecx
  ULONG v94; // ecx
  int v95; // edx
  unsigned __int8 *v96; // r10
  __int64 v97; // r9
  unsigned int v98; // edx
  unsigned int v99; // r8d
  int v100; // ecx
  bool v101; // di
  unsigned __int64 v102; // rax
  __int64 v103; // rcx
  int v104; // edx
  __int64 v105; // r10
  unsigned int v106; // r8d
  unsigned int v107; // r9d
  int v108; // ecx
  ULONG v109; // ecx
  int v110; // edx
  unsigned __int8 *v111; // r10
  __int64 v112; // r9
  unsigned int v113; // edx
  unsigned int v114; // r8d
  int v115; // ecx
  struct _KTHREAD *v116; // rcx
  __int16 v117; // ax
  unsigned __int64 v118; // r8
  __int64 v119; // rcx
  unsigned __int8 *v120; // r9
  NTSTATUS v121; // edx
  __int64 v122; // r11
  unsigned int v123; // r8d
  unsigned int v124; // r10d
  int v125; // ecx
  unsigned __int64 v126; // r8
  unsigned __int8 *v127; // r10
  __int64 v128; // r9
  unsigned int v129; // edx
  unsigned int v130; // r8d
  int v131; // ecx
  __int64 v132; // r11
  unsigned __int64 v133; // r8
  __int64 v134; // rcx
  unsigned __int8 *v135; // r9
  NTSTATUS v136; // edx
  __int64 v137; // r11
  unsigned int v138; // r8d
  unsigned int v139; // r10d
  int v140; // ecx
  unsigned __int64 v141; // r8
  unsigned __int8 *v142; // r10
  __int64 v143; // r9
  unsigned int v144; // edx
  unsigned int v145; // r8d
  int v146; // ecx
  struct _KTHREAD *v147; // rax
  __int64 v148; // rax
  __int64 v149; // r9
  __int64 v150; // rdi
  int v151; // eax
  __int64 v152; // r11
  __int64 v153; // r8
  __int64 v154; // rcx
  unsigned __int8 *v155; // r10
  NTSTATUS v156; // edx
  __int64 v157; // r11
  int v158; // r8d
  int v159; // r9d
  int v160; // ecx
  __int64 v161; // r8
  __int64 v162; // r9
  int v163; // edx
  int v164; // r8d
  int v165; // ecx
  char v166; // di
  struct _KTHREAD *v167; // rcx
  __int16 v168; // ax
  int v169; // [rsp+40h] [rbp-4A8h]
  char v170; // [rsp+44h] [rbp-4A4h]
  char v171; // [rsp+45h] [rbp-4A3h]
  bool v172; // [rsp+46h] [rbp-4A2h]
  _QWORD *Src; // [rsp+50h] [rbp-498h]
  size_t NumOfElements; // [rsp+58h] [rbp-490h] BYREF
  PVOID v175; // [rsp+60h] [rbp-488h]
  int v176; // [rsp+68h] [rbp-480h]
  PVOID MappedBase; // [rsp+70h] [rbp-478h] BYREF
  unsigned __int64 v178; // [rsp+78h] [rbp-470h]
  unsigned __int64 v179; // [rsp+80h] [rbp-468h]
  unsigned __int64 v180; // [rsp+88h] [rbp-460h]
  unsigned __int64 v181; // [rsp+90h] [rbp-458h]
  unsigned __int64 v182; // [rsp+A0h] [rbp-448h]
  int v183; // [rsp+A8h] [rbp-440h]
  unsigned __int64 v184; // [rsp+B0h] [rbp-438h]
  unsigned __int64 v185; // [rsp+B8h] [rbp-430h]
  unsigned __int64 v186; // [rsp+C0h] [rbp-428h]
  int v187; // [rsp+C8h] [rbp-420h]
  unsigned __int64 v188; // [rsp+D0h] [rbp-418h]
  unsigned __int64 v189; // [rsp+D8h] [rbp-410h]
  __int64 v190; // [rsp+E0h] [rbp-408h]
  __int64 v191; // [rsp+E8h] [rbp-400h]
  PVOID v192; // [rsp+F0h] [rbp-3F8h]
  unsigned int v193; // [rsp+F8h] [rbp-3F0h]
  ULONG pulResult; // [rsp+FCh] [rbp-3ECh] BYREF
  ULONG v195[2]; // [rsp+100h] [rbp-3E8h] BYREF
  ULONG v196[2]; // [rsp+108h] [rbp-3E0h] BYREF
  HANDLE SectionHandle; // [rsp+110h] [rbp-3D8h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+118h] [rbp-3D0h] BYREF
  PVOID v199; // [rsp+120h] [rbp-3C8h]
  __int128 v200; // [rsp+128h] [rbp-3C0h]
  __int128 v201; // [rsp+138h] [rbp-3B0h]
  __int128 v202; // [rsp+148h] [rbp-3A0h]
  __int128 v203; // [rsp+158h] [rbp-390h]
  __int128 v204; // [rsp+168h] [rbp-380h]
  __int128 v205; // [rsp+178h] [rbp-370h]
  __int128 v206; // [rsp+188h] [rbp-360h]
  __int128 v207; // [rsp+198h] [rbp-350h]
  __int128 v208; // [rsp+1A8h] [rbp-340h]
  __int128 v209; // [rsp+1B8h] [rbp-330h]
  __int128 v210; // [rsp+1C8h] [rbp-320h]
  __int128 v211; // [rsp+1D8h] [rbp-310h]
  __int128 v212; // [rsp+1E8h] [rbp-300h]
  __int128 v213; // [rsp+1F8h] [rbp-2F0h]
  __int128 v214; // [rsp+208h] [rbp-2E0h]
  __int128 v215; // [rsp+218h] [rbp-2D0h]
  __int128 v216; // [rsp+228h] [rbp-2C0h]
  __int128 v217; // [rsp+238h] [rbp-2B0h]
  __int64 v218; // [rsp+248h] [rbp-2A0h]
  PVOID Object; // [rsp+250h] [rbp-298h] BYREF
  int v220; // [rsp+258h] [rbp-290h]
  ULONG_PTR ViewSize; // [rsp+260h] [rbp-288h] BYREF
  __int128 v222; // [rsp+268h] [rbp-280h] BYREF
  __int128 v223; // [rsp+278h] [rbp-270h]
  __int128 v224; // [rsp+288h] [rbp-260h]
  _OWORD v225[3]; // [rsp+298h] [rbp-250h] BYREF
  _OWORD v226[3]; // [rsp+2C8h] [rbp-220h] BYREF
  _OWORD v227[3]; // [rsp+2F8h] [rbp-1F0h] BYREF
  _OWORD v228[3]; // [rsp+328h] [rbp-1C0h] BYREF
  int v229; // [rsp+358h] [rbp-190h]
  unsigned int v230; // [rsp+360h] [rbp-188h]
  int v231; // [rsp+368h] [rbp-180h]
  unsigned int v232; // [rsp+370h] [rbp-178h]
  unsigned int v233; // [rsp+378h] [rbp-170h]
  unsigned int v234; // [rsp+380h] [rbp-168h]
  __int64 v235; // [rsp+388h] [rbp-160h]
  unsigned int v236; // [rsp+390h] [rbp-158h]
  unsigned int v237; // [rsp+398h] [rbp-150h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+3A0h] [rbp-148h] BYREF
  unsigned int v239; // [rsp+3D0h] [rbp-118h]
  unsigned int v240; // [rsp+3D8h] [rbp-110h]
  unsigned int v241; // [rsp+3E0h] [rbp-108h]
  unsigned int v242; // [rsp+3E8h] [rbp-100h]
  char v243[8]; // [rsp+3F0h] [rbp-F8h] BYREF
  int v244; // [rsp+3F8h] [rbp-F0h]
  _BYTE v245[48]; // [rsp+420h] [rbp-C8h] BYREF
  char v246[8]; // [rsp+450h] [rbp-98h] BYREF
  int v247; // [rsp+458h] [rbp-90h]
  char v248[8]; // [rsp+480h] [rbp-68h] BYREF
  int v249; // [rsp+488h] [rbp-60h]
  char v250; // [rsp+4F8h] [rbp+10h]
  bool v251; // [rsp+500h] [rbp+18h]
  char v252; // [rsp+508h] [rbp+20h]

  v172 = 0;
  v251 = 0;
  v250 = 0;
  v171 = 0;
  v252 = 0;
  MappedBase = 0LL;
  v199 = 0LL;
  v192 = 0LL;
  v6 = 0LL;
  v175 = 0LL;
  LODWORD(NumOfElements) = 0;
  PoolWithTag = 0LL;
  Src = 0LL;
  if ( !a2 || (unsigned int)(a1 - 25) > 0xFFE7 || ((unsigned __int8)a2 & 3) != 0 )
  {
    v19 = -1073741811;
    goto LABEL_310;
  }
  v8 = *a2;
  if ( *a2 > 0x10000 || (v9 = a2[1], (unsigned int)v9 > 0x10000) || (a4 = a2[2], (unsigned int)a4 > 0x10000) )
  {
    v19 = -1073741760;
LABEL_310:
    v169 = v19;
    v20 = 4;
    v34 = (unsigned __int8 *)qword_140784300;
    goto LABEL_143;
  }
  v10 = (unsigned __int8 *)(a2 + 5);
  v11 = (char *)a2 + v9 + 20;
  if ( ((unsigned __int8)v11 & 3) != 0 || (_DWORD)a4 + (_DWORD)v9 + 20 != v8 || v8 != a1 || a2[4] != 1 )
  {
    v19 = -1073741811;
    v169 = -1073741811;
    v20 = 4;
    v34 = (unsigned __int8 *)qword_140784300;
    PoolWithTag = 0LL;
    goto LABEL_143;
  }
  v169 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14077EA20, v13, (ULONG_PTR)&qword_14077EA20, v14);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( off_14077E020 )
  {
    v15 = 1;
    v250 = 1;
  }
  else
  {
    v171 = 1;
    v15 = 0;
  }
  if ( InitSafeBootMode || InitIsWinPEMode )
  {
    if ( !v15 )
    {
      v169 = -1073741823;
      goto LABEL_36;
    }
  }
  else if ( !v15 && (a2[3] & 1) != 0 )
  {
    v169 = -1073741811;
    goto LABEL_36;
  }
  v172 = 0;
  if ( !v15 )
  {
    if ( Data )
    {
      if ( !BYTE1(NlsMbCodePageTag) && *a2 == *(_DWORD *)Data )
      {
        v16 = a2[1];
        if ( v16 == *((_DWORD *)Data + 1)
          && a2[2] == *((_DWORD *)Data + 2)
          && a2[3] == *((_DWORD *)Data + 3)
          && a2[4] == *((_DWORD *)Data + 4)
          && RtlCompareMemory((char *)Data + 20, a2 + 5, v16) == a2[1] )
        {
          v172 = RtlCompareMemory((char *)Data + *((unsigned int *)Data + 1) + 20, v11, a2[2]) == a2[2];
        }
      }
    }
  }
LABEL_36:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
  KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v19 = v169;
  if ( v169 < 0 )
  {
    v20 = 4;
    goto LABEL_307;
  }
  if ( v172 )
  {
    v80 = KeGetCurrentThread();
    --v80->KernelApcDisable;
    v81 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
    v83 = v81;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v81, (ULONG_PTR)&qword_14077EA20, v82);
    if ( v83 )
      *(_BYTE *)(v83 + 26) |= 1u;
    if ( !Data )
    {
      v84 = dword_14077E0F0;
LABEL_178:
      v20 = 4;
      v34 = (unsigned __int8 *)qword_140784300;
      goto LABEL_206;
    }
    v85 = sub_14051E368(v227);
    if ( v85 >= 0 )
    {
      v84 = DWORD2(v227[0]);
      goto LABEL_178;
    }
    v20 = 4;
    if ( v85 != -1073741275 || !Data )
    {
      v34 = (unsigned __int8 *)qword_140784300;
      goto LABEL_205;
    }
    v86 = 0LL;
    *(_QWORD *)&v209 = 0LL;
    v210 = 0uLL;
    DWORD2(v209) = 4;
    *(_QWORD *)&v211 = 0LL;
    BYTE8(v211) = 1;
    v87 = *((unsigned int *)Data + 1);
    v88 = (unsigned __int8 *)Data + 20;
    v89 = 0;
    if ( Data == (PVOID)-20LL )
    {
      v89 = -1073741811;
    }
    else
    {
      v178 = 0LL;
      v90 = v87;
      if ( (_DWORD)v87 )
      {
        v91 = HIDWORD(v178);
        v92 = v178;
        do
        {
          v93 = *v88 - 23737705;
          v91 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v91 + v93), 21), 21), 21);
          v236 = v91;
          v92 += v91 + v93;
          v178 = __PAIR64__(v91, v92);
          ++v88;
          --v90;
        }
        while ( v90 );
        v86 = v178;
      }
      *(_QWORD *)&v209 = v86;
    }
    if ( v89 || !(_DWORD)::NumOfElements )
    {
      v34 = (unsigned __int8 *)qword_140784300;
    }
    else
    {
      v94 = 16 * ::NumOfElements;
      if ( 16 * (unsigned __int64)(unsigned int)::NumOfElements > 0xFFFFFFFF )
      {
        v94 = -1;
        v95 = -1073741675;
      }
      else
      {
        v95 = 0;
      }
      v195[1] = v94;
      v34 = (unsigned __int8 *)qword_140784300;
      if ( v95 )
        goto LABEL_202;
      v189 = v86;
      v96 = (unsigned __int8 *)qword_140784300;
      v97 = v94;
      if ( v94 )
      {
        v98 = HIDWORD(v189);
        v99 = v189;
        do
        {
          v100 = *v96 - 23737705;
          v98 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v98 + v100), 21), 21), 21);
          v239 = v98;
          v99 += v98 + v100;
          v189 = __PAIR64__(v98, v99);
          ++v96;
          --v97;
        }
        while ( v97 );
        v86 = v189;
      }
      *(_QWORD *)&v209 = v86;
      v89 = 0;
    }
    if ( !v89 )
    {
LABEL_203:
      v227[0] = v209;
      v227[1] = v210;
      v227[2] = v211;
      DWORD2(v227[0]) = 4;
      sub_14051D108(v227, 0xFFFFFFFFLL);
LABEL_205:
      v84 = 4;
LABEL_206:
      v101 = v84 != 0;
      v102 = 0LL;
      *(_QWORD *)&v200 = 0LL;
      v201 = 0uLL;
      DWORD2(v200) = 0;
      *(_QWORD *)&v202 = 10800LL;
      BYTE8(v202) = 1;
      v103 = a2[1];
      v104 = 0;
      if ( a2 == (unsigned int *)-20LL )
      {
        v104 = -1073741811;
      }
      else
      {
        v185 = 0LL;
        v105 = v103;
        if ( (_DWORD)v103 )
        {
          v106 = HIDWORD(v185);
          v107 = v185;
          do
          {
            v108 = *v10 - 23737705;
            v106 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v106 + v108), 21), 21), 21);
            v233 = v106;
            v107 += v106 + v108;
            v185 = __PAIR64__(v106, v107);
            ++v10;
            --v105;
          }
          while ( v105 );
          v102 = v185;
        }
        *(_QWORD *)&v200 = v102;
      }
      if ( !v104 )
      {
        if ( !(_DWORD)::NumOfElements )
          goto LABEL_226;
        v109 = 16 * ::NumOfElements;
        if ( 16 * (unsigned __int64)(unsigned int)::NumOfElements > 0xFFFFFFFF )
        {
          v109 = -1;
          v110 = -1073741675;
        }
        else
        {
          v110 = 0;
        }
        v196[1] = v109;
        if ( !v110 )
        {
          v179 = v102;
          v111 = (unsigned __int8 *)qword_140784300;
          v112 = v109;
          if ( v109 )
          {
            v113 = HIDWORD(v179);
            v114 = v179;
            do
            {
              v115 = *v111 - 23737705;
              v113 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v113 + v115), 21), 21), 21);
              v242 = v113;
              v114 += v113 + v115;
              v179 = __PAIR64__(v113, v114);
              ++v111;
              --v112;
            }
            while ( v112 );
            v102 = v179;
          }
          *(_QWORD *)&v200 = v102;
          goto LABEL_226;
        }
      }
      *(_QWORD *)&v200 = 0LL;
      DWORD2(v200) = 4;
LABEL_226:
      v222 = v200;
      v223 = v201;
      v224 = v202;
      sub_14051D108(&v222, 7LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
      KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
      v116 = KeGetCurrentThread();
      v117 = v116->KernelApcDisable + 1;
      v116->KernelApcDisable = v117;
      if ( !v117
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v116->ApcState.ApcListHead[0].Flink != &v116->152
        && !v116->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v101 )
        sub_14055D174();
      v19 = 0x40000000;
      v169 = 0x40000000;
      PoolWithTag = 0LL;
      v6 = 0LL;
      goto LABEL_143;
    }
LABEL_202:
    *(_QWORD *)&v209 = 0LL;
    DWORD2(v209) = 4;
    goto LABEL_203;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a2;
  v20 = 4;
  v19 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  v169 = v19;
  if ( v19 < 0 )
  {
LABEL_307:
    v34 = (unsigned __int8 *)qword_140784300;
    PoolWithTag = 0LL;
    goto LABEL_143;
  }
  v19 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v21 = Object;
  v192 = Object;
  v169 = v19;
  ZwClose(SectionHandle);
  if ( v19 < 0 )
    goto LABEL_305;
  ViewSize = 0LL;
  v19 = MmMapViewInSystemSpace(v21, &MappedBase, &ViewSize);
  v169 = v19;
  if ( v19 < 0 )
    goto LABEL_305;
  v22 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a2;
  v22[4] = a2[4];
  memmove(v22 + 5, a2 + 5, a2[1]);
  memmove((char *)v22 + a2[1] + 20, v11, a2[2]);
  v24 = (unsigned int *)((char *)v22 + v22[1] + 20);
  if ( v22[2] != 4 || !v24 || *v24 != 69 )
  {
    v19 = -1073741761;
    v169 = -1073741761;
    goto LABEL_305;
  }
  LOBYTE(v23) = 1;
  v19 = sub_14051F71C(v22, v23, 0LL, 0LL, &NumOfElements);
  v169 = v19;
  if ( v19 == -1073741789 )
  {
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    v26 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_14077EA20, v26, (ULONG_PTR)&qword_14077EA20, v27);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    if ( (unsigned int)NumOfElements > 0x923 )
      v169 = -1073741811;
    else
      v169 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v19 = v169;
    if ( v169 >= 0 )
    {
      v30 = NumOfElements;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)NumOfElements, 0x20534C53u);
      Src = PoolWithTag;
      if ( !PoolWithTag )
      {
        v19 = -1073741801;
        v169 = -1073741801;
        v34 = (unsigned __int8 *)qword_140784300;
        goto LABEL_311;
      }
      v19 = sub_14051F71C(MappedBase, 0LL, PoolWithTag, v30, 0LL);
      v169 = v19;
      if ( v19 >= 0 )
        qsort(PoolWithTag, v30, 0x10uLL, PtFuncCompare);
      goto LABEL_63;
    }
LABEL_305:
    v34 = (unsigned __int8 *)qword_140784300;
    PoolWithTag = 0LL;
    v6 = 0LL;
    goto LABEL_143;
  }
  PoolWithTag = 0LL;
LABEL_63:
  if ( v19 >= 0 )
  {
    v170 = 0;
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    v32 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_14077EA20, v32, (ULONG_PTR)&qword_14077EA20, v33);
    if ( v32 )
      *(_BYTE *)(v32 + 26) |= 1u;
    v34 = (unsigned __int8 *)qword_140784300;
    if ( !v250 )
    {
      v35 = 0;
      v176 = 0;
      v36 = 0;
      v187 = 0;
      v37 = NumOfElements;
      v38 = ::NumOfElements;
      while ( v35 < v37 )
      {
        if ( v36 >= v38 )
        {
          while ( v35 < v37 )
          {
            v218 = Src[2 * v35 + 1];
            if ( (*(_DWORD *)(v218 + 8) & 2) != 0 )
              goto LABEL_86;
            v176 = ++v35;
          }
          break;
        }
        v39 = PtFuncCompare(&Src[2 * v35], &qword_140784300[2 * v36]);
        v220 = v39;
        v40 = Src[2 * v35 + 1];
        v218 = v40;
        v41 = qword_140784300[2 * v36 + 1];
        v235 = v41;
        if ( v39 < 0 )
        {
          if ( (*(_DWORD *)(v40 + 8) & 2) != 0 )
            goto LABEL_86;
          v176 = ++v35;
        }
        else if ( v39 > 0 )
        {
          v187 = ++v36;
        }
        else
        {
          if ( (*(_DWORD *)(v40 + 8) & 2) != 0 )
          {
            v42 = *(_WORD *)(v41 + 6);
            if ( *(_WORD *)(v40 + 6) != v42
              || memcmp(
                   (const void *)(*(unsigned __int16 *)(v40 + 2) + 16LL + v40),
                   (const void *)(*(unsigned __int16 *)(v41 + 2) + 16LL + v41),
                   v42) )
            {
LABEL_86:
              v170 = 1;
              break;
            }
          }
          v176 = ++v35;
          v187 = ++v36;
        }
      }
      v20 = 4;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v43 = KeGetCurrentThread();
    v44 = v43->KernelApcDisable + 1;
    v43->KernelApcDisable = v44;
    if ( !v44
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
      && !v43->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfReferenceObject(v192);
    v45 = KeGetCurrentThread();
    --v45->KernelApcDisable;
    v47 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v46);
    v49 = v47;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v47, (ULONG_PTR)&qword_14077EA20, v48);
    if ( v49 )
      *(_BYTE *)(v49 + 26) |= 1u;
    v50 = MappedBase;
    PoolWithTag = Src;
    if ( MappedBase )
    {
      v51 = NumOfElements;
      if ( !(_DWORD)NumOfElements || Src )
      {
        v52 = 0LL;
        *(_QWORD *)&v203 = 0LL;
        v204 = 0uLL;
        DWORD2(v203) = 0;
        *(_QWORD *)&v205 = 10800LL;
        BYTE8(v205) = 1;
        v53 = *((_DWORD *)MappedBase + 1);
        v54 = (unsigned __int8 *)MappedBase + 20;
        v55 = 0;
        if ( MappedBase == (PVOID)-20LL )
        {
          v55 = -1073741811;
        }
        else
        {
          v180 = 0LL;
          v56 = v53;
          if ( v53 )
          {
            v57 = HIDWORD(v180);
            v58 = v180;
            do
            {
              v59 = *v54 - 23737705;
              v57 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v57 + v59), 21), 21), 21);
              v241 = v57;
              v58 += v57 + v59;
              v180 = __PAIR64__(v57, v58);
              ++v54;
              --v56;
            }
            while ( v56 );
            v52 = v180;
          }
          *(_QWORD *)&v203 = v52;
        }
        if ( !v55 && (_DWORD)NumOfElements )
        {
          v60 = 16 * NumOfElements;
          if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
          {
            v60 = -1;
            v61 = -1073741675;
          }
          else
          {
            v61 = 0;
          }
          v193 = v60;
          if ( v61 )
            goto LABEL_247;
          v55 = 0;
          if ( Src )
          {
            v181 = v52;
            v62 = (unsigned __int8 *)Src;
            v63 = v60;
            if ( v60 )
            {
              v64 = HIDWORD(v181);
              v65 = v181;
              do
              {
                v66 = *v62 - 23737705;
                v64 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v64 + v66), 21), 21), 21);
                v237 = v64;
                v65 += v64 + v66;
                v181 = __PAIR64__(v64, v65);
                ++v62;
                --v63;
              }
              while ( v63 );
              v52 = v181;
            }
            *(_QWORD *)&v203 = v52;
          }
          else
          {
            v55 = -1073741811;
          }
        }
        if ( !v55 )
        {
LABEL_116:
          v222 = v203;
          v223 = v204;
          v224 = v205;
          goto LABEL_117;
        }
LABEL_247:
        *(_QWORD *)&v203 = 0LL;
        DWORD2(v203) = 4;
        v55 = 0;
        goto LABEL_116;
      }
    }
    else
    {
      v51 = NumOfElements;
    }
    v55 = -1073741811;
LABEL_117:
    v169 = v55;
    if ( v55 < 0 )
    {
      v19 = 0;
    }
    else
    {
      sub_14051D108(&v222, 7LL);
      v175 = (PVOID)qword_14077EFB0;
      v199 = Data;
      qword_14077EFB0 = (__int64)v192;
      Data = v50;
      v19 = 0;
      MappedBase = 0LL;
      off_14077E020 = 0LL;
      v252 = BYTE1(NlsMbCodePageTag);
      BYTE1(NlsMbCodePageTag) = 0;
      memset(qword_140784300, 0, 16LL * (unsigned int)::NumOfElements);
      LODWORD(::NumOfElements) = 0;
      if ( Src )
      {
        memmove(qword_140784300, Src, 16LL * v51);
        LODWORD(::NumOfElements) = v51;
      }
      BYTE6(NlsMbCodePageTag) = 1;
      if ( Data )
      {
        v67 = sub_14051E368(v226);
        if ( v67 < 0 )
        {
          if ( v67 == -1073741275 && Data )
          {
            v118 = 0LL;
            *(_QWORD *)&v206 = 0LL;
            v207 = 0uLL;
            DWORD2(v206) = 4;
            *(_QWORD *)&v208 = 0LL;
            BYTE8(v208) = 1;
            v119 = *((unsigned int *)Data + 1);
            v120 = (unsigned __int8 *)Data + 20;
            v121 = 0;
            if ( Data == (PVOID)-20LL )
            {
              v121 = -1073741811;
            }
            else
            {
              v182 = 0LL;
              v122 = v119;
              if ( (_DWORD)v119 )
              {
                v123 = HIDWORD(v182);
                v124 = v182;
                do
                {
                  v125 = *v120 - 23737705;
                  v123 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v123 + v125), 21), 21), 21);
                  v240 = v123;
                  v124 += v123 + v125;
                  v182 = __PAIR64__(v123, v124);
                  ++v120;
                  --v122;
                }
                while ( v122 );
                v118 = v182;
              }
              *(_QWORD *)&v206 = v118;
            }
            if ( v121 )
              goto LABEL_269;
            if ( (_DWORD)::NumOfElements )
            {
              v121 = RtlULongLongToULong(16LL * (unsigned int)::NumOfElements, &pulResult);
              if ( !v121 )
              {
                v184 = v126;
                v127 = (unsigned __int8 *)qword_140784300;
                v128 = pulResult;
                if ( pulResult )
                {
                  v129 = HIDWORD(v184);
                  v130 = v184;
                  do
                  {
                    v131 = *v127 - 23737705;
                    v129 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v129 + v131), 21), 21), 21);
                    v230 = v129;
                    v130 += v129 + v131;
                    v184 = __PAIR64__(v129, v130);
                    ++v127;
                    --v128;
                  }
                  while ( v128 );
                  v126 = v184;
                }
                *(_QWORD *)&v206 = v126;
                v121 = 0;
              }
            }
            if ( v121 )
            {
LABEL_269:
              *(_QWORD *)&v206 = 0LL;
              DWORD2(v206) = 4;
            }
            v226[0] = v206;
            v226[1] = v207;
            v226[2] = v208;
            DWORD2(v226[0]) = 4;
            sub_14051D108(v226, 0xFFFFFFFFLL);
          }
          v68 = 4;
        }
        else
        {
          v68 = DWORD2(v226[0]);
        }
      }
      else
      {
        v68 = dword_14077E0F0;
      }
      v183 = v68;
      if ( (*((_DWORD *)Data + 3) & 1) != 0 )
      {
        dword_14077E0F0 = 2;
        v244 = 2;
        sub_14051D108(v243, 2LL);
        v171 = 1;
      }
      else
      {
        dword_14077E0F0 = 0;
        v247 = 0;
        sub_14051D108(v246, 2LL);
      }
      if ( Data )
      {
        v69 = sub_14051E368(v228);
        if ( v69 < 0 )
        {
          if ( v69 == -1073741275 )
          {
            if ( Data )
            {
              v132 = 0LL;
              v133 = 0LL;
              *(_QWORD *)&v215 = 0LL;
              v216 = 0uLL;
              DWORD2(v215) = 4;
              *(_QWORD *)&v217 = 0LL;
              BYTE8(v217) = 1;
              v134 = *((unsigned int *)Data + 1);
              v135 = (unsigned __int8 *)Data + 20;
              v136 = 0;
              if ( Data == (PVOID)-20LL )
              {
                v136 = -1073741811;
              }
              else
              {
                v186 = 0LL;
                v137 = v134;
                if ( (_DWORD)v134 )
                {
                  v138 = HIDWORD(v186);
                  v139 = v186;
                  do
                  {
                    v140 = *v135 - 23737705;
                    v138 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v138 + v140), 21), 21), 21);
                    v232 = v138;
                    v139 += v138 + v140;
                    v186 = __PAIR64__(v138, v139);
                    ++v135;
                    --v137;
                  }
                  while ( v137 );
                  v133 = v186;
                }
                *(_QWORD *)&v215 = v133;
                v132 = 0LL;
              }
              if ( v136 )
                goto LABEL_292;
              if ( (_DWORD)::NumOfElements )
              {
                v136 = RtlULongLongToULong(16LL * (unsigned int)::NumOfElements, v196);
                if ( !v136 )
                {
                  v188 = v141;
                  v142 = (unsigned __int8 *)qword_140784300;
                  v143 = v196[0];
                  if ( v196[0] )
                  {
                    v144 = HIDWORD(v188);
                    v145 = v188;
                    do
                    {
                      v146 = *v142 - 23737705;
                      v144 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v144 + v146), 21), 21), 21);
                      v234 = v144;
                      v145 += v144 + v146;
                      v188 = __PAIR64__(v144, v145);
                      ++v142;
                      --v143;
                    }
                    while ( v143 );
                    v141 = v188;
                  }
                  *(_QWORD *)&v215 = v141;
                  v136 = v132;
                }
              }
              if ( v136 )
              {
LABEL_292:
                *(_QWORD *)&v215 = v132;
                DWORD2(v215) = 4;
                v136 = v132;
              }
              v228[0] = v215;
              v228[1] = v216;
              v228[2] = v217;
              if ( v136 >= 0 )
              {
                DWORD2(v228[0]) = 4;
                sub_14051D108(v228, 0xFFFFFFFFLL);
              }
            }
            v19 = 0;
          }
          v70 = 4;
        }
        else
        {
          v70 = DWORD2(v228[0]);
        }
      }
      else
      {
        v70 = dword_14077E0F0;
      }
      v251 = v68 != v70 && (!v68 || !v70);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v71 = KeGetCurrentThread();
    v72 = v71->KernelApcDisable + 1;
    v71->KernelApcDisable = v72;
    if ( !v72
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v71->ApcState.ApcListHead[0].Flink != &v71->152
      && !v71->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v55 < 0 )
    {
      v19 = v55;
    }
    else
    {
      if ( v250 )
        goto LABEL_138;
      v19 = sub_14055A6D8();
      v169 = v19;
      if ( v19 >= 0 )
      {
        v19 = 0;
LABEL_138:
        if ( v251 || !v250 )
          sub_14055D174();
        v169 = 0;
        v6 = v175;
        if ( v170 == 1 )
        {
          v19 = 263;
          v169 = 263;
        }
        goto LABEL_143;
      }
    }
LABEL_311:
    v6 = v175;
    goto LABEL_143;
  }
  v34 = (unsigned __int8 *)qword_140784300;
  v6 = v175;
  if ( v19 == -1073741762 )
  {
    v19 = -1073741811;
    v169 = -1073741811;
  }
LABEL_143:
  if ( v252 && !BYTE1(NlsMbCodePageTag) )
    sub_1406ECE98(&KernelLicensingCacheCorruptionFixed);
  if ( v171 )
  {
    v73 = KeGetCurrentThread();
    --v73->KernelApcDisable;
    v74 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
    v76 = v74;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v74, (ULONG_PTR)&qword_14077EA20, v75);
    if ( v76 )
      *(_BYTE *)(v76 + 26) |= 1u;
    v245[40] = 0;
    sub_14051D108(v245, 32LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v77 = KeGetCurrentThread();
    v78 = v77->KernelApcDisable + 1;
    v77->KernelApcDisable = v78;
    if ( !v78
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v77->ApcState.ApcListHead[0].Flink != &v77->152
      && !v77->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v19 = v169;
  }
  if ( v192 )
    ObfDereferenceObject(v192);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v199 )
    MmUnmapViewInSystemSpace(v199);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v19 == -1073741811 || (unsigned int)(v19 + 1073741761) <= 1 )
  {
    v147 = KeGetCurrentThread();
    --v147->KernelApcDisable;
    v148 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
    v150 = v148;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v148, (ULONG_PTR)&qword_14077EA20, v149);
    if ( v150 )
      *(_BYTE *)(v150 + 26) |= 1u;
    if ( Data )
    {
      v151 = sub_14051E368(v225);
      if ( v151 < 0 )
      {
        if ( v151 == -1073741275 && Data )
        {
          v152 = 0LL;
          v153 = 0LL;
          *(_QWORD *)&v212 = 0LL;
          v213 = 0uLL;
          DWORD2(v212) = 4;
          *(_QWORD *)&v214 = 0LL;
          BYTE8(v214) = 1;
          v154 = *((unsigned int *)Data + 1);
          v155 = (unsigned __int8 *)Data + 20;
          v156 = 0;
          if ( Data == (PVOID)-20LL )
          {
            v156 = -1073741811;
          }
          else
          {
            v191 = 0LL;
            v157 = v154;
            if ( (_DWORD)v154 )
            {
              v158 = HIDWORD(v191);
              v159 = v191;
              do
              {
                v160 = *v155 - 23737705;
                v158 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v158 + v160), 21), 21), 21);
                HIDWORD(v191) = v158;
                v159 += v158 + v160;
                ++v155;
                --v157;
              }
              while ( v157 );
              v229 = v158;
              LODWORD(v191) = v159;
              v153 = v191;
            }
            *(_QWORD *)&v212 = v153;
            v152 = 0LL;
          }
          if ( v156 )
            goto LABEL_342;
          if ( (_DWORD)::NumOfElements )
          {
            v156 = RtlULongLongToULong(16LL * (unsigned int)::NumOfElements, v195);
            if ( !v156 )
            {
              v190 = v161;
              v162 = v195[0];
              if ( v195[0] )
              {
                v163 = HIDWORD(v190);
                v164 = v190;
                do
                {
                  v165 = *v34 - 23737705;
                  v163 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v163 + v165), 21), 21), 21);
                  HIDWORD(v190) = v163;
                  v164 += v163 + v165;
                  ++v34;
                  --v162;
                }
                while ( v162 );
                v231 = v163;
                LODWORD(v190) = v164;
                v161 = v190;
              }
              *(_QWORD *)&v212 = v161;
              v156 = v152;
            }
          }
          if ( v156 )
          {
LABEL_342:
            *(_QWORD *)&v212 = v152;
            DWORD2(v212) = 4;
            v156 = v152;
          }
          v225[0] = v212;
          v225[1] = v213;
          v225[2] = v214;
          if ( v156 >= 0 )
          {
            DWORD2(v225[0]) = 4;
            sub_14051D108(v225, 0xFFFFFFFFLL);
          }
        }
      }
      else
      {
        v20 = DWORD2(v225[0]);
      }
    }
    else
    {
      v20 = dword_14077E0F0;
    }
    if ( v20 )
    {
      v166 = 0;
    }
    else
    {
      dword_14077E0F0 = 5;
      v249 = 5;
      sub_14051D108(v248, 2LL);
      v166 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
    KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
    v167 = KeGetCurrentThread();
    v168 = v167->KernelApcDisable + 1;
    v167->KernelApcDisable = v168;
    if ( !v168
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v167->ApcState.ApcListHead[0].Flink != &v167->152
      && !v167->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v166 )
      sub_14055D174();
    return (unsigned int)v169;
  }
  return (unsigned int)v19;
}
