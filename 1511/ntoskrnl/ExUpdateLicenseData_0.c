/*
 * XREFs of ExUpdateLicenseData_0 @ 0x140488840
 * Callers:
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     ExUpdateLicenseData @ 0x1406693D4 (ExUpdateLicenseData.c)
 *     sub_1407621B8 @ 0x1407621B8 (sub_1407621B8.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlULongLongToULong @ 0x14008FB5C (RtlULongLongToULong.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateSection @ 0x140150F60 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmMapViewInSystemSpace @ 0x1403B5C20 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     sub_1404885A8 @ 0x1404885A8 (sub_1404885A8.c)
 *     sub_1404886E8 @ 0x1404886E8 (sub_1404886E8.c)
 *     sub_140488708 @ 0x140488708 (sub_140488708.c)
 *     PtFuncCompare @ 0x1404897F0 (PtFuncCompare.c)
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 *     sub_140669904 @ 0x140669904 (sub_140669904.c)
 */

__int64 __fastcall ExUpdateLicenseData_0(int a1, unsigned int *a2)
{
  char v4; // r13
  PVOID v5; // r14
  unsigned int v6; // ecx
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned __int8 *v9; // rbx
  char *v10; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rdi
  char v13; // cl
  unsigned int v14; // edx
  int v15; // edi
  PVOID v16; // r14
  unsigned int *v17; // r14
  _DWORD *v18; // rcx
  struct _KTHREAD *v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // ebx
  PVOID PoolWithTag; // rax
  void *v23; // r14
  struct _KTHREAD *v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // esi
  unsigned int v27; // r14d
  unsigned int v28; // r15d
  unsigned int v29; // r12d
  _QWORD *v30; // rbx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int16 v34; // ax
  unsigned __int8 *v35; // r12
  struct _KTHREAD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  PVOID v39; // rdi
  unsigned int v40; // ebx
  unsigned __int64 v41; // rax
  unsigned int v42; // edx
  unsigned __int8 *v43; // rcx
  int v44; // r14d
  __int64 v45; // r10
  unsigned int v46; // r8d
  unsigned int v47; // r9d
  int v48; // edx
  unsigned int v49; // ecx
  int v50; // r14d
  void *v51; // rsi
  unsigned __int8 *v52; // r9
  __int64 v53; // r10
  unsigned int v54; // edx
  unsigned int v55; // r8d
  int v56; // ecx
  int v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // eax
  int v61; // r13d
  struct _KTHREAD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdi
  struct _KTHREAD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  int v69; // eax
  int v70; // eax
  bool v71; // di
  unsigned __int64 v72; // rax
  unsigned int v73; // ecx
  int v74; // r10d
  __int64 v75; // r9
  unsigned int v76; // edx
  unsigned int v77; // r8d
  int v78; // ecx
  ULONG v79; // ecx
  int v80; // r10d
  unsigned __int8 *v81; // r9
  __int64 v82; // r10
  unsigned int v83; // edx
  unsigned int v84; // r8d
  int v85; // ecx
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
  unsigned __int64 v101; // r8
  __int64 v102; // rcx
  unsigned __int8 *v103; // r9
  NTSTATUS v104; // edx
  __int64 v105; // r11
  unsigned int v106; // r8d
  unsigned int v107; // r10d
  int v108; // ecx
  unsigned __int64 v109; // r8
  unsigned __int8 *v110; // r10
  __int64 v111; // r9
  unsigned int v112; // edx
  unsigned int v113; // r8d
  int v114; // ecx
  unsigned __int64 v115; // r8
  __int64 v116; // rcx
  unsigned __int8 *v117; // r9
  NTSTATUS v118; // edx
  __int64 v119; // r11
  unsigned int v120; // r8d
  unsigned int v121; // r10d
  int v122; // ecx
  unsigned __int64 v123; // r8
  unsigned __int8 *v124; // r10
  __int64 v125; // r9
  unsigned int v126; // edx
  unsigned int v127; // r8d
  int v128; // ecx
  struct _KTHREAD *v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdi
  int v132; // eax
  __int64 v133; // r8
  __int64 v134; // rcx
  unsigned __int8 *v135; // r10
  NTSTATUS v136; // edx
  __int64 v137; // r11
  int v138; // r8d
  int v139; // r9d
  int v140; // ecx
  __int64 v141; // r8
  __int64 v142; // r9
  int v143; // edx
  int v144; // r8d
  int v145; // ecx
  char v146; // di
  char v147; // [rsp+40h] [rbp-4A8h]
  char v148; // [rsp+41h] [rbp-4A7h]
  bool v149; // [rsp+42h] [rbp-4A6h]
  size_t NumOfElements; // [rsp+48h] [rbp-4A0h] BYREF
  void *Src; // [rsp+50h] [rbp-498h]
  PVOID v152; // [rsp+58h] [rbp-490h]
  int v153; // [rsp+60h] [rbp-488h]
  PVOID MappedBase; // [rsp+68h] [rbp-480h] BYREF
  unsigned __int64 v155; // [rsp+70h] [rbp-478h]
  unsigned __int64 v156; // [rsp+78h] [rbp-470h]
  unsigned __int64 v157; // [rsp+80h] [rbp-468h]
  unsigned __int64 v158; // [rsp+88h] [rbp-460h]
  int v159; // [rsp+90h] [rbp-458h]
  unsigned __int64 v160; // [rsp+98h] [rbp-450h]
  unsigned __int64 v161; // [rsp+A0h] [rbp-448h]
  unsigned __int64 v162; // [rsp+A8h] [rbp-440h]
  unsigned __int64 v163; // [rsp+B0h] [rbp-438h]
  unsigned __int64 v164; // [rsp+B8h] [rbp-430h]
  int v165; // [rsp+C0h] [rbp-428h]
  unsigned __int64 v166; // [rsp+C8h] [rbp-420h]
  __int64 v167; // [rsp+D0h] [rbp-418h]
  __int64 v168; // [rsp+D8h] [rbp-410h]
  PVOID v169; // [rsp+E8h] [rbp-400h]
  unsigned int v170; // [rsp+F0h] [rbp-3F8h]
  ULONG pulResult; // [rsp+F4h] [rbp-3F4h] BYREF
  ULONG v172; // [rsp+F8h] [rbp-3F0h] BYREF
  ULONG v173[3]; // [rsp+FCh] [rbp-3ECh] BYREF
  PVOID v174; // [rsp+108h] [rbp-3E0h]
  HANDLE SectionHandle; // [rsp+110h] [rbp-3D8h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+118h] [rbp-3D0h] BYREF
  __int128 v177; // [rsp+120h] [rbp-3C8h]
  __int128 v178; // [rsp+130h] [rbp-3B8h]
  __int128 v179; // [rsp+140h] [rbp-3A8h]
  __int128 v180; // [rsp+150h] [rbp-398h]
  __int128 v181; // [rsp+160h] [rbp-388h]
  __int128 v182; // [rsp+170h] [rbp-378h]
  __int128 v183; // [rsp+180h] [rbp-368h]
  __int128 v184; // [rsp+190h] [rbp-358h]
  __int128 v185; // [rsp+1A0h] [rbp-348h]
  __int128 v186; // [rsp+1B0h] [rbp-338h]
  __int128 v187; // [rsp+1C0h] [rbp-328h]
  __int128 v188; // [rsp+1D0h] [rbp-318h]
  __int128 v189; // [rsp+1E0h] [rbp-308h]
  __int128 v190; // [rsp+1F0h] [rbp-2F8h]
  __int128 v191; // [rsp+200h] [rbp-2E8h]
  __int128 v192; // [rsp+210h] [rbp-2D8h]
  __int128 v193; // [rsp+220h] [rbp-2C8h]
  __int128 v194; // [rsp+230h] [rbp-2B8h]
  __int64 v195; // [rsp+240h] [rbp-2A8h]
  int v196; // [rsp+248h] [rbp-2A0h]
  PVOID Object; // [rsp+250h] [rbp-298h] BYREF
  ULONG_PTR ViewSize; // [rsp+258h] [rbp-290h] BYREF
  __int128 v199; // [rsp+260h] [rbp-288h] BYREF
  __int128 v200; // [rsp+270h] [rbp-278h]
  __int128 v201; // [rsp+280h] [rbp-268h]
  _OWORD v202[3]; // [rsp+290h] [rbp-258h] BYREF
  _OWORD v203[3]; // [rsp+2C0h] [rbp-228h] BYREF
  _OWORD v204[3]; // [rsp+2F0h] [rbp-1F8h] BYREF
  _OWORD v205[3]; // [rsp+320h] [rbp-1C8h] BYREF
  int v206; // [rsp+350h] [rbp-198h]
  unsigned int v207; // [rsp+358h] [rbp-190h]
  int v208; // [rsp+360h] [rbp-188h]
  unsigned int v209; // [rsp+368h] [rbp-180h]
  unsigned int v210; // [rsp+370h] [rbp-178h]
  unsigned int v211; // [rsp+378h] [rbp-170h]
  __int64 v212; // [rsp+380h] [rbp-168h]
  unsigned int v213; // [rsp+388h] [rbp-160h]
  unsigned int v214; // [rsp+390h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+398h] [rbp-150h] BYREF
  unsigned int v216; // [rsp+3C8h] [rbp-120h]
  unsigned int v217; // [rsp+3D0h] [rbp-118h]
  unsigned int v218; // [rsp+3D8h] [rbp-110h]
  unsigned int v219; // [rsp+3E0h] [rbp-108h]
  char v220[8]; // [rsp+3E8h] [rbp-100h] BYREF
  int v221; // [rsp+3F0h] [rbp-F8h]
  _BYTE v222[48]; // [rsp+418h] [rbp-D0h] BYREF
  char v223[8]; // [rsp+448h] [rbp-A0h] BYREF
  int v224; // [rsp+450h] [rbp-98h]
  char v225[8]; // [rsp+478h] [rbp-70h] BYREF
  int v226; // [rsp+480h] [rbp-68h]
  char v227; // [rsp+4F8h] [rbp+10h]
  char v228; // [rsp+500h] [rbp+18h]
  int v229; // [rsp+508h] [rbp+20h]

  v149 = 0;
  v4 = 0;
  v227 = 0;
  v148 = 0;
  v228 = 0;
  MappedBase = 0LL;
  v174 = 0LL;
  v169 = 0LL;
  v5 = 0LL;
  v152 = 0LL;
  LODWORD(NumOfElements) = 0;
  Src = 0LL;
  if ( !a2 || (unsigned int)(a1 - 25) > 0xFFE7 || ((unsigned __int8)a2 & 3) != 0 )
    goto LABEL_187;
  v6 = *a2;
  if ( *a2 > 0x10000 || (v7 = a2[1], (unsigned int)v7 > 0x10000) || (v8 = a2[2], v8 > 0x10000) )
  {
    v15 = -1073741760;
    goto LABEL_189;
  }
  v9 = (unsigned __int8 *)(a2 + 5);
  v10 = (char *)a2 + v7 + 20;
  if ( ((unsigned __int8)v10 & 3) != 0 || v8 + (_DWORD)v7 + 20 != v6 || v6 != a1 || a2[4] != 1 )
  {
LABEL_187:
    v15 = -1073741811;
LABEL_189:
    v229 = v15;
    goto LABEL_190;
  }
  v229 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBA20, v12, (ULONG_PTR)&qword_1406FBA20);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( off_1406FB020 )
  {
    v13 = 1;
    v227 = 1;
  }
  else
  {
    v148 = 1;
    v13 = 0;
  }
  if ( InitSafeBootMode || InitIsWinPEMode )
  {
    if ( !v13 )
    {
      v229 = -1073741823;
      goto LABEL_35;
    }
  }
  else if ( !v13 && (a2[3] & 1) != 0 )
  {
    v229 = -1073741811;
    goto LABEL_35;
  }
  v149 = 0;
  if ( !v13 )
  {
    if ( Data )
    {
      if ( !BYTE1(NlsMbCodePageTag) && *a2 == *(_DWORD *)Data )
      {
        v14 = a2[1];
        if ( v14 == *((_DWORD *)Data + 1)
          && a2[2] == *((_DWORD *)Data + 2)
          && a2[3] == *((_DWORD *)Data + 3)
          && a2[4] == *((_DWORD *)Data + 4)
          && RtlCompareMemory((char *)Data + 20, a2 + 5, v14) == a2[1] )
        {
          v149 = RtlCompareMemory((char *)Data + *((unsigned int *)Data + 1) + 20, v10, a2[2]) == a2[2];
        }
      }
    }
  }
