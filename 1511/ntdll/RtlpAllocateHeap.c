/*
 * XREFs of RtlpAllocateHeap @ 0x180027BE0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180020000 (RtlpInsertFreeBlock.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x1800301D0 (RtlpUnWaitCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpGetLFHContext @ 0x18004F408 (RtlpGetLFHContext.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpPerformHeapMaintenance @ 0x180052FD4 (RtlpPerformHeapMaintenance.c)
 *     RtlLogStackBackTraceEx @ 0x180054FC8 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapAddListEntry @ 0x1800573C4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180057470 (RtlpFindEntry.c)
 *     RtlpHeapListCompare @ 0x180057700 (RtlpHeapListCompare.c)
 *     RtlpHeapRemoveListEntry @ 0x180057774 (RtlpHeapRemoveListEntry.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180058680 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpGetExtraStuffPointer @ 0x180074A8C (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x18007BE7C (RtlpUpdateHeapRates.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800A92F0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800CBE40 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x1800E1BE4 (RtlpUpdateTagEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800E328C (RtlpUpdateHeapWatermarks.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1800F0F4C (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F1810 (RtlpLogHeapExtendEvent.c)
 */

void *__fastcall RtlpAllocateHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
        unsigned int a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        _QWORD *a5,
        _DWORD *a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // r14
  unsigned __int64 v10; // rdi
  ULONG_PTR v11; // r13
  __int64 v13; // rax
  ULONG_PTR v14; // rcx
  PRTL_CRITICAL_SECTION v15; // rcx
  struct _TEB *v16; // rax
  signed __int8 v17; // cf
  void *UniqueThread; // rax
  struct _TEB *v19; // rdi
  bool v20; // zf
  unsigned __int64 v21; // r14
  char v22; // si
  unsigned __int16 *v23; // rdi
  unsigned __int16 v24; // cx
  __int64 v25; // rdx
  PRTL_CRITICAL_SECTION v26; // rcx
  unsigned __int16 LFHContext; // ax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 *v30; // r14
  __int64 v31; // rax
  __int64 v32; // r9
  PRTL_CRITICAL_SECTION v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 LockCount; // r8
  char *v36; // r14
  struct _TEB *v37; // rdi
  PRTL_CRITICAL_SECTION i; // r14
  ULONG_PTR v39; // rcx
  unsigned int LockSemaphore; // esi
  __int64 v41; // rsi
  char *v42; // r15
  char **SpinCount; // r12
  char **v44; // rax
  int v45; // r8d
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  char **k; // rdi
  int v50; // eax
  __int64 v51; // rdi
  unsigned int v52; // r9d
  unsigned int *v53; // r8
  unsigned int v54; // edx
  int v55; // eax
  __int64 v56; // rdi
  ULONG_PTR v57; // rcx
  char *v58; // r8
  __int64 v59; // r11
  __int64 v60; // rax
  __int64 v61; // r9
  PRTL_CRITICAL_SECTION v62; // rsi
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  int v65; // r12d
  unsigned int v66; // r14d
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // r9
  char *v70; // r10
  unsigned int v71; // edx
  __int64 v72; // r15
  int v73; // eax
  __int64 *v74; // rax
  char *v75; // rax
  __int64 v76; // r13
  PRTL_CRITICAL_SECTION v77; // rsi
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  __int64 v80; // r11
  unsigned int v81; // r14d
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // r9
  char *v85; // r10
  unsigned int v86; // edx
  __int64 v87; // r15
  __int64 *v88; // rax
  char v89; // r12
  int v90; // r8d
  SIZE_T v91; // rsi
  SIZE_T v92; // r15
  ULONG_PTR v93; // rdx
  ULONG_PTR v94; // r15
  unsigned __int64 v95; // r14
  ULONG_PTR v96; // rcx
  ULONG_PTR v97; // rcx
  bool v98; // r13
  unsigned __int8 v99; // al
  PRTL_CRITICAL_SECTION *v100; // r9
  unsigned __int64 v101; // rsi
  PRTL_CRITICAL_SECTION *v102; // rdx
  __int64 v103; // rdi
  unsigned __int64 v104; // rdi
  unsigned __int64 v105; // rdi
  _QWORD *v106; // rax
  PRTL_CRITICAL_SECTION v107; // r12
  unsigned __int64 v108; // rcx
  __int64 v109; // r15
  _QWORD *v110; // r14
  _QWORD *v111; // r13
  _QWORD *v112; // rax
  int v113; // r8d
  int v114; // eax
  __int64 v115; // r8
  int v116; // eax
  _QWORD *m; // rdi
  int v118; // eax
  __int64 v119; // rdi
  unsigned int v120; // r9d
  unsigned int *v121; // r8
  unsigned int v122; // edx
  int v123; // eax
  __int64 v124; // rdi
  int v125; // ecx
  unsigned __int16 v126; // ax
  _QWORD *v127; // r12
  __int64 *v128; // rax
  PRTL_CRITICAL_SECTION v129; // rdi
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // rdx
  int v132; // r15d
  unsigned int v133; // r14d
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r13
  int v137; // eax
  _DWORD *v138; // r8
  unsigned __int64 v139; // rdx
  _QWORD *v140; // rdi
  _QWORD *Entry; // r8
  int v142; // ecx
  unsigned __int16 v143; // ax
  _QWORD *v144; // rdi
  __int64 *v145; // rax
  PRTL_CRITICAL_SECTION v146; // rdx
  unsigned __int64 v147; // rcx
  unsigned __int64 v148; // r8
  __int64 v149; // r14
  __int64 *v150; // r12
  __int64 v151; // rax
  __int64 v152; // r9
  PRTL_CRITICAL_SECTION v153; // rdx
  unsigned __int64 v154; // rcx
  unsigned __int64 v155; // r8
  char v156; // al
  SIZE_T v157; // r14
  SIZE_T v158; // r12
  unsigned __int64 v159; // r15
  _QWORD *v160; // rdi
  _QWORD *v161; // r8
  int v162; // ecx
  unsigned __int16 v163; // ax
  __int64 *v164; // rax
  _DWORD *v165; // r8
  unsigned __int64 v166; // rdx
  _QWORD *v167; // rdi
  _QWORD *v168; // r8
  int v169; // ecx
  unsigned __int16 v170; // ax
  __int64 *v171; // rax
  struct _TEB *v172; // rdi
  unsigned __int16 *v173; // rsi
  __int64 v174; // r8
  unsigned int v175; // edi
  unsigned __int64 v176; // rcx
  char v177; // al
  PRTL_CRITICAL_SECTION v178; // rdi
  signed __int32 v179; // esi
  int v180; // ecx
  signed __int32 v181; // eax
  char *v182; // r8
  unsigned __int64 v183; // rdx
  char *v184; // rax
  __int64 v185; // rdi
  _QWORD *ExtraStuffPointer; // r14
  __int64 v187; // rdi
  ULONG Protect; // r14d
  __int16 updated; // ax
  _RTL_CRITICAL_SECTION *v190; // rdx
  _RTL_CRITICAL_SECTION_DEBUG *v191; // r8
  __int64 *v192; // rax
  char v193; // [rsp+30h] [rbp-2C8h]
  PVOID v194; // [rsp+38h] [rbp-2C0h] BYREF
  char v195; // [rsp+40h] [rbp-2B8h]
  char v196; // [rsp+41h] [rbp-2B7h]
  unsigned __int64 v197; // [rsp+48h] [rbp-2B0h]
  void *v198; // [rsp+50h] [rbp-2A8h]
  int v199; // [rsp+58h] [rbp-2A0h]
  unsigned __int16 v200; // [rsp+5Ch] [rbp-29Ch]
  char v201; // [rsp+5Eh] [rbp-29Ah]
  char v202; // [rsp+5Fh] [rbp-299h]
  unsigned __int16 v203; // [rsp+60h] [rbp-298h]
  __int64 *v204; // [rsp+68h] [rbp-290h]
  unsigned __int16 v205; // [rsp+70h] [rbp-288h]
  char v206; // [rsp+72h] [rbp-286h]
  unsigned __int16 v207; // [rsp+74h] [rbp-284h]
  char v208; // [rsp+76h] [rbp-282h]
  int v209; // [rsp+78h] [rbp-280h]
  char *v210; // [rsp+80h] [rbp-278h]
  unsigned int v211; // [rsp+88h] [rbp-270h]
  unsigned int v212; // [rsp+8Ch] [rbp-26Ch]
  __int64 v213; // [rsp+90h] [rbp-268h]
  int v214; // [rsp+98h] [rbp-260h]
  __int64 v215; // [rsp+A0h] [rbp-258h]
  ULONG_PTR v216; // [rsp+A8h] [rbp-250h]
  int v217; // [rsp+B0h] [rbp-248h]
  __int64 v218; // [rsp+B8h] [rbp-240h]
  BOOL v219; // [rsp+C0h] [rbp-238h]
  ULONG_PTR j; // [rsp+C8h] [rbp-230h]
  unsigned int v221; // [rsp+D0h] [rbp-228h]
  unsigned int v222; // [rsp+D4h] [rbp-224h]
  unsigned __int64 v223; // [rsp+D8h] [rbp-220h]
  int v224; // [rsp+E8h] [rbp-210h]
  PVOID BaseAddressa; // [rsp+F0h] [rbp-208h] BYREF
  ULONG_PTR RegionSize; // [rsp+F8h] [rbp-200h] BYREF
  unsigned __int64 v227; // [rsp+100h] [rbp-1F8h]
  ULONG_PTR v228; // [rsp+108h] [rbp-1F0h]
  int v229; // [rsp+118h] [rbp-1E0h]
  unsigned __int64 v230; // [rsp+120h] [rbp-1D8h]
  int v231; // [rsp+130h] [rbp-1C8h]
  int v232; // [rsp+140h] [rbp-1B8h]
  int v233; // [rsp+150h] [rbp-1A8h]
  int v234; // [rsp+160h] [rbp-198h]
  int v235; // [rsp+170h] [rbp-188h]
  int v236; // [rsp+180h] [rbp-178h]
  unsigned __int64 v237; // [rsp+188h] [rbp-170h]
  _QWORD *v238; // [rsp+190h] [rbp-168h]
  unsigned __int64 v239; // [rsp+198h] [rbp-160h]
  void *v240; // [rsp+1A0h] [rbp-158h]
  int v241; // [rsp+1A8h] [rbp-150h]
  unsigned __int64 v242; // [rsp+1B0h] [rbp-148h]
  SIZE_T v243; // [rsp+1B8h] [rbp-140h]
  int v244; // [rsp+1C0h] [rbp-138h]
  unsigned int *v245; // [rsp+1C8h] [rbp-130h]
  unsigned __int64 v247; // [rsp+1D8h] [rbp-120h]
  int v248; // [rsp+1E0h] [rbp-118h]
  unsigned __int64 v249; // [rsp+1E8h] [rbp-110h]
  int v250; // [rsp+1F0h] [rbp-108h]
  unsigned __int64 v251; // [rsp+1F8h] [rbp-100h]
  int v252; // [rsp+200h] [rbp-F8h]
  SIZE_T v253; // [rsp+208h] [rbp-F0h]
  unsigned __int64 v254; // [rsp+210h] [rbp-E8h]
  PRTL_CRITICAL_SECTION *v255; // [rsp+218h] [rbp-E0h]
  unsigned __int64 v256; // [rsp+220h] [rbp-D8h]
  int v257; // [rsp+228h] [rbp-D0h]
  int v258; // [rsp+22Ch] [rbp-CCh]
  unsigned __int64 v259; // [rsp+230h] [rbp-C8h]
  unsigned __int64 v260; // [rsp+238h] [rbp-C0h]
  char *v261; // [rsp+240h] [rbp-B8h]
  unsigned int *v262; // [rsp+248h] [rbp-B0h]
  int v263; // [rsp+258h] [rbp-A0h]
  int v264; // [rsp+268h] [rbp-90h]
  int v265; // [rsp+278h] [rbp-80h]
  int v266; // [rsp+288h] [rbp-70h]
  unsigned __int16 *v267; // [rsp+290h] [rbp-68h]
  ULONG_PTR v268; // [rsp+298h] [rbp-60h]
  __int64 v269; // [rsp+2A0h] [rbp-58h]
  char *v270; // [rsp+2A8h] [rbp-50h]
  __int64 v271; // [rsp+2B0h] [rbp-48h]
  unsigned __int64 v273; // [rsp+310h] [rbp+18h]
  ULONG_PTR v274; // [rsp+318h] [rbp+20h] BYREF

  v274 = a4;
  v273 = a3;
  v7 = a3;
  v215 = 0LL;
  v199 = 1;
  v193 = 0;
  v198 = 0LL;
  v194 = 0LL;
  v209 = 0;
  v10 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v199 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (void *)RtlDebugAllocateHeap(BaseAddress);
    v13 = 1LL;
    if ( a3 )
      v13 = a3;
    v14 = (unsigned __int64)BaseAddress[33] & ((unsigned __int64)BaseAddress[32] + v13);
    if ( v14 < 0x20 )
      v14 = 32LL;
    v274 = v14;
    v6 = a2 >> 4;
    LOBYTE(v6) = (a2 >> 4) & 0xE0 | 1;
    LODWORD(v197) = v6;
    if ( (a2 & 0x3C000100) != 0 || BaseAddress[41] )
    {
      LOBYTE(v6) = (a2 >> 4) & 0xE0 | 3;
      LODWORD(v197) = v6;
      v274 = v14 + 16;
    }
    v11 = v274 >> 4;
    v216 = v274 >> 4;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v197) = v6;
    v11 = a4 >> 4;
    v216 = a4 >> 4;
    if ( v10 < 2 )
    {
      v274 += 16LL;
      v11 = 2LL;
      v216 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v197) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v15 = BaseAddress[44];
    v16 = NtCurrentTeb();
    v17 = _interlockedbittestandreset(&v15->LockCount, 0);
    UniqueThread = v16->ClientId.UniqueThread;
    if ( v17 )
    {
      v15->OwningThread = UniqueThread;
      v15->RecursionCount = 1;
    }
    else
    {
      if ( v15->OwningThread != UniqueThread )
      {
        v214 = 0;
        if ( byte_180145248 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v19 = NtCurrentTeb();
          v19->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          goto LABEL_495;
        }
        v209 = 1;
        RtlEnterCriticalSection(BaseAddress[44]);
        RtlpUpdateHeapRates(BaseAddress, 1LL);
        goto LABEL_30;
      }
      ++v15->RecursionCount;
    }
    v214 = 1;
    ++*((_DWORD *)BaseAddress + 144);
