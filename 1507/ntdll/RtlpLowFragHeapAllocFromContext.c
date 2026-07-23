/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x18002F190
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180009460 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpFreeUserBlock @ 0x18002A230 (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x18002D980 (RtlpIsSubSegmentReuseable.c)
 *     RtlpSubSegmentInitialize @ 0x180032E50 (RtlpSubSegmentInitialize.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180035070 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800699E4 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18006AB38 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180072200 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800934F0 (RtlGetCurrentProcessorNumber.c)
 *     RtlpInterlockedPopEntrySList @ 0x180095560 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180095610 (InterlockedPushListSList.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x1800EF4F8 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x1800EF9C4 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1800EFA4C (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800EFB64 (RtlpLogHeapSubSegmentAllocCached.c)
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
  unsigned int v37; // ecx
  int v38; // r8d
  volatile signed __int64 *v39; // rax
  unsigned int v40; // r12d
  signed __int64 *v41; // rbx
  signed __int64 v42; // rdx
  _SLIST_HEADER *v43; // rbp
  _SLIST_HEADER *v44; // r12
  PSLIST_ENTRY v45; // rbx
  __int64 v46; // r12
  volatile signed __int64 *v47; // rcx
  signed __int64 v48; // rtt
  signed __int32 v49; // eax
  unsigned __int16 *v50; // r8
  signed __int32 v51; // eax
  unsigned __int16 *v52; // r9
  int v53; // r8d
  __int64 v54; // rax
  volatile signed __int32 *v55; // rdx
  unsigned __int16 *v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // rbx
  PSLIST_ENTRY v59; // rax
  _SLIST_HEADER *v60; // rdi
  unsigned int v61; // ebp
  __int64 v62; // rcx
  unsigned int v63; // r8d
  unsigned int v64; // r10d
  BOOL v65; // r9d
  unsigned __int64 v66; // rax
  char v67; // r11
  char v68; // cl
  char v69; // cl
  _SLIST_HEADER *v70; // r9
  unsigned int v71; // edx
  unsigned int v72; // ebx
  unsigned int v73; // edx
  _RTL_SRWLOCK *v74; // r12
  PSLIST_ENTRY v75; // rax
  PSLIST_ENTRY v76; // r10
  __int64 v77; // r8
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rbx
  unsigned int v80; // edx
  unsigned __int64 v81; // rax
  __int64 v82; // r12
  PSLIST_ENTRY v83; // rax
  _SLIST_ENTRY *v84; // rbx
  signed __int32 v85; // eax
  _SLIST_ENTRY *v86; // r8
  signed __int32 v87; // eax
  _SLIST_ENTRY *v88; // r9
  int v89; // r8d
  __int64 v90; // rax
  volatile signed __int32 *v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rcx
  int v94; // ebx
  ULONG CurrentProcessorNumber; // eax
  unsigned __int16 v96; // cx
  int v97; // ecx
  _SLIST_ENTRY *Next; // rcx
  char *v99; // r12
  unsigned __int32 Ptr_high; // eax
  unsigned __int32 v101; // eax
  __int64 v102; // rcx
  _SLIST_ENTRY *v103; // rdx
  __int64 v104; // rcx
  bool v105; // zf
  _SLIST_ENTRY *v106; // rcx
  unsigned __int16 *v107; // rax
  __int64 v108; // rcx
  unsigned __int16 v109; // cx
  unsigned __int16 v110; // ax
  bool v111; // cf
  signed __int32 v112; // eax
  unsigned __int16 *v113; // r9
  int v114; // r8d
  __int64 v115; // rax
  unsigned __int16 *v116; // rcx
  _SLIST_ENTRY *v117; // rdx
  __int64 v118; // rcx
  signed __int32 v119; // eax
  _SLIST_ENTRY *v120; // r9
  int v121; // r8d
  __int64 v122; // rax
  _SLIST_ENTRY **v123; // rcx
  signed __int32 v124; // eax
  _SLIST_ENTRY *v125; // r9
  int v126; // r8d
  __int64 v127; // rax
  __int64 **v128; // rdx
  _SLIST_ENTRY **v129; // rcx
  signed __int32 v130[8]; // [rsp+0h] [rbp-C8h] BYREF
  PSLIST_HEADER ListHead; // [rsp+30h] [rbp-98h]
  int v132; // [rsp+38h] [rbp-90h]
  volatile signed __int64 *v133; // [rsp+40h] [rbp-88h]
  signed __int64 v134; // [rsp+48h] [rbp-80h]
  signed __int64 v135; // [rsp+50h] [rbp-78h]
  signed __int64 v136; // [rsp+58h] [rbp-70h]
  PSLIST_HEADER v137; // [rsp+60h] [rbp-68h]
  __int64 v138; // [rsp+68h] [rbp-60h]
  int v139; // [rsp+70h] [rbp-58h]
  __int64 *v140; // [rsp+D0h] [rbp+8h]
  _SLIST_HEADER *v141; // [rsp+D0h] [rbp+8h]
  unsigned int v142; // [rsp+D0h] [rbp+8h]
  __int64 v143; // [rsp+D0h] [rbp+8h]
  __int64 UserBlockFromHeap; // [rsp+D0h] [rbp+8h]
  int v145; // [rsp+D8h] [rbp+10h]
  unsigned int v146; // [rsp+D8h] [rbp+10h]
  unsigned int v147; // [rsp+D8h] [rbp+10h]

  LODWORD(v5) = 0;
  v6 = (unsigned __int16 *)&SRWLock[84].Ptr + 2 * a2 + 2;
  if ( (*(_BYTE *)&SRWLock[84].0 & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    LODWORD(v5) = v7->HeapVirtualAffinity - 1;
    UniqueThread_low = LODWORD(v7->ClientId.UniqueThread);
    if ( (int)v5 < 0 || qword_180144368[(int)v5] != UniqueThread_low )
    {
      v94 = dword_180144364;
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v5 = v94 & CurrentProcessorNumber;
      v7->HeapVirtualAffinity = (v94 & CurrentProcessorNumber) + 1;
      qword_180144368[v5] = UniqueThread_low;
    }
  }
  v9 = *((unsigned __int8 *)v6 + 2);
  v10 = 16LL * *v6;
  v138 = v10;
  v137 = (PSLIST_HEADER)&SRWLock[6 * (unsigned int)v5 + 408];
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
        v133 = v14;
        if ( (v13 & 0x8000) != 0 )
        {
          v145 = 1;
          v99 = (char *)v14 + 4 * *(unsigned __int16 *)(Value + 172);
          if ( (v99[679] & 1) == 0 && (int)RtlpAffinitizeSegmentInfoForBucket(v14, (unsigned __int8)v99[678]) >= 0 )
          {
            v99[679] |= 1u;
            if ( MEMORY[0x7FFE0380] )
            {
              if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapAffinityManagerEnable(*((_QWORD *)v133 + 3), (unsigned __int8)v99[678]);
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
              goto LABEL_162;
            if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 32), v17 | 0x80000000, v17) )
              break;
          }
          if ( ++v16 > v15 )
            goto LABEL_162;
        }
        if ( v17 == -1 )
          goto LABEL_162;
        v18 = *(_QWORD *)(v12 + 8);
        if ( !v18 || *(_QWORD *)v12 != Value || !(_WORD)v17 )
        {
          *(_DWORD *)(v12 + 32) = v17;
          goto LABEL_162;
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
          v140 = &v24[(v23 - 1) >> 6];
          v24 += (unsigned __int64)(unsigned int)(v17 >> 16) >> 6;
          v25 = v24;
          do
          {
            if ( *v24 != -1 )
              break;
            v36 = *(__int64 **)(v18 + 40);
            if ( v24 != v140 )
              v36 = v24 + 1;
            v24 = v36;
          }
          while ( v36 != v25 );
          v10 = v138;
          if ( v24 == v140 )
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
        v139 = v29;
        *v24 = v30;
        v31 = v29 + ((unsigned int)(((__int64)v24 - *(_QWORD *)(v18 + 40)) >> 3) << 6);
        *(_DWORD *)(v12 + 32) = (v31 << 16) | ((unsigned __int16)v17 - 1);
        LODWORD(v29) = RtlpLFHKey ^ (unsigned int)v133 ^ v18 ^ *(_DWORD *)(v18 + 24);
        v32 = v18 + v31 * WORD1(v29) + (unsigned __int16)v29;
        if ( (*(_BYTE *)(v32 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL), v32, 0, 0LL, 0LL);
LABEL_162:
          v32 = 0LL;
        }
        if ( v145 && dword_180144364 + 1 < (unsigned int)RtlpAffinityState )
          _InterlockedCompareExchange(&dword_180144364, 2 * (dword_180144364 + 1) - 1, dword_180144364);
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
      ListHead = *(PSLIST_HEADER *)Value;
LABEL_45:
      v136 = 0LL;
      while ( 2 )
      {
        v37 = 0;
        v38 = Value + 16;
        v39 = 0LL;
        v146 = 0;
        v133 = 0LL;
        v40 = 0;
        v41 = (signed __int64 *)(Value + 16);
        do
        {
          v42 = *v41;
          v135 = v42;
          if ( !v42 )
            goto LABEL_48;
          v57 = *(unsigned __int16 *)(v42 + 32);
          v142 = v57;
          if ( v57 <= v37 )
          {
LABEL_75:
            v39 = v133;
            goto LABEL_48;
          }
          if ( (RtlpLowFragHeapGlobalFlags & 4) == 0 )
          {
            v96 = *(_WORD *)(Value + 172);
            if ( v96 <= 0x70u
              && *(_DWORD *)(Value + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v96] )
            {
              v109 = *(_WORD *)(v42 + 32);
              v110 = *(_WORD *)(v42 + 40) >> 2;
              v111 = v110 < v109;
              v105 = v110 == v109;
              v57 = v142;
              v37 = v146;
              v38 = !v111 && !v105;
              goto LABEL_79;
            }
            v37 = v146;
          }
          LOBYTE(v38) = 0;
LABEL_79:
          v132 = v38;
          if ( MEMORY[0x7FFE038A] || MEMORY[0x7FFE0380] && (v57 = v142, (NtCurrentPeb()->TracingFlags & 1) != 0) )
          {
            if ( !(_BYTE)v38 )
              goto LABEL_82;
            RtlpLogHeapReuseThresholdActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL),
              *(_QWORD *)(v42 + 8),
              *(unsigned __int16 *)(Value + 172));
            v42 = v135;
            v57 = v142;
            v38 = v132;
            v37 = v146;
          }
          if ( (_BYTE)v38 )
            goto LABEL_75;
LABEL_82:
          v37 = v57;
          v146 = v57;
          v136 = v42;
          v39 = (volatile signed __int64 *)(Value + 8LL * v40 + 16);
          v133 = v39;
LABEL_48:
          ++v40;
          ++v41;
        }
        while ( v40 < 0x10 );
        v43 = v137;
        if ( v39 )
        {
          v44 = (_SLIST_HEADER *)(*(_QWORD *)(ListHead[1].Region + 8LL * *(unsigned __int16 *)(Value + 172) + 1192)
                                + 144LL);
          v141 = v44;
          v45 = RtlpInterlockedPopEntrySList(v44);
          if ( v45 )
          {
            while ( 1 )
            {
              v97 = *((_DWORD *)&v45[-1].Next + 3);
              v45 -= 3;
              if ( (v97 & 1) != 0 )
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
                goto LABEL_51;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v45, Value) )
            {
              RtlpInterlockedPushEntrySList(v44, &v45[3]);
              v45 = 0LL;
            }
          }
LABEL_51:
          v46 = v136;
          v47 = v133;
          v48 = v136;
          if ( v48 != _InterlockedCompareExchange64(v133, (signed __int64)v45, v136) )
          {
            if ( v45 )
              RtlpInterlockedPushEntrySList(v141, &v45[3]);
            continue;
          }
          if ( !v45 )
            *(_WORD *)(Value + 174) = (unsigned __int8)((__int64)((__int64)v47 - Value - 16) >> 3);
          if ( v46 )
          {
            _m_prefetchw((const void *)(v46 + 44));
            if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFFD) != 2 )
              goto LABEL_56;
            v104 = **(_QWORD **)v46;
            *(_QWORD *)v46 = 0LL;
            RtlpInterlockedPushEntrySList(v104, v46 + 48);
            goto LABEL_45;
          }
        }
        else
        {
          v46 = 0LL;
        }
        break;
      }
      v58 = 0LL;
      v143 = 0LL;
      ListHead = (PSLIST_HEADER)(*(_QWORD *)(ListHead[1].Region + 8LL * *(unsigned __int16 *)(Value + 172) + 1192)
                               + 144LL);
      v59 = RtlpInterlockedPopEntrySList(ListHead);
      if ( !v59 )
        goto LABEL_56;
      v60 = ListHead;
      v61 = 0;
      while ( 2 )
      {
        v46 = (__int64)&v59[-3];
        if ( (*((_DWORD *)&v59[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((const void *)(v46 + 44));
          if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFFD) == 2 )
            goto LABEL_88;
          goto LABEL_89;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo(v46, Value) )
        {
          if ( !v61 )
            v143 = v46 + 48;
          *(_QWORD *)(v46 + 48) = v58;
          ++v61;
          v58 = v46 + 48;
          goto LABEL_89;
        }
        _m_prefetchw((const void *)(v46 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFFD) == 2 )
        {
LABEL_88:
          v62 = **(_QWORD **)v46;
          *(_QWORD *)v46 = 0LL;
          RtlpInterlockedPushEntrySList(v62, v46 + 48);
          goto LABEL_89;
        }
        if ( !RtlpIsSubSegmentReuseable(Value, v46) )
        {
LABEL_89:
          v46 = 0LL;
          v59 = RtlpInterlockedPopEntrySList(v60);
          if ( !v59 )
            break;
          continue;
        }
        break;
      }
      v10 = v138;
      v105 = v61 == 0;
      v147 = v61;
      v43 = v137;
      if ( !v105 )
        InterlockedPushListSList(ListHead, v58, v143, v147);
LABEL_56:
      if ( v46 )
      {
        *(_BYTE *)(v46 + 43) = v5;
        do
        {
          v49 = *(_DWORD *)(v46 + 44);
          if ( !v49 || (v49 & 6) != 0 )
            goto LABEL_7;
        }
        while ( v49 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v49 | 6, v49) );
        v50 = *(unsigned __int16 **)v46;
        if ( *(_QWORD *)v46 != Value )
        {
          _m_prefetchw((const void *)(v46 + 44));
          if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFF9) != 6 )
          {
            if ( !RtlpIsSubSegmentReuseable((__int64)v50, v46) )
              continue;
            do
            {
              v112 = *(_DWORD *)(v46 + 44);
              if ( !v112 || (v112 & 2) != 0 )
                goto LABEL_7;
            }
            while ( v112 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v112 | 2, v112) );
            v113 = *(unsigned __int16 **)v46;
            v114 = 0;
            while ( 1 )
            {
              v115 = ((_BYTE)v114 + (unsigned __int8)v113[87]) & 0xF;
              v55 = *(volatile signed __int32 **)&v113[4 * v115 + 8];
              v116 = &v113[4 * v115];
              if ( v55 )
              {
                if ( (v55[11] & 1) == 0
                  && v55 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                         (volatile signed __int64 *)v116 + 2,
                                                         v46,
                                                         (signed __int64)v55) )
                {
LABEL_202:
                  _m_prefetchw((const void *)(v55 + 11));
                  if ( _InterlockedAnd(v55 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v108 = **(_QWORD **)v55;
                    *(_QWORD *)v55 = 0LL;
                    RtlpInterlockedPushEntrySList(v108, v55 + 12);
                  }
                  goto LABEL_7;
                }
              }
              else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v116 + 2, v46, 0LL) )
              {
                goto LABEL_7;
              }
              if ( (unsigned int)++v114 >= 0x10 )
              {
LABEL_199:
                v107 = *(unsigned __int16 **)v46;
                v103 = (_SLIST_ENTRY *)(v46 + 48);
                goto LABEL_200;
              }
            }
          }