LABEL_35:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v15 = v229;
  if ( v229 < 0 )
    goto LABEL_190;
  if ( v149 )
  {
    v66 = KeGetCurrentThread();
    --v66->KernelApcDisable;
    v67 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v68 = v67;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v67, (ULONG_PTR)&qword_1406FBA20);
    if ( v68 )
      *(_BYTE *)(v68 + 26) |= 1u;
    if ( !Data )
    {
      v70 = dword_1406FB0F4;
      goto LABEL_163;
    }
    v69 = sub_14048AB98(v204);
    if ( v69 >= 0 )
    {
      v70 = DWORD2(v204[0]);
LABEL_163:
      v61 = 4;
      v35 = (unsigned __int8 *)qword_140701300;
      goto LABEL_164;
    }
    v61 = 4;
    if ( v69 != -1073741275 || !Data )
    {
      v35 = (unsigned __int8 *)qword_140701300;
      goto LABEL_217;
    }
    v86 = 0LL;
    *(_QWORD *)&v186 = 0LL;
    v187 = 0uLL;
    DWORD2(v186) = 4;
    *(_QWORD *)&v188 = 0LL;
    BYTE8(v188) = 1;
    v87 = *((unsigned int *)Data + 1);
    v88 = (unsigned __int8 *)Data + 20;
    v89 = 0;
    if ( Data == (PVOID)-20LL )
    {
      v89 = -1073741811;
    }
    else
    {
      v161 = 0LL;
      v90 = v87;
      if ( (_DWORD)v87 )
      {
        v91 = HIDWORD(v161);
        v92 = v161;
        do
        {
          v93 = *v88 - 23737705;
          v91 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v91 + v93), 21), 21), 21);
          v213 = v91;
          v92 += v91 + v93;
          v161 = __PAIR64__(v91, v92);
          ++v88;
          --v90;
        }
        while ( v90 );
        v86 = v161;
      }
      *(_QWORD *)&v186 = v86;
    }
    if ( v89 || !(_DWORD)::NumOfElements )
    {
      v35 = (unsigned __int8 *)qword_140701300;
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
      v173[1] = v94;
      v35 = (unsigned __int8 *)qword_140701300;
      if ( v95 )
        goto LABEL_214;
      v155 = v86;
      v96 = (unsigned __int8 *)qword_140701300;
      v97 = v94;
      if ( v94 )
      {
        v98 = HIDWORD(v155);
        v99 = v155;
        do
        {
          v100 = *v96 - 23737705;
          v98 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v98 + v100), 21), 21), 21);
          v216 = v98;
          v99 += v98 + v100;
          v155 = __PAIR64__(v98, v99);
          ++v96;
          --v97;
        }
        while ( v97 );
        v86 = v155;
      }
      *(_QWORD *)&v186 = v86;
      v89 = 0;
    }
    if ( !v89 )
    {
LABEL_215:
      v204[0] = v186;
      v204[1] = v187;
      v204[2] = v188;
      DWORD2(v204[0]) = 4;
      sub_140489880(v204, 0xFFFFFFFFLL);
LABEL_217:
      v70 = 4;
LABEL_164:
      v71 = v70 != 0;
      v72 = 0LL;
      *(_QWORD *)&v177 = 0LL;
      v178 = 0uLL;
      DWORD2(v177) = 0;
      *(_QWORD *)&v179 = 10800LL;
      BYTE8(v179) = 1;
      v73 = a2[1];
      v74 = 0;
      if ( a2 == (unsigned int *)-20LL )
      {
        v74 = -1073741811;
      }
      else
      {
        v72 = 0LL;
        v163 = 0LL;
        v75 = v73;
        if ( v73 )
        {
          v76 = HIDWORD(v163);
          v77 = v163;
          do
          {
            v78 = *v9 - 23737705;
            v76 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v76 + v78), 21), 21), 21);
            v210 = v76;
            v77 += v76 + v78;
            v163 = __PAIR64__(v76, v77);
            ++v9;
            --v75;
          }
          while ( v75 );
          v72 = v163;
        }
        *(_QWORD *)&v177 = v72;
      }
      if ( !v74 )
      {
        if ( !(_DWORD)::NumOfElements )
        {
LABEL_180:
          v199 = v177;
          v200 = v178;
          v201 = v179;
          sub_140489880(&v199, 7LL);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
          KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v71 )
            sub_1404886E8();
          v15 = 0x40000000;
          v229 = 0x40000000;
          v5 = 0LL;
          goto LABEL_134;
        }
        v79 = 16 * ::NumOfElements;
        if ( 16 * (unsigned __int64)(unsigned int)::NumOfElements > 0xFFFFFFFF )
        {
          v79 = -1;
          v80 = -1073741675;
        }
        else
        {
          v80 = 0;
        }
        v173[2] = v79;
        if ( !v80 )
        {
          v156 = v72;
          v81 = (unsigned __int8 *)qword_140701300;
          v82 = v79;
          if ( v79 )
          {
            v83 = HIDWORD(v156);
            v84 = v156;
            do
            {
              v85 = *v81 - 23737705;
              v83 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v83 + v85), 21), 21), 21);
              v219 = v83;
              v84 += v83 + v85;
              v156 = __PAIR64__(v83, v84);
              ++v81;
              --v82;
            }
            while ( v82 );
            v72 = v156;
          }
          *(_QWORD *)&v177 = v72;
          goto LABEL_180;
        }
      }
      *(_QWORD *)&v177 = 0LL;
      DWORD2(v177) = 4;
      goto LABEL_180;
    }