LABEL_30:
    v208 = 1;
    v193 = 1;
    if ( ((_DWORD)BaseAddress[15] & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(BaseAddress);
  }
  if ( v11 > *((unsigned int *)BaseAddress + 37) )
  {
    if ( ((_BYTE)BaseAddress[14] & 2) != 0 )
    {
      v274 += 56LL;
      v187 = (RtlpHeapGenerateRandomValue32() & 0xF) << 12;
      BaseAddressa = 0LL;
      RegionSize = v187 + v274 + 4096;
      Protect = RtlpGetHeapProtection(BaseAddress, 1);
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
        goto LABEL_495;
      v194 = (char *)BaseAddressa + v187;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v194, 0LL, &v274, 0x1000u, Protect) >= 0 )
      {
        *((_WORD *)v194 + 28) = v274 - v273;
        *((_BYTE *)v194 + 58) = v6 | 2;
        *((_QWORD *)v194 + 4) = v274;
        *((_QWORD *)v194 + 5) = RegionSize;
        *((_BYTE *)v194 + 63) = 4;
        BaseAddress[69] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[69] + v274);
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(BaseAddress, v194, v274, 9LL);
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapExtendEvent(
            (int)BaseAddress,
            (int)v194,
            v274,
            16 * (unsigned int)BaseAddress[24],
            (HANDLE)MEMORY[0x7FFE0380]);
        if ( MEMORY[0x7FFE038A] )
          RtlpLogHeapExtendEvent(
            (int)BaseAddress,
            (int)v194,
            v274,
            16 * (unsigned int)BaseAddress[24],
            (HANDLE)MEMORY[0x7FFE038A]);
        if ( ((_DWORD)BaseAddress[14] & 0x8000000) != 0 )
          *((_WORD *)v194 + 8) = RtlLogStackBackTraceEx(1LL);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          updated = RtlpUpdateTagEntry(
                      (_DWORD)BaseAddress,
                      (unsigned __int8)(a2 >> 18),
                      0,
                      *((_QWORD *)v194 + 4) >> 4,
                      1);
          *((_WORD *)v194 + 9) = updated;
        }
        v190 = (_RTL_CRITICAL_SECTION *)v194;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_BYTE *)v194 + 59) = *((_BYTE *)v194 + 56) ^ *((_BYTE *)v194 + 57) ^ *((_BYTE *)v194 + 58);
          LODWORD(v190[1].OwningThread) ^= *((_DWORD *)BaseAddress + 34);
          v190 = (_RTL_CRITICAL_SECTION *)v194;
        }
        v191 = (_RTL_CRITICAL_SECTION_DEBUG *)(BaseAddress + 34);
        v192 = (__int64 *)BaseAddress[35];
        if ( (PRTL_CRITICAL_SECTION *)*v192 == BaseAddress + 34 )
        {
          v190->DebugInfo = v191;
          *(_QWORD *)&v190->LockCount = v192;
          *v192 = (__int64)v190;
          BaseAddress[35] = v190;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v191, 0, *v192, 0LL);
        }
        v198 = (char *)v194 + 64;
        goto LABEL_495;
      }
      v194 = 0LL;
      ++*((_DWORD *)BaseAddress + 148);
    }
    goto LABEL_494;
  }
  if ( (a2 & 0x800000) == 0 )
  {
    if ( v10 < *((unsigned __int16 *)BaseAddress + 196) )
    {
      if ( v7 > RtlpLargestLfhBlock )
        goto LABEL_58;
      v21 = v10 >> 3;
      v22 = v10 & 7;
      if ( ((unsigned __int8)(1 << (v10 & 7)) & *((_BYTE *)BaseAddress + (v10 >> 3) + 394)) != 0 )
        goto LABEL_58;
      v23 = (unsigned __int16 *)((char *)BaseAddress[48] + 2 * v10);
      v267 = v23;
      v24 = *v23 + 33;
      *v23 = v24;
      if ( !v209 )
      {
        if ( (v24 & 0x1Fu) <= 0x10 )
        {
          a3 = 65280LL;
          if ( v24 <= 0xFF00u )
          {
            v217 = 0;
            goto LABEL_58;
          }
        }
        v217 = 1;
      }
      v25 = 1LL;
      if ( v273 )
        v25 = v273;
      if ( *((_BYTE *)BaseAddress + 378) == 2 )
        v26 = BaseAddress[46];
      else
        v26 = 0LL;
      LFHContext = RtlpGetLFHContext(v26, v25, a3, 0LL);
      if ( LFHContext != 0xFFFF )
      {
        *v23 = LFHContext;
        *((_BYTE *)BaseAddress + v21 + 394) |= 1 << v22;
        ++*((_DWORD *)BaseAddress + 154);
        goto LABEL_58;
      }
      if ( *((_BYTE *)BaseAddress + 378) != 2 )
      {
LABEL_57:
        *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
        goto LABEL_58;
      }
      v20 = BaseAddress[46] == 0LL;
    }
    else
    {
      if ( v7 > RtlpLargestLfhBlock || *((_BYTE *)BaseAddress + 378) == 2 && BaseAddress[46] )
        goto LABEL_58;
      v20 = *((_BYTE *)BaseAddress + 379) == 2;
    }
    if ( v20 )
      goto LABEL_57;
  }
