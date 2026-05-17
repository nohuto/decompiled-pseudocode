/*
 * XREFs of RtlpAllocateHeap @ 0x180030C30
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpPerformHeapMaintenance @ 0x180004B08 (RtlpPerformHeapMaintenance.c)
 *     RtlpHeapAddListEntry @ 0x180006DF4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180006EA0 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180006F18 (RtlpHeapRemoveListEntry.c)
 *     RtlpHeapListCompare @ 0x180007060 (RtlpHeapListCompare.c)
 *     RtlLogStackBackTraceEx @ 0x180007878 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180034CA8 (RtlpHeapGenerateRandomValue32.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpGetExtraStuffPointer @ 0x1800582B0 (RtlpGetExtraStuffPointer.c)
 *     RtlpGetLFHContext @ 0x18006AC2C (RtlpGetLFHContext.c)
 *     RtlpUpdateHeapRates @ 0x18006F630 (RtlpUpdateHeapRates.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180073144 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x180095F60 (RtlCompareMemoryUlong.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800C2120 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800C22F4 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpUpdateTagEntry @ 0x1800DAB80 (RtlpUpdateTagEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800DDAD4 (RtlpUpdateHeapWatermarks.c)
 *     RtlDebugAllocateHeap @ 0x1800EBDCC (RtlDebugAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1800EEFF4 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800EF8B8 (RtlpLogHeapExtendEvent.c)
 */