LABEL_147:
          v93 = **(_QWORD **)v46;
          *(_QWORD *)v46 = 0LL;
          RtlpInterlockedPushEntrySList(v93, v46 + 48);
          continue;
        }
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL), *(_QWORD *)(v46 + 8));
        v46 = _InterlockedExchange64((volatile __int64 *)(Value + 8), v46);
        if ( !v46 )
          continue;
        _m_prefetchw((const void *)(v46 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFF9) == 6 )
          goto LABEL_147;
        if ( *(_WORD *)(v46 + 32) && !RtlpIsSubSegmentReuseThresholdExceeded(Value, v46) )
        {
          while ( 1 )
          {
            v51 = *(_DWORD *)(v46 + 44);
            if ( !v51 || (v51 & 2) != 0 )
              break;
            if ( v51 == _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v51 | 2, v51) )
            {
              v52 = *(unsigned __int16 **)v46;
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
                                                           v46,
                                                           (signed __int64)v55) )
                  {
                    goto LABEL_202;
                  }
                }
                else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v56 + 2, v46, 0LL) )
                {
                  goto LABEL_7;
                }
                if ( (unsigned int)++v53 >= 0x10 )
                  goto LABEL_199;
              }
            }
          }
        }
        continue;
      }
      break;
    }
    v63 = *(_DWORD *)(Value + 160);
    v64 = *((unsigned __int8 *)v6 + 2);
    v65 = (*(_BYTE *)&SRWLock[84].0 & 2) != 0;
    do
    {
      v66 = SRWLock[10].Value;
      v67 = 0;
      if ( (_DWORD)v66 == v64 )
      {
        HIDWORD(v134) = HIDWORD(v66) + 1;
        if ( HIDWORD(v66) > 7 )
        {
          v67 = 1;
          HIDWORD(v134) = 0;
        }
      }
      else
      {
        v134 = v64 | 0x100000000LL;
      }
    }
    while ( v66 != _InterlockedCompareExchange64((volatile signed __int64 *)&SRWLock[10], v134, v66) );
    if ( !v67 || v65 )
    {
      v68 = 3;
      if ( v65 )
        v68 = 4;
      v63 >>= v68;
    }
    v69 = *((_BYTE *)v6 + 3) & 1;
    v70 = (_SLIST_HEADER *)(unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)];
    if ( (unsigned int)v70 < 0x100 )
      --v69;
    if ( *(_DWORD *)(Value + 164) )
      --v69;
    v71 = v63;
    if ( v63 < 1 << (3 - v69) )
      v71 = 1 << (3 - v69);
    if ( v71 < 4 )
    {
      v71 = 4;
    }
    else if ( v71 > 0x400 )
    {
      v71 = 1024;
    }
    v72 = 7;
    v73 = ((((unsigned __int64)v71 + 31) >> 3) & 0xFFFFFFFC) + ((_DWORD)v70 + 16) * v71 + 68;
    if ( v73 > 0xF0000 )
      v73 = 983040;
    if ( (v73 & 0xFFFFFF80) != 0 )
    {
      do
        ++v72;
      while ( v73 >> v72 );
      if ( v72 > 0x12 )
        LOBYTE(v72) = 18;
    }
    if ( (*((_BYTE *)v6 + 3) & 6) != 0 )
      LOBYTE(v72) = 18;
    ListHead = v70 + 1;
    v135 = (unsigned __int8)v72 - 7;
    v74 = &SRWLock[6 * v135 + 12];
    ++WORD2(v74[3].Ptr);
    v75 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v74);
    v76 = v75;
    if ( v75 )
    {
      ++*(_WORD *)&v74[4].0;
      goto LABEL_118;
    }
    if ( (unsigned __int8)v72 > 7u
      && (v75 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&SRWLock[6 * (unsigned __int8)v72 - 36]), (v76 = v75) != 0LL) )
    {
LABEL_118:
      v77 = (__int64)v75;
      UserBlockFromHeap = (__int64)v75;
      v78 = 1LL << LOBYTE(v76[1].Next);
      if ( v78 > 0xF0000 )
        v78 = 983040LL;
      v79 = v78 + WORD1(v76[1].Next);
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapSubSegmentAllocCached(SRWLock[3].Value, v76, v79, ListHead);
        v77 = UserBlockFromHeap;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)&SRWLock[9], -(__int64)v79);
    }
    else
    {
      UserBlockFromHeap = RtlpAllocateUserBlockFromHeap(SRWLock[3].Ptr);
      v77 = UserBlockFromHeap;
      if ( UserBlockFromHeap )
        _InterlockedIncrement((volatile signed __int32 *)&SRWLock[6 * v135 + 14]);
    }
    v80 = WORD2(v74[3].Ptr);
    if ( v80 > 0x40 )
    {
      if ( v80 < HIWORD(v74[3].Ptr) + (HIWORD(v74[3].Ptr) >> 1) && LOWORD(v74[4].Value) < v80 - (v80 >> 1) )
      {
        Ptr_high = HIDWORD(v74[2].Ptr);
        if ( Ptr_high < 2 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)&v74[2].Ptr + 1, Ptr_high + 1, Ptr_high);
        }
        else
        {
          v101 = v74[3].Value;
          if ( v101 > 2 )
            _InterlockedCompareExchange((volatile signed __int32 *)&v74[3], v101 - 1, v101);
        }
      }
      WORD2(v74[3].Ptr) = 0;
      HIWORD(v74[3].Ptr) = 0;
      *(_WORD *)&v74[4].0 = 0;
    }
    if ( !v77 )
      return 0LL;
    v81 = 1LL << *(_BYTE *)(v77 + 16);
    if ( v81 > 0xF0000 )
      v81 = 983040LL;
    v82 = v81 + *(unsigned __int16 *)(v77 + 18);
    _InterlockedIncrement((volatile signed __int32 *)&SRWLock[7]);
    v83 = RtlpInterlockedPopEntrySList(v43);
    if ( v83 )
    {
      v84 = v83 - 3;
      goto LABEL_128;
    }
    v84 = (_SLIST_ENTRY *)RtlpLowFragHeapAllocateFromZone(SRWLock);
    if ( v84 )
    {
      *((_QWORD *)&v84->Next + 1) = 0LL;
LABEL_128:
      if ( !v84 )
        break;
      *((_BYTE *)&v84[2].Next + 11) = v5;
      RtlpSubSegmentInitialize(
        (_DWORD)SRWLock,
        (_DWORD)v84,
        UserBlockFromHeap,
        (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v6 + 2)],
        v82,
        (__int64)v6);
      _InterlockedOr(v130, 0);
      *(_DWORD *)(UserBlockFromHeap + 20) = -253701952;
      do
      {
        v85 = *((_DWORD *)&v84[2].Next + 3);
        if ( !v85 || (v85 & 6) != 0 )
          goto LABEL_239;
      }
      while ( v85 != _InterlockedCompareExchange((volatile signed __int32 *)&v84[2].Next + 3, v85 | 6, v85) );
      v86 = v84->Next;
      if ( v84->Next != (_SLIST_ENTRY *)Value )
      {
        _m_prefetchw((char *)&v84[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v84[2].Next + 3, 0xFFFFFFF9) == 6 )
        {
          v117 = v84 + 3;
          v118 = (__int64)v84->Next->Next;
          v84->Next = 0LL;
          goto LABEL_238;
        }
        if ( !RtlpIsSubSegmentReuseable((__int64)v86, (__int64)v84) )
          goto LABEL_239;
        do
        {
          v124 = *((_DWORD *)&v84[2].Next + 3);
          if ( !v124 || (v124 & 2) != 0 )
            goto LABEL_239;
        }
        while ( v124 != _InterlockedCompareExchange((volatile signed __int32 *)&v84[2].Next + 3, v124 | 2, v124) );
        v125 = v84->Next;
        v126 = 0;
        while ( 1 )
        {
          v127 = ((_BYTE)v126 + (unsigned __int8)*((_WORD *)&v125[10].Next + 7)) & 0xF;
          v128 = (__int64 **)*((_QWORD *)&v125[1].Next + v127);
          v129 = &v125->Next + v127;
          if ( v128 )
          {
            if ( (*((_DWORD *)v128 + 11) & 1) == 0
              && v128 == (__int64 **)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)v129 + 2,
                                       (signed __int64)v84,
                                       (signed __int64)v128) )
            {
              _m_prefetchw((char *)v128 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v128 + 11, 0xFFFFFFFD) == 2 )
              {
                v118 = **v128;
                *v128 = 0LL;
                v117 = (_SLIST_ENTRY *)(v128 + 6);
LABEL_238:
                RtlpInterlockedPushEntrySList(v118, v117);
              }
              do
              {
LABEL_239:
                v119 = *((_DWORD *)&v84[2].Next + 3);
                if ( !v119 || (v119 & 2) != 0 )
                  goto LABEL_7;
              }
              while ( v119 != _InterlockedCompareExchange((volatile signed __int32 *)&v84[2].Next + 3, v119 | 2, v119) );
              v120 = v84->Next;
              v121 = 0;
              while ( 1 )
              {
                v122 = ((_BYTE)v121 + (unsigned __int8)*((_WORD *)&v120[10].Next + 7)) & 0xF;
                v91 = (volatile signed __int32 *)*((_QWORD *)&v120[1].Next + v122);
                v123 = &v120->Next + v122;
                if ( v91 )
                {
                  if ( (v91[11] & 1) == 0
                    && v91 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                           (volatile signed __int64 *)v123 + 2,
                                                           (signed __int64)v84,
                                                           (signed __int64)v91) )
                  {
LABEL_184:
                    _m_prefetchw((const void *)(v91 + 11));
                    if ( _InterlockedAnd(v91 + 11, 0xFFFFFFFD) != 2 )
                      goto LABEL_7;
                    v102 = **(_QWORD **)v91;
                    *(_QWORD *)v91 = 0LL;
                    v103 = (_SLIST_ENTRY *)(v91 + 12);
                    goto LABEL_186;
                  }
                }
                else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v123 + 2, (signed __int64)v84, 0LL) )
                {
                  goto LABEL_7;
                }
                if ( (unsigned int)++v121 >= 0x10 )
                {
LABEL_246:
                  v107 = (unsigned __int16 *)v84->Next;
                  v103 = v84 + 3;
LABEL_200:
                  v102 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v107 + 24LL) + 8LL * v107[86] + 1192) + 144LL;