LABEL_58:
  if ( a5 && *a5 )
  {
    v28 = *a5 - 16LL;
    v210 = (char *)v28;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v28 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v28 + 11) != (*(_BYTE *)(v28 + 8) ^ (unsigned __int8)(*(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v28);
    }
    v29 = *(_QWORD *)(v28 + 16);
    v30 = *(__int64 **)(v28 + 24);
    v31 = *v30;
    v32 = *(_QWORD *)(v29 + 8);
    if ( *v30 != v32 || v31 != v28 + 16 )
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v28 + 16, v32, v31, 0LL);
      goto LABEL_77;
    }
    BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] - *(unsigned __int16 *)(v28 + 8));
    v33 = BaseAddress[39];
    if ( v33 )
    {
      v34 = *(unsigned __int16 *)(v28 + 8);
      while ( 1 )
      {
        LockCount = (unsigned int)v33->LockCount;
        if ( v34 < LockCount )
          break;
        if ( !v33->DebugInfo )
        {
          v34 = (unsigned int)(LockCount - 1);
          break;
        }
        v33 = (PRTL_CRITICAL_SECTION)v33->DebugInfo;
      }
      v260 = v34;
      LOBYTE(LockCount) = 1;
      RtlpHeapRemoveListEntry(
        (_DWORD)BaseAddress,
        (_DWORD)v33,
        LockCount,
        v28 + 16,
        v34,
        *(unsigned __int16 *)(v28 + 8));
    }
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    v36 = (char *)(v28 + 10);
    if ( (*(_BYTE *)(v28 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
    {
      RtlpDeCommitFreeBlock((unsigned __int64)BaseAddress, v28, *(unsigned __int16 *)(v28 + 8), 1);
LABEL_77:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v37 = NtCurrentTeb();
      v37->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      goto LABEL_495;
    }
    v201 = 1;
    goto LABEL_193;
  }
  v261 = (char *)(BaseAddress + 42);
  for ( i = BaseAddress[39]; ; i = (PRTL_CRITICAL_SECTION)i->DebugInfo )
  {
    v39 = (unsigned int)i->LockCount;
    if ( v11 < v39 )
    {
      LockSemaphore = v11;
      j = v11;
      goto LABEL_83;
    }
    if ( !i->DebugInfo )
      break;
  }
  LockSemaphore = v39 - 1;
  for ( j = (unsigned int)(v39 - 1); ; j = LockSemaphore )
  {
LABEL_83:
    v41 = LockSemaphore - LODWORD(i->LockSemaphore);
    v42 = 0LL;
    SpinCount = (char **)i->SpinCount;
    v44 = (char **)SpinCount[1];
    if ( SpinCount == v44 )
    {
      v42 = (char *)i->SpinCount;
    }
    else
    {
      v45 = (_DWORD)v44 - 16;
      v46 = *((_DWORD *)v44 - 2);
      v233 = v46;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v233 = v46 ^ *((_DWORD *)BaseAddress + 34);
        if ( HIBYTE(v233) != ((unsigned __int8)v233 ^ (unsigned __int8)(BYTE1(v233) ^ BYTE2(v233))) )
          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v45, 0, 0LL, 0LL);
      }
      v250 = v11 - (unsigned __int16)v233;
      if ( v250 <= 0 )
      {
        v47 = (__int64)(*SpinCount - 16);
        v48 = *(_DWORD *)(v47 + 8);
        v235 = v48;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v235 = v48 ^ *((_DWORD *)BaseAddress + 34);
          if ( HIBYTE(v235) != ((unsigned __int8)v235 ^ (unsigned __int8)(BYTE1(v235) ^ BYTE2(v235))) )
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v47, 0, 0LL, 0LL);
        }
        v241 = v11 - (unsigned __int16)v235;
        if ( v241 > 0 )
        {
          if ( i->DebugInfo || (_DWORD)j != i->LockCount - 1 )
          {
            v51 = (unsigned int)v41 >> 5;
            v211 = (unsigned int)v41 >> 5;
            v52 = ((unsigned int)(i->LockCount - LODWORD(i->LockSemaphore)) >> 5) - 1;
            v53 = (unsigned int *)(&i[1].DebugInfo->Type + 2 * v51);
            v262 = v53;
            v54 = *v53 & ~((1 << (v41 & 0x1F)) - 1);
            while ( !v54 )
            {
              if ( (unsigned int)v51 > v52 )
                goto LABEL_470;
              v262 = ++v53;
              v54 = *v53;
              LODWORD(v51) = v51 + 1;
              v211 = v51;
            }
            if ( (_WORD)v54 )
            {
              if ( (_BYTE)v54 )
                v55 = RtlpBitsClearLow[(unsigned __int8)v54];
              else
                v55 = RtlpBitsClearLow[BYTE1(v54)] + 8;
            }
            else if ( (v54 & 0xFF0000) != 0 )
            {
              v55 = RtlpBitsClearLow[BYTE2(v54)] + 16;
            }
            else
            {
              v55 = RtlpBitsClearLow[(unsigned __int64)v54 >> 24] + 24;
            }
            v56 = (unsigned int)(v55 + 32 * v51);
            v211 = v56;
            if ( i->RecursionCount )
              v56 = (unsigned int)(2 * v56);
            v42 = *(char **)(*(_QWORD *)&i[1].LockCount + 8 * v56);
          }
          else
          {
            if ( i->RecursionCount )
              v41 = (unsigned int)(2 * v41);
            for ( k = *(char ***)(*(_QWORD *)&i[1].LockCount + 8 * v41); SpinCount != k; k = (char **)*k )
            {
              v50 = *((_DWORD *)k - 2);
              v232 = v50;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v232 = v50 ^ *((_DWORD *)BaseAddress + 34);
                if ( HIBYTE(v232) != ((unsigned __int8)v232 ^ (unsigned __int8)(BYTE1(v232) ^ BYTE2(v232))) )
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)k - 16, 0, 0LL, 0LL);
              }
              v257 = v11 - (unsigned __int16)v232;
              if ( v257 <= 0 )
              {
                v42 = (char *)k;
                break;
              }
            }
          }
        }
        else
        {
          v42 = *SpinCount;
        }
      }
      else
      {
        v42 = (char *)SpinCount;
      }
    }
    if ( v42 )
      break;