void *__fastcall RtlpAllocateHeap(
        char *Src,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  struct _TEB *v16; // rax
  signed __int8 v17; // cf
  void *UniqueThread; // rax
  struct _TEB *v19; // rdi
  bool v20; // zf
  unsigned __int64 v21; // r14
  char v22; // si
  __int64 v23; // r9
  unsigned __int16 *v24; // rdi
  unsigned __int16 v25; // cx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 LFHContext; // ax
  unsigned __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 *v31; // r14
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  char *v37; // r14
  struct _TEB *v38; // rdi
  __int64 *i; // r14
  unsigned __int64 v40; // rcx
  unsigned int v41; // esi
  __int64 v42; // rsi
  char *v43; // r15
  char **v44; // r12
  char **v45; // rax
  int v46; // eax
  int v47; // eax
  char **j; // rdi
  int v49; // eax
  __int64 v50; // rdi
  unsigned int v51; // edx
  int v52; // eax
  __int64 v53; // rdi
  unsigned __int64 v54; // rcx
  __int64 *v55; // r8
  __int64 v56; // r11
  __int64 v57; // rax
  __int64 v58; // r9
  __int64 *v59; // rsi
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  int v62; // r12d
  unsigned int v63; // r14d
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // r9
  char *v67; // r10
  unsigned int v68; // edx
  __int64 v69; // r15
  int v70; // eax
  __int64 *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // r13
  __int64 *v74; // rsi
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  int v77; // r11d
  unsigned int v78; // r14d
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r9
  __int64 *v82; // r10
  unsigned int v83; // edx
  __int64 v84; // r15
  __int64 *v85; // rax
  char v86; // r12
  int v87; // r8d
  unsigned __int64 v88; // rsi
  __int64 v89; // r15
  __int64 v90; // rdx
  __int64 *v91; // r15
  unsigned __int64 v92; // r14
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  bool v95; // r13
  unsigned __int8 v96; // al
  char *v97; // r9
  unsigned __int64 v98; // rsi
  char *v99; // rdx
  __int64 v100; // rdi
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // rdi
  _QWORD *v103; // rax
  __int64 *v104; // r12
  unsigned __int64 v105; // rcx
  __int64 v106; // r15
  _QWORD *v107; // r14
  _QWORD *v108; // r13
  _QWORD *v109; // rax
  int v110; // r8d
  int v111; // eax
  __int64 v112; // r8
  int v113; // eax
  _QWORD *k; // rdi
  int v115; // eax
  __int64 v116; // rdi
  unsigned int v117; // r9d
  unsigned int *v118; // r8
  unsigned int v119; // edx
  int v120; // eax
  __int64 v121; // rdi
  int v122; // ecx
  unsigned __int16 v123; // ax
  _QWORD *v124; // r12
  __int64 *v125; // rax
  __int64 *v126; // rdi
  unsigned __int64 v127; // rcx
  unsigned __int64 v128; // rdx
  int v129; // r15d
  unsigned int v130; // r14d
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // r13
  int v134; // eax
  _DWORD *v135; // r8
  unsigned __int64 v136; // rdx
  _QWORD *v137; // rdi
  _QWORD *Entry; // r8
  int v139; // ecx
  unsigned __int16 v140; // ax
  _QWORD *v141; // rdi
  __int64 *v142; // rax
  __int64 v143; // rdx
  unsigned __int64 v144; // rcx
  unsigned __int64 v145; // r8
  __int64 v146; // r14
  __int64 *v147; // r12
  __int64 v148; // rax
  __int64 v149; // r9
  __int64 v150; // rdx
  unsigned __int64 v151; // rcx
  unsigned __int64 v152; // r8
  char v153; // al
  unsigned __int64 v154; // r14
  __int64 v155; // r12
  unsigned __int64 v156; // r15
  _QWORD *v157; // rdi
  _QWORD *v158; // r8
  int v159; // ecx
  unsigned __int16 v160; // ax
  __int64 *v161; // rax
  unsigned __int64 v162; // r8
  _DWORD *v163; // r8
  unsigned __int64 v164; // rdx
  _QWORD *v165; // rdi
  _QWORD *v166; // r8
  int v167; // ecx
  unsigned __int16 v168; // ax
  __int64 *v169; // rax
  unsigned __int64 v170; // r8
  struct _TEB *v171; // rdi
  unsigned __int16 *v172; // rsi
  __int64 v173; // r8
  unsigned int v174; // edi
  unsigned __int64 v175; // rcx
  char v176; // al
  __int64 v177; // rdi
  signed __int32 v178; // esi
  __int64 DeferredCriticalSectionEvent; // r8
  int v180; // ecx
  signed __int32 v181; // eax
  char *v182; // r8
  unsigned __int64 v183; // rdx
  char *v184; // rax
  unsigned __int64 v185; // rdi
  _QWORD *ExtraStuffPointer; // r14
  __int64 v187; // rdi
  int HeapProtection; // r14d
  __int16 updated; // ax
  __int64 v190; // rdx
  char *v191; // r8
  __int64 *v192; // rax
  char v193; // [rsp+30h] [rbp-2C8h]
  __int64 v194; // [rsp+38h] [rbp-2C0h] BYREF
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
  unsigned __int64 v213; // [rsp+90h] [rbp-268h]
  int v214; // [rsp+98h] [rbp-260h]
  __int64 v215; // [rsp+A0h] [rbp-258h]
  __int64 v216; // [rsp+A8h] [rbp-250h]
  int v217; // [rsp+B0h] [rbp-248h]
  __int64 v218; // [rsp+B8h] [rbp-240h]
  BOOL v219; // [rsp+C0h] [rbp-238h]
  unsigned __int64 v220; // [rsp+C8h] [rbp-230h]
  unsigned int v221; // [rsp+D0h] [rbp-228h]
  unsigned int v222; // [rsp+D4h] [rbp-224h]
  unsigned __int64 v223; // [rsp+D8h] [rbp-220h]
  int v224; // [rsp+E8h] [rbp-210h]
  __int64 v225; // [rsp+F0h] [rbp-208h] BYREF
  __int64 v226; // [rsp+F8h] [rbp-200h] BYREF
  unsigned __int64 v227; // [rsp+100h] [rbp-1F8h]
  unsigned __int64 v228; // [rsp+108h] [rbp-1F0h]
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
  unsigned __int64 v243; // [rsp+1B8h] [rbp-140h]
  int v244; // [rsp+1C0h] [rbp-138h]
  unsigned int *v245; // [rsp+1C8h] [rbp-130h]
  unsigned __int64 v247; // [rsp+1D8h] [rbp-120h]
  int v248; // [rsp+1E0h] [rbp-118h]
  unsigned __int64 v249; // [rsp+1E8h] [rbp-110h]
  int v250; // [rsp+1F0h] [rbp-108h]
  unsigned __int64 v251; // [rsp+1F8h] [rbp-100h]
  int v252; // [rsp+200h] [rbp-F8h]
  unsigned __int64 v253; // [rsp+208h] [rbp-F0h]
  unsigned __int64 v254; // [rsp+210h] [rbp-E8h]
  char *v255; // [rsp+218h] [rbp-E0h]
  unsigned __int64 v256; // [rsp+220h] [rbp-D8h]
  int v257; // [rsp+228h] [rbp-D0h]
  int v258; // [rsp+22Ch] [rbp-CCh]
  unsigned __int64 v259; // [rsp+230h] [rbp-C8h]
  unsigned __int64 v260; // [rsp+238h] [rbp-C0h]
  char *v261; // [rsp+240h] [rbp-B8h]
  unsigned __int64 v262; // [rsp+248h] [rbp-B0h]
  int v263; // [rsp+258h] [rbp-A0h]
  int v264; // [rsp+268h] [rbp-90h]
  int v265; // [rsp+278h] [rbp-80h]
  int v266; // [rsp+288h] [rbp-70h]
  unsigned __int16 *v267; // [rsp+290h] [rbp-68h]
  __int64 *v268; // [rsp+298h] [rbp-60h]
  __int64 v269; // [rsp+2A0h] [rbp-58h]
  char *v270; // [rsp+2A8h] [rbp-50h]
  __int64 v271; // [rsp+2B0h] [rbp-48h]
  unsigned __int64 v273; // [rsp+310h] [rbp+18h]
  unsigned __int64 v274; // [rsp+318h] [rbp+20h] BYREF

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
      return (void *)RtlDebugAllocateHeap(Src);
    v13 = 1LL;
    if ( a3 )
      v13 = a3;
    v14 = *((_QWORD *)Src + 33) & (v13 + *((_QWORD *)Src + 32));
    if ( v14 < 0x20 )
      v14 = 32LL;
    v274 = v14;
    v6 = a2 >> 4;
    LOBYTE(v6) = (a2 >> 4) & 0xE0 | 1;
    LODWORD(v197) = v6;
    if ( (a2 & 0x3C000100) != 0 || *((_QWORD *)Src + 41) )
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
    v15 = *((_QWORD *)Src + 44);
    v16 = NtCurrentTeb();
    v17 = _interlockedbittestandreset((volatile signed __int32 *)(v15 + 8), 0);
    UniqueThread = v16->ClientId.UniqueThread;
    if ( v17 )
    {
      *(_QWORD *)(v15 + 16) = UniqueThread;
      *(_DWORD *)(v15 + 12) = 1;
    }
    else
    {
      if ( *(void **)(v15 + 16) != UniqueThread )
      {
        v214 = 0;
        if ( byte_180146208 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v19 = NtCurrentTeb();
          v19->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          goto LABEL_498;
        }
        v209 = 1;
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        RtlpUpdateHeapRates(Src, 1LL);
        goto LABEL_30;
      }
      ++*(_DWORD *)(v15 + 12);
    }
    v214 = 1;
    ++*((_DWORD *)Src + 144);
LABEL_30:
    v208 = 1;
    v193 = 1;
    if ( (*((_DWORD *)Src + 30) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance((__int64)Src);
  }
  if ( v11 > *((unsigned int *)Src + 37) )
  {
    if ( (Src[112] & 2) != 0 )
    {
      v274 += 56LL;
      v187 = (RtlpHeapGenerateRandomValue32() & 0xF) << 12;
      v225 = 0LL;
      v226 = v187 + v274 + 4096;
      HeapProtection = RtlpGetHeapProtection(Src, 1LL);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v225, 0LL, &v226, 0x2000, HeapProtection) < 0 )
        goto LABEL_498;
      v194 = v187 + v225;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v194, 0LL, &v274, 4096, HeapProtection) >= 0 )
      {
        *(_WORD *)(v194 + 56) = v274 - v273;
        *(_BYTE *)(v194 + 58) = v6 | 2;
        *(_QWORD *)(v194 + 32) = v274;
        *(_QWORD *)(v194 + 40) = v226;
        *(_BYTE *)(v194 + 63) = 4;
        *((_QWORD *)Src + 69) += v274;
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(Src, v194, v274, 9LL);
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapExtendEvent((_DWORD)Src, v194, v274, 16 * *((_QWORD *)Src + 24), MEMORY[0x7FFE0380]);
        if ( MEMORY[0x7FFE038A] )
          RtlpLogHeapExtendEvent((_DWORD)Src, v194, v274, 16 * *((_QWORD *)Src + 24), MEMORY[0x7FFE038A]);
        if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
          *(_WORD *)(v194 + 16) = RtlLogStackBackTraceEx(1u);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          updated = RtlpUpdateTagEntry((_DWORD)Src, (unsigned __int8)(a2 >> 18), 0, *(_QWORD *)(v194 + 32) >> 4, 1);
          *(_WORD *)(v194 + 18) = updated;
        }
        v190 = v194;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v194 + 59) = *(_BYTE *)(v194 + 56) ^ *(_BYTE *)(v194 + 57) ^ *(_BYTE *)(v194 + 58);
          *(_DWORD *)(v190 + 56) ^= *((_DWORD *)Src + 34);
          v190 = v194;
        }
        v191 = Src + 272;
        v192 = (__int64 *)*((_QWORD *)Src + 35);
        if ( (char *)*v192 == Src + 272 )
        {
          *(_QWORD *)v190 = v191;
          *(_QWORD *)(v190 + 8) = v192;
          *v192 = v190;
          *((_QWORD *)Src + 35) = v190;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v191, 0, *v192, 0LL);
        }
        v198 = (void *)(v194 + 64);
        goto LABEL_498;
      }
      v194 = 0LL;
      ++*((_DWORD *)Src + 148);
    }
    goto LABEL_497;
  }
  if ( (a2 & 0x800000) != 0 )
    goto LABEL_58;
  if ( v10 >= *((unsigned __int16 *)Src + 196) )
  {
    if ( v7 > RtlpLargestLfhBlock || Src[378] == 2 && *((_QWORD *)Src + 46) )
      goto LABEL_58;
    v20 = Src[379] == 2;
LABEL_56:
    if ( v20 )
      goto LABEL_57;
LABEL_58:
    v23 = 0LL;
    goto LABEL_59;
  }
  if ( v7 > RtlpLargestLfhBlock )
    goto LABEL_58;
  v21 = v10 >> 3;
  v22 = v10 & 7;
  v23 = 0LL;
  if ( ((unsigned __int8)(1 << (v10 & 7)) & (unsigned __int8)Src[(v10 >> 3) + 394]) == 0 )
  {
    v24 = (unsigned __int16 *)(*((_QWORD *)Src + 48) + 2 * v10);
    v267 = v24;
    v25 = *v24 + 33;
    *v24 = v25;
    if ( !v209 )
    {
      if ( (v25 & 0x1Fu) <= 0x10 )
      {
        a3 = 65280LL;
        if ( v25 <= 0xFF00u )
        {
          v217 = 0;
          goto LABEL_59;
        }
      }
      v217 = 1;
    }
    v26 = 1LL;
    if ( v273 )
      v26 = v273;
    if ( Src[378] == 2 )
      v27 = *((_QWORD *)Src + 46);
    else
      v27 = 0LL;
    LFHContext = RtlpGetLFHContext(v27, v26, a3, 0LL);
    if ( LFHContext != 0xFFFF )
    {
      *v24 = LFHContext;
      Src[v21 + 394] |= 1 << v22;
      ++*((_DWORD *)Src + 154);
      goto LABEL_58;
    }
    if ( Src[378] != 2 )
    {
LABEL_57:
      *((_DWORD *)Src + 30) |= 0x20000000u;
      goto LABEL_58;
    }
    v20 = *((_QWORD *)Src + 46) == 0LL;
    goto LABEL_56;
  }
