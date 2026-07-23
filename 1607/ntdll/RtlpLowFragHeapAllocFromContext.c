/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x1800240B0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpAllocateUserBlockFromHeap @ 0x180019964 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpSubSegmentInitialize @ 0x180027260 (RtlpSubSegmentInitialize.c)
 *     RtlpFreeUserBlock @ 0x180045F38 (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800460D4 (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x18004F4A4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpSetSegmentInfo @ 0x180051A40 (RtlpSetSegmentInfo.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180074DA4 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180080584 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A6010 (RtlGetCurrentProcessorNumber.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A9D30 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A9DE0 (InterlockedPushListSList.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x1800F8F64 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x1800F941C (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1800F949C (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800F95AC (RtlpLogHeapSubSegmentAllocCached.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(PRTL_SRWLOCK SRWLock, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v5; // r15
  unsigned __int16 *v6; // rsi
  struct _TEB *v7; // rbp
  __int64 UniqueThread_low; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 Value; // r13
  __int64 v12; // rbx
  int v13; // eax
  volatile signed __int64 *v14; // rcx
  unsigned int v15; // r9d
  int v16; // r8d
  signed __int32 v17; // edx
  __int64 v18; // r10
  struct _TEB *v19; // rcx
  __int64 LowFragHeapDataSlot; // r8
  unsigned __int64 v21; // r11
  int v22; // r9d
  unsigned __int64 v23; // r8
  __int64 *v24; // r12
  __int64 *v25; // rdi
  unsigned int v26; // r9d
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r12d
  __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  unsigned int v35; // r8d
  __int64 *v36; // rax
  __int64 v37; // r8
  unsigned int v38; // ecx
  volatile signed __int64 *v39; // rax
  unsigned int v40; // r12d
  signed __int64 *v41; // rbx
  signed __int64 v42; // rdx
  _SLIST_HEADER *v43; // rbp
  _SLIST_HEADER *v44; // r12
  PSLIST_ENTRY v45; // rbx
  volatile signed __int64 *v46; // rcx
  signed __int64 v47; // rtt
  signed __int32 v48; // eax
  __int64 *v49; // r9
  signed __int64 v50; // r12
  signed __int32 v51; // eax
  unsigned __int16 *v52; // r8
  int v53; // r9d
  __int64 v54; // rax
  volatile signed __int32 *v55; // rdx
  unsigned __int16 *v56; // rcx
  unsigned int v57; // eax
  signed __int64 v58; // rbx
  PSLIST_ENTRY v59; // rax
  unsigned int v60; // r8d
  unsigned int v61; // r10d
  BOOL v62; // r9d
  unsigned __int64 v63; // rax
  char v64; // r11
  char v65; // cl
  char v66; // cl
  _SLIST_HEADER *v67; // r9
  unsigned int v68; // edx
  unsigned int v69; // ebx
  unsigned int v70; // edx
  _RTL_SRWLOCK *v71; // r12
  PSLIST_ENTRY v72; // rax
  PSLIST_ENTRY v73; // r10
  PSLIST_ENTRY v74; // r8
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rbx
  unsigned int v77; // edx
  unsigned __int64 v78; // rax
  __int64 v79; // r12
  PSLIST_ENTRY v80; // rax
  _SLIST_ENTRY *v81; // rbx
  signed __int32 v82; // eax
  __int64 *v83; // r8
  signed __int32 v84; // eax
  _SLIST_ENTRY *v85; // r9
  int v86; // r8d
  __int64 v87; // rax
  volatile signed __int32 *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // ebx
  ULONG CurrentProcessorNumber; // eax
  char *v93; // r12
  int v94; // ecx
  _SLIST_ENTRY *Next; // rcx
  unsigned __int16 *v96; // rax
  _SLIST_ENTRY *v97; // rdx
  unsigned __int32 Ptr_high; // eax
  unsigned __int32 v99; // eax
  __int64 v100; // rcx
  _SLIST_HEADER *v101; // rdi
  unsigned int v102; // ebp
  signed __int64 v103; // r12
  int v104; // eax
  bool v105; // zf
  __int64 v106; // rcx
  __int64 v107; // rcx
  _SLIST_ENTRY *v108; // rcx
  __int64 v109; // rcx
  unsigned __int16 v110; // cx
  unsigned __int16 v111; // ax
  bool v112; // cf
  signed __int32 v113; // eax
  unsigned __int16 *v114; // r9
  int v115; // r8d
  __int64 v116; // rax
  unsigned __int16 *v117; // rcx
  _SLIST_ENTRY *v118; // rdx
  __int64 v119; // rcx
  signed __int32 v120; // eax
  _SLIST_ENTRY *v121; // r9
  int v122; // r8d
  __int64 v123; // rax
  _SLIST_ENTRY **v124; // rcx
  signed __int32 v125; // eax
  _SLIST_ENTRY *v126; // r9
  int v127; // r8d
  __int64 v128; // rax
  __int64 **v129; // rdx
  _SLIST_ENTRY **v130; // rcx
  signed __int32 v131[8]; // [rsp+0h] [rbp-C8h] BYREF
  signed __int64 v132; // [rsp+30h] [rbp-98h]
  PSLIST_HEADER v133; // [rsp+38h] [rbp-90h]
  int v134; // [rsp+40h] [rbp-88h]
  volatile signed __int64 *v135; // [rsp+48h] [rbp-80h]
  signed __int64 v136; // [rsp+50h] [rbp-78h]
  signed __int64 v137; // [rsp+58h] [rbp-70h]
  __int64 v138; // [rsp+60h] [rbp-68h]
  PSLIST_HEADER ListHead; // [rsp+68h] [rbp-60h]
  int v140; // [rsp+70h] [rbp-58h]
  __int64 *v141; // [rsp+D0h] [rbp+8h]
  unsigned int v142; // [rsp+D0h] [rbp+8h]
  signed __int64 v143; // [rsp+D0h] [rbp+8h]
  _SLIST_ENTRY *UserBlockFromHeap; // [rsp+D0h] [rbp+8h]
  int v145; // [rsp+D8h] [rbp+10h]
  unsigned int v146; // [rsp+D8h] [rbp+10h]
  char v147; // [rsp+D8h] [rbp+10h]
  unsigned int v148; // [rsp+D8h] [rbp+10h]

  LODWORD(v5) = 0;
  v6 = (unsigned __int16 *)&SRWLock[84].Ptr + 2 * a2 + 2;
  if ( (*(_BYTE *)&SRWLock[84].0 & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    LODWORD(v5) = v7->HeapVirtualAffinity - 1;
    UniqueThread_low = LODWORD(v7->ClientId.UniqueThread);
    if ( (int)v5 < 0 || qword_1801503E8[(int)v5] != UniqueThread_low )
    {
      v91 = dword_1801503E4;
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v5 = v91 & CurrentProcessorNumber;
      v7->HeapVirtualAffinity = (v91 & CurrentProcessorNumber) + 1;
      qword_1801503E8[v5] = UniqueThread_low;
    }
  }
  v9 = *((unsigned __int8 *)v6 + 2);
  v10 = 16LL * *v6;
  v138 = v10;
  ListHead = (PSLIST_HEADER)&SRWLock[6 * (unsigned int)v5 + 408];
  if ( (_DWORD)v5 )
    Value = SRWLock[v9 + 278].Value - 192 + 192LL * (unsigned int)v5;
  else
    Value = SRWLock[v9 + 149].Value;
LABEL_7:
  while ( 2 )
  {
    while ( 2 )
    {
      v12 = *(_QWORD *)(Value + 8);
      if ( v12 )
      {
        v13 = HIWORD(*(_DWORD *)(v12 + 32));
        v145 = 0;
        v14 = *(volatile signed __int64 **)(*(_QWORD *)Value + 24LL);
        v135 = v14;
        if ( (v13 & 0x8000) != 0 )
        {
          v145 = 1;
          v93 = (char *)v14 + 4 * *(unsigned __int16 *)(Value + 172);
          if ( (v93[679] & 1) == 0 && (int)RtlpAffinitizeSegmentInfoForBucket(v14, (unsigned __int8)v93[678]) >= 0 )
          {
            v93[679] |= 1u;
            if ( MEMORY[0x7FFE0380] )
            {
              if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapAffinityManagerEnable(*((_QWORD *)v135 + 3), (unsigned __int8)v93[678]);
            }
          }
        }
        v15 = 100;
        if ( MEMORY[0x7FFE036A] <= 1u )
          v15 = 0;
        v16 = 0;
        while ( 1 )
        {
          v17 = *(_DWORD *)(v12 + 32);
          if ( (v17 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v17 )
              goto LABEL_41;
            if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 32), v17 | 0x80000000, v17) )
              break;
          }
          if ( ++v16 > v15 )
            goto LABEL_41;
        }
        if ( v17 == -1 )
          goto LABEL_41;
        v18 = *(_QWORD *)(v12 + 8);
        if ( !v18 || *(_QWORD *)v12 != Value || !(_WORD)v17 )
        {
          *(_DWORD *)(v12 + 32) = v17;
LABEL_41:
          v32 = 0LL;
          goto LABEL_26;
        }
        v19 = NtCurrentTeb();
        LowFragHeapDataSlot = v19->LowFragHeapDataSlot;
        v21 = RtlpSearchWidth[*(unsigned __int16 *)(Value + 172)];
        v22 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
        v19->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
        v23 = *(_QWORD *)(v18 + 32);
        v24 = *(__int64 **)(v18 + 40);
        if ( v23 < 0x40 )
        {
          if ( v23 < v21 )
            LODWORD(v21) = *(_QWORD *)(v18 + 32);
        }
        else
        {
          v141 = &v24[(v23 - 1) >> 6];
          v24 += (unsigned __int64)(unsigned int)(v17 >> 16) >> 6;
          v25 = v24;
          do
          {
            if ( *v24 != -1 )
              break;
            v36 = *(__int64 **)(v18 + 40);
            if ( v24 != v141 )
              v36 = v24 + 1;
            v24 = v36;
          }
          while ( v36 != v25 );
          v10 = v138;
          if ( v24 == v141 )
          {
            v35 = v23 & 0x3F;
            if ( v35 )
            {
              if ( v35 < v21 )
                LODWORD(v21) = *(_DWORD *)(v18 + 32) & 0x3F;
            }
          }
        }
        v26 = (unsigned int)(v21 * v22) >> 7;
        if ( (unsigned int)v21 >= 0x40 )
        {
          v28 = -1LL;
        }
        else
        {
          _BitScanForward64(&v27, ~*v24);
          LOBYTE(v26) = v27 + v26;
          v28 = ((1LL << v21) - 1) << v27;
        }
        _BitScanForward64(&v29, ~__ROR8__(*v24 | ~v28, v26));
        LODWORD(v29) = ((_BYTE)v26 + (_BYTE)v29) & 0x3F;
        v30 = *v24 | (1LL << v29);
        v140 = v29;
        *v24 = v30;
        v31 = v29 + ((unsigned int)(((__int64)v24 - *(_QWORD *)(v18 + 40)) >> 3) << 6);
        *(_DWORD *)(v12 + 32) = (v31 << 16) | ((unsigned __int16)v17 - 1);
        LODWORD(v29) = RtlpLFHKey ^ (unsigned int)v135 ^ v18 ^ *(_DWORD *)(v18 + 24);
        v32 = v18 + v31 * WORD1(v29) + (unsigned __int16)v29;
        if ( (*(_BYTE *)(v32 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL), v32, 0, 0LL, 0LL);
          goto LABEL_41;
        }
LABEL_26:
        if ( v145 && dword_1801503E4 + 1 < (unsigned int)RtlpAffinityState )
          _InterlockedCompareExchange(&dword_1801503E4, 2 * (dword_1801503E4 + 1) - 1, dword_1801503E4);
        if ( v32 )
        {
          if ( (a4 & 8) != 0 )
            memset((void *)(v32 + 16), 0, v10 - 8);
          v33 = v10 - a3;
          if ( v33 >= 0x3F )
          {
            *(_QWORD *)(v32 + 16LL * *v6) = v33;
            *(_BYTE *)(v32 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v32 + 15) = v33 | 0x80;
          }
          return v32 + 16;
        }
      }
      v37 = *(_QWORD *)Value;
      v133 = *(PSLIST_HEADER *)Value;
LABEL_47:
      v132 = 0LL;
      while ( 2 )
      {
        v38 = 0;
        v39 = 0LL;
        v142 = 0;
        v135 = 0LL;
        v40 = 0;
        v41 = (signed __int64 *)(Value + 16);
        do
        {
          v42 = *v41;
          v137 = v42;
          if ( !v42 )
            goto LABEL_50;
          v57 = *(unsigned __int16 *)(v42 + 32);
          v146 = v57;
          if ( v57 <= v38 )
          {
LABEL_78:
            v39 = v135;
            goto LABEL_50;
          }
          if ( (RtlpLowFragHeapGlobalFlags & 4) == 0 )
          {
            LODWORD(v37) = *(unsigned __int16 *)(Value + 172);
            if ( (unsigned __int16)v37 <= 0x70u )
            {
              if ( *(_DWORD *)(Value + 160) >= 16
                                             * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[(unsigned __int16)v37] )
              {
                v110 = *(_WORD *)(v42 + 32);
                v111 = *(_WORD *)(v42 + 40) >> 2;
                v112 = v111 < v110;
                v105 = v111 == v110;
                v57 = v146;
                v38 = v142;
                LODWORD(v37) = !v112 && !v105;
                goto LABEL_81;
              }
              v38 = v142;
            }
          }
          LOBYTE(v37) = 0;
LABEL_81:
          v134 = v37;
          if ( MEMORY[0x7FFE038A] || MEMORY[0x7FFE0380] && (v57 = v146, (NtCurrentPeb()->TracingFlags & 1) != 0) )
          {
            if ( !(_BYTE)v37 )
              goto LABEL_84;
            RtlpLogHeapReuseThresholdActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL),
              *(_QWORD *)(v42 + 8),
              *(unsigned __int16 *)(Value + 172));
            v42 = v137;
            v57 = v146;
            LODWORD(v37) = v134;
            v38 = v142;
          }
          if ( (_BYTE)v37 )
            goto LABEL_78;
LABEL_84:
          v38 = v57;
          v142 = v57;
          v132 = v42;
          v39 = (volatile signed __int64 *)(Value + 8LL * v40 + 16);
          v135 = v39;
LABEL_50:
          ++v40;
          ++v41;
        }
        while ( v40 < 0x10 );
        v43 = ListHead;
        if ( v39 )
        {
          v44 = (_SLIST_HEADER *)(*(_QWORD *)(v133[1].Region + 8LL * *(unsigned __int16 *)(Value + 172) + 1192) + 144LL);
          v45 = RtlpInterlockedPopEntrySList(v44);
          if ( v45 )
          {
            while ( 1 )
            {
              v94 = *((_DWORD *)&v45[-1].Next + 3);
              v45 -= 3;
              if ( (v94 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v45[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v45[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                Next = v45->Next->Next;
                v45->Next = 0LL;
                RtlpInterlockedPushEntrySList(Next, &v45[3]);
              }
              v45 = RtlpInterlockedPopEntrySList(v44);
              if ( !v45 )
                goto LABEL_53;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v45, Value) )
            {
              RtlpInterlockedPushEntrySList(v44, &v45[3]);
              v45 = 0LL;
            }
          }
LABEL_53:
          v37 = v132;
          v46 = v135;
          v47 = v132;
          if ( v47 != _InterlockedCompareExchange64(v135, (signed __int64)v45, v132) )
          {
            if ( v45 )
              RtlpInterlockedPushEntrySList(v44, &v45[3]);
            continue;
          }
          if ( !v45 )
            *(_WORD *)(Value + 174) = (unsigned __int8)((__int64)((__int64)v46 - Value - 16) >> 3);
          if ( v37 )
          {
            _m_prefetchw((const void *)(v37 + 44));
            if ( _InterlockedAnd((volatile signed __int32 *)(v37 + 44), 0xFFFFFFFD) != 2 )
              goto LABEL_58;
            v107 = **(_QWORD **)v37;
            *(_QWORD *)v37 = 0LL;
            RtlpInterlockedPushEntrySList(v107, v37 + 48);
            goto LABEL_47;
          }
        }
        else
        {
          v132 = 0LL;
        }
        break;
      }
      v58 = 0LL;
      v143 = 0LL;
      v133 = (PSLIST_HEADER)(*(_QWORD *)(v133[1].Region + 8LL * *(unsigned __int16 *)(Value + 172) + 1192) + 144LL);
      v59 = RtlpInterlockedPopEntrySList(v133);
      if ( !v59 )
        goto LABEL_88;
      v101 = v133;
      v102 = 0;
      while ( 2 )
      {
        v103 = (signed __int64)&v59[-3];
        v104 = *((_DWORD *)&v59[-1].Next + 3);
        v132 = v103;
        if ( (v104 & 1) == 0 )
        {
          _m_prefetchw((const void *)(v103 + 44));
          if ( _InterlockedAnd((volatile signed __int32 *)(v103 + 44), 0xFFFFFFFD) != 2 )
            goto LABEL_196;
LABEL_195:
          v106 = **(_QWORD **)v103;
          *(_QWORD *)v103 = 0LL;
          RtlpInterlockedPushEntrySList(v106, v103 + 48);
          goto LABEL_196;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo(v103, Value) )
        {
          if ( !v102 )
            v143 = v103 + 48;
          *(_QWORD *)(v103 + 48) = v58;
          ++v102;
          v58 = v103 + 48;
          goto LABEL_196;
        }
        _m_prefetchw((const void *)(v103 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v103 + 44), 0xFFFFFFFD) == 2 )
          goto LABEL_195;
        if ( (unsigned __int8)RtlpIsSubSegmentReuseable(Value, v103) )
          break;
LABEL_196:
        v132 = 0LL;
        v59 = RtlpInterlockedPopEntrySList(v101);
        if ( v59 )
          continue;
        break;
      }
      v10 = v138;
      v105 = v102 == 0;
      v148 = v102;
      v43 = ListHead;
      if ( !v105 )
        InterlockedPushListSList(v133, v58, v143, v148);
LABEL_88:
      v37 = v132;
LABEL_58:
      if ( v37 )
      {
        *(_BYTE *)(v37 + 43) = v5;
        do
        {
          v48 = *(_DWORD *)(v37 + 44);
          if ( !v48 || (v48 & 6) != 0 )
            goto LABEL_7;
        }
        while ( v48 != _InterlockedCompareExchange((volatile signed __int32 *)(v37 + 44), v48 | 6, v48) );
        v49 = *(__int64 **)v37;
        if ( *(_QWORD *)v37 != Value )
        {
          _m_prefetchw((const void *)(v37 + 44));
          if ( _InterlockedAnd((volatile signed __int32 *)(v37 + 44), 0xFFFFFFF9) != 6 )
          {
            if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v49, v37) )
              continue;
            v50 = v132;
            do
            {
              v113 = *(_DWORD *)(v50 + 44);
              if ( !v113 || (v113 & 2) != 0 )
                goto LABEL_7;
            }
            while ( v113 != _InterlockedCompareExchange((volatile signed __int32 *)(v50 + 44), v113 | 2, v113) );
            v114 = *(unsigned __int16 **)v50;
            v115 = 0;
            while ( 1 )
            {
              v116 = ((_BYTE)v115 + (unsigned __int8)v114[87]) & 0xF;
              v55 = *(volatile signed __int32 **)&v114[4 * v116 + 8];
              v117 = &v114[4 * v116];
              if ( v55 )
              {
                if ( (v55[11] & 1) == 0
                  && v55 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                         (volatile signed __int64 *)v117 + 2,
                                                         v50,
                                                         (signed __int64)v55) )
                {
LABEL_208:
                  _m_prefetchw((const void *)(v55 + 11));
                  if ( _InterlockedAnd(v55 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v109 = **(_QWORD **)v55;
                    *(_QWORD *)v55 = 0LL;
                    RtlpInterlockedPushEntrySList(v109, v55 + 12);
                  }
                  goto LABEL_7;
                }
              }
              else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v117 + 2, v50, 0LL) )
              {
                goto LABEL_7;
              }
              if ( (unsigned int)++v115 >= 0x10 )
              {
LABEL_204:
                v96 = *(unsigned __int16 **)v50;
                v97 = (_SLIST_ENTRY *)(v50 + 48);
                goto LABEL_205;
              }
            }
          }
LABEL_146:
          v90 = **(_QWORD **)v37;
          *(_QWORD *)v37 = 0LL;
          RtlpInterlockedPushEntrySList(v90, v37 + 48);
          continue;
        }
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL), *(_QWORD *)(v37 + 8));
          v37 = v132;
        }
        v37 = _InterlockedExchange64((volatile __int64 *)(Value + 8), v37);
        v132 = v37;
        if ( !v37 )
          continue;
        _m_prefetchw((const void *)(v37 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v37 + 44), 0xFFFFFFF9) == 6 )
          goto LABEL_146;
        if ( *(_WORD *)(v37 + 32) && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(Value, v37) )
        {
          v50 = v132;
          while ( 1 )
          {
            v51 = *(_DWORD *)(v50 + 44);
            if ( !v51 || (v51 & 2) != 0 )
              break;
            if ( v51 == _InterlockedCompareExchange((volatile signed __int32 *)(v50 + 44), v51 | 2, v51) )
            {
              v52 = *(unsigned __int16 **)v50;
              v53 = 0;
              while ( 1 )
              {
                v54 = ((_BYTE)v53 + (unsigned __int8)v52[87]) & 0xF;
                v55 = *(volatile signed __int32 **)&v52[4 * v54 + 8];
                v56 = &v52[4 * v54];
                if ( v55 )
                {
                  if ( (v55[11] & 1) == 0
                    && v55 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                           (volatile signed __int64 *)v56 + 2,
                                                           v50,
                                                           (signed __int64)v55) )
                  {
                    goto LABEL_208;
                  }
                }
                else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v56 + 2, v50, 0LL) )
                {
                  goto LABEL_7;
                }
                if ( (unsigned int)++v53 >= 0x10 )
                  goto LABEL_204;
              }
            }
          }
        }
        continue;
      }
      break;
    }
    v60 = *(_DWORD *)(Value + 160);
    v61 = *((unsigned __int8 *)v6 + 2);
    v62 = (*(_BYTE *)&SRWLock[84].0 & 2) != 0;
    do
    {
      v63 = SRWLock[10].Value;
      v64 = 0;
      if ( (_DWORD)v63 == v61 )
      {
        HIDWORD(v136) = HIDWORD(v63) + 1;
        if ( HIDWORD(v63) > 7 )
        {
          v64 = 1;
          HIDWORD(v136) = 0;
        }
      }
      else
      {
        v136 = v61 | 0x100000000LL;
      }
    }
    while ( v63 != _InterlockedCompareExchange64((volatile signed __int64 *)&SRWLock[10], v136, v63) );
    if ( !v64 || v62 )
    {
      v65 = 3;
      if ( v62 )
        v65 = 4;
      v60 >>= v65;
    }
    v66 = *((_BYTE *)v6 + 3) & 1;
    v67 = (_SLIST_HEADER *)(unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)];
    if ( (unsigned int)v67 < 0x100 )
      --v66;
    if ( *(_DWORD *)(Value + 164) )
      --v66;
    v68 = v60;
    if ( v60 < 1 << (3 - v66) )
      v68 = 1 << (3 - v66);
    if ( v68 < 4 )
    {
      v68 = 4;
    }
    else if ( v68 > 0x400 )
    {
      v68 = 1024;
    }
    v69 = 7;
    v70 = ((((unsigned __int64)v68 + 31) >> 3) & 0xFFFFFFFC) + ((_DWORD)v67 + 16) * v68 + 68;
    if ( v70 > 0xF0000 )
      v70 = 983040;
    if ( (v70 & 0xFFFFFF80) != 0 )
    {
      do
        ++v69;
      while ( v70 >> v69 );
      if ( v69 > 0x12 )
        LOBYTE(v69) = 18;
    }
    if ( (*((_BYTE *)v6 + 3) & 6) != 0 )
    {
      LOBYTE(v69) = 18;
    }
    else if ( (_BYTE)v69 != 18 && v60 < 0x400 )
    {
      v147 = 0;
      goto LABEL_116;
    }
    v147 = 1;