LABEL_470:
    i = (PRTL_CRITICAL_SECTION)i->DebugInfo;
    LockSemaphore = (unsigned int)i->LockSemaphore;
  }
  v270 = v42;
  if ( v261 == v42 )
  {
LABEL_164:
    v75 = (char *)RtlpExtendHeap((unsigned __int64 *)BaseAddress, v274);
    v28 = (__int64)v75;
    v210 = v75;
    if ( v75 )
    {
      v58 = v75 + 16;
      v76 = *((_QWORD *)v75 + 2);
      v204 = (__int64 *)*((_QWORD *)v75 + 3);
      v60 = *v204;
      v61 = *(_QWORD *)(v76 + 8);
      if ( *v204 != v61 || (char *)v60 != v58 )
        goto LABEL_161;
      BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] - *(unsigned __int16 *)(v28 + 8));
      v77 = BaseAddress[39];
      if ( v77 )
      {
        v78 = *(unsigned __int16 *)(v28 + 8);
        while ( 1 )
        {
          v79 = (unsigned int)v77->LockCount;
          if ( v78 < v79 )
            break;
          if ( !v77->DebugInfo )
          {
            v78 = (unsigned int)(v79 - 1);
            break;
          }
          v77 = (PRTL_CRITICAL_SECTION)v77->DebugInfo;
        }
        v256 = v78;
        v80 = *(unsigned __int16 *)(v28 + 8);
        v81 = v78 - LODWORD(v77->LockSemaphore);
        if ( v77->RecursionCount )
          v82 = 2 * v81;
        else
          v82 = v81;
        v83 = 8 * v82;
        v84 = *(_QWORD *)&v77[1].LockCount;
        v85 = *(char **)(v84 + 8 * v82);
        --LODWORD(v77->OwningThread);
        v86 = v77->LockCount;
        if ( (_DWORD)v78 == v86 - 1 )
          --HIDWORD(v77->OwningThread);
        if ( v85 == v58 )
        {
          v222 = v86;
          if ( !v77->DebugInfo )
            v222 = --v86;
          if ( (unsigned int)v78 >= v86 )
          {
            if ( *(_QWORD *)v58 != v77->SpinCount )
            {
              *(_QWORD *)(v84 + 8 * v82) = *(_QWORD *)v58;
              goto LABEL_190;
            }
            *(_QWORD *)(v84 + 8 * v82) = 0LL;
          }
          else
          {
            v87 = *(_QWORD *)v58;
            if ( *(_QWORD *)v58 != v77->SpinCount )
            {
              LOBYTE(v84) = 1;
              if ( !(unsigned int)RtlpHeapListCompare(BaseAddress, v87, v80, v84) )
              {
                *(_QWORD *)(v83 + *(_QWORD *)&v77[1].LockCount) = v87;
                goto LABEL_190;
              }
            }
            *(_QWORD *)(v83 + *(_QWORD *)&v77[1].LockCount) = 0LL;
          }
          *((_DWORD *)&v77[1].DebugInfo->Type + (v81 >> 5)) &= ~(1 << (v81 & 0x1F));
        }
      }