LABEL_214:
    *(_QWORD *)&v186 = 0LL;
    DWORD2(v186) = 4;
    goto LABEL_215;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a2;
  v15 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  v229 = v15;
  if ( v15 < 0 )
  {
LABEL_190:
    v35 = (unsigned __int8 *)qword_140701300;
    goto LABEL_285;
  }
  v15 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v16 = Object;
  v169 = Object;
  v229 = v15;
  ZwClose(SectionHandle);
  if ( v15 < 0 )
    goto LABEL_283;
  ViewSize = 0LL;
  v15 = MmMapViewInSystemSpace(v16, &MappedBase, &ViewSize);
  v229 = v15;
  if ( v15 < 0 )
    goto LABEL_283;
  v17 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a2;
  v17[4] = a2[4];
  memmove(v17 + 5, a2 + 5, a2[1]);
  memmove((char *)v17 + a2[1] + 20, v10, a2[2]);
  v18 = (unsigned int *)((char *)v17 + v17[1] + 20);
  if ( v17[2] != 4 || !v18 || *v18 != 69 )
  {
    v15 = -1073741761;
LABEL_282:
    v229 = v15;
LABEL_283:
    v35 = (unsigned __int8 *)qword_140701300;
LABEL_284:
    v5 = v152;
    goto LABEL_285;
  }
  v15 = sub_140488708((__int64)v17, 1, 0LL, 0, (unsigned int *)&NumOfElements);
  v229 = v15;
  if ( v15 == -1073741789 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_1406FBA20, v20, (ULONG_PTR)&qword_1406FBA20);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    if ( (unsigned int)NumOfElements > 0x923 )
      v229 = -1073741811;
    else
      v229 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = v229;
    if ( v229 >= 0 )
    {
      v21 = NumOfElements;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)NumOfElements, 0x20534C53u);
      v23 = PoolWithTag;
      Src = PoolWithTag;
      if ( PoolWithTag )
      {
        v15 = sub_140488708((__int64)MappedBase, 0, PoolWithTag, v21, 0LL);
        v229 = v15;
        if ( v15 >= 0 )
          qsort(v23, v21, 0x10uLL, PtFuncCompare);
        goto LABEL_58;
      }
      v15 = -1073741801;
      goto LABEL_282;
    }
    v35 = (unsigned __int8 *)qword_140701300;
    v5 = v152;
