/*
 * XREFs of RtlpAllocateHeap @ 0x180025060
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpHeapRemoveListEntry @ 0x1800289EC (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180028B34 (RtlpCommitBlock.c)
 *     RtlpGetLFHContext @ 0x180028E4C (RtlpGetLFHContext.c)
 *     RtlpUpdateHeapRates @ 0x180028FD0 (RtlpUpdateHeapRates.c)
 *     RtlpGetExtraStuffPointer @ 0x180029020 (RtlpGetExtraStuffPointer.c)
 *     RtlpPerformHeapMaintenance @ 0x1800299F8 (RtlpPerformHeapMaintenance.c)
 *     RtlLogStackBackTraceEx @ 0x18002B208 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180042348 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A810 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004AE00 (RtlpInsertFreeBlock.c)
 *     RtlpFindEntry @ 0x18004BE88 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18004C2F4 (RtlpHeapAddListEntry.c)
 *     RtlpHeapListCompare @ 0x18004C414 (RtlpHeapListCompare.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180066D28 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlDebugAllocateHeap @ 0x1800917D4 (RtlDebugAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800AA730 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3B00 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3CB8 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpUpdateTagEntry @ 0x1800EADFC (RtlpUpdateTagEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800EC324 (RtlpUpdateHeapWatermarks.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1800F7F14 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F9310 (RtlpLogHeapExtendEvent.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

void *__fastcall RtlpAllocateHeap(
        __int64 *Src,
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
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 *v31; // r14
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  char *v37; // r14
  __int64 v38; // r9
  struct _TEB *v39; // rdi
  __int64 i; // r14
  unsigned __int64 v41; // rcx
  unsigned int v42; // esi
  __int64 v43; // rsi
  char *v44; // r15
  char **v45; // r12
  char **v46; // rax
  int v47; // eax
  int v48; // eax
  char **j; // rdi
  int v50; // eax
  __int64 v51; // rdi
  unsigned int v52; // edx
  int v53; // eax
  __int64 v54; // rdi
  unsigned __int64 v55; // rcx
  char *v56; // r8
  __int64 v57; // r11
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // rsi
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  int v63; // r12d
  unsigned int v64; // r14d
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // r9
  char *v68; // r10
  unsigned int v69; // edx
  __int64 v70; // r15
  int v71; // eax
  __int64 *v72; // rax
  __int64 v73; // r9
  char *v74; // rax
  __int64 v75; // r13
  __int64 v76; // rsi
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  __int64 v79; // r11
  unsigned int v80; // r14d
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // r9
  char *v84; // r10
  unsigned int v85; // edx
  __int64 v86; // r15
  __int64 *v87; // rax
  char v88; // r12
  int v89; // r8d
  unsigned __int64 v90; // rsi
  __int64 v91; // r15
  __int64 v92; // rdx
  __int64 *v93; // r15
  unsigned __int64 v94; // r14
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rcx
  bool v97; // r13
  unsigned __int8 v98; // al
  __int64 *v99; // r9
  __int64 v100; // rsi
  __int64 *v101; // rdx
  __int64 v102; // rdi
  __int64 v103; // rdi
  unsigned __int64 v104; // rdi
  _QWORD *v105; // rax
  __int64 v106; // r12
  unsigned __int64 v107; // rcx
  __int64 v108; // r15
  _QWORD *v109; // r14
  _QWORD *v110; // r13
  _QWORD *v111; // rax
  int v112; // r8d
  int v113; // eax
  __int64 v114; // r8
  int v115; // eax
  _QWORD *k; // rdi
  int v117; // eax
  __int64 v118; // rdi
  unsigned int v119; // r9d
  unsigned int *v120; // r8
  unsigned int v121; // edx
  int v122; // eax
  __int64 v123; // rdi
  int v124; // ecx
  unsigned __int16 v125; // ax
  _QWORD *v126; // r12
  __int64 *v127; // rax
  __int64 v128; // rdi
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rdx
  int v131; // r15d
  unsigned int v132; // r14d
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // r13
  int v136; // eax
  _DWORD *v137; // r8
  unsigned __int64 v138; // rdx
  _QWORD *v139; // rdi
  _QWORD *Entry; // r8
  int v141; // ecx
  unsigned __int16 v142; // ax
  _QWORD *v143; // rdi
  __int64 *v144; // rax
  __int64 v145; // rdx
  unsigned __int64 v146; // rcx
  unsigned __int64 v147; // r8
  __int64 v148; // r14
  __int64 *v149; // r12
  __int64 v150; // rax
  __int64 v151; // r9
  __int64 v152; // rdx
  unsigned __int64 v153; // rcx
  unsigned __int64 v154; // r8
  __int64 v155; // r9
  char v156; // al
  unsigned __int64 v157; // r14
  __int64 v158; // r12
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
  __int64 v178; // rdi
  signed __int32 v179; // esi
  __int64 DeferredCriticalSectionEvent; // r8
  int v181; // ecx
  signed __int32 v182; // eax
  char *v183; // r8
  unsigned __int64 v184; // rdx
  char *v185; // rax
  __int64 v186; // rdi
  _QWORD *ExtraStuffPointer; // r14
  __int64 v188; // rdi
  int HeapProtection; // r14d
  __int16 updated; // ax
  __int64 v191; // rdx
  char *v192; // r8
  __int64 *v193; // rax
  char v194; // [rsp+30h] [rbp-2A8h]
  __int64 v195; // [rsp+38h] [rbp-2A0h] BYREF
  char v196; // [rsp+40h] [rbp-298h]
  char v197; // [rsp+41h] [rbp-297h]
  unsigned __int64 v198; // [rsp+48h] [rbp-290h]
  int v199; // [rsp+50h] [rbp-288h]
  void *v200; // [rsp+58h] [rbp-280h]
  char v201; // [rsp+60h] [rbp-278h]
  char v202; // [rsp+61h] [rbp-277h]
  char v203; // [rsp+62h] [rbp-276h]
  char v204; // [rsp+63h] [rbp-275h]
  unsigned __int16 v205; // [rsp+64h] [rbp-274h]
  unsigned __int16 v206; // [rsp+66h] [rbp-272h]
  unsigned __int16 v207; // [rsp+68h] [rbp-270h]
  unsigned __int16 v208; // [rsp+6Ah] [rbp-26Eh]
  __int64 *v209; // [rsp+70h] [rbp-268h]
  int v210; // [rsp+78h] [rbp-260h]
  int v211; // [rsp+7Ch] [rbp-25Ch]
  unsigned int v212; // [rsp+80h] [rbp-258h]
  unsigned int v213; // [rsp+84h] [rbp-254h]
  char *v214; // [rsp+88h] [rbp-250h]
  __int64 v215; // [rsp+90h] [rbp-248h]
  __int64 v216; // [rsp+98h] [rbp-240h]
  __int64 v217; // [rsp+A0h] [rbp-238h]
  int v218; // [rsp+A8h] [rbp-230h]
  unsigned int v219; // [rsp+ACh] [rbp-22Ch]
  unsigned int v220; // [rsp+B0h] [rbp-228h]
  BOOL v221; // [rsp+B4h] [rbp-224h]
  __int64 v222; // [rsp+B8h] [rbp-220h]
  unsigned __int64 v223; // [rsp+C0h] [rbp-218h]
  unsigned __int64 v224; // [rsp+C8h] [rbp-210h]
  unsigned __int64 v225; // [rsp+D0h] [rbp-208h]
  __int64 v226; // [rsp+D8h] [rbp-200h] BYREF
  __int64 v227; // [rsp+E0h] [rbp-1F8h] BYREF
  unsigned __int64 v228; // [rsp+E8h] [rbp-1F0h]
  int v229; // [rsp+F8h] [rbp-1E0h]
  int v230; // [rsp+108h] [rbp-1D0h]
  unsigned __int64 v231; // [rsp+110h] [rbp-1C8h]
  int v232; // [rsp+120h] [rbp-1B8h]
  int v233; // [rsp+130h] [rbp-1A8h]
  int v234; // [rsp+140h] [rbp-198h]
  int v235; // [rsp+150h] [rbp-188h]
  int v236; // [rsp+160h] [rbp-178h]
  int v237; // [rsp+170h] [rbp-168h]
  int v238; // [rsp+178h] [rbp-160h]
  unsigned __int64 v239; // [rsp+180h] [rbp-158h]
  unsigned __int64 v240; // [rsp+188h] [rbp-150h]
  int v241; // [rsp+190h] [rbp-148h]
  unsigned __int64 v242; // [rsp+198h] [rbp-140h]
  unsigned __int64 v243; // [rsp+1A0h] [rbp-138h]
  __int64 *v244; // [rsp+1A8h] [rbp-130h]
  unsigned int *v245; // [rsp+1B0h] [rbp-128h]
  unsigned __int64 v246; // [rsp+1B8h] [rbp-120h]
  __int64 v247; // [rsp+1C0h] [rbp-118h]
  unsigned __int64 v248; // [rsp+1C8h] [rbp-110h]
  unsigned __int64 v249; // [rsp+1D0h] [rbp-108h]
  unsigned __int64 v250; // [rsp+1D8h] [rbp-100h]
  unsigned __int64 v251; // [rsp+1E0h] [rbp-F8h]
  __int64 v252; // [rsp+1E8h] [rbp-F0h]
  unsigned __int64 v253; // [rsp+1F0h] [rbp-E8h]
  int v254; // [rsp+1F8h] [rbp-E0h]
  _QWORD *v255; // [rsp+200h] [rbp-D8h]
  unsigned __int64 v256; // [rsp+208h] [rbp-D0h]
  char *v257; // [rsp+210h] [rbp-C8h]
  void *v258; // [rsp+218h] [rbp-C0h]
  int v259; // [rsp+220h] [rbp-B8h]
  int v260; // [rsp+224h] [rbp-B4h]
  int v262; // [rsp+22Ch] [rbp-ACh]
  int v263; // [rsp+230h] [rbp-A8h]
  int v264; // [rsp+240h] [rbp-98h]
  int v265; // [rsp+250h] [rbp-88h]
  int v266; // [rsp+260h] [rbp-78h]
  int v267; // [rsp+270h] [rbp-68h]
  __int64 v268; // [rsp+278h] [rbp-60h]
  __int64 v269; // [rsp+280h] [rbp-58h]
  unsigned __int16 *v270; // [rsp+288h] [rbp-50h]
  char *v271; // [rsp+290h] [rbp-48h]
  __int64 *v272; // [rsp+298h] [rbp-40h]
  unsigned __int64 v274; // [rsp+2F0h] [rbp+18h]
  unsigned __int64 v275; // [rsp+2F8h] [rbp+20h] BYREF

  v275 = a4;
  v274 = a3;
  v7 = a3;
  v216 = 0LL;
  v199 = 1;
  v194 = 0;
  v200 = 0LL;
  v195 = 0LL;
  v211 = 0;
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
    v14 = Src[33] & (v13 + Src[32]);
    if ( v14 < 0x20 )
      v14 = 32LL;
    v275 = v14;
    v6 = a2 >> 4;
    LOBYTE(v6) = (a2 >> 4) & 0xE0 | 1;
    LODWORD(v198) = v6;
    if ( (a2 & 0x3C000100) != 0 || Src[41] )
    {
      LOBYTE(v6) = (a2 >> 4) & 0xE0 | 3;
      LODWORD(v198) = v6;
      v275 = v14 + 16;
    }
    v11 = v275 >> 4;
    v217 = v275 >> 4;
  }
  else
  {
    LOBYTE(v6) = 1;
    LODWORD(v198) = v6;
    v11 = a4 >> 4;
    v217 = a4 >> 4;
    if ( v10 < 2 )
    {
      v275 += 16LL;
      v11 = 2LL;
      v217 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    LOBYTE(v6) = v6 | 8;
    LODWORD(v198) = v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v15 = Src[44];
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
        v210 = 0;
        if ( byte_180152408 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v19 = NtCurrentTeb();
          v19->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          goto LABEL_498;
        }
        v211 = 1;
        RtlEnterCriticalSection(Src[44]);
        RtlpUpdateHeapRates(Src, 1LL);
        goto LABEL_30;
      }
      ++*(_DWORD *)(v15 + 12);
    }
    v210 = 1;
    ++*((_DWORD *)Src + 146);
LABEL_30:
    v201 = 1;
    v194 = 1;
    if ( (Src[15] & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(Src);
  }
  if ( v11 > *((unsigned int *)Src + 37) )
  {
    if ( (Src[14] & 2) != 0 )
    {
      v275 += 56LL;
      v188 = (RtlpHeapGenerateRandomValue32() & 0xF) << 12;
      v226 = 0LL;
      v227 = v188 + v275 + 4096;
      HeapProtection = RtlpGetHeapProtection(Src, 1LL);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v226, 0LL, &v227, 0x2000, HeapProtection) < 0 )
        goto LABEL_498;
      v195 = v188 + v226;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v195, 0LL, &v275, 4096, HeapProtection) >= 0 )
      {
        *(_WORD *)(v195 + 56) = v275 - v274;
        *(_BYTE *)(v195 + 58) = v6 | 2;
        *(_QWORD *)(v195 + 32) = v275;
        *(_QWORD *)(v195 + 40) = v227;
        *(_BYTE *)(v195 + 63) = 4;
        Src[70] += v275;
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(Src, v195, v275, 9LL);
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapExtendEvent((_DWORD)Src, v195, v275, 16 * Src[24], MEMORY[0x7FFE0380]);
        if ( MEMORY[0x7FFE038A] )
          RtlpLogHeapExtendEvent((_DWORD)Src, v195, v275, 16 * Src[24], MEMORY[0x7FFE038A]);
        if ( (Src[14] & 0x8000000) != 0 )
          *(_WORD *)(v195 + 16) = RtlLogStackBackTraceEx(1LL);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          updated = RtlpUpdateTagEntry((_DWORD)Src, (unsigned __int8)(a2 >> 18), 0, *(_QWORD *)(v195 + 32) >> 4, 1);
          *(_WORD *)(v195 + 18) = updated;
        }
        v191 = v195;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v195 + 59) = *(_BYTE *)(v195 + 56) ^ *(_BYTE *)(v195 + 57) ^ *(_BYTE *)(v195 + 58);
          *(_DWORD *)(v191 + 56) ^= *((_DWORD *)Src + 34);
          v191 = v195;
        }
        v192 = (char *)(Src + 34);
        v193 = (__int64 *)Src[35];
        if ( (__int64 *)*v193 == Src + 34 )
        {
          *(_QWORD *)v191 = v192;
          *(_QWORD *)(v191 + 8) = v193;
          *v193 = v191;
          Src[35] = v191;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v192, 0, *v193, 0LL);
        }
        v200 = (void *)(v195 + 64);
        goto LABEL_498;
      }
      v195 = 0LL;
      ++*((_DWORD *)Src + 150);
    }
    goto LABEL_497;
  }
  if ( (a2 & 0x800000) != 0 )
    goto LABEL_58;
  if ( v10 >= *((unsigned __int16 *)Src + 200) )
  {
    if ( v7 > RtlpLargestLfhBlock || *((_BYTE *)Src + 386) == 2 && Src[47] )
      goto LABEL_58;
    v20 = *((_BYTE *)Src + 387) == 2;
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
  if ( ((unsigned __int8)(1 << (v10 & 7)) & *((_BYTE *)Src + (v10 >> 3) + 402)) == 0 )
  {
    v24 = (unsigned __int16 *)(Src[49] + 2 * v10);
    v270 = v24;
    v25 = *v24 + 33;
    *v24 = v25;
    if ( !v211 )
    {
      if ( (v25 & 0x1Fu) <= 0x10 )
      {
        a3 = 65280LL;
        if ( v25 <= 0xFF00u )
        {
          v218 = 0;
          goto LABEL_59;
        }
      }
      v218 = 1;
    }
    v26 = 1LL;
    if ( v274 )
      v26 = v274;
    if ( *((_BYTE *)Src + 386) == 2 )
      v27 = Src[47];
    else
      v27 = 0LL;
    LFHContext = RtlpGetLFHContext(v27, v26, a3, 0LL);
    if ( LFHContext != 0xFFFF )
    {
      *v24 = LFHContext;
      *((_BYTE *)Src + v21 + 402) |= 1 << v22;
      ++*((_DWORD *)Src + 156);
      goto LABEL_58;
    }
    if ( *((_BYTE *)Src + 386) != 2 )
    {
LABEL_57:
      *((_DWORD *)Src + 30) |= 0x20000000u;
      goto LABEL_58;
    }
    v20 = Src[47] == 0;
    goto LABEL_56;
  }
LABEL_59:
  if ( a5 && *a5 )
  {
    v29 = *a5 - 16LL;
    v214 = (char *)v29;
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
    Src[24] -= *(unsigned __int16 *)(v29 + 8);
    v34 = Src[39];
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
      v240 = v35;
      LOBYTE(v36) = 1;
      RtlpHeapRemoveListEntry((_DWORD)Src, v34, v36, v29 + 16, v35, *(unsigned __int16 *)(v29 + 8));
    }
    *v31 = v30;
    *(_QWORD *)(v30 + 8) = v31;
    v37 = (char *)(v29 + 10);
    if ( (*(_BYTE *)(v29 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v29) )
    {
      LOBYTE(v38) = 1;
      RtlpDeCommitFreeBlock(Src, v29, *(unsigned __int16 *)(v29 + 8), v38);
LABEL_78:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v39 = NtCurrentTeb();
      v39->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      goto LABEL_498;
    }
    v202 = 1;
    goto LABEL_194;
  }
  v257 = (char *)(Src + 42);
  for ( i = Src[39]; ; i = *(_QWORD *)i )
  {
    v41 = *(unsigned int *)(i + 8);
    if ( v11 < v41 )
    {
      v42 = v11;
      v223 = v11;
      goto LABEL_84;
    }
    if ( !*(_QWORD *)i )
      break;
  }
  v42 = v41 - 1;
  v223 = (unsigned int)(v41 - 1);
  while ( 1 )
  {
LABEL_84:
    v43 = v42 - *(_DWORD *)(i + 24);
    v44 = 0LL;
    v45 = *(char ***)(i + 32);
    v46 = (char **)v45[1];
    if ( v45 == v46 )
    {
      v44 = *(char **)(i + 32);
    }
    else
    {
      a3 = (unsigned __int64)(v46 - 2);
      v47 = *((_DWORD *)v46 - 2);
      v232 = v47;
      if ( *((_DWORD *)Src + 31) )
      {
        v232 = v47 ^ *((_DWORD *)Src + 34);
        if ( HIBYTE(v232) != ((unsigned __int8)v232 ^ (unsigned __int8)(BYTE1(v232) ^ BYTE2(v232))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
          v23 = 0LL;
        }
      }
      v254 = v11 - (unsigned __int16)v232;
      if ( v254 <= 0 )
      {
        a3 = (unsigned __int64)(*v45 - 16);
        v48 = *(_DWORD *)(a3 + 8);
        v233 = v48;
        if ( *((_DWORD *)Src + 31) )
        {
          v233 = v48 ^ *((_DWORD *)Src + 34);
          if ( HIBYTE(v233) != ((unsigned __int8)v233 ^ (unsigned __int8)(BYTE1(v233) ^ BYTE2(v233))) )
            RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
        }
        v259 = v11 - (unsigned __int16)v233;
        if ( v259 > 0 )
        {
          if ( *(_QWORD *)i || (_DWORD)v223 != *(_DWORD *)(i + 8) - 1 )
          {
            v51 = (unsigned int)v43 >> 5;
            v212 = (unsigned int)v43 >> 5;
            v23 = ((unsigned int)(*(_DWORD *)(i + 8) - *(_DWORD *)(i + 24)) >> 5) - 1;
            a3 = *(_QWORD *)(i + 40) + 4 * v51;
            v256 = a3;
            v52 = *(_DWORD *)a3 & ~((1 << (v43 & 0x1F)) - 1);
            while ( !v52 )
            {
              if ( (unsigned int)v51 > (unsigned int)v23 )
                goto LABEL_473;
              a3 += 4LL;
              v256 = a3;
              v52 = *(_DWORD *)a3;
              LODWORD(v51) = v51 + 1;
              v212 = v51;
            }
            if ( (_WORD)v52 )
            {
              if ( (_BYTE)v52 )
                v53 = RtlpBitsClearLow[(unsigned __int8)v52];
              else
                v53 = RtlpBitsClearLow[BYTE1(v52)] + 8;
            }
            else if ( (v52 & 0xFF0000) != 0 )
            {
              v53 = RtlpBitsClearLow[BYTE2(v52)] + 16;
            }
            else
            {
              v53 = RtlpBitsClearLow[(unsigned __int64)v52 >> 24] + 24;
            }
            v54 = (unsigned int)(v53 + 32 * v51);
            v212 = v54;
            if ( *(_DWORD *)(i + 12) )
              v54 = (unsigned int)(2 * v54);
            v44 = *(char **)(*(_QWORD *)(i + 48) + 8 * v54);
          }
          else
          {
            if ( *(_DWORD *)(i + 12) )
              v43 = (unsigned int)(2 * v43);
            for ( j = *(char ***)(*(_QWORD *)(i + 48) + 8 * v43); v45 != j; j = (char **)*j )
            {
              a3 = (unsigned __int64)(j - 2);
              v50 = *((_DWORD *)j - 2);
              v234 = v50;
              if ( *((_DWORD *)Src + 31) )
              {
                v234 = v50 ^ *((_DWORD *)Src + 34);
                if ( HIBYTE(v234) != ((unsigned __int8)v234 ^ (unsigned __int8)(BYTE1(v234) ^ BYTE2(v234))) )
                  RtlpLogHeapFailure(3, (_DWORD)Src, a3, 0, 0LL, 0LL);
              }
              v260 = v11 - (unsigned __int16)v234;
              if ( v260 <= 0 )
              {
                v44 = (char *)j;
                break;
              }
            }
          }
        }
        else
        {
          v44 = *v45;
        }
      }
      else
      {
        v44 = (char *)v45;
      }
    }
    if ( v44 )
      break;
LABEL_473:
    i = *(_QWORD *)i;
    v42 = *(_DWORD *)(i + 24);
    v223 = v42;
    v23 = 0LL;
  }
  v271 = v44;
  if ( v257 == v44 )
  {
LABEL_165:
    v74 = (char *)RtlpExtendHeap(Src, v275, a3, v23);
    v29 = (__int64)v74;
    v214 = v74;
    if ( v74 )
    {
      v56 = v74 + 16;
      v75 = *((_QWORD *)v74 + 2);
      v209 = (__int64 *)*((_QWORD *)v74 + 3);
      v58 = *v209;
      v59 = *(_QWORD *)(v75 + 8);
      if ( *v209 != v59 || (char *)v58 != v56 )
        goto LABEL_162;
      Src[24] -= *(unsigned __int16 *)(v29 + 8);
      v76 = Src[39];
      if ( v76 )
      {
        v77 = *(unsigned __int16 *)(v29 + 8);
        while ( 1 )
        {
          v78 = *(unsigned int *)(v76 + 8);
          if ( v77 < v78 )
            break;
          if ( !*(_QWORD *)v76 )
          {
            v77 = (unsigned int)(v78 - 1);
            break;
          }
          v76 = *(_QWORD *)v76;
        }
        v242 = v77;
        v79 = *(unsigned __int16 *)(v29 + 8);
        v80 = v77 - *(_DWORD *)(v76 + 24);
        if ( *(_DWORD *)(v76 + 12) )
          v81 = 2 * v80;
        else
          v81 = v80;
        v82 = 8 * v81;
        v83 = *(_QWORD *)(v76 + 48);
        v84 = *(char **)(v83 + 8 * v81);
        --*(_DWORD *)(v76 + 16);
        v85 = *(_DWORD *)(v76 + 8);
        if ( (_DWORD)v77 == v85 - 1 )
          --*(_DWORD *)(v76 + 20);
        if ( v84 == v56 )
        {
          v220 = v85;
          if ( !*(_QWORD *)v76 )
            v220 = --v85;
          if ( (unsigned int)v77 >= v85 )
          {
            if ( *(_QWORD *)v56 != *(_QWORD *)(v76 + 32) )
            {
              *(_QWORD *)(v83 + 8 * v81) = *(_QWORD *)v56;
              goto LABEL_191;
            }
            *(_QWORD *)(v83 + 8 * v81) = 0LL;
          }
          else
          {
            v86 = *(_QWORD *)v56;
            if ( *(_QWORD *)v56 != *(_QWORD *)(v76 + 32) )
            {
              LOBYTE(v83) = 1;
              if ( !(unsigned int)RtlpHeapListCompare(Src, v86, v79, v83) )
              {
                *(_QWORD *)(v82 + *(_QWORD *)(v76 + 48)) = v86;
                goto LABEL_191;
              }
            }
            *(_QWORD *)(v82 + *(_QWORD *)(v76 + 48)) = 0LL;
          }
          *(_DWORD *)(*(_QWORD *)(v76 + 40) + 4LL * (v80 >> 5)) &= ~(1 << (v80 & 0x1F));
        }
      }
LABEL_191:
      v87 = v209;
      *v209 = v75;
      *(_QWORD *)(v75 + 8) = v87;
      v37 = (char *)(v29 + 10);
      if ( (*(_BYTE *)(v29 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v29) )
        goto LABEL_160;
      v204 = 1;
      goto LABEL_194;
    }
LABEL_497:
    v200 = 0LL;
    goto LABEL_498;
  }
  v29 = (__int64)(v44 - 16);
  v214 = v44 - 16;
  if ( *((_DWORD *)Src + 31) )
  {
    *(_DWORD *)(v29 + 8) ^= *((_DWORD *)Src + 34);
    if ( *(_BYTE *)(v29 + 11) != (*(_BYTE *)(v29 + 8) ^ (unsigned __int8)(*(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v44 - 16);
  }
  v55 = *(unsigned __int16 *)(v29 + 8);
  if ( v55 < v11 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v29 + 11) = *(_BYTE *)(v29 + 8) ^ *(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10);
      *(_DWORD *)(v29 + 8) ^= *((_DWORD *)Src + 34);
    }
    goto LABEL_165;
  }
  v56 = v44;
  v57 = *(_QWORD *)v44;
  v228 = v57;
  v209 = *(__int64 **)(v29 + 24);
  v58 = *v209;
  v59 = *(_QWORD *)(v57 + 8);
  if ( *v209 != v59 || (char *)v58 != v44 )
  {
LABEL_162:
    RtlpLogHeapFailure(12, (_DWORD)Src, (_DWORD)v56, v59, v58, 0LL);
    goto LABEL_498;
  }
  Src[24] -= v55;
  v60 = Src[39];
  if ( !v60 )
    goto LABEL_158;
  v61 = *(unsigned __int16 *)(v29 + 8);
  while ( 1 )
  {
    v62 = *(unsigned int *)(v60 + 8);
    if ( v61 < v62 )
      break;
    if ( !*(_QWORD *)v60 )
    {
      v61 = (unsigned int)(v62 - 1);
      break;
    }
    v60 = *(_QWORD *)v60;
  }
  v239 = v61;
  v63 = *(unsigned __int16 *)(v29 + 8);
  v215 = *(unsigned __int16 *)(v29 + 8);
  v64 = v61 - *(_DWORD *)(v60 + 24);
  if ( *(_DWORD *)(v60 + 12) )
    v65 = 2 * v64;
  else
    v65 = v64;
  v66 = 8 * v65;
  v67 = *(_QWORD *)(v60 + 48);
  v68 = *(char **)(v67 + 8 * v65);
  --*(_DWORD *)(v60 + 16);
  v69 = *(_DWORD *)(v60 + 8);
  if ( (_DWORD)v61 == v69 - 1 )
    --*(_DWORD *)(v60 + 20);
  if ( v68 != v44 )
    goto LABEL_158;
  v219 = v69;
  if ( !*(_QWORD *)v60 )
    v219 = --v69;
  if ( (unsigned int)v61 >= v69 )
  {
    if ( *(_QWORD *)v44 != *(_QWORD *)(v60 + 32) )
    {
      *(_QWORD *)(v67 + 8 * v65) = *(_QWORD *)v44;
      goto LABEL_158;
    }
    *(_QWORD *)(v67 + 8 * v65) = 0LL;
  }
  else
  {
    v70 = *(_QWORD *)v44;
    if ( *(_QWORD *)v56 != *(_QWORD *)(v60 + 32) )
    {
      v71 = *(_DWORD *)(v70 - 16 + 8);
      v229 = v71;
      if ( *((_DWORD *)Src + 31) )
      {
        v229 = v71 ^ *((_DWORD *)Src + 34);
        if ( HIBYTE(v229) != (BYTE2(v229) ^ (unsigned __int8)(BYTE1(v229) ^ v229)) )
        {
          RtlpLogHeapFailure(3, (_DWORD)Src, v70 - 16, 0, 0LL, 0LL);
          v57 = v228;
        }
      }
      if ( !(v63 - (unsigned __int16)v229) )
      {
        *(_QWORD *)(*(_QWORD *)(v60 + 48) + v66) = v70;
        v29 = (__int64)v214;
        goto LABEL_158;
      }
      v29 = (__int64)v214;
    }
    *(_QWORD *)(*(_QWORD *)(v60 + 48) + v66) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(v60 + 40) + 4LL * (v64 >> 5)) &= ~(1 << (v64 & 0x1F));
LABEL_158:
  v72 = v209;
  *v209 = v57;
  *(_QWORD *)(v57 + 8) = v72;
  v37 = (char *)(v29 + 10);
  if ( (*(_BYTE *)(v29 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v29) )
  {
LABEL_160:
    LOBYTE(v73) = 1;
    RtlpDeCommitFreeBlock(Src, v29, *(unsigned __int16 *)(v29 + 8), v73);
    goto LABEL_498;
  }
  v203 = 1;
LABEL_194:
  v88 = *v37;
  v196 = *v37;
  v89 = v199;
  if ( !v199 && (v88 & 4) != 0 )
  {
    v90 = 16LL * *(unsigned __int16 *)(v29 + 8) - 32;
    v243 = v90;
    if ( (v88 & 2) != 0 && v90 > 4 )
    {
      v90 -= 4LL;
      v243 = v90;
    }
    v91 = RtlCompareMemoryUlong(v29 + 32, v90, 4277075694LL);
    if ( v91 != v90 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v29 = (__int64)v214;
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v214, &v214[v91 + 32]);
      RtlpBreakPointHeap();
      v88 = v196;
    }
    v89 = v199;
  }
  v215 = v29;
  if ( (*v37 & 1) != 0 )
  {
    RtlpLogHeapFailure(3, (_DWORD)Src, v29, 0, 0LL, 0LL);
    goto LABEL_498;
  }
  *v37 = v198;
  v92 = v217;
  v93 = (__int64 *)(*(unsigned __int16 *)(v29 + 8) - v217);
  v272 = v93;
  *(_WORD *)(v29 + 8) = v217;
  v94 = v274;
  v95 = v275 - v274;
  v228 = v275 - v274;
  if ( v275 - v274 >= 0x3F )
  {
    *(_QWORD *)(v29 + 16 * v92) = v95;
    *(_BYTE *)(v29 + 15) = 63;
  }
  else
  {
    *(_BYTE *)(v29 + 15) = v95;
  }
  *(_BYTE *)(v29 + 11) = 0;
  if ( !v93 )
    goto LABEL_420;
  if ( v93 == (__int64 *)1 )
  {
    ++*(_WORD *)(v29 + 8);
    v96 = v275 - v274 + 16;
    v217 = v96;
    if ( v96 >= 0x3F )
    {
      *(_QWORD *)(v29 + 16 * (v92 + 1)) = v96;
      *(_BYTE *)(v29 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v29 + 15) = v96;
    }
    goto LABEL_420;
  }
  v97 = v89 == 0;
  v221 = v89 == 0;
  v98 = *(_BYTE *)(v29 + 14);
  if ( v98 )
  {
    v99 = (__int64 *)((v29 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v98 << 16) + 0x10000);
    v244 = v99;
  }
  else
  {
    v99 = Src;
    v244 = Src;
  }
  v209 = v93;
  v100 = v29 + 16 * v92;
  LODWORD(v198) = 0;
  *(_BYTE *)(v100 + 10) = v88;
  *(_BYTE *)(v100 + 15) = 0;
  *(_WORD *)(v100 + 12) = v92 ^ *((_WORD *)Src + 70);
  v101 = (__int64 *)v99[5];
  if ( v101 == v99 )
  {
    LOBYTE(v102) = 0;
  }
  else
  {
    v102 = ((unsigned __int64)(v100 - (_QWORD)v99) >> 16) + 1;
    v268 = v102;
    if ( (unsigned __int64)(v100 - (_QWORD)v99) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, (_DWORD)v101, v100, (_DWORD)v99, 0LL, 0LL);
  }
  v197 = v102;
  *(_BYTE *)(v100 + 14) = v102;
  *(_BYTE *)(v100 + 11) = 0;
  *(_WORD *)(v100 + 8) = (_WORD)v93;
  while ( 1 )
  {
    v103 = v100 + 16LL * (_QWORD)v93;
    if ( ((*(_BYTE *)(v103 + 10) ^ (unsigned __int8)(*((_BYTE *)Src + 138) & (*((_DWORD *)Src + 31) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v103 + 12) = (unsigned __int16)v93 ^ *((_WORD *)Src + 70);
      if ( !v97 )
      {
        v104 = (unsigned __int16)v93;
        v198 = (unsigned __int16)v93;
        *(_BYTE *)(v100 + 10) = 0;
        *(_BYTE *)(v100 + 15) = 0;
        v105 = Src + 42;
        v106 = Src[39];
        if ( v106 )
        {
          while ( 1 )
          {
            v107 = *(unsigned int *)(v106 + 8);
            if ( (unsigned __int16)v93 < v107 )
            {
              LODWORD(v93) = (unsigned __int16)v93;
              v222 = (unsigned __int16)v93;
              goto LABEL_230;
            }
            if ( !*(_QWORD *)v106 )
              break;
            v106 = *(_QWORD *)v106;
          }
          LODWORD(v93) = v107 - 1;
          v222 = (unsigned int)(v107 - 1);
          while ( 1 )
          {
LABEL_230:
            v108 = (unsigned int)((_DWORD)v93 - *(_DWORD *)(v106 + 24));
            v109 = 0LL;
            v110 = *(_QWORD **)(v106 + 32);
            v111 = (_QWORD *)v110[1];
            if ( v110 == v111 )
            {
              v109 = *(_QWORD **)(v106 + 32);
            }
            else
            {
              v112 = (_DWORD)v111 - 16;
              v113 = *((_DWORD *)v111 - 2);
              v235 = v113;
              if ( *((_DWORD *)Src + 31) )
              {
                v235 = v113 ^ *((_DWORD *)Src + 34);
                if ( HIBYTE(v235) != ((unsigned __int8)v235 ^ (unsigned __int8)(BYTE1(v235) ^ BYTE2(v235))) )
                  RtlpLogHeapFailure(3, (_DWORD)Src, v112, 0, 0LL, 0LL);
              }
              v262 = v104 - (unsigned __int16)v235;
              if ( v262 <= 0 )
              {
                v114 = *v110 - 16LL;
                v115 = *(_DWORD *)(v114 + 8);
                v236 = v115;
                if ( *((_DWORD *)Src + 31) )
                {
                  v236 = v115 ^ *((_DWORD *)Src + 34);
                  if ( HIBYTE(v236) != ((unsigned __int8)v236 ^ (unsigned __int8)(BYTE1(v236) ^ BYTE2(v236))) )
                    RtlpLogHeapFailure(3, (_DWORD)Src, v114, 0, 0LL, 0LL);
                }
                v263 = v104 - (unsigned __int16)v236;
                if ( v263 > 0 )
                {
                  if ( *(_QWORD *)v106 || (_DWORD)v222 != *(_DWORD *)(v106 + 8) - 1 )
                  {
                    v118 = (unsigned int)v108 >> 5;
                    v213 = (unsigned int)v108 >> 5;
                    v119 = ((unsigned int)(*(_DWORD *)(v106 + 8) - *(_DWORD *)(v106 + 24)) >> 5) - 1;
                    v120 = (unsigned int *)(*(_QWORD *)(v106 + 40) + 4 * v118);
                    v245 = v120;
                    v121 = *v120 & ~((1 << (v108 & 0x1F)) - 1);
                    while ( !v121 )
                    {
                      if ( (unsigned int)v118 > v119 )
                        goto LABEL_272;
                      v245 = ++v120;
                      v121 = *v120;
                      LODWORD(v118) = v118 + 1;
                      v213 = v118;
                    }
                    if ( (_WORD)v121 )
                    {
                      if ( (_BYTE)v121 )
                        v122 = RtlpBitsClearLow[(unsigned __int8)v121];
                      else
                        v122 = RtlpBitsClearLow[BYTE1(v121)] + 8;
                    }
                    else if ( (v121 & 0xFF0000) != 0 )
                    {
                      v122 = RtlpBitsClearLow[BYTE2(v121)] + 16;
                    }
                    else
                    {
                      v122 = RtlpBitsClearLow[(unsigned __int64)v121 >> 24] + 24;
                    }
                    v123 = (unsigned int)(v122 + 32 * v118);
                    v213 = v123;
                    if ( *(_DWORD *)(v106 + 12) )
                      v123 = (unsigned int)(2 * v123);
                    v109 = *(_QWORD **)(*(_QWORD *)(v106 + 48) + 8 * v123);
                  }
                  else
                  {
                    if ( *(_DWORD *)(v106 + 12) )
                      v108 = (unsigned int)(2 * v108);
                    for ( k = *(_QWORD **)(*(_QWORD *)(v106 + 48) + 8 * v108); v110 != k; k = (_QWORD *)*k )
                    {
                      v117 = *((_DWORD *)k - 2);
                      v237 = v117;
                      if ( *((_DWORD *)Src + 31) )
                      {
                        v237 = v117 ^ *((_DWORD *)Src + 34);
                        if ( HIBYTE(v237) != ((unsigned __int8)v237 ^ (unsigned __int8)(BYTE1(v237) ^ BYTE2(v237))) )
                          RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)k - 16, 0, 0LL, 0LL);
                      }
                      v238 = v198 - (unsigned __int16)v237;
                      if ( v238 <= 0 )
                      {
                        v109 = k;
                        break;
                      }
                    }
                  }
                  v104 = v198;
                }
                else
                {
                  v109 = (_QWORD *)*v110;
                }
              }
              else
              {
                v109 = v110;
              }
            }
            if ( v109 )
              break;
LABEL_272:
            v106 = *(_QWORD *)v106;
            LODWORD(v93) = *(_DWORD *)(v106 + 24);
            v222 = (unsigned int)v93;
            v104 = v198;
          }
          v105 = Src + 42;
        }
        else
        {
          v109 = (_QWORD *)*v105;
        }
        while ( v105 != v109 )
        {
          if ( *((_DWORD *)Src + 31) )
          {
            v124 = *((_DWORD *)v109 - 2);
            v264 = v124;
            if ( (v124 & *((_DWORD *)Src + 31)) != 0 )
              v264 = v124 ^ *((_DWORD *)Src + 34);
            v125 = v264;
          }
          else
          {
            v125 = *((_WORD *)v109 - 4);
          }
          v205 = v125;
          if ( v104 <= v125 )
            break;
          v109 = (_QWORD *)*v109;
          v105 = Src + 42;
        }
        v126 = (_QWORD *)(v100 + 16);
        v127 = (__int64 *)v109[1];
        if ( (_QWORD *)*v127 == v109 )
        {
          *v126 = v109;
          *(_QWORD *)(v100 + 24) = v127;
          *v127 = (__int64)v126;
          v109[1] = v126;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v109, 0, *v127, 0LL);
        }
        Src[24] += *(unsigned __int16 *)(v100 + 8);
        v128 = Src[39];
        if ( v128 )
        {
          v129 = *(unsigned __int16 *)(v100 + 8);
          while ( 1 )
          {
            v130 = *(unsigned int *)(v128 + 8);
            if ( v129 < v130 )
              break;
            if ( !*(_QWORD *)v128 )
            {
              v129 = (unsigned int)(v130 - 1);
              break;
            }
            v128 = *(_QWORD *)v128;
          }
          v246 = v129;
          v131 = *(unsigned __int16 *)(v100 + 8);
          v269 = *(unsigned __int16 *)(v100 + 8);
          v132 = v129 - *(_DWORD *)(v128 + 24);
          if ( *(_DWORD *)(v128 + 12) )
            v133 = 2 * v132;
          else
            v133 = v132;
          ++*(_DWORD *)(v128 + 16);
          v134 = 8 * v133;
          v209 = (__int64 *)(8 * v133);
          v135 = *(_QWORD *)(8 * v133 + *(_QWORD *)(v128 + 48));
          if ( (_DWORD)v129 == *(_DWORD *)(v128 + 8) - 1 )
            ++*(_DWORD *)(v128 + 20);
          if ( !v135 )
            goto LABEL_301;
          v136 = *(_DWORD *)(v135 - 16 + 8);
          v230 = v136;
          if ( *((_DWORD *)Src + 31) )
          {
            v230 = v136 ^ *((_DWORD *)Src + 34);
            if ( HIBYTE(v230) != (BYTE2(v230) ^ (unsigned __int8)(BYTE1(v230) ^ v230)) )
            {
              RtlpLogHeapFailure(3, (_DWORD)Src, v135 - 16, 0, 0LL, 0LL);
              v134 = (__int64)v209;
            }
          }
          v241 = v131 - (unsigned __int16)v230;
          if ( v241 <= 0 )
LABEL_301:
            *(_QWORD *)(v134 + *(_QWORD *)(v128 + 48)) = v126;
          if ( !v135 )
            *(_DWORD *)(*(_QWORD *)(v128 + 40) + 4LL * (v132 >> 5)) |= 1 << (v132 & 0x1F);
        }
        goto LABEL_306;
      }
      *(_BYTE *)(v100 + 10) &= 0xF0u;
      *(_BYTE *)(v100 + 15) = 0;
      if ( (Src[14] & 0x40) == 0 )
        goto LABEL_316;
      v137 = (_DWORD *)(v100 + 32);
      v247 = v100 + 32;
      v138 = (16 * (unsigned __int64)(unsigned __int16)v93 - 32) >> 2;
      v231 = v138;
      if ( v138 )
      {
        if ( ((unsigned __int8)v137 & 4) == 0 )
          goto LABEL_313;
        *v137 = -17891602;
        v231 = --v138;
        if ( v138 )
        {
          v137 = (_DWORD *)(v100 + 36);
          v247 = v100 + 36;
LABEL_313:
          memset64(v137, 0xFEEEFEEEFEEEFEEEuLL, v138 >> 1);
          if ( (v138 & 1) != 0 )
            v137[v138 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v100 + 10) |= 4u;
LABEL_316:
      v139 = Src + 42;
      if ( Src[39] )
        Entry = (_QWORD *)RtlpFindEntry(Src, (unsigned __int16)v93);
      else
        Entry = (_QWORD *)*v139;
      while ( v139 != Entry )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v141 = *((_DWORD *)Entry - 2);
          v265 = v141;
          if ( (v141 & *((_DWORD *)Src + 31)) != 0 )
            v265 = v141 ^ *((_DWORD *)Src + 34);
          v142 = v265;
        }
        else
        {
          v142 = *((_WORD *)Entry - 4);
        }
        v206 = v142;
        if ( (unsigned __int16)v93 <= (unsigned __int64)v142 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v143 = (_QWORD *)(v100 + 16);
      v144 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v144 == Entry )
      {
        *v143 = Entry;
        *(_QWORD *)(v100 + 24) = v144;
        *v144 = (__int64)v143;
        Entry[1] = v143;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v144, 0LL);
      }
      Src[24] += *(unsigned __int16 *)(v100 + 8);
      v145 = Src[39];
      if ( v145 )
      {
        v146 = *(unsigned __int16 *)(v100 + 8);
        while ( 1 )
        {
          v147 = *(unsigned int *)(v145 + 8);
          if ( v146 < v147 )
            break;
          if ( !*(_QWORD *)v145 )
          {
            v146 = (unsigned int)(v147 - 1);
            break;
          }
          v145 = *(_QWORD *)v145;
        }
        v248 = v146;
LABEL_305:
        LOBYTE(v147) = 1;
        RtlpHeapAddListEntry((_DWORD)Src, v145, v147, (_DWORD)v143, v146, *(unsigned __int16 *)(v100 + 8));
        goto LABEL_306;
      }
      goto LABEL_306;
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v103 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v103 + 11) != (*(_BYTE *)(v103 + 8) ^ (unsigned __int8)(*(_BYTE *)(v103 + 9) ^ *(_BYTE *)(v103 + 10))) )
        RtlpAnalyzeHeapFailure(Src, v100 + 16LL * (_QWORD)v93);
    }
    v148 = *(_QWORD *)(v103 + 16);
    v149 = *(__int64 **)(v103 + 24);
    v150 = *v149;
    v151 = *(_QWORD *)(v148 + 8);
    if ( *v149 == v151 && v150 == v103 + 16 )
      break;
    RtlpLogHeapFailure(12, (_DWORD)Src, v103 + 16, v151, v150, 0LL);
LABEL_416:
    if ( (_DWORD)v198 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741764;
      v172 = NtCurrentTeb();
      v172->LastErrorValue = RtlNtStatusToDosError(-1073741764);
      goto LABEL_498;
    }
    LODWORD(v198) = 1;
  }
  Src[24] -= *(unsigned __int16 *)(v103 + 8);
  v152 = Src[39];
  if ( v152 )
  {
    v153 = *(unsigned __int16 *)(v103 + 8);
    while ( 1 )
    {
      v154 = *(unsigned int *)(v152 + 8);
      if ( v153 < v154 )
        break;
      if ( !*(_QWORD *)v152 )
      {
        v153 = (unsigned int)(v154 - 1);
        break;
      }
      v152 = *(_QWORD *)v152;
    }
    v249 = v153;
    LOBYTE(v154) = 1;
    RtlpHeapRemoveListEntry((_DWORD)Src, v152, v154, v103 + 16, v153, *(unsigned __int16 *)(v103 + 8));
  }
  *v149 = v148;
  *(_QWORD *)(v148 + 8) = v149;
  if ( (*(_BYTE *)(v103 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(Src, v100 + 16LL * (_QWORD)v93) )
  {
    LOBYTE(v155) = 1;
    RtlpDeCommitFreeBlock(Src, v100 + 16LL * (_QWORD)v93, *(unsigned __int16 *)(v103 + 8), v155);
    goto LABEL_416;
  }
  if ( v97 )
  {
    v156 = *(_BYTE *)(v103 + 10);
    if ( (v156 & 4) != 0 )
    {
      v157 = 16LL * *(unsigned __int16 *)(v103 + 8) - 32;
      v250 = v157;
      if ( (v156 & 2) != 0 && v157 > 4 )
      {
        v157 -= 4LL;
        v250 = v157;
      }
      v158 = RtlCompareMemoryUlong(v103 + 32, v157, 4277075694LL);
      if ( v158 != v157 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)(v100 + 16LL * (_QWORD)v93),
          (const void *)(v103 + v158 + 32));
        RtlpBreakPointHeap();
        v97 = v221;
      }
    }
  }
  *(_BYTE *)(v100 + 10) = *(_BYTE *)(v103 + 10);
  v159 = (unsigned __int64)v93 + *(unsigned __int16 *)(v103 + 8);
  v209 = (__int64 *)v159;
  if ( v159 > 0xFF00 )
  {
    RtlpInsertFreeBlock(Src, v100, v159);
    goto LABEL_419;
  }
  *(_WORD *)(v100 + 8) = v159;
  *(_WORD *)(16 * v159 + v100 + 12) = v159 ^ *((_WORD *)Src + 70);
  if ( v97 )
  {
    *(_BYTE *)(v100 + 10) &= 0xF0u;
    *(_BYTE *)(v100 + 15) = 0;
    if ( (Src[14] & 0x40) == 0 )
      goto LABEL_393;
    v165 = (_DWORD *)(v100 + 32);
    v252 = v100 + 32;
    v166 = (16 * (unsigned __int64)(unsigned __int16)v159 - 32) >> 2;
    v224 = v166;
    if ( v166 )
    {
      if ( ((unsigned __int8)v165 & 4) == 0 )
        goto LABEL_390;
      *v165 = -17891602;
      v224 = --v166;
      if ( v166 )
      {
        v165 = (_DWORD *)(v100 + 36);
        v252 = v100 + 36;
LABEL_390:
        memset64(v165, 0xFEEEFEEEFEEEFEEEuLL, v166 >> 1);
        if ( (v166 & 1) != 0 )
          v165[v166 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v100 + 10) |= 4u;
LABEL_393:
    v167 = Src + 42;
    if ( Src[39] )
      v168 = (_QWORD *)RtlpFindEntry(Src, (unsigned __int16)v159);
    else
      v168 = (_QWORD *)*v167;
    while ( v167 != v168 )
    {
      if ( *((_DWORD *)Src + 31) )
      {
        v169 = *((_DWORD *)v168 - 2);
        v267 = v169;
        if ( (v169 & *((_DWORD *)Src + 31)) != 0 )
          v267 = v169 ^ *((_DWORD *)Src + 34);
        v170 = v267;
      }
      else
      {
        v170 = *((_WORD *)v168 - 4);
      }
      v208 = v170;
      if ( (unsigned __int16)v159 <= (unsigned __int64)v170 )
        break;
      v168 = (_QWORD *)*v168;
    }
    v143 = (_QWORD *)(v100 + 16);
    v171 = (__int64 *)v168[1];
    if ( (_QWORD *)*v171 == v168 )
    {
      *v143 = v168;
      *(_QWORD *)(v100 + 24) = v171;
      *v171 = (__int64)v143;
      v168[1] = v143;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v168, 0, *v171, 0LL);
    }
    Src[24] += *(unsigned __int16 *)(v100 + 8);
    v145 = Src[39];
    if ( v145 )
    {
      v146 = *(unsigned __int16 *)(v100 + 8);
      while ( 1 )
      {
        v147 = *(unsigned int *)(v145 + 8);
        if ( v146 < v147 )
          break;
        if ( !*(_QWORD *)v145 )
        {
          v146 = (unsigned int)(v147 - 1);
          break;
        }
        v145 = *(_QWORD *)v145;
      }
      v253 = v146;
      goto LABEL_305;
    }
    goto LABEL_306;
  }
  *(_BYTE *)(v100 + 10) = 0;
  *(_BYTE *)(v100 + 15) = 0;
  v160 = Src + 42;
  if ( Src[39] )
    v161 = (_QWORD *)RtlpFindEntry(Src, (unsigned __int16)v159);
  else
    v161 = (_QWORD *)*v160;
  while ( v160 != v161 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      v162 = *((_DWORD *)v161 - 2);
      v266 = v162;
      if ( (v162 & *((_DWORD *)Src + 31)) != 0 )
        v266 = v162 ^ *((_DWORD *)Src + 34);
      v163 = v266;
    }
    else
    {
      v163 = *((_WORD *)v161 - 4);
    }
    v207 = v163;
    if ( (unsigned __int16)v159 <= (unsigned __int64)v163 )
      break;
    v161 = (_QWORD *)*v161;
  }
  v143 = (_QWORD *)(v100 + 16);
  v164 = (__int64 *)v161[1];
  if ( (_QWORD *)*v164 == v161 )
  {
    *v143 = v161;
    *(_QWORD *)(v100 + 24) = v164;
    *v164 = (__int64)v143;
    v161[1] = v143;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v161, 0, *v164, 0LL);
  }
  Src[24] += *(unsigned __int16 *)(v100 + 8);
  v145 = Src[39];
  if ( v145 )
  {
    v146 = *(unsigned __int16 *)(v100 + 8);
    while ( 1 )
    {
      v147 = *(unsigned int *)(v145 + 8);
      if ( v146 < v147 )
        break;
      if ( !*(_QWORD *)v145 )
      {
        v146 = (unsigned int)(v147 - 1);
        break;
      }
      v145 = *(_QWORD *)v145;
    }
    v251 = v146;
    goto LABEL_305;
  }
LABEL_306:
  if ( *((_DWORD *)Src + 31) )
  {
    *(_BYTE *)(v100 + 11) = *(_BYTE *)(v100 + 8) ^ *(_BYTE *)(v100 + 9) ^ *(_BYTE *)(v100 + 10);
    *(_DWORD *)(v100 + 8) ^= *((_DWORD *)Src + 34);
  }
LABEL_419:
  v94 = v274;
LABEL_420:
  v200 = (void *)(v215 + 16);
  v173 = (unsigned __int16 *)(v215 + 8);
  v174 = 16 * *(unsigned __int16 *)(v215 + 8);
  v216 = v174;
  if ( (*(_BYTE *)(v215 + 15) & 0x3F) == 0x3F )
  {
    v174 -= 8LL;
    v216 = v174;
  }
  if ( v199 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v215 + 11) = *(_BYTE *)(v215 + 8) ^ *(_BYTE *)(v215 + 9) ^ *(_BYTE *)(v215 + 10);
      *(_DWORD *)v173 ^= *((_DWORD *)Src + 34);
    }
    if ( v194 )
    {
      if ( (*((_DWORD *)Src + 29) & 0x1000000) == 0 )
      {
        ++*((_DWORD *)Src + 152);
        v175 = *((_DWORD *)Src + 154);
        if ( *((_DWORD *)Src + 152) > v175 )
        {
          *((_DWORD *)Src + 152) = 0;
          v176 = Src[68] - 16 * Src[24];
          if ( v176 > Src[80] )
            Src[80] = v176;
          Src[81] = v176;
        }
        if ( ++*((_DWORD *)Src + 155) >= 0x1000u )
        {
          if ( *((_BYTE *)Src + 386) != 2 || (v177 = 4, *((_DWORD *)Src + 156) <= 0x10u) )
            v177 = 8;
          if ( *((_DWORD *)Src + 153) > (unsigned int)(4096 >> v177) && v175 < 0x10000 )
            *((_DWORD *)Src + 154) = 2 * v175;
          *((_DWORD *)Src + 153) = 0;
          *((_DWORD *)Src + 155) = 0;
        }
      }
      v178 = Src[44];
      v20 = (*(_DWORD *)(v178 + 12))-- == 1;
      if ( v20 )
      {
        *(_QWORD *)(v178 + 16) = 0LL;
        v179 = _InterlockedCompareExchange((volatile signed __int32 *)(v178 + 8), -1, -2);
        if ( v179 != -2 )
        {
          if ( (*(_BYTE *)(v178 + 8) & 1) != 0 )
            RtlpNotOwnerCriticalSection(v178);
          DeferredCriticalSectionEvent = *(_QWORD *)(v178 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v178);
          do
          {
            v181 = v179 & 2 | 1;
            v182 = _InterlockedCompareExchange((volatile signed __int32 *)(v178 + 8), v181 + v179, v179);
            v20 = v179 == v182;
            v179 = v182;
          }
          while ( !v20 );
          if ( (v181 & 2) != 0 )
            RtlpUnWaitCriticalSectionEx(v178, DeferredCriticalSectionEvent);
        }
        v174 = v216;
      }
      v194 = 0;
    }
    if ( (a2 & 8) != 0 )
      memset(v200, 0, v174 - 8);
    goto LABEL_498;
  }
  if ( (a2 & 8) != 0 )
  {
    memset(v200, 0, v174 - 8);
    goto LABEL_462;
  }
  if ( (Src[14] & 0x40) != 0 )
  {
    v183 = (char *)v200;
    v258 = v200;
    v184 = (v94 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v225 = v184;
    if ( v184 )
    {
      if ( ((unsigned __int8)v200 & 4) != 0 )
      {
        *(_DWORD *)v200 = -1163005939;
        v225 = --v184;
        if ( v184 )
        {
          v183 += 4;
          v258 = v183;
          goto LABEL_460;
        }
      }
      else
      {
LABEL_460:
        memset64(v183, 0xBAADF00DBAADF00DuLL, v184 >> 1);
        if ( (v184 & 1) != 0 )
          *(_DWORD *)&v183[4 * v184 - 4] = -1163005939;
      }
    }
  }
LABEL_462:
  if ( (Src[14] & 0x20) != 0 )
  {
    v185 = (char *)v200;
    *(_QWORD *)((char *)v200 + v94) = 0xABABABABABABABABuLL;
    *(_QWORD *)&v185[v94 + 8] = 0xABABABABABABABABuLL;
    *(_BYTE *)(v215 + 10) |= 4u;
  }
  v186 = v215;
  *(_BYTE *)(v215 + 11) = 0;
  if ( (*(_BYTE *)(v186 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v186);
    v255 = ExtraStuffPointer;
    *ExtraStuffPointer = 0LL;
    ExtraStuffPointer[1] = 0LL;
    if ( (Src[14] & 0x8000000) != 0 )
      *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *((_WORD *)v255 + 1) = RtlpUpdateTagEntry((_DWORD)Src, (a2 >> 18) & 0xFFF, 0, *v173, 0);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_BYTE *)(v186 + 11) = RtlpUpdateTagEntry((_DWORD)Src, (unsigned __int8)(a2 >> 18), 0, *v173, 0);
  }
  if ( *((_DWORD *)Src + 31) )
  {
    *(_BYTE *)(v186 + 11) = *(_BYTE *)v173 ^ *((_BYTE *)v173 + 1) ^ *((_BYTE *)v173 + 2);
    *(_DWORD *)v173 ^= *((_DWORD *)Src + 34);
  }
LABEL_498:
  if ( v194 )
  {
    if ( v200 && !v195 )
      RtlpUpdateHeapWatermarks(Src);
    RtlLeaveCriticalSection(Src[44]);
  }
  if ( MEMORY[0x7FFE0388] && v200 )
  {
    if ( v195 )
      RtlpHeapLogRangeReserve(Src, v195 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v195 + 40));
  }
  return v200;
}