LABEL_190:
      v88 = v204;
      *v204 = v76;
      *(_QWORD *)(v76 + 8) = v88;
      v36 = (char *)(v28 + 10);
      if ( (*(_BYTE *)(v28 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
        goto LABEL_159;
      v206 = 1;
      goto LABEL_193;
    }
LABEL_494:
    v198 = 0LL;
    goto LABEL_495;
  }
  v28 = (__int64)(v42 - 16);
  v210 = v42 - 16;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v28 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v28 + 11) != (*(_BYTE *)(v28 + 8) ^ (unsigned __int8)(*(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v42 - 16);
  }
  v57 = *(unsigned __int16 *)(v28 + 8);
  if ( v57 < v11 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v28 + 11) = *(_BYTE *)(v28 + 8) ^ *(_BYTE *)(v28 + 9) ^ *(_BYTE *)(v28 + 10);
      *(_DWORD *)(v28 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    goto LABEL_164;
  }
  v58 = v42;
  v59 = *(_QWORD *)v42;
  v228 = v59;
  v204 = *(__int64 **)(v28 + 24);
  v60 = *v204;
  v61 = *(_QWORD *)(v59 + 8);
  if ( *v204 != v61 || (char *)v60 != v42 )
  {
LABEL_161:
    RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v58, v61, v60, 0LL);
    goto LABEL_495;
  }
  BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] - v57);
  v62 = BaseAddress[39];
  if ( !v62 )
    goto LABEL_157;
  v63 = *(unsigned __int16 *)(v28 + 8);
  while ( 1 )
  {
    v64 = (unsigned int)v62->LockCount;
    if ( v63 < v64 )
      break;
    if ( !v62->DebugInfo )
    {
      v63 = (unsigned int)(v64 - 1);
      break;
    }
    v62 = (PRTL_CRITICAL_SECTION)v62->DebugInfo;
  }
  v242 = v63;
  v65 = *(unsigned __int16 *)(v28 + 8);
  v213 = *(unsigned __int16 *)(v28 + 8);
  v66 = v63 - LODWORD(v62->LockSemaphore);
  if ( v62->RecursionCount )
    v67 = 2 * v66;
  else
    v67 = v66;
  v68 = 8 * v67;
  v69 = *(_QWORD *)&v62[1].LockCount;
  v70 = *(char **)(v69 + 8 * v67);
  --LODWORD(v62->OwningThread);
  v71 = v62->LockCount;
  if ( (_DWORD)v63 == v71 - 1 )
    --HIDWORD(v62->OwningThread);
  if ( v70 != v42 )
    goto LABEL_157;
  v221 = v71;
  if ( !v62->DebugInfo )
    v221 = --v71;
  if ( (unsigned int)v63 >= v71 )
  {
    if ( *(_QWORD *)v42 != v62->SpinCount )
    {
      *(_QWORD *)(v69 + 8 * v67) = *(_QWORD *)v42;
      goto LABEL_157;
    }
    *(_QWORD *)(v69 + 8 * v67) = 0LL;
  }
  else
  {
    v72 = *(_QWORD *)v42;
    if ( *(_QWORD *)v58 != v62->SpinCount )
    {
      v73 = *(_DWORD *)(v72 - 16 + 8);
      v224 = v73;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v224 = v73 ^ *((_DWORD *)BaseAddress + 34);
        if ( HIBYTE(v224) != (BYTE1(v224) ^ (unsigned __int8)(v224 ^ BYTE2(v224))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v72 - 16, 0, 0LL, 0LL);
          v59 = v228;
        }
      }
      if ( !(v65 - (unsigned __int16)v224) )
      {
        *(_QWORD *)(v68 + *(_QWORD *)&v62[1].LockCount) = v72;
        v28 = (__int64)v210;
        goto LABEL_157;
      }
      v28 = (__int64)v210;
    }
    *(_QWORD *)(v68 + *(_QWORD *)&v62[1].LockCount) = 0LL;
  }
  *((_DWORD *)&v62[1].DebugInfo->Type + (v66 >> 5)) &= ~(1 << (v66 & 0x1F));