LABEL_285:
    v61 = 4;
    goto LABEL_134;
  }
  v23 = Src;
LABEL_58:
  if ( v15 >= 0 )
  {
    v147 = 0;
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&qword_1406FBA20, v25, (ULONG_PTR)&qword_1406FBA20);
    if ( v25 )
      *(_BYTE *)(v25 + 26) |= 1u;
    if ( !v227 )
    {
      v26 = 0;
      v153 = 0;
      v27 = 0;
      v165 = 0;
      v28 = NumOfElements;
      v29 = ::NumOfElements;
      while ( v26 < v28 && v27 < v29 )
      {
        v30 = (char *)Src + 16 * v26;
        v31 = PtFuncCompare(v30, &qword_140701300[2 * v27]);
        v196 = v31;
        v32 = v30[1];
        v195 = v32;
        v33 = qword_140701300[2 * v27 + 1];
        v212 = v33;
        if ( v31 < 0 )
        {
          if ( (*(_DWORD *)(v32 + 8) & 2) != 0 )
            goto LABEL_82;
          v153 = ++v26;
        }
        else if ( v31 > 0 )
        {
          v165 = ++v27;
        }
        else
        {
          if ( (*(_DWORD *)(v32 + 8) & 2) != 0 )
          {
            v34 = *(_WORD *)(v33 + 6);
            if ( *(_WORD *)(v32 + 6) != v34
              || memcmp(
                   (const void *)(*(unsigned __int16 *)(v32 + 2) + 16LL + v32),
                   (const void *)(*(unsigned __int16 *)(v33 + 2) + 16LL + v33),
                   v34) )
            {
LABEL_82:
              v23 = Src;
LABEL_83:
              v147 = 1;
              goto LABEL_84;
            }
          }
          v153 = ++v26;
          v165 = ++v27;
        }
      }
      v23 = Src;
      while ( v26 < v28 )
      {
        v195 = *((_QWORD *)Src + 2 * v26 + 1);
        if ( (*(_DWORD *)(v195 + 8) & 2) != 0 )
          goto LABEL_83;
        v153 = ++v26;
      }
    }