LABEL_59:
  if ( a5 && *a5 )
  {
    v29 = *a5 - 16LL;
    v210 = (char *)v29;
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v29 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v29 + 11) != (*(_BYTE *)(v29 + 8) ^ (unsigned __int8)(*(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10))) )
        RtlpAnalyzeHeapFailure(Src, v29);
    }
    v30 = *(_QWORD *)(v29 + 16);
    v31 = *(__int64 **)(v29 + 24);
    v32 = *v31;
    v33 = *(_QWORD *)(v30 + 8);
    if ( *v31 != v33 || v32 != v29 + 16 )
    {
      RtlpLogHeapFailure(12, (_DWORD)Src, v29 + 16, v33, v32, 0LL);
      goto LABEL_78;
    }
    *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v29 + 8);
    v34 = *((_QWORD *)Src + 39);
    if ( v34 )
    {
      v35 = *(unsigned __int16 *)(v29 + 8);
      while ( 1 )
      {
        v36 = *(unsigned int *)(v34 + 8);
        if ( v35 < v36 )
          break;
        if ( !*(_QWORD *)v34 )
        {
          v35 = (unsigned int)(v36 - 1);
          break;
        }
        v34 = *(_QWORD *)v34;
      }
      v260 = v35;
      RtlpHeapRemoveListEntry((__int64)Src, v34, 1, (__int64 *)(v29 + 16), v35, *(unsigned __int16 *)(v29 + 8));
    }
    *v31 = v30;
    *(_QWORD *)(v30 + 8) = v31;
    v37 = (char *)(v29 + 10);
    if ( (*(_BYTE *)(v29 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v29) )
    {
      RtlpDeCommitFreeBlock((unsigned __int64)Src, v29, *(unsigned __int16 *)(v29 + 8), 1);
LABEL_78:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v38 = NtCurrentTeb();
      v38->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      goto LABEL_498;
    }
    v201 = 1;
    goto LABEL_194;
  }
  v261 = Src + 336;
  for ( i = (__int64 *)*((_QWORD *)Src + 39); ; i = (__int64 *)*i )
  {
    v40 = *((unsigned int *)i + 2);
    if ( v11 < v40 )
    {
      v41 = v11;
      v220 = v11;
      goto LABEL_84;
    }
    if ( !*i )
      break;
  }
  v41 = v40 - 1;
  v220 = (unsigned int)(v40 - 1);
  while ( 1 )
  {
LABEL_84:
    v42 = v41 - *((_DWORD *)i + 6);
    v43 = 0LL;
    v44 = (char **)i[4];
    v45 = (char **)v44[1];
    if ( v44 == v45 )
    {
      v43 = (char *)i[4];
    }
    else
    {
      a3 = (unsigned __int64)(v45 - 2);
      v46 = *((_DWORD *)v45 - 2);
      v233 = v46;
      if ( *((_DWORD *)Src + 31) )
      {
        v233 = v46 ^ *((_DWORD *)Src + 34);
        if ( HIBYTE(v233) != ((unsigned __int8)v233 ^ (unsigned __int8)(BYTE1(v233) ^ BYTE2(v233))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
          v23 = 0LL;
        }
      }
      v250 = v11 - (unsigned __int16)v233;
      if ( v250 <= 0 )
      {
        a3 = (unsigned __int64)(*v44 - 16);
        v47 = *(_DWORD *)(a3 + 8);
        v235 = v47;
        if ( *((_DWORD *)Src + 31) )
        {
          v235 = v47 ^ *((_DWORD *)Src + 34);
          if ( HIBYTE(v235) != ((unsigned __int8)v235 ^ (unsigned __int8)(BYTE1(v235) ^ BYTE2(v235))) )
            RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
        }
        v241 = v11 - (unsigned __int16)v235;
        if ( v241 > 0 )
        {
          if ( *i || (_DWORD)v220 != *((_DWORD *)i + 2) - 1 )
          {
            v50 = (unsigned int)v42 >> 5;
            v211 = (unsigned int)v42 >> 5;
            v23 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
            a3 = i[5] + 4 * v50;
            v262 = a3;
            v51 = *(_DWORD *)a3 & ~((1 << (v42 & 0x1F)) - 1);
            while ( !v51 )
            {
              if ( (unsigned int)v50 > (unsigned int)v23 )
                goto LABEL_473;
              a3 += 4LL;
              v262 = a3;
              v51 = *(_DWORD *)a3;
              LODWORD(v50) = v50 + 1;
              v211 = v50;
            }
            if ( (_WORD)v51 )
            {
              if ( (_BYTE)v51 )
                v52 = RtlpBitsClearLow[(unsigned __int8)v51];
              else
                v52 = RtlpBitsClearLow[BYTE1(v51)] + 8;
            }
            else if ( (v51 & 0xFF0000) != 0 )
            {
              v52 = RtlpBitsClearLow[BYTE2(v51)] + 16;
            }
            else
            {
              v52 = RtlpBitsClearLow[(unsigned __int64)v51 >> 24] + 24;
            }
            v53 = (unsigned int)(v52 + 32 * v50);
            v211 = v53;
            if ( *((_DWORD *)i + 3) )
              v53 = (unsigned int)(2 * v53);
            v43 = *(char **)(i[6] + 8 * v53);
          }
          else
          {
            if ( *((_DWORD *)i + 3) )
              v42 = (unsigned int)(2 * v42);
            for ( j = *(char ***)(i[6] + 8 * v42); v44 != j; j = (char **)*j )
            {
              a3 = (unsigned __int64)(j - 2);
              v49 = *((_DWORD *)j - 2);
              v232 = v49;
              if ( *((_DWORD *)Src + 31) )
              {
                v232 = v49 ^ *((_DWORD *)Src + 34);
                if ( HIBYTE(v232) != ((unsigned __int8)v232 ^ (unsigned __int8)(BYTE1(v232) ^ BYTE2(v232))) )
                  RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
              }
              v257 = v11 - (unsigned __int16)v232;
              if ( v257 <= 0 )
              {
                v43 = (char *)j;
                break;
              }
            }
          }
        }
        else
        {
          v43 = *v44;
        }
      }
      else
      {
        v43 = (char *)v44;
      }
    }
    if ( v43 )
      break;
LABEL_473:
    i = (__int64 *)*i;
    v41 = *((_DWORD *)i + 6);
    v220 = v41;
    v23 = 0LL;
  }
  v270 = v43;
  if ( v261 == v43 )
  {
LABEL_165:
    v72 = (_QWORD *)RtlpExtendHeap(Src, v274, a3, v23);
    v29 = (unsigned __int64)v72;
    v210 = (char *)v72;
    if ( v72 )
    {
      v55 = v72 + 2;
      v73 = v72[2];
      v204 = (__int64 *)v72[3];
      v57 = *v204;
      v58 = *(_QWORD *)(v73 + 8);
      if ( *v204 != v58 || (__int64 *)v57 != v55 )
        goto LABEL_162;
      *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v29 + 8);
      v74 = (__int64 *)*((_QWORD *)Src + 39);
      if ( v74 )
      {
        v75 = *(unsigned __int16 *)(v29 + 8);
        while ( 1 )
        {
          v76 = *((unsigned int *)v74 + 2);
          if ( v75 < v76 )
            break;
          if ( !*v74 )
          {
            v75 = (unsigned int)(v76 - 1);
            break;
          }
          v74 = (__int64 *)*v74;
        }
        v256 = v75;
        v77 = *(unsigned __int16 *)(v29 + 8);
        v78 = v75 - *((_DWORD *)v74 + 6);
        if ( *((_DWORD *)v74 + 3) )
          v79 = 2 * v78;
        else
          v79 = v78;
        v80 = 8 * v79;
        v81 = v74[6];
        v82 = *(__int64 **)(v81 + 8 * v79);
        --*((_DWORD *)v74 + 4);
        v83 = *((_DWORD *)v74 + 2);
        if ( (_DWORD)v75 == v83 - 1 )
          --*((_DWORD *)v74 + 5);
        if ( v82 == v55 )
        {
          v222 = v83;
          if ( !*v74 )
            v222 = --v83;
          if ( (unsigned int)v75 >= v83 )
          {
            if ( *v55 != v74[4] )
            {
              *(_QWORD *)(v81 + 8 * v79) = *v55;
              goto LABEL_191;
            }
            *(_QWORD *)(v81 + 8 * v79) = 0LL;
          }
          else
          {
            v84 = *v55;
            if ( *v55 != v74[4] && !(unsigned int)RtlpHeapListCompare((__int64)Src, v84, v77, 1) )
            {
              *(_QWORD *)(v80 + v74[6]) = v84;
              goto LABEL_191;
            }
            *(_QWORD *)(v80 + v74[6]) = 0LL;
          }
          *(_DWORD *)(v74[5] + 4LL * (v78 >> 5)) &= ~(1 << (v78 & 0x1F));
        }
      }
LABEL_191:
      v85 = v204;
      *v204 = v73;
      *(_QWORD *)(v73 + 8) = v85;
      v37 = (char *)(v29 + 10);
      if ( (*(_BYTE *)(v29 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v29) )
        goto LABEL_160;
      v206 = 1;
      goto LABEL_194;
    }
LABEL_497:
    v198 = 0LL;
    goto LABEL_498;
  }
  v29 = (unsigned __int64)(v43 - 16);
  v210 = v43 - 16;
  if ( *((_DWORD *)Src + 31) )
  {
    *(_DWORD *)(v29 + 8) ^= *((_DWORD *)Src + 34);
    if ( *(_BYTE *)(v29 + 11) != (*(_BYTE *)(v29 + 8) ^ (unsigned __int8)(*(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v43 - 16);
  }
  v54 = *(unsigned __int16 *)(v29 + 8);
  if ( v54 < v11 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v29 + 11) = *(_BYTE *)(v29 + 8) ^ *(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10);
      *(_DWORD *)(v29 + 8) ^= *((_DWORD *)Src + 34);
    }
    goto LABEL_165;
  }
  v55 = (__int64 *)v43;
  v56 = *(_QWORD *)v43;
  v228 = v56;
  v204 = *(__int64 **)(v29 + 24);
  v57 = *v204;
  v58 = *(_QWORD *)(v56 + 8);
  if ( *v204 != v58 || (char *)v57 != v43 )
  {
LABEL_162:
    RtlpLogHeapFailure(12, (_DWORD)Src, (_DWORD)v55, v58, v57, 0LL);
    goto LABEL_498;
  }
  *((_QWORD *)Src + 24) -= v54;
  v59 = (__int64 *)*((_QWORD *)Src + 39);
  if ( !v59 )
    goto LABEL_158;
  v60 = *(unsigned __int16 *)(v29 + 8);
  while ( 1 )
  {
    v61 = *((unsigned int *)v59 + 2);
    if ( v60 < v61 )
      break;
    if ( !*v59 )
    {
      v60 = (unsigned int)(v61 - 1);
      break;
    }
    v59 = (__int64 *)*v59;
  }
  v242 = v60;
  v62 = *(unsigned __int16 *)(v29 + 8);
  v213 = *(unsigned __int16 *)(v29 + 8);
  v63 = v60 - *((_DWORD *)v59 + 6);
  if ( *((_DWORD *)v59 + 3) )
    v64 = 2 * v63;
  else
    v64 = v63;
  v65 = 8 * v64;
  v66 = v59[6];
  v67 = *(char **)(v66 + 8 * v64);
  --*((_DWORD *)v59 + 4);
  v68 = *((_DWORD *)v59 + 2);
  if ( (_DWORD)v60 == v68 - 1 )
    --*((_DWORD *)v59 + 5);
  if ( v67 != v43 )
    goto LABEL_158;
  v221 = v68;
  if ( !*v59 )
    v221 = --v68;
  if ( (unsigned int)v60 >= v68 )
  {
    if ( *(_QWORD *)v43 != v59[4] )
    {
      *(_QWORD *)(v66 + 8 * v64) = *(_QWORD *)v43;
      goto LABEL_158;
    }
    *(_QWORD *)(v66 + 8 * v64) = 0LL;
  }
  else
  {
    v69 = *(_QWORD *)v43;
    if ( *v55 != v59[4] )
    {
      v70 = *(_DWORD *)(v69 - 16 + 8);
      v224 = v70;
      if ( *((_DWORD *)Src + 31) )
      {
        v224 = v70 ^ *((_DWORD *)Src + 34);
        if ( HIBYTE(v224) != (BYTE2(v224) ^ (unsigned __int8)(BYTE1(v224) ^ v224)) )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, v69 - 16, 0, 0LL, 0LL);
          v56 = v228;
        }
      }
      if ( !(v62 - (unsigned __int16)v224) )
      {
        *(_QWORD *)(v65 + v59[6]) = v69;
        v29 = (unsigned __int64)v210;
        goto LABEL_158;
      }
      v29 = (unsigned __int64)v210;
    }
    *(_QWORD *)(v65 + v59[6]) = 0LL;
  }
  *(_DWORD *)(v59[5] + 4LL * (v63 >> 5)) &= ~(1 << (v63 & 0x1F));