LABEL_116:
    v133 = v67 + 1;
    v137 = (unsigned __int8)v69 - 7;
    v71 = &SRWLock[6 * v137 + 12];
    ++WORD2(v71[3].Ptr);
    v72 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v71);
    v73 = v72;
    if ( v72 )
    {
      ++*(_WORD *)&v71[4].0;
      goto LABEL_118;
    }
    if ( (unsigned __int8)v69 > 7u
      && (v72 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&SRWLock[6 * (unsigned __int8)v69 - 36]), (v73 = v72) != 0LL) )
    {
LABEL_118:
      v74 = v72;
      UserBlockFromHeap = v72;
      v75 = 1LL << LOBYTE(v73[1].Next);
      if ( v75 > 0xF0000 )
        v75 = 983040LL;
      v76 = v75 + WORD1(v73[1].Next);
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapSubSegmentAllocCached(SRWLock[3].Value, v73, v76, v133);
        v74 = UserBlockFromHeap;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)&SRWLock[9], -(__int64)v76);
    }
    else
    {
      UserBlockFromHeap = (_SLIST_ENTRY *)RtlpAllocateUserBlockFromHeap(
                                            (PRTL_CRITICAL_SECTION *)SRWLock[3].Value,
                                            v69,
                                            (__int64)v133,
                                            v147);
      v74 = UserBlockFromHeap;
      if ( UserBlockFromHeap )
        _InterlockedIncrement((volatile signed __int32 *)&SRWLock[6 * v137 + 14]);
    }
    v77 = WORD2(v71[3].Ptr);
    if ( v77 > 0x40 )
    {
      if ( v77 < HIWORD(v71[3].Ptr) + (HIWORD(v71[3].Ptr) >> 1) && LOWORD(v71[4].Value) < v77 - (v77 >> 1) )
      {
        Ptr_high = HIDWORD(v71[2].Ptr);
        if ( Ptr_high < 2 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)&v71[2].Ptr + 1, Ptr_high + 1, Ptr_high);
        }
        else
        {
          v99 = v71[3].Value;
          if ( v99 > 2 )
            _InterlockedCompareExchange((volatile signed __int32 *)&v71[3], v99 - 1, v99);
        }
      }
      WORD2(v71[3].Ptr) = 0;
      HIWORD(v71[3].Ptr) = 0;
      *(_WORD *)&v71[4].0 = 0;
    }
    if ( !v74 )
      return 0LL;
    v78 = 1LL << LOBYTE(v74[1].Next);
    if ( v78 > 0xF0000 )
      v78 = 983040LL;
    v79 = v78 + WORD1(v74[1].Next);
    _InterlockedIncrement((volatile signed __int32 *)&SRWLock[7]);
    v80 = RtlpInterlockedPopEntrySList(v43);
    if ( v80 )
    {
      v81 = v80 - 3;
      goto LABEL_128;
    }
    v81 = (_SLIST_ENTRY *)RtlpLowFragHeapAllocateFromZone(SRWLock);
    if ( v81 )
    {
      *((_QWORD *)&v81->Next + 1) = 0LL;
LABEL_128:
      if ( !v81 )
        break;
      *((_BYTE *)&v81[2].Next + 11) = v5;
      RtlpSubSegmentInitialize(
        (_DWORD)SRWLock,
        (_DWORD)v81,
        (_DWORD)UserBlockFromHeap,
        (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)],
        v79,
        (__int64)v6);
      _InterlockedOr(v131, 0);
      HIDWORD(UserBlockFromHeap[1].Next) = -253701952;
      do
      {
        v82 = *((_DWORD *)&v81[2].Next + 3);
        if ( !v82 || (v82 & 6) != 0 )
          goto LABEL_246;
      }
      while ( v82 != _InterlockedCompareExchange((volatile signed __int32 *)&v81[2].Next + 3, v82 | 6, v82) );
      v83 = (__int64 *)v81->Next;
      if ( v81->Next != (_SLIST_ENTRY *)Value )
      {
        _m_prefetchw((char *)&v81[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v81[2].Next + 3, 0xFFFFFFF9) == 6 )
        {
          v118 = v81 + 3;
          v119 = (__int64)v81->Next->Next;
          v81->Next = 0LL;
          goto LABEL_245;
        }
        if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v83, v81) )
          goto LABEL_246;
        do
        {
          v125 = *((_DWORD *)&v81[2].Next + 3);
          if ( !v125 || (v125 & 2) != 0 )
            goto LABEL_246;
        }
        while ( v125 != _InterlockedCompareExchange((volatile signed __int32 *)&v81[2].Next + 3, v125 | 2, v125) );
        v126 = v81->Next;
        v127 = 0;
        while ( 1 )
        {
          v128 = ((_BYTE)v127 + (unsigned __int8)*((_WORD *)&v126[10].Next + 7)) & 0xF;
          v129 = (__int64 **)*((_QWORD *)&v126[1].Next + v128);
          v130 = &v126->Next + v128;
          if ( v129 )
          {
            if ( (*((_DWORD *)v129 + 11) & 1) == 0
              && v129 == (__int64 **)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)v130 + 2,
                                       (signed __int64)v81,
                                       (signed __int64)v129) )
            {
              _m_prefetchw((char *)v129 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v129 + 11, 0xFFFFFFFD) == 2 )
              {
                v119 = **v129;
                *v129 = 0LL;
                v118 = (_SLIST_ENTRY *)(v129 + 6);
LABEL_245:
                RtlpInterlockedPushEntrySList(v119, v118);
              }
              do
              {
LABEL_246:
                v120 = *((_DWORD *)&v81[2].Next + 3);
                if ( !v120 || (v120 & 2) != 0 )
                  goto LABEL_7;
              }
              while ( v120 != _InterlockedCompareExchange((volatile signed __int32 *)&v81[2].Next + 3, v120 | 2, v120) );
              v121 = v81->Next;
              v122 = 0;
              while ( 1 )
              {
                v123 = ((_BYTE)v122 + (unsigned __int8)*((_WORD *)&v121[10].Next + 7)) & 0xF;
                v88 = (volatile signed __int32 *)*((_QWORD *)&v121[1].Next + v123);
                v124 = &v121->Next + v123;
                if ( v88 )
                {
                  if ( (v88[11] & 1) == 0
                    && v88 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                           (volatile signed __int64 *)v124 + 2,
                                                           (signed __int64)v81,
                                                           (signed __int64)v88) )
                  {
LABEL_184:
                    _m_prefetchw((const void *)(v88 + 11));
                    if ( _InterlockedAnd(v88 + 11, 0xFFFFFFFD) != 2 )
                      goto LABEL_7;
                    v100 = **(_QWORD **)v88;
                    *(_QWORD *)v88 = 0LL;
                    v97 = (_SLIST_ENTRY *)(v88 + 12);
                    goto LABEL_186;
                  }
                }
                else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v124 + 2, (signed __int64)v81, 0LL) )
                {
                  goto LABEL_7;
                }
                if ( (unsigned int)++v122 >= 0x10 )
                {
LABEL_179:
                  v96 = (unsigned __int16 *)v81->Next;
                  v97 = v81 + 3;
LABEL_205:
                  v100 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v96 + 24LL) + 8LL * v96[86] + 1192) + 144LL;