LABEL_84:
    v35 = (unsigned __int8 *)qword_140701300;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfReferenceObject(v169);
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    v37 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v38 = v37;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v37, (ULONG_PTR)&qword_1406FBA20);
    if ( v38 )
      *(_BYTE *)(v38 + 26) |= 1u;
    v39 = MappedBase;
    if ( MappedBase )
    {
      v40 = NumOfElements;
      if ( !(_DWORD)NumOfElements || v23 )
      {
        v41 = 0LL;
        *(_QWORD *)&v180 = 0LL;
        v181 = 0uLL;
        DWORD2(v180) = 0;
        *(_QWORD *)&v182 = 10800LL;
        BYTE8(v182) = 1;
        v42 = *((_DWORD *)MappedBase + 1);
        v43 = (unsigned __int8 *)MappedBase + 20;
        v44 = 0;
        if ( MappedBase == (PVOID)-20LL )
        {
          v44 = -1073741811;
        }
        else
        {
          v157 = 0LL;
          v45 = v42;
          if ( v42 )
          {
            v46 = HIDWORD(v157);
            v47 = v157;
            do
            {
              v48 = *v43 - 23737705;
              v46 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v46 + v48), 21), 21), 21);
              v218 = v46;
              v47 += v46 + v48;
              v157 = __PAIR64__(v46, v47);
              ++v43;
              --v45;
            }
            while ( v45 );
            v41 = v157;
          }
          *(_QWORD *)&v180 = v41;
        }
        if ( v44 || !(_DWORD)NumOfElements )
        {
          v51 = Src;
        }
        else
        {
          v49 = 16 * NumOfElements;
          if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
          {
            v49 = -1;
            v50 = -1073741675;
          }
          else
          {
            v50 = 0;
          }
          v170 = v49;
          v51 = Src;
          if ( v50 )
            goto LABEL_229;
          v44 = 0;
          if ( Src )
          {
            v158 = v41;
            v52 = (unsigned __int8 *)Src;
            v53 = v49;
            if ( v49 )
            {
              v54 = HIDWORD(v158);
              v55 = v158;
              do
              {
                v56 = *v52 - 23737705;
                v54 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v54 + v56), 21), 21), 21);
                v214 = v54;
                v55 += v54 + v56;
                v158 = __PAIR64__(v54, v55);
                ++v52;
                --v53;
              }
              while ( v53 );
              v41 = v158;
            }
            *(_QWORD *)&v180 = v41;
          }
          else
          {
            v44 = -1073741811;
          }
        }
        if ( !v44 )
        {
LABEL_111:
          v199 = v180;
          v200 = v181;
          v201 = v182;
          goto LABEL_112;
        }