LABEL_158:
  v71 = v204;
  *v204 = v56;
  *(_QWORD *)(v56 + 8) = v71;
  v37 = (char *)(v29 + 10);
  if ( (*(_BYTE *)(v29 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v29) )
  {
LABEL_160:
    RtlpDeCommitFreeBlock((unsigned __int64)Src, v29, *(unsigned __int16 *)(v29 + 8), 1);
    goto LABEL_498;
  }
  v202 = 1;
LABEL_194:
  v86 = *v37;
  v196 = *v37;
  v87 = v199;
  if ( !v199 && (v86 & 4) != 0 )
  {
    v88 = 16LL * *(unsigned __int16 *)(v29 + 8) - 32;
    v243 = v88;
    if ( (v86 & 2) != 0 && v88 > 4 )
    {
      v88 -= 4LL;
      v243 = v88;
    }
    v89 = RtlCompareMemoryUlong(v29 + 32, v88, 4277075694LL);
    if ( v89 != v88 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v29 = (unsigned __int64)v210;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v210, &v210[v89 + 32]);
      RtlpBreakPointHeap(v210);
      v86 = v196;
    }
    v87 = v199;
  }
  v213 = v29;
  if ( (*v37 & 1) != 0 )
  {
    RtlpLogHeapFailure(3, (_DWORD)Src, v29, 0, 0LL, 0LL);
    goto LABEL_498;
  }
  *v37 = v197;
  v90 = v216;
  v91 = (__int64 *)(*(unsigned __int16 *)(v29 + 8) - v216);
  v268 = v91;
  *(_WORD *)(v29 + 8) = v216;
  v92 = v273;
  v93 = v274 - v273;
  v228 = v274 - v273;
  if ( v274 - v273 >= 0x3F )
  {
    *(_QWORD *)(v29 + 16 * v90) = v93;
    *(_BYTE *)(v29 + 15) = 63;
  }
  else
  {
    *(_BYTE *)(v29 + 15) = v93;
  }
  *(_BYTE *)(v29 + 11) = 0;
  if ( !v91 )
    goto LABEL_420;
  if ( v91 == (__int64 *)1 )
  {
    ++*(_WORD *)(v29 + 8);
    v94 = v274 - v273 + 16;
    v216 = v94;
    if ( v94 >= 0x3F )
    {
      *(_QWORD *)(v29 + 16 * (v90 + 1)) = v94;
      *(_BYTE *)(v29 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v29 + 15) = v94;
    }
    goto LABEL_420;
  }
  v95 = v87 == 0;
  v219 = v87 == 0;
  v96 = *(_BYTE *)(v29 + 14);
  if ( v96 )
  {
    v97 = (char *)((v29 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v96 << 16) + 0x10000);
    v255 = v97;
  }
  else
  {
    v97 = Src;
    v255 = Src;
  }
  v204 = v91;
  v98 = v29 + 16 * v90;
  LODWORD(v197) = 0;
  *(_BYTE *)(v98 + 10) = v86;
  *(_BYTE *)(v98 + 15) = 0;
  *(_WORD *)(v98 + 12) = v90 ^ *((_WORD *)Src + 70);
  v99 = (char *)*((_QWORD *)v97 + 5);
  if ( v99 == v97 )
  {
    LOBYTE(v100) = 0;
  }
  else
  {
    v100 = ((v98 - (unsigned __int64)v97) >> 16) + 1;
    v269 = v100;
    if ( (v98 - (unsigned __int64)v97) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, (_DWORD)v99, v98, (_DWORD)v97, 0LL, 0LL);
  }
  v195 = v100;
  *(_BYTE *)(v98 + 14) = v100;
  *(_BYTE *)(v98 + 11) = 0;
  *(_WORD *)(v98 + 8) = (_WORD)v91;
  while ( 1 )
  {
    v101 = v98 + 16LL * (_QWORD)v91;
    if ( ((*(_BYTE *)(v101 + 10) ^ (unsigned __int8)(Src[138] & (*((_DWORD *)Src + 31) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v101 + 12) = (unsigned __int16)v91 ^ *((_WORD *)Src + 70);
      if ( !v95 )
      {
        v102 = (unsigned __int16)v91;
        v197 = (unsigned __int16)v91;
        *(_BYTE *)(v98 + 10) = 0;
        *(_BYTE *)(v98 + 15) = 0;
        v103 = Src + 336;
        v104 = (__int64 *)*((_QWORD *)Src + 39);
        if ( v104 )
        {
          while ( 1 )
          {
            v105 = *((unsigned int *)v104 + 2);
            if ( (unsigned __int16)v91 < v105 )
            {
              LODWORD(v91) = (unsigned __int16)v91;
              v218 = (unsigned __int16)v91;
              goto LABEL_230;
            }
            if ( !*v104 )
              break;
            v104 = (__int64 *)*v104;
          }
          LODWORD(v91) = v105 - 1;
          v218 = (unsigned int)(v105 - 1);
          while ( 1 )
          {
LABEL_230:
            v106 = (unsigned int)((_DWORD)v91 - *((_DWORD *)v104 + 6));
            v107 = 0LL;
            v108 = (_QWORD *)v104[4];
            v109 = (_QWORD *)v108[1];
            if ( v108 == v109 )
            {
              v107 = (_QWORD *)v104[4];
            }
            else
            {
              v110 = (_DWORD)v109 - 16;
              v111 = *((_DWORD *)v109 - 2);
              v234 = v111;
              if ( *((_DWORD *)Src + 31) )
              {
                v234 = v111 ^ *((_DWORD *)Src + 34);
                if ( HIBYTE(v234) != ((unsigned __int8)v234 ^ (unsigned __int8)(BYTE1(v234) ^ BYTE2(v234))) )
                  RtlpLogHeapFailure(3, (_DWORD)Src, v110, 0, 0LL, 0LL);
              }
              v248 = v102 - (unsigned __int16)v234;
              if ( v248 <= 0 )
              {
                v112 = *v108 - 16LL;
                v113 = *(_DWORD *)(v112 + 8);
                v236 = v113;
                if ( *((_DWORD *)Src + 31) )
                {
                  v236 = v113 ^ *((_DWORD *)Src + 34);
                  if ( HIBYTE(v236) != ((unsigned __int8)v236 ^ (unsigned __int8)(BYTE1(v236) ^ BYTE2(v236))) )
                    RtlpLogHeapFailure(3, (_DWORD)Src, v112, 0, 0LL, 0LL);
                }
                v252 = v102 - (unsigned __int16)v236;
                if ( v252 > 0 )
                {
                  if ( *v104 || (_DWORD)v218 != *((_DWORD *)v104 + 2) - 1 )
                  {
                    v116 = (unsigned int)v106 >> 5;
                    v212 = (unsigned int)v106 >> 5;
                    v117 = ((unsigned int)(*((_DWORD *)v104 + 2) - *((_DWORD *)v104 + 6)) >> 5) - 1;
                    v118 = (unsigned int *)(v104[5] + 4 * v116);
                    v245 = v118;
                    v119 = *v118 & ~((1 << (v106 & 0x1F)) - 1);
                    while ( !v119 )
                    {
                      if ( (unsigned int)v116 > v117 )
                        goto LABEL_272;
                      v245 = ++v118;
                      v119 = *v118;
                      LODWORD(v116) = v116 + 1;
                      v212 = v116;
                    }
                    if ( (_WORD)v119 )
                    {
                      if ( (_BYTE)v119 )
                        v120 = RtlpBitsClearLow[(unsigned __int8)v119];
                      else
                        v120 = RtlpBitsClearLow[BYTE1(v119)] + 8;
                    }
                    else if ( (v119 & 0xFF0000) != 0 )
                    {
                      v120 = RtlpBitsClearLow[BYTE2(v119)] + 16;
                    }
                    else
                    {
                      v120 = RtlpBitsClearLow[(unsigned __int64)v119 >> 24] + 24;
                    }
                    v121 = (unsigned int)(v120 + 32 * v116);
                    v212 = v121;
                    if ( *((_DWORD *)v104 + 3) )
                      v121 = (unsigned int)(2 * v121);
                    v107 = *(_QWORD **)(v104[6] + 8 * v121);
                  }
                  else
                  {
                    if ( *((_DWORD *)v104 + 3) )
                      v106 = (unsigned int)(2 * v106);
                    for ( k = *(_QWORD **)(v104[6] + 8 * v106); v108 != k; k = (_QWORD *)*k )
                    {
                      v115 = *((_DWORD *)k - 2);
                      v231 = v115;
                      if ( *((_DWORD *)Src + 31) )
                      {
                        v231 = v115 ^ *((_DWORD *)Src + 34);
                        if ( HIBYTE(v231) != ((unsigned __int8)v231 ^ (unsigned __int8)(BYTE1(v231) ^ BYTE2(v231))) )
                          RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)k - 16, 0, 0LL, 0LL);
                      }
                      v258 = v197 - (unsigned __int16)v231;
                      if ( v258 <= 0 )
                      {
                        v107 = k;
                        break;
                      }
                    }
                  }
                  v102 = v197;
                }
                else
                {
                  v107 = (_QWORD *)*v108;
                }
              }
              else
              {
                v107 = v108;
              }
            }
            if ( v107 )
              break;
LABEL_272:
            v104 = (__int64 *)*v104;
            LODWORD(v91) = *((_DWORD *)v104 + 6);
            v218 = (unsigned int)v91;
            v102 = v197;
          }
          v103 = Src + 336;
        }
        else
        {
          v107 = (_QWORD *)*v103;
        }
        while ( v103 != v107 )
        {
          if ( *((_DWORD *)Src + 31) )
          {
            v122 = *((_DWORD *)v107 - 2);
            v265 = v122;
            if ( (v122 & *((_DWORD *)Src + 31)) != 0 )
              v265 = v122 ^ *((_DWORD *)Src + 34);
            v123 = v265;
          }
          else
          {
            v123 = *((_WORD *)v107 - 4);
          }
          v200 = v123;
          if ( v102 <= v123 )
            break;
          v107 = (_QWORD *)*v107;
          v103 = Src + 336;
        }
        v124 = (_QWORD *)(v98 + 16);
        v125 = (__int64 *)v107[1];
        if ( (_QWORD *)*v125 == v107 )
        {
          *v124 = v107;
          *(_QWORD *)(v98 + 24) = v125;
          *v125 = (__int64)v124;
          v107[1] = v124;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v107, 0, *v125, 0LL);
        }
        *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v98 + 8);
        v126 = (__int64 *)*((_QWORD *)Src + 39);
        if ( v126 )
        {
          v127 = *(unsigned __int16 *)(v98 + 8);
          while ( 1 )
          {
            v128 = *((unsigned int *)v126 + 2);
            if ( v127 < v128 )
              break;
            if ( !*v126 )
            {
              v127 = (unsigned int)(v128 - 1);
              break;
            }
            v126 = (__int64 *)*v126;
          }
          v259 = v127;
          v129 = *(unsigned __int16 *)(v98 + 8);
          v271 = *(unsigned __int16 *)(v98 + 8);
          v130 = v127 - *((_DWORD *)v126 + 6);
          if ( *((_DWORD *)v126 + 3) )
            v131 = 2 * v130;
          else
            v131 = v130;
          ++*((_DWORD *)v126 + 4);
          v132 = 8 * v131;
          v204 = (__int64 *)(8 * v131);
          v133 = *(_QWORD *)(8 * v131 + v126[6]);
          if ( (_DWORD)v127 == *((_DWORD *)v126 + 2) - 1 )
            ++*((_DWORD *)v126 + 5);
          if ( !v133 )
            goto LABEL_301;
          v134 = *(_DWORD *)(v133 - 16 + 8);
          v229 = v134;
          if ( *((_DWORD *)Src + 31) )
          {
            v229 = v134 ^ *((_DWORD *)Src + 34);
            if ( HIBYTE(v229) != (BYTE2(v229) ^ (unsigned __int8)(BYTE1(v229) ^ v229)) )
            {
              RtlpLogHeapFailure(3, (_DWORD)Src, v133 - 16, 0, 0LL, 0LL);
              v132 = (__int64)v204;
            }
          }
          v244 = v129 - (unsigned __int16)v229;
          if ( v244 <= 0 )
LABEL_301:
            *(_QWORD *)(v132 + v126[6]) = v124;
          if ( !v133 )
            *(_DWORD *)(v126[5] + 4LL * (v130 >> 5)) |= 1 << (v130 & 0x1F);
        }
        goto LABEL_306;
      }
      *(_BYTE *)(v98 + 10) &= 0xF0u;
      *(_BYTE *)(v98 + 15) = 0;
      if ( (Src[112] & 0x40) == 0 )
        goto LABEL_316;
      v135 = (_DWORD *)(v98 + 32);
      v247 = v98 + 32;
      v136 = (16 * (unsigned __int64)(unsigned __int16)v91 - 32) >> 2;
      v230 = v136;
      if ( v136 )
      {
        if ( ((unsigned __int8)v135 & 4) == 0 )
          goto LABEL_313;
        *v135 = -17891602;
        v230 = --v136;
        if ( v136 )
        {
          v135 = (_DWORD *)(v98 + 36);
          v247 = v98 + 36;
LABEL_313:
          memset64(v135, 0xFEEEFEEEFEEEFEEEuLL, v136 >> 1);
          if ( (v136 & 1) != 0 )
            v135[v136 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v98 + 10) |= 4u;
LABEL_316:
      v137 = Src + 336;
      if ( *((_QWORD *)Src + 39) )
        Entry = (_QWORD *)RtlpFindEntry((__int64)Src, (unsigned __int16)v91);
      else
        Entry = (_QWORD *)*v137;
      while ( v137 != Entry )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v139 = *((_DWORD *)Entry - 2);
          v264 = v139;
          if ( (v139 & *((_DWORD *)Src + 31)) != 0 )
            v264 = v139 ^ *((_DWORD *)Src + 34);
          v140 = v264;
        }
        else
        {
          v140 = *((_WORD *)Entry - 4);
        }
        v205 = v140;
        if ( (unsigned __int16)v91 <= (unsigned __int64)v140 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v141 = (_QWORD *)(v98 + 16);
      v142 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v142 == Entry )
      {
        *v141 = Entry;
        *(_QWORD *)(v98 + 24) = v142;
        *v142 = (__int64)v141;
        Entry[1] = v141;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v142, 0LL);
      }
      *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v98 + 8);
      v143 = *((_QWORD *)Src + 39);
      if ( v143 )
      {
        v144 = *(unsigned __int16 *)(v98 + 8);
        while ( 1 )
        {
          v145 = *(unsigned int *)(v143 + 8);
          if ( v144 < v145 )
            break;
          if ( !*(_QWORD *)v143 )
          {
            v144 = (unsigned int)(v145 - 1);
            break;
          }
          v143 = *(_QWORD *)v143;
        }
        v237 = v144;
LABEL_305:
        RtlpHeapAddListEntry((__int64)Src, v143, 1, (__int64)v141, v144, *(unsigned __int16 *)(v98 + 8));
        goto LABEL_306;
      }
      goto LABEL_306;
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v101 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v101 + 11) != (*(_BYTE *)(v101 + 8) ^ (unsigned __int8)(*(_BYTE *)(v101 + 9) ^ *(_BYTE *)(v101 + 10))) )
        RtlpAnalyzeHeapFailure(Src, v98 + 16LL * (_QWORD)v91);
    }
    v146 = *(_QWORD *)(v101 + 16);
    v147 = *(__int64 **)(v101 + 24);
    v148 = *v147;
    v149 = *(_QWORD *)(v146 + 8);
    if ( *v147 == v149 && v148 == v101 + 16 )
      break;
    RtlpLogHeapFailure(12, (_DWORD)Src, v101 + 16, v149, v148, 0LL);