LABEL_186:
                  RtlpInterlockedPushEntrySList(v100, v97);
                  goto LABEL_7;
                }
              }
            }
          }
          else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v130 + 2, (signed __int64)v81, 0LL) )
          {
            goto LABEL_246;
          }
          if ( (unsigned int)++v127 >= 0x10 )
          {
            v118 = v81 + 3;
            v119 = *(_QWORD *)(*((_QWORD *)&v81->Next->Next[1].Next + 1)
                             + 8LL * *((unsigned __int16 *)&v81->Next[10].Next + 6)
                             + 1192)
                 + 144LL;
            goto LABEL_245;
          }
        }
      }
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL),
          *((_QWORD *)&v81->Next + 1));
      v81 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(Value + 8), (__int64)v81);
      if ( v81 )
      {
        _m_prefetchw((char *)&v81[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v81[2].Next + 3, 0xFFFFFFF9) == 6 )
        {
          v108 = v81->Next->Next;
          v81->Next = 0LL;
          RtlpInterlockedPushEntrySList(v108, &v81[3]);
          continue;
        }
        if ( LOWORD(v81[2].Next) && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(Value, v81) )
        {
          do
          {
            v84 = *((_DWORD *)&v81[2].Next + 3);
            if ( !v84 || (v84 & 2) != 0 )
              goto LABEL_7;
          }
          while ( v84 != _InterlockedCompareExchange((volatile signed __int32 *)&v81[2].Next + 3, v84 | 2, v84) );
          v85 = v81->Next;
          v86 = 0;
          while ( 1 )
          {
            v87 = ((_BYTE)v86 + (unsigned __int8)*((_WORD *)&v85[10].Next + 7)) & 0xF;
            v88 = (volatile signed __int32 *)*((_QWORD *)&v85[1].Next + v87);
            v89 = (__int64)v85 + 8 * v87;
            if ( v88 )
            {
              if ( (v88[11] & 1) == 0
                && v88 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                       (volatile signed __int64 *)(v89 + 16),
                                                       (signed __int64)v81,
                                                       (signed __int64)v88) )
              {
                goto LABEL_184;
              }
            }
            else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v89 + 16), (signed __int64)v81, 0LL) )
            {
              goto LABEL_7;
            }
            if ( (unsigned int)++v86 >= 0x10 )
              goto LABEL_179;
          }
        }
      }
      continue;
    }
    break;
  }
  RtlpFreeUserBlock(SRWLock, UserBlockFromHeap);
  return 0LL;
}