LABEL_186:
                  RtlpInterlockedPushEntrySList(v102, v103);
                  goto LABEL_7;
                }
              }
            }
          }
          else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v129 + 2, (signed __int64)v84, 0LL) )
          {
            goto LABEL_239;
          }
          if ( (unsigned int)++v126 >= 0x10 )
          {
            v117 = v84 + 3;
            v118 = *(_QWORD *)(*((_QWORD *)&v84->Next->Next[1].Next + 1)
                             + 8LL * *((unsigned __int16 *)&v84->Next[10].Next + 6)
                             + 1192)
                 + 144LL;
            goto LABEL_238;
          }
        }
      }
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Value + 24LL) + 24LL),
          *((_QWORD *)&v84->Next + 1));
      v84 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(Value + 8), (__int64)v84);
      if ( v84 )
      {
        _m_prefetchw((char *)&v84[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v84[2].Next + 3, 0xFFFFFFF9) == 6 )
        {
          v106 = v84->Next->Next;
          v84->Next = 0LL;
          RtlpInterlockedPushEntrySList(v106, &v84[3]);
          continue;
        }
        if ( LOWORD(v84[2].Next) && !RtlpIsSubSegmentReuseThresholdExceeded(Value, (__int64)v84) )
        {
          do
          {
            v87 = *((_DWORD *)&v84[2].Next + 3);
            if ( !v87 || (v87 & 2) != 0 )
              goto LABEL_7;
          }
          while ( v87 != _InterlockedCompareExchange((volatile signed __int32 *)&v84[2].Next + 3, v87 | 2, v87) );
          v88 = v84->Next;
          v89 = 0;
          while ( 1 )
          {
            v90 = ((_BYTE)v89 + (unsigned __int8)*((_WORD *)&v88[10].Next + 7)) & 0xF;
            v91 = (volatile signed __int32 *)*((_QWORD *)&v88[1].Next + v90);
            v92 = (__int64)v88 + 8 * v90;
            if ( v91 )
            {
              if ( (v91[11] & 1) == 0
                && v91 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                       (volatile signed __int64 *)(v92 + 16),
                                                       (signed __int64)v84,
                                                       (signed __int64)v91) )
              {
                goto LABEL_184;
              }
            }
            else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v92 + 16), (signed __int64)v84, 0LL) )
            {
              goto LABEL_7;
            }
            if ( (unsigned int)++v89 >= 0x10 )
              goto LABEL_246;
          }
        }
      }
      continue;
    }
    break;
  }
  RtlpFreeUserBlock((__int64)SRWLock, (__int64 *)UserBlockFromHeap);
  return 0LL;
}