LABEL_416:
    if ( (_DWORD)v197 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741764;
      v171 = NtCurrentTeb();
      v171->LastErrorValue = RtlNtStatusToDosError(-1073741764);
      goto LABEL_498;
    }
    LODWORD(v197) = 1;
  }
  *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v101 + 8);
  v150 = *((_QWORD *)Src + 39);
  if ( v150 )
  {
    v151 = *(unsigned __int16 *)(v101 + 8);
    while ( 1 )
    {
      v152 = *(unsigned int *)(v150 + 8);
      if ( v151 < v152 )
        break;
      if ( !*(_QWORD *)v150 )
      {
        v151 = (unsigned int)(v152 - 1);
        break;
      }
      v150 = *(_QWORD *)v150;
    }
    v249 = v151;
    RtlpHeapRemoveListEntry((__int64)Src, v150, 1, (__int64 *)(v101 + 16), v151, *(unsigned __int16 *)(v101 + 8));
  }
  *v147 = v146;
  *(_QWORD *)(v146 + 8) = v147;
  if ( (*(_BYTE *)(v101 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v98 + 16LL * (_QWORD)v91) )
  {
    RtlpDeCommitFreeBlock((unsigned __int64)Src, v98 + 16LL * (_QWORD)v91, *(unsigned __int16 *)(v101 + 8), 1);
    goto LABEL_416;
  }
  if ( v95 )
  {
    v153 = *(_BYTE *)(v101 + 10);
    if ( (v153 & 4) != 0 )
    {
      v154 = 16LL * *(unsigned __int16 *)(v101 + 8) - 32;
      v253 = v154;
      if ( (v153 & 2) != 0 && v154 > 4 )
      {
        v154 -= 4LL;
        v253 = v154;
      }
      v155 = RtlCompareMemoryUlong(v101 + 32, v154, 4277075694LL);
      if ( v155 != v154 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)(v98 + 16LL * (_QWORD)v91),
          (const void *)(v101 + v155 + 32));
        RtlpBreakPointHeap(v98 + 16LL * (_QWORD)v91);
        v95 = v219;
      }
    }
  }
  *(_BYTE *)(v98 + 10) = *(_BYTE *)(v101 + 10);
  v156 = (unsigned __int64)v91 + *(unsigned __int16 *)(v101 + 8);
  v204 = (__int64 *)v156;
  if ( v156 > 0xFF00 )
  {
    RtlpInsertFreeBlock((unsigned __int64)Src, v98, v156);
    goto LABEL_419;
  }
  *(_WORD *)(v98 + 8) = v156;
  *(_WORD *)(16 * v156 + v98 + 12) = v156 ^ *((_WORD *)Src + 70);
  if ( v95 )
  {
    *(_BYTE *)(v98 + 10) &= 0xF0u;
    *(_BYTE *)(v98 + 15) = 0;
    if ( (Src[112] & 0x40) == 0 )
      goto LABEL_393;
    v163 = (_DWORD *)(v98 + 32);
    v254 = v98 + 32;
    v164 = (16 * (unsigned __int64)(unsigned __int16)v156 - 32) >> 2;
    v227 = v164;
    if ( v164 )
    {
      if ( ((unsigned __int8)v163 & 4) == 0 )
        goto LABEL_390;
      *v163 = -17891602;
      v227 = --v164;
      if ( v164 )
      {
        v163 = (_DWORD *)(v98 + 36);
        v254 = v98 + 36;
LABEL_390:
        memset64(v163, 0xFEEEFEEEFEEEFEEEuLL, v164 >> 1);
        if ( (v164 & 1) != 0 )
          v163[v164 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v98 + 10) |= 4u;
LABEL_393:
    v165 = Src + 336;
    if ( *((_QWORD *)Src + 39) )
      v166 = (_QWORD *)RtlpFindEntry((__int64)Src, (unsigned __int16)v156);
    else
      v166 = (_QWORD *)*v165;
    while ( v165 != v166 )
    {
      if ( *((_DWORD *)Src + 31) )
      {
        v167 = *((_DWORD *)v166 - 2);
        v263 = v167;
        if ( (v167 & *((_DWORD *)Src + 31)) != 0 )
          v263 = v167 ^ *((_DWORD *)Src + 34);
        v168 = v263;
      }
      else
      {
        v168 = *((_WORD *)v166 - 4);
      }
      v207 = v168;
      if ( (unsigned __int16)v156 <= (unsigned __int64)v168 )
        break;
      v166 = (_QWORD *)*v166;
    }
    v141 = (_QWORD *)(v98 + 16);
    v169 = (__int64 *)v166[1];
    if ( (_QWORD *)*v169 == v166 )
    {
      *v141 = v166;
      *(_QWORD *)(v98 + 24) = v169;
      *v169 = (__int64)v141;
      v166[1] = v141;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v166, 0, *v169, 0LL);
    }
    *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v98 + 8);
    v143 = *((_QWORD *)Src + 39);
    if ( v143 )
    {
      v144 = *(unsigned __int16 *)(v98 + 8);
      while ( 1 )
      {
        v170 = *(unsigned int *)(v143 + 8);
        if ( v144 < v170 )
          break;
        if ( !*(_QWORD *)v143 )
        {
          v144 = (unsigned int)(v170 - 1);
          break;
        }
        v143 = *(_QWORD *)v143;
      }
      v239 = v144;
      goto LABEL_305;
    }
    goto LABEL_306;
  }
  *(_BYTE *)(v98 + 10) = 0;
  *(_BYTE *)(v98 + 15) = 0;
  v157 = Src + 336;
  if ( *((_QWORD *)Src + 39) )
    v158 = (_QWORD *)RtlpFindEntry((__int64)Src, (unsigned __int16)v156);
  else
    v158 = (_QWORD *)*v157;
  while ( v157 != v158 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      v159 = *((_DWORD *)v158 - 2);
      v266 = v159;
      if ( (v159 & *((_DWORD *)Src + 31)) != 0 )
        v266 = v159 ^ *((_DWORD *)Src + 34);
      v160 = v266;
    }
    else
    {
      v160 = *((_WORD *)v158 - 4);
    }
    v203 = v160;
    if ( (unsigned __int16)v156 <= (unsigned __int64)v160 )
      break;
    v158 = (_QWORD *)*v158;
  }
  v141 = (_QWORD *)(v98 + 16);
  v161 = (__int64 *)v158[1];
  if ( (_QWORD *)*v161 == v158 )
  {
    *v141 = v158;
    *(_QWORD *)(v98 + 24) = v161;
    *v161 = (__int64)v141;
    v158[1] = v141;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v158, 0, *v161, 0LL);
  }
  *((_QWORD *)Src + 24) += *(unsigned __int16 *)(v98 + 8);
  v143 = *((_QWORD *)Src + 39);
  if ( v143 )
  {
    v144 = *(unsigned __int16 *)(v98 + 8);
    while ( 1 )
    {
      v162 = *(unsigned int *)(v143 + 8);
      if ( v144 < v162 )
        break;
      if ( !*(_QWORD *)v143 )
      {
        v144 = (unsigned int)(v162 - 1);
        break;
      }
      v143 = *(_QWORD *)v143;
    }
    v251 = v144;
    goto LABEL_305;
  }
