/*
 * XREFs of RtlpAllocateHeapInternal @ 0x180022DF0
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x1800227C0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x1800871F0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextAllocate @ 0x18001D100 (RtlpHpVsContextAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x18003E7CC (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041F0C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlpHpSegLfhVsCommit @ 0x180043420 (RtlpHpSegLfhVsCommit.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB90 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCB4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C3A0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18004F520 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlBackoff @ 0x180063170 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AD8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076174 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x1800761DC (RtlpWakeSRWLock.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770D8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketActivate @ 0x180077310 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089210 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpSetupExtendedBlock @ 0x18008F290 (RtlpSetupExtendedBlock.c)
 *     RtlpCallInterceptRoutine @ 0x180090F54 (RtlpCallInterceptRoutine.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A6010 (RtlGetCurrentProcessorNumber.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800EC1A0 (RtlpAllocateHeapRaiseException.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpLogHeapAllocateEvent @ 0x1800F9064 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F9FB4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

unsigned __int64 __fastcall RtlpAllocateHeapInternal(_DWORD *a1, unsigned __int64 a2, int a3, __int16 a4)
{
  size_t v5; // r8
  unsigned __int64 v7; // r14
  int v8; // edx
  int v9; // ecx
  size_t v10; // rdi
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // ecx
  int v14; // r10d
  unsigned __int64 v15; // rsi
  unsigned __int64 Heap; // r15
  struct _TEB *v17; // rbx
  ULONG v18; // eax
  bool v19; // zf
  unsigned int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // rcx
  char *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r9
  volatile signed __int64 *v26; // rbx
  signed __int64 v27; // rax
  unsigned __int64 i; // rcx
  __int64 v29; // rbx
  char CurrentProcessorNumber; // al
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 UniqueThread; // rcx
  int v36; // r14d
  __int64 v37; // rax
  __int64 v38; // r10
  unsigned __int64 v39; // rdx
  volatile signed __int64 *v40; // rsi
  unsigned __int64 v41; // rbx
  signed __int64 v42; // rax
  signed __int64 v44; // rcx
  __int64 *v45; // rdi
  __int64 v46; // r9
  __int64 v47; // r8
  unsigned __int16 v48; // ax
  unsigned __int16 v49; // cx
  int v50; // ecx
  signed __int64 v51; // rax
  __int64 v52; // rcx
  signed __int64 v53; // rtt
  signed __int64 v54; // rax
  signed __int64 v55; // rcx
  signed __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 j; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  signed __int64 v61; // rax
  char *v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r14
  _QWORD *v66; // rbx
  __int64 v67; // rbx
  char *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned __int64 v71; // rdi
  unsigned __int64 v72; // rax
  struct _TEB *v73; // rcx
  __int64 *v74; // rsi
  unsigned __int64 v75; // r14
  __int64 v76; // r15
  __int64 LowFragHeapDataSlot; // rdx
  unsigned int v78; // r12d
  unsigned int v79; // r9d
  unsigned int v80; // r10d
  unsigned int v81; // r13d
  volatile signed __int64 *v82; // rbx
  volatile signed __int64 *v83; // r11
  signed __int64 v84; // r8
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  signed __int64 v88; // rax
  int v89; // eax
  signed __int64 v90; // rbx
  unsigned int v91; // r10d
  bool v92; // cc
  char v93; // cl
  __int64 v94; // r8
  __int64 v95; // r12
  int v96; // r14d
  __int64 v97; // rdx
  __int64 v98; // r9
  signed __int16 *v99; // rsi
  __int64 v100; // r15
  __int64 v101; // rax
  char *v102; // rdx
  signed __int16 *v103; // rbx
  __int64 v104; // r13
  signed __int16 v105; // ax
  signed __int16 v106; // tt
  int v107; // ebx
  unsigned __int64 v108; // r14
  char v109; // cl
  __int64 v110; // r12
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 (__fastcall *v113)(__int64, __int64, __int64); // rax
  __int64 v114; // rcx
  int v115; // eax
  int v116; // esi
  unsigned __int64 v117; // rax
  _WORD *v118; // r8
  unsigned __int64 v119; // rdx
  int v120; // r13d
  unsigned __int64 v121; // rcx
  unsigned int v122; // esi
  __int64 v123; // rax
  char v124; // ah
  int v125; // edx
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rbx
  unsigned __int64 v128; // rbx
  unsigned __int64 DescriptorValidateSafe; // rdx
  unsigned __int64 v130; // r8
  unsigned __int64 v131; // rcx
  int v132; // edi
  int v133; // r8d
  int v134; // eax
  _DWORD *v135; // rcx
  int v136; // ecx
  unsigned int v137; // edi
  unsigned __int64 v138; // rsi
  _DWORD *v139; // r13
  int v140; // r14d
  __int64 v141; // rsi
  unsigned __int64 v142; // rbx
  __int64 v143; // rax
  __int64 v144; // rcx
  int v145; // r9d
  __int64 *v146; // rcx
  __int64 *v147; // rax
  unsigned __int64 v148; // rdx
  unsigned __int64 v149; // rbx
  __int64 v150; // rcx
  __int64 v151; // rax
  struct _TEB *v152; // rbx
  unsigned __int64 v153; // rbx
  _BYTE *v154; // rdx
  unsigned __int64 v155; // rcx
  signed __int32 v157[8]; // [rsp+0h] [rbp-D9h] BYREF
  unsigned __int64 v158; // [rsp+20h] [rbp-B9h]
  unsigned int v159; // [rsp+30h] [rbp-A9h]
  int v160; // [rsp+34h] [rbp-A5h]
  unsigned int v161; // [rsp+38h] [rbp-A1h]
  unsigned int v162; // [rsp+3Ch] [rbp-9Dh]
  unsigned int v163; // [rsp+40h] [rbp-99h]
  int v164; // [rsp+44h] [rbp-95h] BYREF
  __int64 v165; // [rsp+48h] [rbp-91h]
  unsigned __int64 v166; // [rsp+50h] [rbp-89h]
  signed __int64 v167; // [rsp+58h] [rbp-81h]
  unsigned int v168; // [rsp+60h] [rbp-79h]
  int v169; // [rsp+64h] [rbp-75h]
  unsigned int v170; // [rsp+68h] [rbp-71h] BYREF
  size_t Size; // [rsp+70h] [rbp-69h]
  int v172; // [rsp+78h] [rbp-61h] BYREF
  int v173; // [rsp+7Ch] [rbp-5Dh]
  __int64 v174; // [rsp+80h] [rbp-59h]
  unsigned __int64 v175; // [rsp+88h] [rbp-51h] BYREF
  int v176; // [rsp+90h] [rbp-49h]
  int v177; // [rsp+94h] [rbp-45h]
  int v178; // [rsp+98h] [rbp-41h]
  __int64 v179; // [rsp+A0h] [rbp-39h]
  unsigned __int64 v180; // [rsp+A8h] [rbp-31h]
  signed __int64 v181; // [rsp+B0h] [rbp-29h]
  unsigned __int64 v182; // [rsp+C0h] [rbp-19h] BYREF
  unsigned __int64 *v183; // [rsp+C8h] [rbp-11h]
  __int64 v184; // [rsp+D0h] [rbp-9h]
  __int64 v185; // [rsp+D8h] [rbp-1h]
  int v186; // [rsp+E0h] [rbp+7h]
  signed __int32 v187[19]; // [rsp+E4h] [rbp+Bh] BYREF
  unsigned __int64 v189; // [rsp+148h] [rbp+6Fh]

  v189 = a2;
  v5 = a2;
  v7 = (unsigned __int64)a1;
  if ( a1[4] == -571548178 )
  {
    v8 = (a3 & 1) != 0;
    v160 = v8;
    if ( (a3 & 8) != 0 )
    {
      v8 |= 2u;
      v160 = v8;
    }
    if ( (a3 & 4) != 0 )
    {
      v8 |= 0x80000000;
      v160 = v8;
    }
    if ( (a3 & 0x100) != 0 )
    {
      v8 |= 0x100u;
      v160 = v8;
    }
    if ( (a3 & 0xE00) != 0 )
    {
      v8 |= a3 & 0xE00;
      v160 = v8;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v8 |= 0x2000000u;
      v160 = v8;
    }
    if ( (a3 & 2) != 0 )
    {
      v8 |= 0x1000000u;
      v160 = v8;
    }
    v9 = a1[10];
    if ( v9 && v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      v8 |= 1u;
      v160 = v8;
    }
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      v10 = v5 + 16;
      if ( v5 + 16 < v5 )
        v10 = v5;
      Size = v10;
    }
    else
    {
      v10 = v5;
      Size = v5;
    }
    v11 = 0;
    v12 = v8 | *(_DWORD *)(v7 + 20);
    v170 = 0;
    v13 = v12 & 0x93000F0B;
    v173 = 0;
    v162 = v13;
    if ( (v13 & 0x1000000) == 0 )
    {
      v14 = *(_DWORD *)(v7 + 32);
      v173 = v14;
      if ( v14 )
      {
        v162 = v13 | 8;
        if ( (int)RtlpCallInterceptRoutine(v14, v7, 0, 1, (__int64)&v170) < 0 )
        {
          v15 = 0LL;
          goto LABEL_26;
        }
        v11 = v170;
        v13 = v162;
      }
    }
    if ( a4 )
    {
      v13 |= 8u;
      v162 = v13;
    }
    v15 = v10 + v11;
    v177 = v13 & 0x10000000;
    if ( (v13 & 0x10000000) != 0 )
      v15 += 16LL;
    v178 = v13 & 0x20000F08;
    if ( (v13 & 0x20000F08) != 0 )
      v15 = ((v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( !v15 )
      v15 = 1LL;
    v180 = v15;
    if ( v15 < v10 || v10 > 0x7FFFFFFFFFFFFFFFLL )
    {
LABEL_26:
      Heap = 0LL;
      goto LABEL_27;
    }
    v20 = v13 & 0x13000003;
    v174 = 3LL;
    v159 = v13 & 0x13000003;
    if ( v15 > 0x3FF0 )
      goto LABEL_235;
    v21 = v15;
    v166 = v7 + 288;
    if ( (_DWORD)v10 != (_DWORD)v15 )
      v21 = v15 + 2;
    v22 = (unsigned __int64)(unsigned int)(v21 + 15) >> 4;
    v23 = RtlpLfhBucketIndexMap;
    v24 = v7 + 288 + 8LL * (unsigned __int8)RtlpLfhBucketIndexMap[v22];
    if ( (*(_QWORD *)(v24 + 192) & 1) != 0 )
    {
      v25 = (unsigned __int8)RtlpLfhBucketIndexMap[v22];
      v26 = (volatile signed __int64 *)(v7 + 480 + 8 * v25);
      if ( (*v26 & 1) != 0 )
      {
        v27 = *v26;
        v167 = v27;
        for ( i = v27; (v27 & 1) != 0; i = v27 )
        {
          v23 = (char *)BYTE2(v27);
          LOBYTE(v23) = BYTE2(v27) & 0x1F;
          if ( (BYTE2(v27) & 0x1Fu) > 0x10 )
            break;
          if ( WORD1(v27) > 0xFF00u )
            break;
          WORD1(v167) = WORD1(v27) + 33;
          i = v167;
          if ( v27 == _InterlockedCompareExchange64(v26, v167, v27) )
            break;
          v27 = *v26;
          v167 = v27;
        }
        v22 = i >> 16;
        if ( (v22 & 0x1F) > 0x10 || (unsigned __int16)v22 > 0xFF00u )
          RtlpHpLfhBucketActivate(v7 + 288, (unsigned int)v25);
      }
      if ( (*v26 & 1) != 0 )
      {
        Heap = -1LL;
        goto LABEL_231;
      }
    }
    v29 = *(_QWORD *)(v24 + 192);
    v179 = v29;
    CurrentProcessorNumber = RtlGetCurrentProcessorNumber(v22, v23);
    v33 = *(unsigned __int8 *)(v7 + 344);
    v34 = CurrentProcessorNumber & 0x3F;
    if ( v34 >= v33 )
    {
      if ( v34 == v33 || (_BYTE)v33 == 1 )
        v34 = 0;
      else
        v34 = *(unsigned __int8 *)(v34 - v33 - 1 + *(_QWORD *)(v7 + 352));
    }
    UniqueThread = v34;
    v36 = 1;
    v37 = *(_QWORD *)(v29 + 96);
    v169 = 0;
    v167 = 0LL;
    v172 = 0;
    v38 = *(_QWORD *)(*(_QWORD *)(v29 + 104) + 8LL * *(unsigned __int8 *)(v37 + UniqueThread));
    v165 = v38;
    v39 = 17LL;
    v40 = (volatile signed __int64 *)(v38 + 16);
    v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 16), 17LL, 0LL);
    if ( !v41 )
      goto LABEL_91;
    while ( 1 )
    {
      while ( (v41 & 1) == 0 || ((v41 >> 1) & 1) == 0 && (v41 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v44 = v41 | 1;
        if ( (v41 & 2) == 0 )
          v44 += 16LL;
        v181 = _InterlockedCompareExchange64(v40, v44, v41);
        if ( v41 == v181 )
        {
LABEL_89:
          while ( 2 )
          {
            v38 = v165;
            while ( 1 )
            {
              v39 = 17LL;
LABEL_91:
              if ( *(_QWORD *)(v38 + 8) )
                break;
              if ( v36 == 2 )
                RtlReleaseSRWLockExclusive(v40);
              else
                RtlReleaseSRWLockShared(v40);
              v65 = v179;
              v66 = (_QWORD *)(v179 + 24);
              if ( (_QWORD *)*v66 == v66
                || ((RtlAcquireSRWLockExclusive(v179 + 16, v62, v63, v64), (_QWORD *)*v66 != v66)
                  ? (v67 = RtlpHpLfhOwnerMoveSubsegment(v65, *v66, 2LL))
                  : (v67 = 0LL),
                    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v65 + 16)),
                    !v67) )
              {
                v71 = v166;
                v67 = RtlpHpLfhSubsegmentCreate(v166, v65, v159);
                if ( !v67 )
                {
                  v122 = v159;
                  Heap = 0LL;
                  goto LABEL_221;
                }
              }
              v36 = 2;
              RtlAcquireSRWLockExclusive((unsigned __int64)v40, v68, v69, v70);
              v38 = v165;
              if ( *(_WORD *)(v67 + 32) == *(_WORD *)(v67 + 34) )
              {
                *(_QWORD *)(v67 + 16) = v165;
              }
              else
              {
                v72 = _InterlockedExchange64((volatile __int64 *)(v67 + 16), v165);
                if ( (v72 & 1) != 0 )
                  _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 32), v72 >> 1);
              }
              if ( !*(_QWORD *)(v38 + 8) || *(_WORD *)(v67 + 32) != *(_WORD *)(v67 + 34) )
              {
                v167 = RtlpHpLfhOwnerMoveSubsegment(v38, v67, 0LL);
                goto LABEL_89;
              }
              *(_QWORD *)(v67 + 16) = 0LL;
              v167 = v67;
            }
            v45 = *(__int64 **)(v38 + 24);
            v46 = v38 + 24;
            v47 = v36;
            if ( v45 != (__int64 *)(v38 + 24) )
            {
              while ( 2 )
              {
                v48 = *((_WORD *)v45 + 16);
                v169 = 0;
                while ( v48 != 1 || v36 != 1LL )
                {
                  v49 = v48 - 1;
                  v48 = _InterlockedCompareExchange16((volatile signed __int16 *)v45 + 16, v48 - 1, v48);
                  v50 = v49 + 1;
                  if ( v48 == v50 )
                  {
                    if ( !*((_WORD *)v45 + 16) )
                      RtlpHpLfhOwnerMoveSubsegment(v38, v45, 1LL);
                    v39 = 17LL;
                    goto LABEL_105;
                  }
                  if ( v48 < v50 )
                    v169 = 1;
                }
                v45 = (__int64 *)*v45;
                if ( v45 != (__int64 *)v46 )
                  continue;
                break;
              }
              v39 = 17LL;
            }
            v45 = 0LL;
LABEL_105:
            if ( v36 == 2 )
            {
              v51 = _InterlockedCompareExchange64(v40, 0LL, 1LL);
              if ( v51 != 1 )
              {
                do
                {
                  if ( (v51 & 4) != 0 || (v52 = 3LL, (v51 & 2) == 0) )
                    v52 = -1LL;
                  v39 = v52 + v51;
                  v53 = v51;
                  v51 = _InterlockedCompareExchange64(v40, v52 + v51, v51);
                }
                while ( v53 != v51 );
                if ( v52 == 3 )
LABEL_134:
                  RtlpWakeSRWLock(v40, v39, 0LL);
              }
            }
            else
            {
              v54 = _InterlockedCompareExchange64(v40, 0LL, 17LL);
              v39 = v54;
              if ( v54 == 17 )
                goto LABEL_135;
              if ( (v54 & 1) == 0 )
                RtlRaiseStatus(3221226084LL);
              if ( (v54 & 2) != 0 )
              {
LABEL_120:
                if ( (v39 & 8) != 0 )
                {
                  v57 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0uLL);
                  for ( j = *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !j; j = v57[1] )
                    v57 = (_QWORD *)*v57;
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(j + 32), 0xFFFFFFFF) > 1 )
                    goto LABEL_135;
                  v47 = -9LL;
                }
                else
                {
                  v47 = -1LL;
                }
                while ( 1 )
                {
                  if ( (v39 & 4) != 0 || (v59 = v47 + 4, (v39 & 2) == 0) )
                    v59 = v47;
                  v60 = v59 + v39;
                  v61 = _InterlockedCompareExchange64(v40, v59 + v39, v39);
                  if ( v39 == v61 )
                    break;
                  v39 = v61;
                }
                if ( (v39 & 4) == 0 && (v39 & 2) != 0 )
                {
                  v39 = v60;
                  goto LABEL_134;
                }
              }
              else
              {
                while ( 1 )
                {
                  v55 = v39 - 16;
                  if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
                    v55 = 0LL;
                  v56 = _InterlockedCompareExchange64(v40, v55, v39);
                  v19 = v39 == v56;
                  v39 = v56;
                  if ( v19 )
                    break;
                  if ( (v56 & 2) != 0 )
                    goto LABEL_120;
                }
              }
            }
LABEL_135:
            if ( !v45 )
            {
              v36 = 2;
              RtlAcquireSRWLockExclusive((unsigned __int64)v40, (char *)v39, v47, v46);
              continue;
            }
            break;
          }
          v73 = NtCurrentTeb();
          v74 = v45 + 6;
          v75 = 2 * *((unsigned __int16 *)v45 + 17);
          v76 = 1LL;
          LowFragHeapDataSlot = v73->LowFragHeapDataSlot;
          v78 = (unsigned int)v45 >> 12;
          v163 = (unsigned int)v45 >> 12;
          v79 = RtlpSearchWidth[*(unsigned __int8 *)(v165 + 1)];
          v80 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
          v81 = (unsigned __int16)(RtlpLFHKey ^ *((_WORD *)v45 + 20) ^ ((unsigned int)v45 >> 12));
          v161 = RtlpLFHKey ^ *((_DWORD *)v45 + 10) ^ ((unsigned int)v45 >> 12);
          if ( (unsigned int)Size < v81 )
            v76 = 3LL;
          v168 = v81;
          v73->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
          v82 = &v74[(unsigned __int64)(2 * (unsigned int)*((unsigned __int16 *)v45 + 18)) >> 6];
          v83 = &v74[(v75 - 1) >> 6];
LABEL_157:
          v84 = *v82;
          if ( v75 >= 0x40 )
          {
            if ( (v84 & 0x5555555555555555LL) == 0x5555555555555555LL )
            {
              do
              {
                if ( v82 == v83 )
                  v82 = v45 + 6;
                else
                  ++v82;
                v84 = *v82;
              }
              while ( (*v82 & 0x5555555555555555LL) == 0x5555555555555555LL );
            }
            if ( v82 == v83 && (v75 & 0x3F) != 0 && (v75 & 0x3F) < v79 )
              v79 = v75 & 0x3F;
          }
          else if ( (unsigned int)v75 < v79 )
          {
            v79 = v75;
          }
          v80 = ((v79 * v80) >> 7) & 0x1FFFFFE;
          while ( 1 )
          {
            if ( v79 >= 0x40 )
            {
              v86 = 0x5555555555555555LL;
            }
            else
            {
              _BitScanForward64(&v85, ~v84 & 0x5555555555555555LL);
              v80 += v85;
              v86 = (((1LL << v79) - 1) << v85) & 0x5555555555555555LL;
            }
            _BitScanForward64(&v87, __ROR8__(v86 & ~v84, v80));
            v176 = ((_BYTE)v80 + (_BYTE)v87) & 0x3F;
            v88 = _InterlockedCompareExchange64(v82, v84 | (v76 << v176), v84);
            v19 = v84 == v88;
            v84 = v88;
            if ( v19 )
              break;
            if ( (v88 & 0x5555555555555555LL) == 0x5555555555555555LL )
            {
              if ( ++v82 > v83 )
                v82 = v45 + 6;
              goto LABEL_157;
            }
          }
          v89 = HIWORD(v161);
          v90 = (v176 + ((unsigned int)(v82 - v74) << 6)) >> 1;
          v181 = v90;
          *((_WORD *)v45 + 18) = v90;
          v91 = v89 + v90 * v81;
          v92 = *((_BYTE *)v45 + 45) <= 1u;
          v161 = v91;
          if ( !v92 )
          {
            v94 = *((unsigned __int16 *)v45 + 20);
            v93 = *((_BYTE *)v45 + 44);
            LOWORD(v94) = RtlpLFHKey ^ v78 ^ v94;
            LODWORD(v95) = 0;
            v96 = 0;
            v97 = v91 >> v93;
            v98 = (__int64)v45 + *((unsigned __int16 *)v45 + 23);
            v99 = (signed __int16 *)(v98 + 2 * v97);
            _m_prefetchw(v99);
            v100 = 0xFFFFFFFFLL;
            LODWORD(v165) = (unsigned __int16)v94;
            v101 = ((v91 + (unsigned __int16)v94 - 1) >> v93) - (unsigned int)v97 + 1;
            v102 = (char *)&v99[v101];
            if ( v99 < (signed __int16 *)v102 )
            {
              v103 = &v99[v101];
              v104 = (__int64)v99 - v98;
              do
              {
                while ( 1 )
                {
                  v105 = *v99;
                  while ( v105 > 0 )
                  {
                    v106 = v105;
                    v105 = _InterlockedCompareExchange16(v99, v105 + 1, v105);
                    if ( v106 == v105 )
                      goto LABEL_191;
                  }
                  if ( v96 )
                    break;
                  v96 = 1;
                  RtlAcquireSRWLockExclusive((unsigned __int64)(v45 + 3), v102, v94, v98);
                }
                if ( v105 == -1 )
                {
                  v95 = v104 >> 1;
                  if ( (_DWORD)v100 == -1 )
                    v100 = (unsigned int)v95;
                }
                *v99 = v105 + 1;
LABEL_191:
                ++v99;
                v104 += 2LL;
              }
              while ( v99 < v103 );
              v107 = v181;
              if ( (_DWORD)v100 != -1 )
              {
                v108 = v166;
                v109 = *((_BYTE *)v45 + 44);
                v110 = (unsigned int)(v95 - v100 + 1);
                v111 = (__int64)v45 + (unsigned int)((_DWORD)v100 << v109);
                v112 = (unsigned int)((_DWORD)v110 << v109);
                v113 = (__int64 (__fastcall *)(__int64, __int64, __int64))(RtlpHeapKey ^ v166 ^ *(_QWORD *)(v166 + 24));
                v114 = *(_QWORD *)v166;
                if ( v113 == RtlpHpSegLfhVsCommit )
                  v115 = RtlpHpSegLfhVsCommit(v114, v111, v112);
                else
                  v115 = v113(v114, v111, v112);
                v116 = v115;
                if ( v115 < 0 )
                {
                  RtlpHpLfhSubsegmentDecBlockCounts(v45, v161, (unsigned int)v165);
                }
                else
                {
                  v117 = 0LL;
                  v118 = (_WORD *)((char *)v45 + 2 * v100 + *((unsigned __int16 *)v45 + 23));
                  v119 = (unsigned __int64)(2 * v110 + 1) >> 1;
                  if ( v118 > &v118[v110] )
                    v119 = 0LL;
                  if ( v119 )
                  {
                    do
                    {
                      if ( !*v118 )
                        *v118 = 1;
                      ++v118;
                      ++v117;
                    }
                    while ( v117 < v119 );
                  }
                  v116 = 0;
                }
                RtlReleaseSRWLockExclusive(v45 + 3);
                if ( v116 < 0 )
                {
                  Heap = 0LL;
                  if ( v107 != -1 )
                    _InterlockedAnd64(
                      &v45[((unsigned __int64)(unsigned int)(2 * v107) >> 6) + 6],
                      ~(3LL << ((2 * v107) & 0x3F)));
LABEL_218:
                  v122 = v159;
                  if ( !Heap )
                    RtlpHpLfhSubsegmentFreeBlock(v108, v45, 0LL, v159);
                  v71 = v166;
                  v65 = v179;
                  v67 = v167;
LABEL_221:
                  if ( v169 )
                    RtlpHpLfhBucketUpdateAffinityMapping(v71, v65);
                  if ( v67 )
                    RtlpHpLfhBucketAddSubsegment(v71, v65, v67, v122);
                  if ( Heap )
                  {
                    v20 = v159;
                    v10 = Size;
                    if ( (v159 & 2) != 0 )
                    {
                      memset((void *)Heap, 0, (unsigned int)Size);
                      v7 = (unsigned __int64)a1;
                      v15 = v180;
                      goto LABEL_232;
                    }
                    v7 = (unsigned __int64)a1;
                    v15 = v180;
LABEL_233:
                    if ( Heap != -1LL )
                    {
                      v174 = 2LL;
                      goto LABEL_241;
                    }
LABEL_235:
                    if ( v15 > 0x20000 )
                    {
                      if ( v15 > 0x7F000 )
                        v123 = RtlpHpLargeAlloc(v7, v10, v15, v20);
                      else
                        v123 = RtlpHpSegAlloc(v7, v10, v15, v20);
                    }
                    else
                    {
                      v123 = RtlpHpVsContextAllocate(v7 + 176, v10, v15, v20);
                    }
                    Heap = v123;
LABEL_241:
                    if ( Heap )
                    {
                      v124 = BYTE1(v162);
                      if ( (v162 & 0x30000F08) != 0 )
                      {
                        v125 = v177;
                        v126 = v170;
                        if ( v177 )
                        {
                          *(_QWORD *)(Heap + v10) = 0xABABABABABABABABuLL;
                          *(_QWORD *)(Heap + v10 + 8) = 0xABABABABABABABABuLL;
                        }
                        v127 = 0LL;
                        if ( v178 )
                        {
                          v128 = Heap + v10;
                          if ( v125 )
                            v128 += 16LL;
                          v127 = (v128 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
                          *(_QWORD *)v127 = 0LL;
                          *(_QWORD *)(v127 + 8) = 0LL;
                          *(_BYTE *)(v127 + 2) &= 0xFu;
                          *(_BYTE *)(v127 + 2) |= 16 * (v124 & 0xFE);
                          *(_BYTE *)(v127 + 3) = v126 >> 4;
                          *(_WORD *)v127 = a4;
                          _InterlockedOr(v157, 0);
                          if ( !(_WORD)Heap
                            && (unsigned int)RtlSparseBitmapCtxCheckBitsInternal(
                                               &RtlpHpLargeAllocationBitmap,
                                               Heap >> 16,
                                               1LL) )
                          {
                            RtlpHpLargeAllocSetExtraPresent(v7, Heap, v162);
                            goto LABEL_272;
                          }
                          if ( (RtlpHpAppCompatFlags & 1) != 0 )
                          {
                            DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v7, Heap);
                          }
                          else if ( (v7 ^ RtlpHeapKey ^ *(_QWORD *)((Heap & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((Heap & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
                          {
                            DescriptorValidateSafe = (Heap & 0xFFFFFFFFFFF00000uLL)
                                                   + 32LL
                                                   * (unsigned int)((Heap - (Heap & 0xFFFFFFFFFFF00000uLL)) >> 12);
                          }
                          else
                          {
                            DescriptorValidateSafe = 0LL;
                          }
                          if ( DescriptorValidateSafe && (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0 )
                          {
                            if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0 )
                            {
                              if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0
                                && Heap != (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                                         + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                                   - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
                              {
                                goto LABEL_265;
                              }
LABEL_266:
                              if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) != 0 )
                              {
                                if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) != 0 )
                                {
                                  v130 = (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                                       + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                                 - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
                                  v131 = (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(v130 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v130 >> 12);
                                }
                                else
                                {
                                  v131 = 16
                                       * (WORD1(RtlpLFHKey) ^ ((unsigned int)(Heap - 16) >> 16) ^ *(unsigned __int16 *)(Heap - 14))
                                       - 16;
                                }
                                *(_WORD *)(v131 + Heap - 2) |= 0x4000u;
                              }
                              else
                              {
                                *(_WORD *)(DescriptorValidateSafe + 4) |= 1u;
                              }
                              goto LABEL_272;
                            }
                            DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 27);
                            if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0
                              && (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0
                              && (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) != 0 )
                            {
                              goto LABEL_266;
                            }
                          }
LABEL_265:
                          DescriptorValidateSafe = 0LL;
                          goto LABEL_266;
                        }
LABEL_272:
                        v132 = v173;
                        if ( v173 )
                        {
                          *(_BYTE *)(v127 + 2) &= 0xF0u;
                          *(_BYTE *)(v127 + 2) |= v132 & 0xF;
                          if ( (RtlpHpAppCompatFlags & 2) != 0 )
                          {
                            if ( (_WORD)Heap
                              || (v134 = RtlSparseBitmapCtxCheckBitsInternal(
                                           &RtlpHpLargeAllocationBitmap,
                                           Heap >> 16,
                                           1LL),
                                  v133 = Heap,
                                  !v134) )
                            {
                              v133 = Heap + 16;
                            }
                          }
                          else
                          {
                            v133 = Heap;
                          }
                          if ( (int)RtlpCallInterceptRoutine(v132, v7, v133, 2, v127 + 16) < 0 )
                          {
                            RtlFreeHeap(v7, 0LL, Heap);
                            goto LABEL_26;
                          }
                        }
                      }
                    }
LABEL_27:
                    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                      RtlpLogHeapAllocateEvent(v7, Heap, v15);
                    if ( !Heap )
                    {
                      NtCurrentTeb()->LastStatusValue = -1073741801;
                      v17 = NtCurrentTeb();
                      v18 = RtlNtStatusToDosError(-1073741801);
                      v19 = v160 >= 0;
                      v17->LastErrorValue = v18;
                      if ( !v19 || *(int *)(v7 + 20) < 0 )
                        RtlpAllocateHeapRaiseException(v189);
                      return Heap;
                    }
                    if ( (RtlpHpAppCompatFlags & 2) != 0
                      && ((_WORD)Heap
                       || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(
                                           &RtlpHpLargeAllocationBitmap,
                                           Heap >> 16,
                                           1LL)) )
                    {
                      Heap += 16LL;
                    }
                    if ( (RtlpHpHeapFeatures & 4) != 0 && v7 != RtlpHpMetadataHeap )
                    {
                      v135 = (_DWORD *)v7;
LABEL_343:
                      RtlpHpStackTraceAddStack(v135, Heap);
                      return Heap;
                    }
                    return Heap;
                  }
                  v7 = (unsigned __int64)a1;
                  v15 = v180;
LABEL_231:
                  v10 = Size;
LABEL_232:
                  v20 = v159;
                  goto LABEL_233;
                }
                v91 = v161;
                v81 = v168;
                LOWORD(v78) = v163;
LABEL_213:
                Heap = (unsigned __int64)v45 + v91;
                if ( (unsigned int)Size < v81 )
                {
                  v120 = v81 - Size;
                  v121 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v78 ^ (unsigned __int64)*((unsigned __int16 *)v45
                                                                                                  + 20);
                  *(_BYTE *)(v121 + Heap - 1) = 0;
                  if ( v120 == 1 )
                  {
                    *(_WORD *)(v121 + Heap - 2) |= 0x8000u;
                  }
                  else
                  {
                    *(_WORD *)(v121 + Heap - 2) &= 0xC000u;
                    *(_WORD *)(v121 + Heap - 2) |= v120 & 0x3FFF;
                  }
                }
                goto LABEL_218;
              }
              if ( v96 )
                RtlReleaseSRWLockExclusive(v45 + 3);
              v91 = v161;
              v81 = v168;
            }
            LOWORD(v78) = v163;
          }
          v108 = v166;
          goto LABEL_213;
        }
LABEL_88:
        RtlBackoff(&v172);
        _m_prefetchw((const void *)v40);
        v41 = *v40;
      }
      if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v39, v31, v32, v158) )
        ZwTerminateProcess(-1LL, 3221225547LL);
      UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      v185 = UniqueThread;
      LOBYTE(UniqueThread) = 0;
      v187[0] = 2;
      v184 = 0LL;
      if ( ((v41 >> 1) & 1) != 0 )
      {
        v183 = 0LL;
        v186 = -1;
        v182 = v41 & 0xFFFFFFFFFFFFFFF0uLL;
        v39 = (unsigned __int64)&v182 | v41 & 8 | 7;
        if ( (v41 & 4) == 0 )
          UniqueThread = 1LL;
      }
      else
      {
        v186 = -2;
        v183 = &v182;
        v39 = (unsigned __int64)&v182 + 3;
      }
      v42 = _InterlockedCompareExchange64(v40, v39, v41);
      v19 = v41 == v42;
      v41 = v42;
      if ( !v19 )
        goto LABEL_88;
      if ( (_BYTE)UniqueThread )
        RtlpOptimizeSRWLockList(v40);
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        UniqueThread = (unsigned int)SRWLockSpinCount;
        if ( SRWLockSpinCount )
        {
          do
          {
            if ( (v187[0] & 2) == 0 )
              break;
            _mm_pause();
            v19 = (_DWORD)UniqueThread == 1;
            UniqueThread = (unsigned int)(UniqueThread - 1);
          }
          while ( !v19 );
        }
      }
      if ( _interlockedbittestandreset(v187, 1u) )
      {
        do
          NtWaitForAlertByThreadId(v40, 0LL);
        while ( (v187[0] & 4) == 0 );
      }
    }
  }
  v136 = a1[29];
  v137 = v136 | a3;
  v164 = 0;
  v175 = 0LL;
  v138 = 0LL;
  if ( a2 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v140 = *(_DWORD *)(v7 + 144);
    if ( v140 )
    {
      if ( (v137 & 0x3C000102) == 0 && (v136 & 0x1000000) == 0 )
      {
        v139 = a1;
        if ( (int)RtlpCallInterceptRoutine(v140, (_DWORD)a1, 0, 1, (__int64)&v175) < 0 )
          goto LABEL_318;
        v5 = ((v175 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16 + v189;
        v175 = ((v175 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
        v189 = v5;
        goto LABEL_297;
      }
      v140 = 0;
    }
    v139 = a1;
LABEL_297:
    v141 = 1LL;
    if ( v5 )
      v141 = v5;
    v138 = (v141 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v142 = v138 >> 4;
    if ( (v137 & 0x7D810F61) != 0 )
      goto LABEL_313;
    if ( v5 <= RtlpLargestLfhBlock
      && ((unsigned __int8)(1 << ((v138 >> 4) & 7)) & *((_BYTE *)v139 + (v138 >> 7) + 402)) != 0 )
    {
      v143 = *((_QWORD *)v139 + 49);
      v144 = *((_QWORD *)v139 + 47);
      v164 = 2;
      Heap = RtlpLowFragHeapAllocFromContext(v144, *(unsigned __int16 *)(v143 + 2 * v142), v5, v137);
      if ( Heap )
      {
LABEL_315:
        if ( !v140
          || (v189 -= v175,
              v151 = RtlpSetupExtendedBlock((_DWORD)v139, v137, Heap, v145, v175, v140),
              v158 = Heap,
              Heap = v151,
              (int)RtlpCallInterceptRoutine(v140, (_DWORD)v139, v151, 2, v158) >= 0) )
        {
          v153 = v189;
          goto LABEL_324;
        }
        RtlFreeHeap(v139, 0LL, Heap);
        goto LABEL_318;
      }
    }
    v146 = (__int64 *)*((_QWORD *)v139 + 39);
    if ( v142 < *((unsigned int *)v146 + 2) )
    {
LABEL_306:
      v148 = v138 >> 4;
    }
    else
    {
      while ( 1 )
      {
        v147 = (__int64 *)*v146;
        if ( !*v146 )
          break;
        v146 = (__int64 *)*v146;
        if ( v142 < *((unsigned int *)v147 + 2) )
          goto LABEL_306;
      }
      v148 = (unsigned int)(*((_DWORD *)v146 + 2) - 1);
    }
    if ( v148 >= *((unsigned int *)v146 + 2) || v142 != v148 )
    {
LABEL_313:
      v150 = 0LL;
    }
    else
    {
      v149 = v142 - *((unsigned int *)v146 + 6);
      if ( *((_DWORD *)v146 + 3) )
        v149 *= 2LL;
      v150 = v146[6] + 8 * v149;
    }
    Heap = RtlpAllocateHeap(v139, v150, (__int64)&v164);
    if ( !Heap )
      goto LABEL_319;
    goto LABEL_315;
  }
  v139 = a1;
  v164 = 5;
LABEL_318:
  Heap = 0LL;
LABEL_319:
  NtCurrentTeb()->LastStatusValue = -1073741801;
  v152 = NtCurrentTeb();
  v152->LastErrorValue = RtlNtStatusToDosError(-1073741801);
  v153 = v189;
  if ( (v137 & 4) != 0 )
  {
    if ( !v138 )
      v138 = v189;
    RtlpAllocateHeapRaiseException(v138);
  }
LABEL_324:
  if ( MEMORY[0x7FFE0380]
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (v139[29] & 0x1000000) == 0
    && ((v137 & 0x61000000) == 0 || (v137 & 0x10000000) != 0)
    && v164 != 5 )
  {
    if ( !Heap )
      goto LABEL_337;
    v154 = (_BYTE *)(Heap - 16);
    _m_prefetchw((const void *)(Heap - 16));
    v155 = Heap - 16;
    if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
      v155 -= 16LL * (unsigned __int8)v154[14];
    if ( *(char *)(v155 + 15) < 0 )
      goto LABEL_337;
    _m_prefetchw(v154);
    if ( v154[15] == 5 )
      v154 -= 16 * (unsigned __int8)v154[14];
    if ( ((v154[10] ^ (unsigned __int8)(*((_BYTE *)v139 + 138) & (v139[31] >> 17))) & 8) == 0 )
LABEL_337:
      RtlpLogHeapAllocateEvent(v139, Heap, v153);
  }
  if ( (RtlpHpHeapFeatures & 4) != 0 && v139 != (_DWORD *)RtlpHpMetadataHeap && Heap && (v137 & 0x10000000) == 0 )
  {
    v135 = v139;
    goto LABEL_343;
  }
  return Heap;
}