LABEL_229:
        *(_QWORD *)&v180 = 0LL;
        DWORD2(v180) = 4;
        v44 = 0;
        goto LABEL_111;
      }
    }
    else
    {
      v40 = NumOfElements;
    }
    v51 = Src;
    v44 = -1073741811;
LABEL_112:
    v229 = v44;
    if ( v44 >= 0 )
    {
      sub_140489880(&v199, 7LL);
      v152 = (PVOID)qword_1406FBF98;
      v174 = Data;
      qword_1406FBF98 = (__int64)v169;
      Data = v39;
      v4 = 0;
      MappedBase = 0LL;
      off_1406FB020 = 0LL;
      v228 = BYTE1(NlsMbCodePageTag);
      BYTE1(NlsMbCodePageTag) = 0;
      memset(qword_140701300, 0, 16LL * (unsigned int)::NumOfElements);
      LODWORD(::NumOfElements) = 0;
      if ( v51 )
      {
        memmove(qword_140701300, v51, 16LL * v40);
        LODWORD(::NumOfElements) = v40;
      }
      BYTE6(NlsMbCodePageTag) = 1;
      if ( Data )
      {
        v57 = sub_14048AB98(v203);
        if ( v57 < 0 )
        {
          if ( v57 == -1073741275 && Data )
          {
            v101 = 0LL;
            *(_QWORD *)&v183 = 0LL;
            v184 = 0uLL;
            DWORD2(v183) = 4;
            *(_QWORD *)&v185 = 0LL;
            BYTE8(v185) = 1;
            v102 = *((unsigned int *)Data + 1);
            v103 = (unsigned __int8 *)Data + 20;
            v104 = 0;
            if ( Data == (PVOID)-20LL )
            {
              v104 = -1073741811;
            }
            else
            {
              v160 = 0LL;
              v105 = v102;
              if ( (_DWORD)v102 )
              {
                v106 = HIDWORD(v160);
                v107 = v160;
                do
                {
                  v108 = *v103 - 23737705;
                  v106 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v106 + v108), 21), 21), 21);
                  v217 = v106;
                  v107 += v106 + v108;
                  v160 = __PAIR64__(v106, v107);
                  ++v103;
                  --v105;
                }
                while ( v105 );
                v101 = v160;
              }
              *(_QWORD *)&v183 = v101;
            }
            if ( v104 )
              goto LABEL_251;
            if ( (_DWORD)::NumOfElements )
            {
              v104 = RtlULongLongToULong(16LL * (unsigned int)::NumOfElements, &pulResult);
              if ( !v104 )
              {
                v162 = v109;
                v110 = (unsigned __int8 *)qword_140701300;
                v111 = pulResult;
                if ( pulResult )
                {
                  v112 = HIDWORD(v162);
                  v113 = v162;
                  do
                  {
                    v114 = *v110 - 23737705;
                    v112 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v112 + v114), 21), 21), 21);
                    v207 = v112;
                    v113 += v112 + v114;
                    v162 = __PAIR64__(v112, v113);
                    ++v110;
                    --v111;
                  }
                  while ( v111 );
                  v109 = v162;
                }
                *(_QWORD *)&v183 = v109;
                v104 = 0;
              }
            }
            if ( v104 )
            {
LABEL_251:
              *(_QWORD *)&v183 = 0LL;
              DWORD2(v183) = 4;
            }
            v203[0] = v183;
            v203[1] = v184;
            v203[2] = v185;
            DWORD2(v203[0]) = 4;
            sub_140489880(v203, 0xFFFFFFFFLL);
          }
          v58 = 4;
        }
        else
        {
          v58 = DWORD2(v203[0]);
        }
      }
      else
      {
        v58 = dword_1406FB0F4;
      }
      v159 = v58;
      if ( (*((_DWORD *)Data + 3) & 1) != 0 )
      {
        dword_1406FB0F4 = 2;
        v221 = 2;
        sub_140489880(v220, 2LL);
        v148 = 1;
      }
      else
      {
        dword_1406FB0F4 = 0;
        v224 = 0;
        sub_140489880(v223, 2LL);
      }
      if ( Data )
      {
        v59 = sub_14048AB98(v205);
        if ( v59 < 0 )
        {
          if ( v59 == -1073741275 && Data )
          {
            v115 = 0LL;
            *(_QWORD *)&v192 = 0LL;
            v193 = 0uLL;
            DWORD2(v192) = 4;
            *(_QWORD *)&v194 = 0LL;
            BYTE8(v194) = 1;
            v116 = *((unsigned int *)Data + 1);
            v117 = (unsigned __int8 *)Data + 20;
            v118 = 0;
            if ( Data == (PVOID)-20LL )
            {
              v118 = -1073741811;
            }
            else
            {
              v164 = 0LL;
              v119 = v116;
              if ( (_DWORD)v116 )
              {
                v120 = HIDWORD(v164);
                v121 = v164;
                do
                {
                  v122 = *v117 - 23737705;
                  v120 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v120 + v122), 21), 21), 21);
                  v209 = v120;
                  v121 += v120 + v122;
                  v164 = __PAIR64__(v120, v121);
                  ++v117;
                  --v119;
                }
                while ( v119 );
                v115 = v164;
              }
              *(_QWORD *)&v192 = v115;
            }
            if ( v118 )
              goto LABEL_274;
            if ( (_DWORD)::NumOfElements )
            {
              v118 = RtlULongLongToULong(16LL * (unsigned int)::NumOfElements, v173);
              if ( !v118 )
              {
                v166 = v123;
                v124 = (unsigned __int8 *)qword_140701300;
                v125 = v173[0];
                if ( v173[0] )
                {
                  v126 = HIDWORD(v166);
                  v127 = v166;
                  do
                  {
                    v128 = *v124 - 23737705;
                    v126 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v126 + v128), 21), 21), 21);
                    v211 = v126;
                    v127 += v126 + v128;
                    v166 = __PAIR64__(v126, v127);
                    ++v124;
                    --v125;
                  }
                  while ( v125 );
                  v123 = v166;
                }
                *(_QWORD *)&v192 = v123;
                v118 = 0;
              }
            }
            if ( v118 )
            {
LABEL_274:
              *(_QWORD *)&v192 = 0LL;
              DWORD2(v192) = 4;
            }
            v205[0] = v192;
            v205[1] = v193;
            v205[2] = v194;
            DWORD2(v205[0]) = 4;
            sub_140489880(v205, 0xFFFFFFFFLL);
          }
          v60 = 4;
        }
        else
        {
          v60 = DWORD2(v205[0]);
        }
      }
      else
      {
        v60 = dword_1406FB0F4;
      }
      if ( v58 != v60 && (!v58 || !v60) )
        v4 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v44 < 0 )
    {
      v15 = v44;
    }
    else if ( v227 || (v15 = sub_1404885A8(), v229 = v15, v15 >= 0) )
    {
      if ( v4 || !v227 )
        sub_1404886E8();
      v15 = 0;
      v229 = 0;
      v61 = 4;
      v5 = v152;
      if ( v147 == 1 )
      {
        v15 = 263;
        v229 = 263;
      }
      goto LABEL_134;
    }
    goto LABEL_284;
  }
  v35 = (unsigned __int8 *)qword_140701300;
  v61 = 4;
  v5 = v152;
  if ( v15 == -1073741762 )
  {
    v15 = -1073741811;
    v229 = -1073741811;
  }