LABEL_157:
  v74 = v204;
  *v204 = v59;
  *(_QWORD *)(v59 + 8) = v74;
  v36 = (char *)(v28 + 10);
  if ( (*(_BYTE *)(v28 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
  {
LABEL_159:
    RtlpDeCommitFreeBlock((unsigned __int64)BaseAddress, v28, *(unsigned __int16 *)(v28 + 8), 1);
    goto LABEL_495;
  }
  v202 = 1;
LABEL_193:
  v89 = *v36;
  v196 = *v36;
  v90 = v199;
  if ( !v199 && (v89 & 4) != 0 )
  {
    v91 = 16LL * *(unsigned __int16 *)(v28 + 8) - 32;
    v243 = v91;
    if ( (v89 & 2) != 0 && v91 > 4 )
    {
      v91 -= 4LL;
      v243 = v91;
    }
    v92 = RtlCompareMemoryUlong((PVOID)(v28 + 32), v91, 0xFEEEFEEE);
    if ( v92 != v91 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v28 = (__int64)v210;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v210, &v210[v92 + 32]);
      RtlpBreakPointHeap(v210);
      v89 = v196;
    }
    v90 = v199;
  }
  v213 = v28;
  if ( (*v36 & 1) != 0 )
  {
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v28, 0, 0LL, 0LL);
    goto LABEL_495;
  }
  *v36 = v197;
  v93 = v216;
  v94 = *(unsigned __int16 *)(v28 + 8) - v216;
  v268 = v94;
  *(_WORD *)(v28 + 8) = v216;
  v95 = v273;
  v96 = v274 - v273;
  v228 = v274 - v273;
  if ( v274 - v273 >= 0x3F )
  {
    *(_QWORD *)(v28 + 16 * v93) = v96;
    *(_BYTE *)(v28 + 15) = 63;
  }
  else
  {
    *(_BYTE *)(v28 + 15) = v96;
  }
  *(_BYTE *)(v28 + 11) = 0;
  if ( !v94 )
    goto LABEL_419;
  if ( v94 == 1 )
  {
    ++*(_WORD *)(v28 + 8);
    v97 = v274 - v273 + 16;
    v216 = v97;
    if ( v97 >= 0x3F )
    {
      *(_QWORD *)(v28 + 16 * (v93 + 1)) = v97;
      *(_BYTE *)(v28 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v28 + 15) = v97;
    }
    goto LABEL_419;
  }
  v98 = v90 == 0;
  v219 = v90 == 0;
  v99 = *(_BYTE *)(v28 + 14);
  if ( v99 )
  {
    v100 = (PRTL_CRITICAL_SECTION *)((v28 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v99 << 16) + 0x10000);
    v255 = v100;
  }
  else
  {
    v100 = BaseAddress;
    v255 = BaseAddress;
  }
  v204 = (__int64 *)v94;
  v101 = v28 + 16 * v93;
  LODWORD(v197) = 0;
  *(_BYTE *)(v101 + 10) = v89;
  *(_BYTE *)(v101 + 15) = 0;
  *(_WORD *)(v101 + 12) = v93 ^ *((_WORD *)BaseAddress + 70);
  v102 = (PRTL_CRITICAL_SECTION *)v100[5];
  if ( v102 == v100 )
  {
    LOBYTE(v103) = 0;
  }
  else
  {
    v103 = ((v101 - (unsigned __int64)v100) >> 16) + 1;
    v269 = v103;
    if ( (v101 - (unsigned __int64)v100) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, (_DWORD)v102, v101, (_DWORD)v100, 0LL, 0LL);
  }
  v195 = v103;
  *(_BYTE *)(v101 + 14) = v103;
  *(_BYTE *)(v101 + 11) = 0;
  *(_WORD *)(v101 + 8) = v94;
  while ( 1 )
  {
    v104 = v101 + 16 * v94;
    if ( ((*(_BYTE *)(v104 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v104 + 12) = v94 ^ *((_WORD *)BaseAddress + 70);
      if ( !v98 )
      {
        v105 = (unsigned __int16)v94;
        v197 = (unsigned __int16)v94;
        *(_BYTE *)(v101 + 10) = 0;
        *(_BYTE *)(v101 + 15) = 0;
        v106 = BaseAddress + 42;
        v107 = BaseAddress[39];
        if ( v107 )
        {
          while ( 1 )
          {
            v108 = (unsigned int)v107->LockCount;
            if ( (unsigned __int16)v94 < v108 )
            {
              LODWORD(v94) = (unsigned __int16)v94;
              v218 = (unsigned __int16)v94;
              goto LABEL_229;
            }
            if ( !v107->DebugInfo )
              break;
            v107 = (PRTL_CRITICAL_SECTION)v107->DebugInfo;
          }
          LODWORD(v94) = v108 - 1;
          v218 = (unsigned int)(v108 - 1);
          while ( 1 )
          {
LABEL_229:
            v109 = (unsigned int)(v94 - LODWORD(v107->LockSemaphore));
            v110 = 0LL;
            v111 = (_QWORD *)v107->SpinCount;
            v112 = (_QWORD *)v111[1];
            if ( v111 == v112 )
            {
              v110 = (_QWORD *)v107->SpinCount;
            }
            else
            {
              v113 = (_DWORD)v112 - 16;
              v114 = *((_DWORD *)v112 - 2);
              v234 = v114;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v234 = v114 ^ *((_DWORD *)BaseAddress + 34);
                if ( HIBYTE(v234) != ((unsigned __int8)v234 ^ (unsigned __int8)(BYTE1(v234) ^ BYTE2(v234))) )
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v113, 0, 0LL, 0LL);
              }
              v248 = v105 - (unsigned __int16)v234;
              if ( v248 <= 0 )
              {
                v115 = *v111 - 16LL;
                v116 = *(_DWORD *)(v115 + 8);
                v236 = v116;
                if ( *((_DWORD *)BaseAddress + 31) )
                {
                  v236 = v116 ^ *((_DWORD *)BaseAddress + 34);
                  if ( HIBYTE(v236) != ((unsigned __int8)v236 ^ (unsigned __int8)(BYTE1(v236) ^ BYTE2(v236))) )
                    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v115, 0, 0LL, 0LL);
                }
                v252 = v105 - (unsigned __int16)v236;
                if ( v252 > 0 )
                {
                  if ( v107->DebugInfo || (_DWORD)v218 != v107->LockCount - 1 )
                  {
                    v119 = (unsigned int)v109 >> 5;
                    v212 = (unsigned int)v109 >> 5;
                    v120 = ((unsigned int)(v107->LockCount - LODWORD(v107->LockSemaphore)) >> 5) - 1;
                    v121 = (unsigned int *)(&v107[1].DebugInfo->Type + 2 * v119);
                    v245 = v121;
                    v122 = *v121 & ~((1 << (v109 & 0x1F)) - 1);
                    while ( !v122 )
                    {
                      if ( (unsigned int)v119 > v120 )
                        goto LABEL_271;
                      v245 = ++v121;
                      v122 = *v121;
                      LODWORD(v119) = v119 + 1;
                      v212 = v119;
                    }
                    if ( (_WORD)v122 )
                    {
                      if ( (_BYTE)v122 )
                        v123 = RtlpBitsClearLow[(unsigned __int8)v122];
                      else
                        v123 = RtlpBitsClearLow[BYTE1(v122)] + 8;
                    }
                    else if ( (v122 & 0xFF0000) != 0 )
                    {
                      v123 = RtlpBitsClearLow[BYTE2(v122)] + 16;
                    }
                    else
                    {
                      v123 = RtlpBitsClearLow[(unsigned __int64)v122 >> 24] + 24;
                    }
                    v124 = (unsigned int)(v123 + 32 * v119);
                    v212 = v124;
                    if ( v107->RecursionCount )
                      v124 = (unsigned int)(2 * v124);
                    v110 = *(_QWORD **)(*(_QWORD *)&v107[1].LockCount + 8 * v124);
                  }
                  else
                  {
                    if ( v107->RecursionCount )
                      v109 = (unsigned int)(2 * v109);
                    for ( m = *(_QWORD **)(*(_QWORD *)&v107[1].LockCount + 8 * v109); v111 != m; m = (_QWORD *)*m )
                    {
                      v118 = *((_DWORD *)m - 2);
                      v231 = v118;
                      if ( *((_DWORD *)BaseAddress + 31) )
                      {
                        v231 = v118 ^ *((_DWORD *)BaseAddress + 34);
                        if ( HIBYTE(v231) != ((unsigned __int8)v231 ^ (unsigned __int8)(BYTE1(v231) ^ BYTE2(v231))) )
                          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)m - 16, 0, 0LL, 0LL);
                      }
                      v258 = v197 - (unsigned __int16)v231;
                      if ( v258 <= 0 )
                      {
                        v110 = m;
                        break;
                      }
                    }
                  }
                  v105 = v197;
                }
                else
                {
                  v110 = (_QWORD *)*v111;
                }
              }
              else
              {
                v110 = v111;
              }
            }
            if ( v110 )
              break;
LABEL_271:
            v107 = (PRTL_CRITICAL_SECTION)v107->DebugInfo;
            LODWORD(v94) = v107->LockSemaphore;
            v218 = (unsigned int)v94;
            v105 = v197;
          }
          v106 = BaseAddress + 42;
        }
        else
        {
          v110 = (_QWORD *)*v106;
        }
        while ( v106 != v110 )
        {
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v125 = *((_DWORD *)v110 - 2);
            v265 = v125;
            if ( (v125 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v265 = v125 ^ *((_DWORD *)BaseAddress + 34);
            v126 = v265;
          }
          else
          {
            v126 = *((_WORD *)v110 - 4);
          }
          v200 = v126;
          if ( v105 <= v126 )
            break;
          v110 = (_QWORD *)*v110;
          v106 = BaseAddress + 42;
        }
        v127 = (_QWORD *)(v101 + 16);
        v128 = (__int64 *)v110[1];
        if ( (_QWORD *)*v128 == v110 )
        {
          *v127 = v110;
          *(_QWORD *)(v101 + 24) = v128;
          *v128 = (__int64)v127;
          v110[1] = v127;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v110, 0, *v128, 0LL);
        }
        BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] + *(unsigned __int16 *)(v101 + 8));
        v129 = BaseAddress[39];
        if ( v129 )
        {
          v130 = *(unsigned __int16 *)(v101 + 8);
          while ( 1 )
          {
            v131 = (unsigned int)v129->LockCount;
            if ( v130 < v131 )
              break;
            if ( !v129->DebugInfo )
            {
              v130 = (unsigned int)(v131 - 1);
              break;
            }
            v129 = (PRTL_CRITICAL_SECTION)v129->DebugInfo;
          }
          v259 = v130;
          v132 = *(unsigned __int16 *)(v101 + 8);
          v271 = *(unsigned __int16 *)(v101 + 8);
          v133 = v130 - LODWORD(v129->LockSemaphore);
          if ( v129->RecursionCount )
            v134 = 2 * v133;
          else
            v134 = v133;
          ++LODWORD(v129->OwningThread);
          v135 = 8 * v134;
          v204 = (__int64 *)(8 * v134);
          v136 = *(_QWORD *)(8 * v134 + *(_QWORD *)&v129[1].LockCount);
          if ( (_DWORD)v130 == v129->LockCount - 1 )
            ++HIDWORD(v129->OwningThread);
          if ( !v136 )
            goto LABEL_300;
          v137 = *(_DWORD *)(v136 - 16 + 8);
          v229 = v137;
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v229 = v137 ^ *((_DWORD *)BaseAddress + 34);
            if ( HIBYTE(v229) != (BYTE2(v229) ^ (unsigned __int8)(BYTE1(v229) ^ v229)) )
            {
              RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v136 - 16, 0, 0LL, 0LL);
              v135 = (__int64)v204;
            }
          }
          v244 = v132 - (unsigned __int16)v229;
          if ( v244 <= 0 )
