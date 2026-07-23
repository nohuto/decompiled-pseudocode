/*
 * XREFs of RtlpAllocateHeapInternal @ 0x180022DE0
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x1800227B0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x1800871E0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextAllocate @ 0x18001D0F0 (RtlpHpVsContextAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x18003E7BC (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlpHpSegLfhVsCommit @ 0x180043410 (RtlpHpSegLfhVsCommit.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB80 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C390 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18004F510 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlBackoff @ 0x180063160 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180066AC8 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180076164 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x1800761CC (RtlpWakeSRWLock.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770C8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketActivate @ 0x180077300 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089200 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpSetupExtendedBlock @ 0x18008F280 (RtlpSetupExtendedBlock.c)
 *     RtlpCallInterceptRoutine @ 0x180090F44 (RtlpCallInterceptRoutine.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A6010 (RtlGetCurrentProcessorNumber.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800EC260 (RtlpAllocateHeapRaiseException.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpLogHeapAllocateEvent @ 0x1800F9064 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F9FB4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

unsigned __int64 __fastcall RtlpAllocateHeapInternal(_DWORD *BaseAddress, size_t Size, int a3, __int16 a4)
{
  size_t v5; // r8
  signed __int64 v7; // r14
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
  __int64 v23; // rdi
  __int64 v24; // r9
  volatile signed __int64 *v25; // rbx
  signed __int64 v26; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v28; // rcx
  _RTL_SRWLOCK *v29; // rbx
  char CurrentProcessorNumber; // al
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 UniqueThread; // rcx
  int v36; // r14d
  unsigned __int64 Value; // rax
  _RTL_SRWLOCK *v38; // r10
  unsigned __int64 v39; // rdx
  _RTL_SRWLOCK *v40; // rsi
  unsigned __int64 v41; // rbx
  signed __int64 v42; // rax
  signed __int64 v44; // rcx
  _RTL_SRWLOCK *v45; // rdi
  unsigned __int16 v46; // ax
  unsigned __int16 v47; // cx
  int v48; // ecx
  signed __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  signed __int64 v52; // rtt
  signed __int64 v53; // rax
  signed __int64 v54; // rdx
  signed __int64 v55; // rcx
  signed __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 j; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rcx
  signed __int64 v62; // rax
  _RTL_SRWLOCK *v63; // r14
  unsigned __int64 *v64; // rbx
  __int64 v65; // rbx
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // rax
  struct _TEB *v68; // rcx
  __int64 *v69; // rsi
  unsigned __int64 v70; // r14
  __int64 v71; // r15
  __int64 LowFragHeapDataSlot; // rdx
  unsigned int v73; // r12d
  unsigned int v74; // r9d
  unsigned int v75; // r10d
  unsigned int v76; // r13d
  volatile signed __int64 *v77; // rbx
  volatile signed __int64 *v78; // r11
  signed __int64 v79; // r8
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  signed __int64 v83; // rax
  int v84; // eax
  signed __int64 v85; // rbx
  unsigned int v86; // r10d
  bool v87; // cc
  char v88; // cl
  unsigned __int16 v89; // r8
  __int64 v90; // r12
  int v91; // r14d
  __int64 v92; // rdx
  signed __int16 *v93; // rsi
  __int64 v94; // r15
  __int64 v95; // rax
  signed __int16 *v96; // rbx
  __int64 v97; // r13
  signed __int16 v98; // ax
  signed __int16 v99; // tt
  int v100; // ebx
  unsigned __int64 v101; // r14
  char v102; // cl
  __int64 v103; // r12
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 (__fastcall *v106)(PVOID); // rax
  void *v107; // rcx
  int v108; // eax
  int v109; // esi
  unsigned __int64 v110; // rax
  _WORD *v111; // r8
  unsigned __int64 v112; // rdx
  int v113; // r13d
  unsigned __int64 v114; // rcx
  unsigned int v115; // esi
  __int64 v116; // rax
  char v117; // ah
  int v118; // edx
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rbx
  unsigned __int64 v121; // rbx
  unsigned __int64 DescriptorValidateSafe; // rdx
  unsigned __int64 v123; // r8
  unsigned __int64 v124; // rcx
  int v125; // edi
  int v126; // r8d
  int v127; // eax
  signed __int64 v128; // rcx
  int v129; // ecx
  int v130; // edi
  unsigned __int64 v131; // rsi
  PVOID v132; // r13
  int v133; // r14d
  __int64 v134; // rsi
  unsigned __int64 v135; // rbx
  _RTL_SRWLOCK *v136; // rcx
  int v137; // r9d
  __int64 *v138; // rcx
  __int64 *v139; // rax
  unsigned __int64 v140; // rdx
  unsigned __int64 v141; // rbx
  __int64 v142; // rcx
  __int64 v143; // rax
  struct _TEB *v144; // rbx
  size_t v145; // rbx
  _BYTE *v146; // rdx
  unsigned __int64 v147; // rcx
  signed __int32 v149[8]; // [rsp+0h] [rbp-D9h] BYREF
  __int64 v150; // [rsp+20h] [rbp-B9h]
  unsigned int v151; // [rsp+30h] [rbp-A9h]
  int v152; // [rsp+34h] [rbp-A5h]
  unsigned int v153; // [rsp+38h] [rbp-A1h]
  unsigned int v154; // [rsp+3Ch] [rbp-9Dh]
  unsigned int v155; // [rsp+40h] [rbp-99h]
  _DWORD v156[3]; // [rsp+44h] [rbp-95h] BYREF
  unsigned __int64 v157; // [rsp+50h] [rbp-89h]
  signed __int64 v158; // [rsp+58h] [rbp-81h]
  unsigned int v159; // [rsp+60h] [rbp-79h]
  int v160; // [rsp+64h] [rbp-75h]
  unsigned int v161; // [rsp+68h] [rbp-71h] BYREF
  size_t Sizea; // [rsp+70h] [rbp-69h]
  int v163; // [rsp+78h] [rbp-61h] BYREF
  int v164; // [rsp+7Ch] [rbp-5Dh]
  __int64 v165; // [rsp+80h] [rbp-59h]
  unsigned __int64 v166; // [rsp+88h] [rbp-51h] BYREF
  int v167; // [rsp+90h] [rbp-49h]
  int v168; // [rsp+94h] [rbp-45h]
  int v169; // [rsp+98h] [rbp-41h]
  _RTL_SRWLOCK *v170; // [rsp+A0h] [rbp-39h]
  unsigned __int64 v171; // [rsp+A8h] [rbp-31h]
  signed __int64 v172; // [rsp+B0h] [rbp-29h]
  unsigned __int64 v173; // [rsp+C0h] [rbp-19h] BYREF
  unsigned __int64 *v174; // [rsp+C8h] [rbp-11h]
  __int64 v175; // [rsp+D0h] [rbp-9h]
  __int64 v176; // [rsp+D8h] [rbp-1h]
  int v177; // [rsp+E0h] [rbp+7h]
  signed __int32 v178[19]; // [rsp+E4h] [rbp+Bh] BYREF
  size_t v180; // [rsp+148h] [rbp+6Fh]

  v180 = Size;
  v5 = Size;
  v7 = (signed __int64)BaseAddress;
  if ( BaseAddress[4] == -571548178 )
  {
    v8 = (a3 & 1) != 0;
    v152 = v8;
    if ( (a3 & 8) != 0 )
    {
      v8 |= 2u;
      v152 = v8;
    }
    if ( (a3 & 4) != 0 )
    {
      v8 |= 0x80000000;
      v152 = v8;
    }
    if ( (a3 & 0x100) != 0 )
    {
      v8 |= 0x100u;
      v152 = v8;
    }
    if ( (a3 & 0xE00) != 0 )
    {
      v8 |= a3 & 0xE00;
      v152 = v8;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v8 |= 0x2000000u;
      v152 = v8;
    }
    if ( (a3 & 2) != 0 )
    {
      v8 |= 0x1000000u;
      v152 = v8;
    }
    v9 = BaseAddress[10];
    if ( v9 && v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      v8 |= 1u;
      v152 = v8;
    }
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      v10 = v5 + 16;
      if ( v5 + 16 < v5 )
        v10 = v5;
      Sizea = v10;
    }
    else
    {
      v10 = v5;
      Sizea = v5;
    }
    v11 = 0;
    v12 = v8 | *(_DWORD *)(v7 + 20);
    v161 = 0;
    v13 = v12 & 0x93000F0B;
    v164 = 0;
    v154 = v13;
    if ( (v13 & 0x1000000) == 0 )
    {
      v14 = *(_DWORD *)(v7 + 32);
      v164 = v14;
      if ( v14 )
      {
        v154 = v13 | 8;
        if ( (int)RtlpCallInterceptRoutine(v14, v7, 0, 1, (__int64)&v161) < 0 )
        {
          v15 = 0LL;
LABEL_26:
          Heap = 0LL;
          goto LABEL_27;
        }
        v11 = v161;
        v13 = v154;
      }
    }
    if ( a4 )
    {
      v13 |= 8u;
      v154 = v13;
    }
    v15 = v10 + v11;
    v168 = v13 & 0x10000000;
    if ( (v13 & 0x10000000) != 0 )
      v15 += 16LL;
    v169 = v13 & 0x20000F08;
    if ( (v13 & 0x20000F08) != 0 )
      v15 = ((v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( !v15 )
      v15 = 1LL;
    v171 = v15;
    if ( v15 < v10 || v10 > 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_26;
    v20 = v13 & 0x13000003;
    v165 = 3LL;
    v151 = v13 & 0x13000003;
    if ( v15 > 0x3FF0 )
      goto LABEL_232;
    v21 = v15;
    v157 = v7 + 288;
    if ( (_DWORD)v10 != (_DWORD)v15 )
      v21 = v15 + 2;
    v22 = (unsigned __int64)(unsigned int)(v21 + 15) >> 4;
    v23 = v7 + 288 + 8LL * (unsigned __int8)RtlpLfhBucketIndexMap[v22];
    if ( (*(_QWORD *)(v23 + 192) & 1) != 0 )
    {
      v24 = (unsigned __int8)RtlpLfhBucketIndexMap[v22];
      v25 = (volatile signed __int64 *)(v7 + 480 + 8 * v24);
      if ( (*v25 & 1) != 0 )
      {
        v26 = *v25;
        v158 = v26;
        for ( i = v26; (v26 & 1) != 0; i = v26 )
        {
          if ( (BYTE2(v26) & 0x1Fu) > 0x10 )
            break;
          if ( WORD1(v26) > 0xFF00u )
            break;
          WORD1(v158) = WORD1(v26) + 33;
          i = v158;
          if ( v26 == _InterlockedCompareExchange64(v25, v158, v26) )
            break;
          v26 = *v25;
          v158 = v26;
        }
        v28 = i >> 16;
        if ( (v28 & 0x1F) > 0x10 || (unsigned __int16)v28 > 0xFF00u )
          RtlpHpLfhBucketActivate(v7 + 288, (unsigned int)v24);
      }
      if ( (*v25 & 1) != 0 )
      {
        Heap = -1LL;
        goto LABEL_228;
      }
    }
    v29 = *(_RTL_SRWLOCK **)(v23 + 192);
    v170 = v29;
    CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
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
    Value = v29[12].Value;
    v160 = 0;
    v158 = 0LL;
    v163 = 0;
    v38 = *(_RTL_SRWLOCK **)(v29[13].Value + 8LL * *(unsigned __int8 *)(Value + UniqueThread));
    *(_QWORD *)&v156[1] = v38;
    v39 = 17LL;
    v40 = v38 + 2;
    v41 = _InterlockedCompareExchange64((volatile signed __int64 *)&v38[2], 17LL, 0LL);
    if ( v41 )
    {
      while ( 1 )
      {
        while ( (v41 & 1) == 0 || ((v41 >> 1) & 1) == 0 && (v41 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          v44 = v41 | 1;
          if ( (v41 & 2) == 0 )
            v44 += 16LL;
          v172 = _InterlockedCompareExchange64((volatile signed __int64 *)v40, v44, v41);
          if ( v41 == v172 )
            goto LABEL_89;
LABEL_88:
          RtlBackoff(&v163);
          _m_prefetchw(v40);
          v41 = v40->Value;
        }
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v39, v31, v32, v150) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        v176 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v178[0] = 2;
        v175 = 0LL;
        if ( ((v41 >> 1) & 1) != 0 )
        {
          v174 = 0LL;
          v177 = -1;
          v173 = v41 & 0xFFFFFFFFFFFFFFF0uLL;
          v39 = (unsigned __int64)&v173 | v41 & 8 | 7;
          if ( (v41 & 4) == 0 )
            UniqueThread = 1LL;
        }
        else
        {
          v177 = -2;
          v174 = &v173;
          v39 = (unsigned __int64)&v173 + 3;
        }
        v42 = _InterlockedCompareExchange64((volatile signed __int64 *)v40, v39, v41);
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
              if ( (v178[0] & 2) == 0 )
                break;
              _mm_pause();
              v19 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
            }
            while ( !v19 );
          }
        }
        if ( _interlockedbittestandreset(v178, 1u) )
        {
          do
            NtWaitForAlertByThreadId(v40, 0LL);
          while ( (v178[0] & 4) == 0 );
        }
      }
    }
    while ( 2 )
    {
      while ( !v38[1].Value )
      {
        if ( v36 == 2 )
          RtlReleaseSRWLockExclusive(v40);
        else
          RtlReleaseSRWLockShared(v40);
        v63 = v170;
        v64 = (unsigned __int64 *)&v170[3];
        if ( (unsigned __int64 *)*v64 == v64
          || ((RtlAcquireSRWLockExclusive(v170 + 2), (unsigned __int64 *)*v64 != v64)
            ? (v65 = RtlpHpLfhOwnerMoveSubsegment(v63, *v64, 2LL))
            : (v65 = 0LL),
              RtlReleaseSRWLockExclusive(v63 + 2),
              !v65) )
        {
          v66 = v157;
          v65 = RtlpHpLfhSubsegmentCreate(v157, v63, v151);
          if ( !v65 )
          {
            v115 = v151;
            Heap = 0LL;
            goto LABEL_218;
          }
        }
        v36 = 2;
        RtlAcquireSRWLockExclusive(v40);
        v38 = *(_RTL_SRWLOCK **)&v156[1];
        if ( *(_WORD *)(v65 + 32) == *(_WORD *)(v65 + 34) )
        {
          *(_QWORD *)(v65 + 16) = *(_QWORD *)&v156[1];
        }
        else
        {
          v67 = _InterlockedExchange64((volatile __int64 *)(v65 + 16), *(__int64 *)&v156[1]);
          if ( (v67 & 1) != 0 )
            _InterlockedExchangeAdd((volatile signed __int32 *)(v65 + 32), v67 >> 1);
        }
        if ( !v38[1].Value || *(_WORD *)(v65 + 32) != *(_WORD *)(v65 + 34) )
        {
          v158 = RtlpHpLfhOwnerMoveSubsegment(v38, v65, 0LL);
          goto LABEL_89;
        }
        *(_QWORD *)(v65 + 16) = 0LL;
        v158 = v65;
      }
      v45 = (_RTL_SRWLOCK *)v38[3].Value;
      if ( v45 != &v38[3] )
      {
        while ( 2 )
        {
          v46 = v45[4].Value;
          v160 = 0;
          while ( v46 != 1 || v36 != 1LL )
          {
            v47 = v46 - 1;
            v46 = _InterlockedCompareExchange16((volatile signed __int16 *)&v45[4], v46 - 1, v46);
            v48 = v47 + 1;
            if ( v46 == v48 )
            {
              if ( !*(_WORD *)&v45[4].0 )
                RtlpHpLfhOwnerMoveSubsegment(v38, v45, 1LL);
              goto LABEL_102;
            }
            if ( v46 < v48 )
              v160 = 1;
          }
          v45 = (_RTL_SRWLOCK *)v45->Value;
          if ( v45 != &v38[3] )
            continue;
          break;
        }
      }
      v45 = 0LL;
LABEL_102:
      if ( v36 == 2 )
      {
        v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v40, 0LL, 1LL);
        if ( v49 != 1 )
        {
          do
          {
            if ( (v49 & 4) != 0 || (v50 = 3LL, (v49 & 2) == 0) )
              v50 = -1LL;
            v51 = v50 + v49;
            v52 = v49;
            v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v40, v50 + v49, v49);
          }
          while ( v52 != v49 );
          if ( v50 == 3 )
            goto LABEL_131;
        }
      }
      else
      {
        v53 = _InterlockedCompareExchange64((volatile signed __int64 *)v40, 0LL, 17LL);
        v54 = v53;
        if ( v53 == 17 )
          goto LABEL_132;
        if ( (v53 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v53 & 2) != 0 )
        {
LABEL_117:
          if ( (v54 & 8) != 0 )
          {
            v57 = (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( j = *(_QWORD *)((v54 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !j; j = v57[1] )
              v57 = (_QWORD *)*v57;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(j + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_132;
            v59 = -9LL;
          }
          else
          {
            v59 = -1LL;
          }
          while ( 1 )
          {
            if ( (v54 & 4) != 0 || (v60 = v59 + 4, (v54 & 2) == 0) )
              v60 = v59;
            v61 = v60 + v54;
            v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v40, v60 + v54, v54);
            if ( v54 == v62 )
              break;
            v54 = v62;
          }
          if ( (v54 & 4) == 0 && (v54 & 2) != 0 )
          {
            v51 = v61;
LABEL_131:
            RtlpWakeSRWLock(v40, v51, 0LL);
          }
        }
        else
        {
          while ( 1 )
          {
            v55 = v54 - 16;
            if ( (v54 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
              v55 = 0LL;
            v56 = _InterlockedCompareExchange64((volatile signed __int64 *)v40, v55, v54);
            v19 = v54 == v56;
            v54 = v56;
            if ( v19 )
              break;
            if ( (v56 & 2) != 0 )
              goto LABEL_117;
          }
        }
      }
LABEL_132:
      if ( !v45 )
      {
        v36 = 2;
        RtlAcquireSRWLockExclusive(v40);
LABEL_89:
        v38 = *(_RTL_SRWLOCK **)&v156[1];
        continue;
      }
      break;
    }
    v68 = NtCurrentTeb();
    v69 = (__int64 *)&v45[6];
    v70 = 2 * WORD1(v45[4].Value);
    v71 = 1LL;
    LowFragHeapDataSlot = v68->LowFragHeapDataSlot;
    v73 = (unsigned int)v45 >> 12;
    v155 = (unsigned int)v45 >> 12;
    v74 = RtlpSearchWidth[*(unsigned __int8 *)(*(_QWORD *)&v156[1] + 1LL)];
    v75 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
    v76 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)&v45[5].0 ^ ((unsigned int)v45 >> 12));
    v153 = RtlpLFHKey ^ *(_DWORD *)&v45[5].0 ^ ((unsigned int)v45 >> 12);
    if ( (unsigned int)Sizea < v76 )
      v71 = 3LL;
    v159 = v76;
    v68->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
    v77 = &v69[(unsigned __int64)(2 * (unsigned int)WORD2(v45[4].Ptr)) >> 6];
    v78 = &v69[(v70 - 1) >> 6];
LABEL_154:
    v79 = *v77;
    if ( v70 >= 0x40 )
    {
      if ( (v79 & 0x5555555555555555LL) == 0x5555555555555555LL )
      {
        do
        {
          if ( v77 == v78 )
            v77 = (volatile signed __int64 *)&v45[6];
          else
            ++v77;
          v79 = *v77;
        }
        while ( (*v77 & 0x5555555555555555LL) == 0x5555555555555555LL );
      }
      if ( v77 == v78 && (v70 & 0x3F) != 0 && (v70 & 0x3F) < v74 )
        v74 = v70 & 0x3F;
    }
    else if ( (unsigned int)v70 < v74 )
    {
      v74 = v70;
    }
    v75 = ((v74 * v75) >> 7) & 0x1FFFFFE;
    while ( 1 )
    {
      if ( v74 >= 0x40 )
      {
        v81 = 0x5555555555555555LL;
      }
      else
      {
        _BitScanForward64(&v80, ~v79 & 0x5555555555555555LL);
        v75 += v80;
        v81 = (((1LL << v74) - 1) << v80) & 0x5555555555555555LL;
      }
      _BitScanForward64(&v82, __ROR8__(v81 & ~v79, v75));
      v167 = ((_BYTE)v75 + (_BYTE)v82) & 0x3F;
      v83 = _InterlockedCompareExchange64(v77, v79 | (v71 << v167), v79);
      v19 = v79 == v83;
      v79 = v83;
      if ( v19 )
        break;
      if ( (v83 & 0x5555555555555555LL) == 0x5555555555555555LL )
      {
        if ( ++v77 > v78 )
          v77 = (volatile signed __int64 *)&v45[6];
        goto LABEL_154;
      }
    }
    v84 = HIWORD(v153);
    v85 = (v167 + ((unsigned int)(v77 - v69) << 6)) >> 1;
    v172 = v85;
    WORD2(v45[4].Ptr) = v85;
    v86 = v84 + v85 * v76;
    v87 = BYTE5(v45[5].Ptr) <= 1u;
    v153 = v86;
    if ( !v87 )
    {
      v88 = BYTE4(v45[5].Ptr);
      v89 = RtlpLFHKey ^ v73 ^ *(_WORD *)&v45[5].0;
      LODWORD(v90) = 0;
      v91 = 0;
      v92 = v86 >> v88;
      v93 = (signed __int16 *)((char *)v45 + 2 * v92 + HIWORD(v45[5].Ptr));
      _m_prefetchw(v93);
      v94 = 0xFFFFFFFFLL;
      v156[1] = v89;
      v95 = ((v86 + v89 - 1) >> v88) - (unsigned int)v92 + 1;
      if ( v93 < &v93[v95] )
      {
        v96 = &v93[v95];
        v97 = 2 * v92;
        do
        {
          while ( 1 )
          {
            v98 = *v93;
            while ( v98 > 0 )
            {
              v99 = v98;
              v98 = _InterlockedCompareExchange16(v93, v98 + 1, v98);
              if ( v99 == v98 )
                goto LABEL_188;
            }
            if ( v91 )
              break;
            v91 = 1;
            RtlAcquireSRWLockExclusive(v45 + 3);
          }
          if ( v98 == -1 )
          {
            v90 = v97 >> 1;
            if ( (_DWORD)v94 == -1 )
              v94 = (unsigned int)v90;
          }
          *v93 = v98 + 1;
LABEL_188:
          ++v93;
          v97 += 2LL;
        }
        while ( v93 < v96 );
        v100 = v172;
        if ( (_DWORD)v94 != -1 )
        {
          v101 = v157;
          v102 = BYTE4(v45[5].Ptr);
          v103 = (unsigned int)(v90 - v94 + 1);
          v104 = (__int64)v45 + (unsigned int)((_DWORD)v94 << v102);
          v105 = (unsigned int)((_DWORD)v103 << v102);
          v106 = (__int64 (__fastcall *)(PVOID))(RtlpHeapKey ^ v157 ^ *(_QWORD *)(v157 + 24));
          v107 = *(void **)v157;
          if ( v106 == RtlpHpSegLfhVsCommit )
            v108 = RtlpHpSegLfhVsCommit(v107);
          else
            v108 = ((__int64 (__fastcall *)(void *, __int64, __int64))v106)(v107, v104, v105);
          v109 = v108;
          if ( v108 < 0 )
          {
            RtlpHpLfhSubsegmentDecBlockCounts(v45, v153, v156[1]);
          }
          else
          {
            v110 = 0LL;
            v111 = (_WORD *)((char *)v45 + 2 * v94 + HIWORD(v45[5].Ptr));
            v112 = (unsigned __int64)(2 * v103 + 1) >> 1;
            if ( v111 > &v111[v103] )
              v112 = 0LL;
            if ( v112 )
            {
              do
              {
                if ( !*v111 )
                  *v111 = 1;
                ++v111;
                ++v110;
              }
              while ( v110 < v112 );
            }
            v109 = 0;
          }
          RtlReleaseSRWLockExclusive(v45 + 3);
          if ( v109 < 0 )
          {
            Heap = 0LL;
            if ( v100 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)&v45[((unsigned __int64)(unsigned int)(2 * v100) >> 6) + 6],
                ~(3LL << ((2 * v100) & 0x3F)));
            goto LABEL_215;
          }
          v86 = v153;
          v76 = v159;
          LOWORD(v73) = v155;
LABEL_210:
          Heap = (unsigned __int64)v45 + v86;
          if ( (unsigned int)Sizea < v76 )
          {
            v113 = v76 - Sizea;
            v114 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v73 ^ (unsigned __int64)LOWORD(v45[5].Value);
            *(_BYTE *)(v114 + Heap - 1) = 0;
            if ( v113 == 1 )
            {
              *(_WORD *)(v114 + Heap - 2) |= 0x8000u;
            }
            else
            {
              *(_WORD *)(v114 + Heap - 2) &= 0xC000u;
              *(_WORD *)(v114 + Heap - 2) |= v113 & 0x3FFF;
            }
          }
LABEL_215:
          v115 = v151;
          if ( !Heap )
            RtlpHpLfhSubsegmentFreeBlock(v101, v45, 0LL, v151);
          v66 = v157;
          v63 = v170;
          v65 = v158;
LABEL_218:
          if ( v160 )
            RtlpHpLfhBucketUpdateAffinityMapping(v66, v63);
          if ( v65 )
            RtlpHpLfhBucketAddSubsegment(v66, v63, v65, v115);
          if ( Heap )
          {
            v20 = v151;
            v10 = Sizea;
            if ( (v151 & 2) == 0 )
            {
              v7 = (signed __int64)BaseAddress;
              v15 = v171;
              goto LABEL_230;
            }
            memset((void *)Heap, 0, (unsigned int)Sizea);
            v7 = (signed __int64)BaseAddress;
            v15 = v171;
LABEL_229:
            v20 = v151;
LABEL_230:
            if ( Heap != -1LL )
            {
              v165 = 2LL;
              goto LABEL_238;
            }
LABEL_232:
            if ( v15 > 0x20000 )
            {
              if ( v15 > 0x7F000 )
                v116 = RtlpHpLargeAlloc((PVOID)v7);
              else
                v116 = RtlpHpSegAlloc((PVOID)v7, v10);
            }
            else
            {
              v116 = RtlpHpVsContextAllocate((PRTL_SRWLOCK)(v7 + 176), v10, v15, v20);
            }
            Heap = v116;
LABEL_238:
            if ( !Heap )
              goto LABEL_27;
            v117 = BYTE1(v154);
            if ( (v154 & 0x30000F08) == 0 )
              goto LABEL_27;
            v118 = v168;
            v119 = v161;
            if ( v168 )
            {
              *(_QWORD *)(Heap + v10) = 0xABABABABABABABABuLL;
              *(_QWORD *)(Heap + v10 + 8) = 0xABABABABABABABABuLL;
            }
            v120 = 0LL;
            if ( !v169 )
            {
LABEL_269:
              v125 = v164;
              if ( v164 )
              {
                *(_BYTE *)(v120 + 2) &= 0xF0u;
                *(_BYTE *)(v120 + 2) |= v125 & 0xF;
                if ( (RtlpHpAppCompatFlags & 2) != 0 )
                {
                  if ( (_WORD)Heap
                    || (v127 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, Heap >> 16, 1LL),
                        v126 = Heap,
                        !v127) )
                  {
                    v126 = Heap + 16;
                  }
                }
                else
                {
                  v126 = Heap;
                }
                if ( (int)RtlpCallInterceptRoutine(v125, v7, v126, 2, v120 + 16) < 0 )
                {
                  RtlFreeHeap((PVOID)v7, 0, (PVOID)Heap);
                  goto LABEL_26;
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
                v19 = v152 >= 0;
                v17->LastErrorValue = v18;
                if ( !v19 || *(int *)(v7 + 20) < 0 )
                  RtlpAllocateHeapRaiseException(v180);
                return Heap;
              }
              if ( (RtlpHpAppCompatFlags & 2) != 0
                && ((_WORD)Heap
                 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, Heap >> 16, 1LL)) )
              {
                Heap += 16LL;
              }
              if ( (RtlpHpHeapFeatures & 4) != 0 && (PVOID)v7 != RtlpHpMetadataHeap )
              {
                v128 = v7;
LABEL_340:
                RtlpHpStackTraceAddStack(v128, Heap);
                return Heap;
              }
              return Heap;
            }
            v121 = Heap + v10;
            if ( v118 )
              v121 += 16LL;
            v120 = (v121 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
            *(_QWORD *)v120 = 0LL;
            *(_QWORD *)(v120 + 8) = 0LL;
            *(_BYTE *)(v120 + 2) &= 0xFu;
            *(_BYTE *)(v120 + 2) |= 16 * (v117 & 0xFE);
            *(_BYTE *)(v120 + 3) = v119 >> 4;
            *(_WORD *)v120 = a4;
            _InterlockedOr(v149, 0);
            if ( !(_WORD)Heap
              && (unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, Heap >> 16, 1LL) )
            {
              RtlpHpLargeAllocSetExtraPresent(v7, Heap, v154);
              goto LABEL_269;
            }
            if ( (RtlpHpAppCompatFlags & 1) != 0 )
            {
              DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v7, Heap);
            }
            else if ( (v7 ^ RtlpHeapKey ^ *(_QWORD *)((Heap & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((Heap & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
            {
              DescriptorValidateSafe = (Heap & 0xFFFFFFFFFFF00000uLL)
                                     + 32LL * (unsigned int)((Heap - (Heap & 0xFFFFFFFFFFF00000uLL)) >> 12);
            }
            else
            {
              DescriptorValidateSafe = 0LL;
            }
            if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0 )
              goto LABEL_262;
            if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0 )
            {
              if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0
                && Heap != (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                         + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                   - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
              {
LABEL_262:
                DescriptorValidateSafe = 0LL;
              }
            }
            else
            {
              DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 27);
              if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0
                || (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) == 0
                || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0 )
              {
                goto LABEL_262;
              }
            }
            if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) != 0 )
            {
              if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) != 0 )
              {
                v123 = (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                     + ((unsigned int)((__int64)(DescriptorValidateSafe
                                               - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
                v124 = (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(v123 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v123 >> 12);
              }
              else
              {
                v124 = 16 * (WORD1(RtlpLFHKey) ^ ((unsigned int)(Heap - 16) >> 16) ^ *(unsigned __int16 *)(Heap - 14))
                     - 16;
              }
              *(_WORD *)(v124 + Heap - 2) |= 0x4000u;
            }
            else
            {
              *(_WORD *)(DescriptorValidateSafe + 4) |= 1u;
            }
            goto LABEL_269;
          }
          v7 = (signed __int64)BaseAddress;
          v15 = v171;
LABEL_228:
          v10 = Sizea;
          goto LABEL_229;
        }
        if ( v91 )
          RtlReleaseSRWLockExclusive(v45 + 3);
        v86 = v153;
        v76 = v159;
      }
      LOWORD(v73) = v155;
    }
    v101 = v157;
    goto LABEL_210;
  }
  v129 = BaseAddress[29];
  v130 = v129 | a3;
  v156[0] = 0;
  v166 = 0LL;
  v131 = 0LL;
  if ( Size <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v133 = *(_DWORD *)(v7 + 144);
    if ( v133 )
    {
      if ( (v130 & 0x3C000102) == 0 && (v129 & 0x1000000) == 0 )
      {
        v132 = BaseAddress;
        if ( (int)RtlpCallInterceptRoutine(v133, (_DWORD)BaseAddress, 0, 1, (__int64)&v166) < 0 )
          goto LABEL_315;
        v5 = ((v166 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16 + v180;
        v166 = ((v166 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
        v180 = v5;
        goto LABEL_294;
      }
      v133 = 0;
    }
    v132 = BaseAddress;
LABEL_294:
    v134 = 1LL;
    if ( v5 )
      v134 = v5;
    v131 = (v134 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v135 = v131 >> 4;
    if ( (v130 & 0x7D810F61) != 0 )
      goto LABEL_310;
    if ( v5 <= RtlpLargestLfhBlock
      && ((unsigned __int8)(1 << ((v131 >> 4) & 7)) & *((_BYTE *)v132 + (v131 >> 7) + 402)) != 0 )
    {
      v136 = (_RTL_SRWLOCK *)*((_QWORD *)v132 + 47);
      v156[0] = 2;
      Heap = RtlpLowFragHeapAllocFromContext(v136);
      if ( Heap )
      {
LABEL_312:
        if ( !v133
          || (v180 -= v166,
              v143 = RtlpSetupExtendedBlock((_DWORD)v132, v130, Heap, v137, v166, v133),
              v150 = Heap,
              Heap = v143,
              (int)RtlpCallInterceptRoutine(v133, (_DWORD)v132, v143, 2, v150) >= 0) )
        {
          v145 = v180;
          goto LABEL_321;
        }
        RtlFreeHeap(v132, 0, (PVOID)Heap);
        goto LABEL_315;
      }
    }
    v138 = (__int64 *)*((_QWORD *)v132 + 39);
    if ( v135 < *((unsigned int *)v138 + 2) )
    {
LABEL_303:
      v140 = v131 >> 4;
    }
    else
    {
      while ( 1 )
      {
        v139 = (__int64 *)*v138;
        if ( !*v138 )
          break;
        v138 = (__int64 *)*v138;
        if ( v135 < *((unsigned int *)v139 + 2) )
          goto LABEL_303;
      }
      v140 = (unsigned int)(*((_DWORD *)v138 + 2) - 1);
    }
    if ( v140 >= *((unsigned int *)v138 + 2) || v135 != v140 )
    {
LABEL_310:
      v142 = 0LL;
    }
    else
    {
      v141 = v135 - *((unsigned int *)v138 + 6);
      if ( *((_DWORD *)v138 + 3) )
        v141 *= 2LL;
      v142 = v138[6] + 8 * v141;
    }
    Heap = RtlpAllocateHeap(v132, v142, (__int64)v156);
    if ( !Heap )
      goto LABEL_316;
    goto LABEL_312;
  }
  v132 = BaseAddress;
  v156[0] = 5;
LABEL_315:
  Heap = 0LL;
LABEL_316:
  NtCurrentTeb()->LastStatusValue = -1073741801;
  v144 = NtCurrentTeb();
  v144->LastErrorValue = RtlNtStatusToDosError(-1073741801);
  v145 = v180;
  if ( (v130 & 4) != 0 )
  {
    if ( !v131 )
      v131 = v180;
    RtlpAllocateHeapRaiseException(v131);
  }
LABEL_321:
  if ( MEMORY[0x7FFE0380]
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*((_DWORD *)v132 + 29) & 0x1000000) == 0
    && ((v130 & 0x61000000) == 0 || (v130 & 0x10000000) != 0)
    && v156[0] != 5 )
  {
    if ( !Heap )
      goto LABEL_334;
    v146 = (_BYTE *)(Heap - 16);
    _m_prefetchw((const void *)(Heap - 16));
    v147 = Heap - 16;
    if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
      v147 -= 16LL * (unsigned __int8)v146[14];
    if ( *(char *)(v147 + 15) < 0 )
      goto LABEL_334;
    _m_prefetchw(v146);
    if ( v146[15] == 5 )
      v146 -= 16 * (unsigned __int8)v146[14];
    if ( ((v146[10] ^ (unsigned __int8)(*((_BYTE *)v132 + 138) & (*((_DWORD *)v132 + 31) >> 17))) & 8) == 0 )
LABEL_334:
      RtlpLogHeapAllocateEvent(v132, Heap, v145);
  }
  if ( (RtlpHpHeapFeatures & 4) != 0 && v132 != RtlpHpMetadataHeap && Heap && (v130 & 0x10000000) == 0 )
  {
    v128 = (signed __int64)v132;
    goto LABEL_340;
  }
  return Heap;
}