LABEL_134:
  if ( v228 && !BYTE1(NlsMbCodePageTag) )
    sub_140669904(&KernelLicensingCacheCorruptionFixed);
  if ( v148 )
  {
    v62 = KeGetCurrentThread();
    --v62->KernelApcDisable;
    v63 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v64 = v63;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v63, (ULONG_PTR)&qword_1406FBA20);
    if ( v64 )
      *(_BYTE *)(v64 + 26) |= 1u;
    v222[40] = 0;
    sub_140489880(v222, 32LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = v229;
  }
  if ( v169 )
    ObfDereferenceObject(v169);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v174 )
    MmUnmapViewInSystemSpace(v174);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v15 == -1073741811 || (unsigned int)(v15 + 1073741761) <= 1 )
  {
    v129 = KeGetCurrentThread();
    --v129->KernelApcDisable;
    v130 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v131 = v130;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v130, (ULONG_PTR)&qword_1406FBA20);
    if ( v131 )
      *(_BYTE *)(v131 + 26) |= 1u;
    if ( Data )
    {
      v132 = sub_14048AB98(v202);
      if ( v132 < 0 )
      {
        if ( v132 == -1073741275 && Data )
        {
          v133 = 0LL;
          *(_QWORD *)&v189 = 0LL;
          v190 = 0uLL;
          DWORD2(v189) = 4;
          *(_QWORD *)&v191 = 0LL;
          BYTE8(v191) = 1;
          v134 = *((unsigned int *)Data + 1);
          v135 = (unsigned __int8 *)Data + 20;
          v136 = 0;
          if ( Data == (PVOID)-20LL )
          {
            v136 = -1073741811;
          }
          else
          {
            v168 = 0LL;
            v137 = v134;
            if ( (_DWORD)v134 )
            {
              v138 = HIDWORD(v168);
              v139 = v168;
              do
              {
                v140 = *v135 - 23737705;
                v138 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v138 + v140), 21), 21), 21);
                HIDWORD(v168) = v138;
                v139 += v138 + v140;
                ++v135;
                --v137;
              }
              while ( v137 );
              v206 = v138;
              LODWORD(v168) = v139;
              v133 = v168;
            }
            *(_QWORD *)&v189 = v133;
          }
          if ( v136 )
            goto LABEL_314;
          if ( (_DWORD)::NumOfElements )
          {
            v136 = RtlULongLongToULong(16LL * (unsigned int)::NumOfElements, &v172);
            if ( !v136 )
            {
              v167 = v141;
              v142 = v172;
              if ( v172 )
              {
                v143 = HIDWORD(v167);
                v144 = v167;
                do
                {
                  v145 = *v35 - 23737705;
                  v143 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v143 + v145), 21), 21), 21);
                  HIDWORD(v167) = v143;
                  v144 += v143 + v145;
                  ++v35;
                  --v142;
                }
                while ( v142 );
                v208 = v143;
                LODWORD(v167) = v144;
                v141 = v167;
              }
              *(_QWORD *)&v189 = v141;
              v136 = 0;
            }
          }
          if ( v136 )
          {
LABEL_314:
            *(_QWORD *)&v189 = 0LL;
            DWORD2(v189) = 4;
          }
          v202[0] = v189;
          v202[1] = v190;
          v202[2] = v191;
          DWORD2(v202[0]) = 4;
          sub_140489880(v202, 0xFFFFFFFFLL);
        }
      }
      else
      {
        v61 = DWORD2(v202[0]);
      }
    }
    else
    {
      v61 = dword_1406FB0F4;
    }
    if ( v61 )
    {
      v146 = 0;
    }
    else
    {
      dword_1406FB0F4 = 5;
      v226 = 5;
      sub_140489880(v225, 2LL);
      v146 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
    KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v146 )
      sub_1404886E8();
    return (unsigned int)v229;
  }
  return (unsigned int)v15;
}