LABEL_300:
            *(_QWORD *)(v135 + *(_QWORD *)&v129[1].LockCount) = v127;
          if ( !v136 )
            *((_DWORD *)&v129[1].DebugInfo->Type + (v133 >> 5)) |= 1 << (v133 & 0x1F);
        }
        goto LABEL_305;
      }
      *(_BYTE *)(v101 + 10) &= 0xF0u;
      *(_BYTE *)(v101 + 15) = 0;
      if ( ((_BYTE)BaseAddress[14] & 0x40) == 0 )
        goto LABEL_315;
      v138 = (_DWORD *)(v101 + 32);
      v247 = v101 + 32;
      v139 = (16 * (unsigned __int64)(unsigned __int16)v94 - 32) >> 2;
      v230 = v139;
      if ( v139 )
      {
        if ( ((unsigned __int8)v138 & 4) == 0 )
          goto LABEL_312;
        *v138 = -17891602;
        v230 = --v139;
        if ( v139 )
        {
          v138 = (_DWORD *)(v101 + 36);
          v247 = v101 + 36;
LABEL_312:
          memset64(v138, 0xFEEEFEEEFEEEFEEEuLL, v139 >> 1);
          if ( (v139 & 1) != 0 )
            v138[v139 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v101 + 10) |= 4u;
LABEL_315:
      v140 = BaseAddress + 42;
      if ( BaseAddress[39] )
        Entry = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)v94);
      else
        Entry = (_QWORD *)*v140;
      while ( v140 != Entry )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v142 = *((_DWORD *)Entry - 2);
          v264 = v142;
          if ( (v142 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v264 = v142 ^ *((_DWORD *)BaseAddress + 34);
          v143 = v264;
        }
        else
        {
          v143 = *((_WORD *)Entry - 4);
        }
        v205 = v143;
        if ( (unsigned __int16)v94 <= (unsigned __int64)v143 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v144 = (_QWORD *)(v101 + 16);
      v145 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v145 == Entry )
      {
        *v144 = Entry;
        *(_QWORD *)(v101 + 24) = v145;
        *v145 = (__int64)v144;
        Entry[1] = v144;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v145, 0LL);
      }
      BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] + *(unsigned __int16 *)(v101 + 8));
      v146 = BaseAddress[39];
      if ( v146 )
      {
        v147 = *(unsigned __int16 *)(v101 + 8);
        while ( 1 )
        {
          v148 = (unsigned int)v146->LockCount;
          if ( v147 < v148 )
            break;
          if ( !v146->DebugInfo )
          {
            v147 = (unsigned int)(v148 - 1);
            break;
          }
          v146 = (PRTL_CRITICAL_SECTION)v146->DebugInfo;
        }
        v237 = v147;
LABEL_304:
        LOBYTE(v148) = 1;
        RtlpHeapAddListEntry(
          (_DWORD)BaseAddress,
          (_DWORD)v146,
          v148,
          (_DWORD)v144,
          v147,
          *(unsigned __int16 *)(v101 + 8));
        goto LABEL_305;
      }
      goto LABEL_305;
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v104 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v104 + 11) != (*(_BYTE *)(v104 + 8) ^ (unsigned __int8)(*(_BYTE *)(v104 + 9) ^ *(_BYTE *)(v104 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v101 + 16 * v94);
    }
    v149 = *(_QWORD *)(v104 + 16);
    v150 = *(__int64 **)(v104 + 24);
    v151 = *v150;
    v152 = *(_QWORD *)(v149 + 8);
    if ( *v150 == v152 && v151 == v104 + 16 )
      break;
    RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v104 + 16, v152, v151, 0LL);
LABEL_415:
    if ( (_DWORD)v197 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741764;
      v172 = NtCurrentTeb();
      v172->LastErrorValue = RtlNtStatusToDosError(-1073741764);
      goto LABEL_495;
    }
    LODWORD(v197) = 1;
  }
  BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] - *(unsigned __int16 *)(v104 + 8));
  v153 = BaseAddress[39];
  if ( v153 )
  {
    v154 = *(unsigned __int16 *)(v104 + 8);
    while ( 1 )
    {
      v155 = (unsigned int)v153->LockCount;
      if ( v154 < v155 )
        break;
      if ( !v153->DebugInfo )
      {
        v154 = (unsigned int)(v155 - 1);
        break;
      }
      v153 = (PRTL_CRITICAL_SECTION)v153->DebugInfo;
    }
    v249 = v154;
    LOBYTE(v155) = 1;
    RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v153, v155, v104 + 16, v154, *(unsigned __int16 *)(v104 + 8));
  }
  *v150 = v149;
  *(_QWORD *)(v149 + 8) = v150;
  if ( (*(_BYTE *)(v104 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
  {
    RtlpDeCommitFreeBlock((unsigned __int64)BaseAddress, v101 + 16 * v94, *(unsigned __int16 *)(v104 + 8), 1);
    goto LABEL_415;
  }
  if ( v98 )
  {
    v156 = *(_BYTE *)(v104 + 10);
    if ( (v156 & 4) != 0 )
    {
      v157 = 16LL * *(unsigned __int16 *)(v104 + 8) - 32;
      v253 = v157;
      if ( (v156 & 2) != 0 && v157 > 4 )
      {
        v157 -= 4LL;
        v253 = v157;
      }
      v158 = RtlCompareMemoryUlong((PVOID)(v104 + 32), v157, 0xFEEEFEEE);
      if ( v158 != v157 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)(v101 + 16 * v94),
          (const void *)(v104 + v158 + 32));
        RtlpBreakPointHeap(v101 + 16 * v94);
        v98 = v219;
      }
    }
  }
  *(_BYTE *)(v101 + 10) = *(_BYTE *)(v104 + 10);
  v159 = *(unsigned __int16 *)(v104 + 8) + v94;
  v204 = (__int64 *)v159;
  if ( v159 > 0xFF00 )
  {
    RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v101, v159);
    goto LABEL_418;
  }
  *(_WORD *)(v101 + 8) = v159;
  *(_WORD *)(16 * v159 + v101 + 12) = v159 ^ *((_WORD *)BaseAddress + 70);
  if ( v98 )
  {
    *(_BYTE *)(v101 + 10) &= 0xF0u;
    *(_BYTE *)(v101 + 15) = 0;
    if ( ((_BYTE)BaseAddress[14] & 0x40) == 0 )
      goto LABEL_392;
    v165 = (_DWORD *)(v101 + 32);
    v254 = v101 + 32;
    v166 = (16 * (unsigned __int64)(unsigned __int16)v159 - 32) >> 2;
    v227 = v166;
    if ( v166 )
    {
      if ( ((unsigned __int8)v165 & 4) == 0 )
        goto LABEL_389;
      *v165 = -17891602;
      v227 = --v166;
      if ( v166 )
      {
        v165 = (_DWORD *)(v101 + 36);
        v254 = v101 + 36;
LABEL_389:
        memset64(v165, 0xFEEEFEEEFEEEFEEEuLL, v166 >> 1);
        if ( (v166 & 1) != 0 )
          v165[v166 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v101 + 10) |= 4u;
LABEL_392:
    v167 = BaseAddress + 42;
    if ( BaseAddress[39] )
      v168 = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)v159);
    else
      v168 = (_QWORD *)*v167;
    while ( v167 != v168 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v169 = *((_DWORD *)v168 - 2);
        v263 = v169;
        if ( (v169 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v263 = v169 ^ *((_DWORD *)BaseAddress + 34);
        v170 = v263;
      }
      else
      {
        v170 = *((_WORD *)v168 - 4);
      }
      v207 = v170;
      if ( (unsigned __int16)v159 <= (unsigned __int64)v170 )
        break;
      v168 = (_QWORD *)*v168;
    }
    v144 = (_QWORD *)(v101 + 16);
    v171 = (__int64 *)v168[1];
    if ( (_QWORD *)*v171 == v168 )
    {
      *v144 = v168;
      *(_QWORD *)(v101 + 24) = v171;
      *v171 = (__int64)v144;
      v168[1] = v144;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v168, 0, *v171, 0LL);
    }
    BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] + *(unsigned __int16 *)(v101 + 8));
    v146 = BaseAddress[39];
    if ( v146 )
    {
      v147 = *(unsigned __int16 *)(v101 + 8);
      while ( 1 )
      {
        v148 = (unsigned int)v146->LockCount;
        if ( v147 < v148 )
          break;
        if ( !v146->DebugInfo )
        {
          v147 = (unsigned int)(v148 - 1);
          break;
        }
        v146 = (PRTL_CRITICAL_SECTION)v146->DebugInfo;
      }
      v239 = v147;
      goto LABEL_304;
    }
    goto LABEL_305;
  }
  *(_BYTE *)(v101 + 10) = 0;
  *(_BYTE *)(v101 + 15) = 0;
  v160 = BaseAddress + 42;
  if ( BaseAddress[39] )
    v161 = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)v159);
  else
    v161 = (_QWORD *)*v160;
  while ( v160 != v161 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v162 = *((_DWORD *)v161 - 2);
      v266 = v162;
      if ( (v162 & *((_DWORD *)BaseAddress + 31)) != 0 )
        v266 = v162 ^ *((_DWORD *)BaseAddress + 34);
      v163 = v266;
    }
    else
    {
      v163 = *((_WORD *)v161 - 4);
    }
    v203 = v163;
    if ( (unsigned __int16)v159 <= (unsigned __int64)v163 )
      break;
    v161 = (_QWORD *)*v161;
  }
  v144 = (_QWORD *)(v101 + 16);
  v164 = (__int64 *)v161[1];
  if ( (_QWORD *)*v164 == v161 )
  {
    *v144 = v161;
    *(_QWORD *)(v101 + 24) = v164;
    *v164 = (__int64)v144;
    v161[1] = v144;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v161, 0, *v164, 0LL);
  }
  BaseAddress[24] = (PRTL_CRITICAL_SECTION)((char *)BaseAddress[24] + *(unsigned __int16 *)(v101 + 8));
  v146 = BaseAddress[39];
  if ( v146 )
  {
    v147 = *(unsigned __int16 *)(v101 + 8);
    while ( 1 )
    {
      v148 = (unsigned int)v146->LockCount;
      if ( v147 < v148 )
        break;
      if ( !v146->DebugInfo )
      {
        v147 = (unsigned int)(v148 - 1);
        break;
      }
      v146 = (PRTL_CRITICAL_SECTION)v146->DebugInfo;
    }
    v251 = v147;
    goto LABEL_304;
  }