LABEL_306:
  if ( *((_DWORD *)Src + 31) )
  {
    *(_BYTE *)(v98 + 11) = *(_BYTE *)(v98 + 8) ^ *(_BYTE *)(v98 + 9) ^ *(_BYTE *)(v98 + 10);
    *(_DWORD *)(v98 + 8) ^= *((_DWORD *)Src + 34);
  }
LABEL_419:
  v92 = v273;
LABEL_420:
  v198 = (void *)(v213 + 16);
  v172 = (unsigned __int16 *)(v213 + 8);
  v173 = 16 * *(unsigned __int16 *)(v213 + 8);
  v215 = v173;
  if ( (*(_BYTE *)(v213 + 15) & 0x3F) == 0x3F )
  {
    v173 -= 8LL;
    v215 = v173;
  }
  if ( v199 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v213 + 11) = *(_BYTE *)(v213 + 8) ^ *(_BYTE *)(v213 + 9) ^ *(_BYTE *)(v213 + 10);
      *(_DWORD *)v172 ^= *((_DWORD *)Src + 34);
    }
    if ( v193 )
    {
      if ( (*((_DWORD *)Src + 29) & 0x1000000) == 0 )
      {
        ++*((_DWORD *)Src + 150);
        v174 = *((_DWORD *)Src + 152);
        if ( *((_DWORD *)Src + 150) > v174 )
        {
          *((_DWORD *)Src + 150) = 0;
          v175 = *((_QWORD *)Src + 67) - 16LL * *((_QWORD *)Src + 24);
          if ( v175 > *((_QWORD *)Src + 79) )
            *((_QWORD *)Src + 79) = v175;
          *((_QWORD *)Src + 80) = v175;
        }
        if ( ++*((_DWORD *)Src + 153) >= 0x1000u )
        {
          if ( Src[378] != 2 || (v176 = 4, *((_DWORD *)Src + 154) <= 0x10u) )
            v176 = 8;
          if ( *((_DWORD *)Src + 151) > (unsigned int)(4096 >> v176) && v174 < 0x10000 )
            *((_DWORD *)Src + 152) = 2 * v174;
          *((_DWORD *)Src + 151) = 0;
          *((_DWORD *)Src + 153) = 0;
        }
      }
      v177 = *((_QWORD *)Src + 44);
      v20 = (*(_DWORD *)(v177 + 12))-- == 1;
      if ( v20 )
      {
        *(_QWORD *)(v177 + 16) = 0LL;
        v178 = _InterlockedCompareExchange((volatile signed __int32 *)(v177 + 8), -1, -2);
        if ( v178 != -2 )
        {
          if ( (*(_BYTE *)(v177 + 8) & 1) != 0 )
            RtlpNotOwnerCriticalSection(v177);
          DeferredCriticalSectionEvent = *(_QWORD *)(v177 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v177);
          do
          {
            v180 = v178 & 2 | 1;
            v181 = _InterlockedCompareExchange((volatile signed __int32 *)(v177 + 8), v180 + v178, v178);
            v20 = v178 == v181;
            v178 = v181;
          }
          while ( !v20 );
          if ( (v180 & 2) != 0 )
            RtlpUnWaitCriticalSectionEx(v177, DeferredCriticalSectionEvent);
        }
        v173 = v215;
      }
      v193 = 0;
    }
    if ( (a2 & 8) != 0 )
      memset(v198, 0, v173 - 8);
    goto LABEL_498;
  }
  if ( (a2 & 8) != 0 )
  {
    memset(v198, 0, v173 - 8);
    goto LABEL_462;
  }
  if ( (Src[112] & 0x40) != 0 )
  {
    v182 = (char *)v198;
    v240 = v198;
    v183 = (v92 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
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
          goto LABEL_460;
        }
      }
      else
      {
LABEL_460:
        memset64(v182, 0xBAADF00DBAADF00DuLL, v183 >> 1);
        if ( (v183 & 1) != 0 )
          *(_DWORD *)&v182[4 * v183 - 4] = -1163005939;
      }
    }
  }