LABEL_305:
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_BYTE *)(v101 + 11) = *(_BYTE *)(v101 + 8) ^ *(_BYTE *)(v101 + 9) ^ *(_BYTE *)(v101 + 10);
    *(_DWORD *)(v101 + 8) ^= *((_DWORD *)BaseAddress + 34);
  }
LABEL_418:
  v95 = v273;
LABEL_419:
  v198 = (void *)(v213 + 16);
  v173 = (unsigned __int16 *)(v213 + 8);
  v174 = 16 * *(unsigned __int16 *)(v213 + 8);
  v215 = v174;
  if ( (*(_BYTE *)(v213 + 15) & 0x3F) == 0x3F )
  {
    v174 -= 8LL;
    v215 = v174;
  }
  if ( v199 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v213 + 11) = *(_BYTE *)(v213 + 8) ^ *(_BYTE *)(v213 + 9) ^ *(_BYTE *)(v213 + 10);
      *(_DWORD *)v173 ^= *((_DWORD *)BaseAddress + 34);
    }
    if ( v193 )
    {
      if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0 )
      {
        ++*((_DWORD *)BaseAddress + 150);
        v175 = *((_DWORD *)BaseAddress + 152);
        if ( *((_DWORD *)BaseAddress + 150) > v175 )
        {
          *((_DWORD *)BaseAddress + 150) = 0;
          v176 = (unsigned __int64)BaseAddress[67] - 16 * (_QWORD)BaseAddress[24];
          if ( v176 > (unsigned __int64)BaseAddress[79] )
            BaseAddress[79] = (PRTL_CRITICAL_SECTION)v176;
          BaseAddress[80] = (PRTL_CRITICAL_SECTION)v176;
        }
        if ( ++*((_DWORD *)BaseAddress + 153) >= 0x1000u )
        {
          if ( *((_BYTE *)BaseAddress + 378) != 2 || (v177 = 4, *((_DWORD *)BaseAddress + 154) <= 0x10u) )
            v177 = 8;
          if ( *((_DWORD *)BaseAddress + 151) > (unsigned int)(4096 >> v177) && v175 < 0x10000 )
            *((_DWORD *)BaseAddress + 152) = 2 * v175;
          *((_DWORD *)BaseAddress + 151) = 0;
          *((_DWORD *)BaseAddress + 153) = 0;
        }
      }
      v178 = BaseAddress[44];
      v20 = v178->RecursionCount-- == 1;
      if ( v20 )
      {
        v178->OwningThread = 0LL;
        v179 = _InterlockedCompareExchange(&v178->LockCount, -1, -2);
        if ( v179 != -2 )
        {
          if ( (v178->LockCount & 1) != 0 )
            RtlpNotOwnerCriticalSection(v178);
          do
          {
            v180 = v179 & 2 | 1;
            v181 = _InterlockedCompareExchange(&v178->LockCount, v180 + v179, v179);
            v20 = v179 == v181;
            v179 = v181;
          }
          while ( !v20 );
          if ( (v180 & 2) != 0 )
            RtlpUnWaitCriticalSection(v178);
        }
        v174 = v215;
      }
      v193 = 0;
    }
    if ( (a2 & 8) != 0 )
      memset(v198, 0, v174 - 8);
    goto LABEL_495;
  }
  if ( (a2 & 8) != 0 )
  {
    memset(v198, 0, v174 - 8);
    goto LABEL_459;
  }
  if ( ((_BYTE)BaseAddress[14] & 0x40) != 0 )
  {
    v182 = (char *)v198;
    v240 = v198;
    v183 = (v95 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v223 = v183;
    if ( v183 )
    {
      if ( ((unsigned __int8)v198 & 4) != 0 )
      {
        *(_DWORD *)v198 = -1163005939;
        v223 = --v183;
        if ( v183 )
        {
          v182 += 4;
          v240 = v182;
          goto LABEL_457;
        }
      }
      else
      {
LABEL_457:
        memset64(v182, 0xBAADF00DBAADF00DuLL, v183 >> 1);
        if ( (v183 & 1) != 0 )
          *(_DWORD *)&v182[4 * v183 - 4] = -1163005939;
      }
    }
  }
LABEL_459:
  if ( ((_BYTE)BaseAddress[14] & 0x20) != 0 )
  {
    v184 = (char *)v198;
    *(_QWORD *)((char *)v198 + v95) = 0xABABABABABABABABuLL;
    *(_QWORD *)&v184[v95 + 8] = 0xABABABABABABABABuLL;
    *(_BYTE *)(v213 + 10) |= 4u;
  }
  v185 = v213;
  *(_BYTE *)(v213 + 11) = 0;
  if ( (*(_BYTE *)(v185 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v185);
    v238 = ExtraStuffPointer;
    *ExtraStuffPointer = 0LL;
    ExtraStuffPointer[1] = 0LL;
    if ( ((_DWORD)BaseAddress[14] & 0x8000000) != 0 )
      *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *((_WORD *)v238 + 1) = RtlpUpdateTagEntry((_DWORD)BaseAddress, (a2 >> 18) & 0xFFF, 0, *v173, 0);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_BYTE *)(v185 + 11) = RtlpUpdateTagEntry((_DWORD)BaseAddress, (unsigned __int8)(a2 >> 18), 0, *v173, 0);
  }
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_BYTE *)(v185 + 11) = *(_BYTE *)v173 ^ *((_BYTE *)v173 + 1) ^ *((_BYTE *)v173 + 2);
    *(_DWORD *)v173 ^= *((_DWORD *)BaseAddress + 34);
  }
LABEL_495:
  if ( v193 )
  {
    if ( v198 && !v194 )
      RtlpUpdateHeapWatermarks(BaseAddress);
    RtlLeaveCriticalSection(BaseAddress[44]);
  }
  if ( MEMORY[0x7FFE0388] && v198 )
  {
    if ( v194 )
      RtlpHeapLogRangeReserve(BaseAddress, (unsigned __int64)v194 & 0xFFFFFFFFFFFF0000uLL, *((_QWORD *)v194 + 5));
  }
  return v198;
}