LABEL_462:
  if ( (Src[112] & 0x20) != 0 )
  {
    v184 = (char *)v198;
    *(_QWORD *)((char *)v198 + v92) = 0xABABABABABABABABuLL;
    *(_QWORD *)&v184[v92 + 8] = 0xABABABABABABABABuLL;
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
    if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
      *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *((_WORD *)v238 + 1) = RtlpUpdateTagEntry((_DWORD)Src, (a2 >> 18) & 0xFFF, 0, *v172, 0);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_BYTE *)(v185 + 11) = RtlpUpdateTagEntry((_DWORD)Src, (unsigned __int8)(a2 >> 18), 0, *v172, 0);
  }
  if ( *((_DWORD *)Src + 31) )
  {
    *(_BYTE *)(v185 + 11) = *(_BYTE *)v172 ^ *((_BYTE *)v172 + 1) ^ *((_BYTE *)v172 + 2);
    *(_DWORD *)v172 ^= *((_DWORD *)Src + 34);
  }
LABEL_498:
  if ( v193 )
  {
    if ( v198 && !v194 )
      RtlpUpdateHeapWatermarks(Src);
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  }
  if ( MEMORY[0x7FFE0388] && v198 )
  {
    if ( v194 )
      RtlpHeapLogRangeReserve(Src, v194 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v194 + 40));
  }
  return v198;
}
