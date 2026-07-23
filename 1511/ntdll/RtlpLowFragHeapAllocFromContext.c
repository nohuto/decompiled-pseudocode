/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x180025DE0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x1800238C0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x180023AD4 (RtlpFreeUserBlock.c)
 *     RtlpSubSegmentInitialize @ 0x180029DF0 (RtlpSubSegmentInitialize.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18002F12C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18004F2A0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x18004F5A8 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x18007522C (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpSetSegmentInfo @ 0x18007E968 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4CB0 (RtlGetCurrentProcessorNumber.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A88F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A8930 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A89A0 (InterlockedPushListSList.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x1800F1450 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x1800F191C (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1800F19A4 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800F1ABC (RtlpLogHeapSubSegmentAllocCached.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  bool v4; // zf
  __int64 v6; // r14
  unsigned __int16 *v7; // r15
  struct _TEB *v8; // rsi
  __int64 UniqueThread_low; // rdi
  int v10; // ebx
  ULONG CurrentProcessorNumber; // eax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbx
  int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rdi
  unsigned int v18; // r9d
  int v19; // r8d
  signed __int32 v20; // edx
  __int64 v21; // r11
  struct _TEB *v22; // rcx
  __int64 LowFragHeapDataSlot; // r8
  unsigned __int64 v24; // r10
  int v25; // r14d
  unsigned __int64 v26; // rdi
  __int64 *v27; // r9
  __int64 v28; // r8
  __int64 *v29; // rsi
  __int64 *v30; // rax
  unsigned int v31; // edi
  unsigned int v32; // r14d
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // rbx
  volatile signed __int32 *v39; // r14
  unsigned int v40; // r13d
  volatile signed __int64 *v41; // r12
  unsigned int v42; // esi
  __int64 *v43; // r15
  __int64 v44; // rdi
  unsigned int v45; // r12d
  unsigned __int16 v46; // ax
  bool v47; // bl
  _SLIST_HEADER *v48; // rdi
  PSLIST_ENTRY v49; // rbx
  int v50; // eax
  _SLIST_ENTRY *Next; // rcx
  __int64 v52; // rcx
  unsigned int v53; // edi
  _QWORD *v54; // rbx
  _QWORD **v55; // r15
  _SLIST_HEADER *v56; // rsi
  PSLIST_ENTRY v57; // rax
  __int64 v58; // rcx
  signed __int32 v59; // eax
  unsigned __int16 *v60; // r8
  signed __int32 v61; // eax
  unsigned __int16 *v62; // r9
  int v63; // r8d
  __int64 v64; // rax
  __int64 **v65; // rdx
  unsigned __int16 *v66; // rcx
  unsigned __int16 *v67; // rax
  _QWORD *v68; // rdx
  _QWORD **v69; // rdx
  __int64 v70; // rcx
  signed __int32 v71; // eax
  unsigned __int16 *v72; // r9
  int v73; // r8d
  __int64 v74; // rax
  unsigned __int16 *v75; // rcx
  unsigned __int16 *v76; // rdi
  unsigned int v77; // r11d
  unsigned int v78; // r9d
  int v79; // r10d
  signed __int64 v80; // rax
  char v81; // r8
  char v82; // cl
  char v83; // cl
  unsigned int v84; // r8d
  unsigned int v85; // edx
  unsigned int v86; // ebx
  unsigned int v87; // edx
  __int64 v88; // r14
  __int64 v89; // r15
  __int64 v90; // rdi
  PSLIST_ENTRY v91; // r10
  unsigned __int64 v92; // rax
  __int64 UserBlockFromHeap; // rsi
  unsigned __int64 v94; // rbx
  unsigned int v95; // edx
  unsigned __int32 v96; // eax
  unsigned __int32 v97; // eax
  unsigned __int64 v98; // rax
  __int64 v99; // rdi
  PSLIST_ENTRY v100; // rax
  __int64 v101; // rax
  _QWORD *p_Next; // rbx
  __int64 v103; // r15
  signed __int32 v104; // eax
  _QWORD *v105; // r8
  _QWORD *v106; // rdx
  __int64 v107; // rcx
  signed __int32 v108; // eax
  _QWORD *v109; // r9
  unsigned int i; // r8d
  __int64 v111; // rax
  __int64 **v112; // rdx
  _QWORD *v113; // rcx
  signed __int32 v114; // eax
  _QWORD *v115; // r9
  int v116; // r8d
  __int64 v117; // rax
  __int64 **v118; // rdx
  _QWORD *v119; // rcx
  signed __int64 v120; // rbx
  signed __int32 v121; // eax
  signed __int32 v122; // ett
  __int64 v123; // rcx
  signed __int32 v124; // eax
  unsigned __int16 *v125; // r9
  unsigned int j; // r8d
  __int64 v127; // rax
  unsigned __int16 *v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 result; // rax
  signed __int32 v132[14]; // [rsp+0h] [rbp-B8h] BYREF
  volatile signed __int64 *v133; // [rsp+38h] [rbp-80h]
  signed __int64 v134; // [rsp+40h] [rbp-78h]
  unsigned __int16 *v135; // [rsp+48h] [rbp-70h]
  __int64 v136; // [rsp+50h] [rbp-68h]
  __int64 v137; // [rsp+58h] [rbp-60h]
  PSLIST_HEADER ListHead; // [rsp+60h] [rbp-58h]
  char v140; // [rsp+C8h] [rbp+10h]

  v140 = 0;
  v4 = (*(_BYTE *)(a1 + 672) & 1) == 0;
  LODWORD(v6) = 0;
  v7 = (unsigned __int16 *)(a1 + 4 * (a2 + 169LL));
  v135 = v7;
  if ( v4 && (*((_BYTE *)v7 + 3) & 1) != 0 )
  {
    v8 = NtCurrentTeb();
    UniqueThread_low = LODWORD(v8->ClientId.UniqueThread);
    LODWORD(v6) = v8->HeapVirtualAffinity - 1;
    v140 = v8->HeapVirtualAffinity - 1;
    if ( (int)v6 < 0 || qword_1801433A8[(int)v6] != UniqueThread_low )
    {
      v10 = dword_1801433A4;
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v6 = v10 & CurrentProcessorNumber;
      v140 = v10 & CurrentProcessorNumber;
      v8->HeapVirtualAffinity = (v10 & CurrentProcessorNumber) + 1;
      qword_1801433A8[v6] = UniqueThread_low;
    }
  }
  ListHead = (PSLIST_HEADER)(a1 + 48 * ((unsigned int)v6 + 68LL));
  v137 = 16LL * *v7;
  v12 = *((unsigned __int8 *)v7 + 2);
  if ( (_DWORD)v6 )
    v13 = *(_QWORD *)(a1 + 8 * v12 + 2224) - 192LL + 192LL * (unsigned int)v6;
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
LABEL_9:
  while ( 2 )
  {
    while ( 2 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
      {
        v15 = 0;
        v16 = *(_QWORD *)(*(_QWORD *)v13 + 24LL);
        if ( (*(_DWORD *)(v14 + 32) & 0x80000000) != 0 )
        {
          v15 = 1;
          v17 = v16 + 4LL * *(unsigned __int16 *)(v13 + 172);
          if ( (*(_BYTE *)(v17 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(
                      *(_QWORD *)(*(_QWORD *)v13 + 24LL),
                      *(unsigned __int8 *)(v17 + 678)) >= 0 )
          {
            *(_BYTE *)(v17 + 679) |= 1u;
            if ( MEMORY[0x7FFE0380] )
            {
              if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v16 + 24), *(unsigned __int8 *)(v17 + 678));
            }
          }
        }
        v18 = 100;
        v19 = 0;
        if ( MEMORY[0x7FFE036A] <= 1u )
          v18 = 0;
        while ( 1 )
        {
          v20 = *(_DWORD *)(v14 + 32);
          if ( (v20 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v20 )
              goto LABEL_46;
            if ( v20 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 32), v20 | 0x80000000, v20) )
              break;
          }
          if ( ++v19 > v18 )
            goto LABEL_46;
        }
        if ( v20 == -1 )
          goto LABEL_46;
        v21 = *(_QWORD *)(v14 + 8);
        if ( !v21 || *(_QWORD *)v14 != v13 || !(_WORD)v20 )
        {
          *(_DWORD *)(v14 + 32) = v20;
          goto LABEL_46;
        }
        v22 = NtCurrentTeb();
        LowFragHeapDataSlot = v22->LowFragHeapDataSlot;
        v24 = RtlpSearchWidth[*(unsigned __int16 *)(v13 + 172)];
        v25 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
        v22->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
        v26 = *(_QWORD *)(v21 + 32);
        if ( v26 >= 0x40 )
        {
          v28 = *(_QWORD *)(v21 + 40);
          v29 = (__int64 *)(v28 + 8 * ((v26 - 1) >> 6));
          v27 = (__int64 *)(v28 + 8 * ((unsigned __int64)(unsigned int)(v20 >> 16) >> 6));
          do
          {
            if ( *v27 != -1 )
              break;
            v30 = *(__int64 **)(v21 + 40);
            if ( v27 != v29 )
              v30 = v27 + 1;
            v27 = v30;
          }
          while ( v30 != (__int64 *)(v28 + 8 * ((unsigned __int64)(unsigned int)(v20 >> 16) >> 6)) );
          if ( v27 == v29 )
          {
            v31 = v26 & 0x3F;
            if ( v31 )
            {
              if ( v31 < v24 )
                LODWORD(v24) = *(_DWORD *)(v21 + 32) & 0x3F;
            }
          }
        }
        else
        {
          v27 = *(__int64 **)(v21 + 40);
          if ( v26 < v24 )
            LODWORD(v24) = *(_QWORD *)(v21 + 32);
        }
        v32 = (unsigned int)(v24 * v25) >> 7;
        if ( (unsigned int)v24 >= 0x40 )
        {
          v34 = -1LL;
        }
        else
        {
          _BitScanForward64(&v33, ~*v27);
          LOBYTE(v32) = v33 + v32;
          v34 = ((1LL << v24) - 1) << v33;
        }
        _BitScanForward64(&v35, ~__ROR8__(*v27 | ~v34, v32));
        LODWORD(v35) = ((_BYTE)v32 + (_BYTE)v35) & 0x3F;
        v36 = *v27 | (1LL << v35);
        v132[12] = v35;
        *v27 = v36;
        v37 = v35 + ((unsigned int)(((__int64)v27 - *(_QWORD *)(v21 + 40)) >> 3) << 6);
        *(_DWORD *)(v14 + 32) = (v37 << 16) | ((unsigned __int16)v20 - 1);
        LODWORD(v35) = RtlpLFHKey ^ v16 ^ v21 ^ *(_DWORD *)(v21 + 24);
        v38 = v21 + v37 * WORD1(v35) + (unsigned __int16)v35;
        if ( (*(_BYTE *)(v38 + 15) & 0x3F) != 0 )
        {
          RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 24LL) + 24LL), v38, 0, 0LL, 0LL);
LABEL_46:
          v38 = 0LL;
        }
        if ( v15 && dword_1801433A4 + 1 < (unsigned int)RtlpAffinityState )
          _InterlockedCompareExchange(&dword_1801433A4, 2 * (dword_1801433A4 + 1) - 1, dword_1801433A4);
        if ( v38 )
        {
          if ( (a4 & 8) != 0 )
            memset((void *)(v38 + 16), 0, v137 - 8);
          v130 = v137 - a3;
          if ( (unsigned __int64)(v137 - a3) >= 0x3F )
          {
            *(_QWORD *)(v38 + 16LL * *v135) = v130;
            result = v38 + 16;
            *(_BYTE *)(v38 + 15) = -65;
          }
          else
          {
            result = v38 + 16;
            *(_BYTE *)(v38 + 15) = v130 | 0x80;
          }
          return result;
        }
      }
      v136 = *(_QWORD *)v13;
LABEL_52:
      v39 = 0LL;
      while ( 2 )
      {
        v133 = 0LL;
        v40 = 0;
        v41 = 0LL;
        v42 = 0;
        v43 = (__int64 *)(v13 + 16);
        do
        {
          v44 = *v43;
          if ( !*v43 )
            goto LABEL_69;
          v45 = *(unsigned __int16 *)(v44 + 32);
          if ( v45 > v40 )
          {
            v47 = (RtlpLowFragHeapGlobalFlags & 4) == 0
               && (v46 = *(_WORD *)(v13 + 172), v46 <= 0x70u)
               && *(_DWORD *)(v13 + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v46]
               && (unsigned int)(*(_WORD *)(v44 + 40) >> 2) > *(_WORD *)(v44 + 32);
            if ( MEMORY[0x7FFE038A] || MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            {
              if ( !v47 )
                goto LABEL_67;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 24LL) + 24LL),
                *(_QWORD *)(v44 + 8),
                *(unsigned __int16 *)(v13 + 172));
            }
            if ( !v47 )
            {
LABEL_67:
              v40 = v45;
              v39 = (volatile signed __int32 *)v44;
              v41 = (volatile signed __int64 *)(v13 + 8LL * v42 + 16);
              v133 = v41;
              goto LABEL_69;
            }
          }
          v41 = v133;
LABEL_69:
          ++v42;
          ++v43;
        }
        while ( v42 < 0x10 );
        if ( v41 )
        {
          v48 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v136 + 24) + 8LL * *(unsigned __int16 *)(v13 + 172) + 1192)
                                + 144LL);
          v49 = RtlpInterlockedPopEntrySList(v48);
          if ( v49 )
          {
            while ( 1 )
            {
              v50 = *((_DWORD *)&v49[-1].Next + 3);
              v49 -= 3;
              if ( (v50 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v49[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v49[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                Next = v49->Next->Next;
                v49->Next = 0LL;
                RtlpInterlockedPushEntrySList(Next, &v49[3]);
              }
              v49 = RtlpInterlockedPopEntrySList(v48);
              if ( !v49 )
                goto LABEL_76;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v49, v13) )
            {
              RtlpInterlockedPushEntrySList(v48, &v49[3]);
              v49 = 0LL;
            }
          }
LABEL_76:
          if ( v39 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v41,
                                                   (signed __int64)v49,
                                                   (signed __int64)v39) )
          {
            if ( v49 )
              RtlpInterlockedPushEntrySList(v48, &v49[3]);
            continue;
          }
          if ( !v49 )
            *(_WORD *)(v13 + 174) = (unsigned __int8)(((__int64)v41 - v13 - 16) >> 3);
          if ( v39 )
          {
            _m_prefetchw((const void *)(v39 + 11));
            if ( _InterlockedAnd(v39 + 11, 0xFFFFFFFD) != 2 )
              goto LABEL_101;
            v52 = **(_QWORD **)v39;
            *(_QWORD *)v39 = 0LL;
            RtlpInterlockedPushEntrySList(v52, v39 + 12);
            goto LABEL_52;
          }
        }
        else
        {
          v39 = 0LL;
        }
        break;
      }
      v53 = 0;
      v54 = 0LL;
      v55 = 0LL;
      v56 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v136 + 24) + 8LL * *(unsigned __int16 *)(v13 + 172) + 1192) + 144LL);
      v57 = RtlpInterlockedPopEntrySList(v56);
      if ( !v57 )
        goto LABEL_101;
      while ( 2 )
      {
        v39 = (volatile signed __int32 *)&v57[-3];
        if ( (*((_DWORD *)&v57[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((const void *)(v39 + 11));
          if ( _InterlockedAnd(v39 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_98;
LABEL_97:
          v58 = **(_QWORD **)v39;
          *(_QWORD *)v39 = 0LL;
          RtlpInterlockedPushEntrySList(v58, v39 + 12);
          goto LABEL_98;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo(v39, v13) )
        {
          if ( !v53 )
            v55 = (_QWORD **)(v39 + 12);
          *((_QWORD *)v39 + 6) = v54;
          ++v53;
          v54 = v39 + 12;
          goto LABEL_98;
        }
        _m_prefetchw((const void *)(v39 + 11));
        if ( _InterlockedAnd(v39 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_97;
        if ( RtlpIsSubSegmentReuseable(v13, (__int64)v39) )
          break;
LABEL_98:
        v39 = 0LL;
        v57 = RtlpInterlockedPopEntrySList(v56);
        if ( v57 )
          continue;
        break;
      }
      if ( v53 )
        InterlockedPushListSList(v56, v54, v55, v53);
LABEL_101:
      if ( v39 )
      {
        *((_BYTE *)v39 + 43) = v140;
        do
        {
          v59 = *((_DWORD *)v39 + 11);
          if ( !v59 || (v59 & 6) != 0 )
            goto LABEL_9;
        }
        while ( v59 != _InterlockedCompareExchange(v39 + 11, v59 | 6, v59) );
        v60 = *(unsigned __int16 **)v39;
        if ( *(_QWORD *)v39 != v13 )
        {
          _m_prefetchw((const void *)(v39 + 11));
          if ( _InterlockedAnd(v39 + 11, 0xFFFFFFF9) == 6 )
            goto LABEL_127;
          if ( RtlpIsSubSegmentReuseable((__int64)v60, (__int64)v39) )
          {
            while ( 1 )
            {
              v61 = *((_DWORD *)v39 + 11);
              if ( !v61 || (v61 & 2) != 0 )
                break;
              if ( v61 == _InterlockedCompareExchange(v39 + 11, v61 | 2, v61) )
              {
                v62 = *(unsigned __int16 **)v39;
                v63 = 0;
                while ( 1 )
                {
                  v64 = ((_BYTE)v63 + (unsigned __int8)v62[87]) & 0xF;
                  v65 = *(__int64 ***)&v62[4 * v64 + 8];
                  v66 = &v62[4 * v64];
                  if ( v65 )
                  {
                    if ( (*((_DWORD *)v65 + 11) & 1) == 0
                      && v65 == (__int64 **)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)v66 + 2,
                                              (signed __int64)v39,
                                              (signed __int64)v65) )
                    {
                      goto LABEL_142;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v66 + 2, (signed __int64)v39, 0LL) )
                  {
                    goto LABEL_9;
                  }
                  if ( (unsigned int)++v63 >= 0x10 )
                    goto LABEL_119;
                }
              }
            }
          }
          continue;
        }
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 24LL) + 24LL), *((_QWORD *)v39 + 1));
        v39 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v13 + 8), (__int64)v39);
        if ( !v39 )
          continue;
        _m_prefetchw((const void *)(v39 + 11));
        if ( _InterlockedAnd(v39 + 11, 0xFFFFFFF9) == 6 )
        {
LABEL_127:
          v69 = (_QWORD **)(v39 + 12);
          v70 = **(_QWORD **)v39;
          *(_QWORD *)v39 = 0LL;
          goto LABEL_128;
        }
        if ( !*((_WORD *)v39 + 16) || (unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(v13, v39) )
          continue;
        do
        {
          v71 = *((_DWORD *)v39 + 11);
          if ( !v71 || (v71 & 2) != 0 )
            goto LABEL_9;
        }
        while ( v71 != _InterlockedCompareExchange(v39 + 11, v71 | 2, v71) );
        v72 = *(unsigned __int16 **)v39;
        v73 = 0;
        while ( 1 )
        {
          v74 = ((_BYTE)v73 + (unsigned __int8)v72[87]) & 0xF;
          v65 = *(__int64 ***)&v72[4 * v74 + 8];
          v75 = &v72[4 * v74];
          if ( v65 )
          {
            if ( (*((_DWORD *)v65 + 11) & 1) == 0
              && v65 == (__int64 **)_InterlockedCompareExchange64(
                                      (volatile signed __int64 *)v75 + 2,
                                      (signed __int64)v39,
                                      (signed __int64)v65) )
            {
LABEL_142:
              _m_prefetchw((char *)v65 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v65 + 11, 0xFFFFFFFD) == 2 )
              {
                v70 = **v65;
                *v65 = 0LL;
                v69 = v65 + 6;
LABEL_128:
                RtlpInterlockedPushEntrySList(v70, v69);
              }
              goto LABEL_9;
            }
          }
          else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v75 + 2, (signed __int64)v39, 0LL) )
          {
            goto LABEL_9;
          }
          if ( (unsigned int)++v73 >= 0x10 )
          {
LABEL_119:
            v67 = *(unsigned __int16 **)v39;
            v68 = v39 + 12;
            goto LABEL_120;
          }
        }
      }
      break;
    }
    v76 = v135;
    v77 = *(_DWORD *)(v13 + 160);
    v78 = *((unsigned __int8 *)v135 + 2);
    v79 = (*(unsigned __int8 *)(a1 + 672) >> 1) & 1;
    do
    {
      v80 = *(_QWORD *)(a1 + 80);
      v81 = 0;
      if ( (_DWORD)v80 == v78 )
      {
        HIDWORD(v134) = HIDWORD(v80) + 1;
        if ( HIDWORD(v80) > 7 )
        {
          v81 = 1;
          HIDWORD(v134) = 0;
        }
      }
      else
      {
        v134 = v78 | 0x100000000LL;
      }
    }
    while ( v80 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v134, v80) );
    if ( !v81 || v79 )
    {
      v82 = 3;
      if ( v79 )
        v82 = 4;
      v77 >>= v82;
    }
    v83 = *((_BYTE *)v76 + 3) & 1;
    v84 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v76 + 2)];
    if ( v84 < 0x100 )
      --v83;
    if ( *(_DWORD *)(v13 + 164) )
      --v83;
    v85 = v77;
    if ( v77 < 1 << (3 - v83) )
      v85 = 1 << (3 - v83);
    if ( v85 >= 4 )
    {
      if ( v85 > 0x400 )
        v85 = 1024;
    }
    else
    {
      v85 = 4;
    }
    v86 = 7;
    v87 = ((((unsigned __int64)v85 + 31) >> 3) & 0xFFFFFFFC) + (v84 + 16) * v85 + 68;
    if ( v87 > 0xF0000 )
      v87 = 983040;
    if ( (v87 & 0xFFFFFF80) != 0 )
    {
      do
        ++v86;
      while ( v87 >> v86 );
      if ( v86 > 0x12 )
        LOBYTE(v86) = 18;
    }
    if ( (*((_BYTE *)v76 + 3) & 6) != 0 )
      LOBYTE(v86) = 18;
    v88 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v76 + 2)];
    v89 = (unsigned __int8)v86 - 7;
    v90 = a1 + 48 * (v89 + 2);
    ++*(_WORD *)(v90 + 28);
    v91 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v90);
    if ( v91 )
    {
      ++*(_WORD *)(v90 + 32);
      goto LABEL_178;
    }
    if ( (unsigned __int8)v86 > 7u
      && (v91 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * ((unsigned __int8)v86 - 8 + 2LL)))) != 0LL )
    {
LABEL_178:
      v92 = 1LL << LOBYTE(v91[1].Next);
      UserBlockFromHeap = (__int64)v91;
      if ( v92 > 0xF0000 )
        v92 = 983040LL;
      v94 = v92 + WORD1(v91[1].Next);
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v91, v94, v88 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v94);
    }
    else
    {
      UserBlockFromHeap = RtlpAllocateUserBlockFromHeap(*(PVOID *)(a1 + 24));
      if ( UserBlockFromHeap )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 48 * v89 + 112));
    }
    v95 = *(unsigned __int16 *)(v90 + 28);
    if ( v95 > 0x40 )
    {
      if ( v95 < *(unsigned __int16 *)(v90 + 30) + (*(unsigned __int16 *)(v90 + 30) >> 1)
        && *(unsigned __int16 *)(v90 + 32) < v95 - (v95 >> 1) )
      {
        v96 = *(_DWORD *)(v90 + 20);
        if ( v96 >= 2 )
        {
          v97 = *(_DWORD *)(v90 + 24);
          if ( v97 > 2 )
            _InterlockedCompareExchange((volatile signed __int32 *)(v90 + 24), v97 - 1, v97);
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v90 + 20), v96 + 1, v96);
        }
      }
      *(_WORD *)(v90 + 28) = 0;
      *(_WORD *)(v90 + 30) = 0;
      *(_WORD *)(v90 + 32) = 0;
    }
    if ( !UserBlockFromHeap )
      return 0LL;
    v98 = 1LL << *(_BYTE *)(UserBlockFromHeap + 16);
    if ( v98 > 0xF0000 )
      v98 = 983040LL;
    v99 = v98 + *(unsigned __int16 *)(UserBlockFromHeap + 18);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
    v100 = RtlpInterlockedPopEntrySList(ListHead);
    if ( v100 )
    {
      p_Next = &v100[-3].Next;
    }
    else
    {
      v101 = RtlpLowFragHeapAllocateFromZone((PRTL_SRWLOCK)a1);
      p_Next = (_QWORD *)v101;
      if ( !v101 )
        break;
      *(_QWORD *)(v101 + 8) = 0LL;
    }
    if ( p_Next )
    {
      v103 = (__int64)v135;
      *((_BYTE *)p_Next + 43) = v140;
      RtlpSubSegmentInitialize(
        a1,
        (_DWORD)p_Next,
        UserBlockFromHeap,
        (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(v103 + 2)],
        v99,
        v103);
      _InterlockedOr(v132, 0);
      *(_DWORD *)(UserBlockFromHeap + 20) = -253701952;
      do
      {
        v104 = *((_DWORD *)p_Next + 11);
        if ( !v104 || (v104 & 6) != 0 )
          goto LABEL_210;
      }
      while ( v104 != _InterlockedCompareExchange((volatile signed __int32 *)p_Next + 11, v104 | 6, v104) );
      v105 = (_QWORD *)*p_Next;
      if ( *p_Next != v13 )
      {
        _m_prefetchw((char *)p_Next + 44);
        if ( _InterlockedAnd((volatile signed __int32 *)p_Next + 11, 0xFFFFFFF9) == 6 )
        {
          v106 = p_Next + 6;
          v107 = *(_QWORD *)*p_Next;
          *p_Next = 0LL;
          goto LABEL_209;
        }
        if ( !RtlpIsSubSegmentReuseable((__int64)v105, (__int64)p_Next) )
          goto LABEL_210;
        do
        {
          v114 = *((_DWORD *)p_Next + 11);
          if ( !v114 || (v114 & 2) != 0 )
            goto LABEL_210;
        }
        while ( v114 != _InterlockedCompareExchange((volatile signed __int32 *)p_Next + 11, v114 | 2, v114) );
        v115 = (_QWORD *)*p_Next;
        v116 = 0;
        while ( 1 )
        {
          v117 = ((_BYTE)v116 + (unsigned __int8)*((_WORD *)v115 + 87)) & 0xF;
          v118 = (__int64 **)v115[v117 + 2];
          v119 = &v115[v117];
          if ( v118 )
          {
            if ( (*((_DWORD *)v118 + 11) & 1) == 0
              && v118 == (__int64 **)_InterlockedCompareExchange64(
                                       v119 + 2,
                                       (signed __int64)p_Next,
                                       (signed __int64)v118) )
            {
              _m_prefetchw((char *)v118 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v118 + 11, 0xFFFFFFFD) == 2 )
              {
                v107 = **v118;
                *v118 = 0LL;
                v106 = v118 + 6;
LABEL_209:
                RtlpInterlockedPushEntrySList(v107, v106);
              }
              do
              {
LABEL_210:
                v108 = *((_DWORD *)p_Next + 11);
                if ( !v108 || (v108 & 2) != 0 )
                  goto LABEL_9;
              }
              while ( v108 != _InterlockedCompareExchange((volatile signed __int32 *)p_Next + 11, v108 | 2, v108) );
              v109 = (_QWORD *)*p_Next;
              for ( i = 0; i < 0x10; ++i )
              {
                v111 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v109 + 87)) & 0xF;
                v112 = (__int64 **)v109[v111 + 2];
                v113 = &v109[v111];
                if ( v112 )
                {
                  if ( (*((_DWORD *)v112 + 11) & 1) == 0
                    && v112 == (__int64 **)_InterlockedCompareExchange64(
                                             v113 + 2,
                                             (signed __int64)p_Next,
                                             (signed __int64)v112) )
                  {
                    goto LABEL_257;
                  }
                }
                else if ( !_InterlockedCompareExchange64(v113 + 2, (signed __int64)p_Next, 0LL) )
                {
                  goto LABEL_9;
                }
              }
              v67 = (unsigned __int16 *)*p_Next;
              v68 = p_Next + 6;
LABEL_120:
              RtlpInterlockedPushEntrySList(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v67 + 24LL) + 8LL * v67[86] + 1192) + 144LL,
                v68);
              goto LABEL_9;
            }
          }
          else if ( !_InterlockedCompareExchange64(v119 + 2, (signed __int64)p_Next, 0LL) )
          {
            goto LABEL_210;
          }
          if ( (unsigned int)++v116 >= 0x10 )
          {
            v106 = p_Next + 6;
            v107 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*p_Next + 24LL)
                             + 8LL * *(unsigned __int16 *)(*p_Next + 172LL)
                             + 1192)
                 + 144LL;
            goto LABEL_209;
          }
        }
      }
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 24LL) + 24LL), p_Next[1]);
      v120 = _InterlockedExchange64((volatile __int64 *)(v13 + 8), (__int64)p_Next);
      if ( v120 )
      {
        _m_prefetchw((const void *)(v120 + 44));
        v121 = *(_DWORD *)(v120 + 44);
        do
        {
          v122 = v121;
          v121 = _InterlockedCompareExchange((volatile signed __int32 *)(v120 + 44), v121 & 0xFFFFFFF9, v121);
        }
        while ( v122 != v121 );
        if ( v121 == 6 )
        {
          v123 = **(_QWORD **)v120;
          *(_QWORD *)v120 = 0LL;
          RtlpInterlockedPushEntrySList(v123, v120 + 48);
          continue;
        }
        if ( *(_WORD *)(v120 + 32) && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(v13, v120) )
        {
          do
          {
            v124 = *(_DWORD *)(v120 + 44);
            if ( !v124 || (v124 & 2) != 0 )
              goto LABEL_9;
          }
          while ( v124 != _InterlockedCompareExchange((volatile signed __int32 *)(v120 + 44), v124 | 2, v124) );
          v125 = *(unsigned __int16 **)v120;
          for ( j = 0; j < 0x10; ++j )
          {
            v127 = ((_BYTE)j + (unsigned __int8)v125[87]) & 0xF;
            v112 = *(__int64 ***)&v125[4 * v127 + 8];
            v128 = &v125[4 * v127];
            if ( v112 )
            {
              if ( (*((_DWORD *)v112 + 11) & 1) == 0
                && v112 == (__int64 **)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)v128 + 2,
                                         v120,
                                         (signed __int64)v112) )
              {
LABEL_257:
                _m_prefetchw((char *)v112 + 44);
                if ( _InterlockedAnd((volatile signed __int32 *)v112 + 11, 0xFFFFFFFD) == 2 )
                {
                  v129 = **v112;
                  *v112 = 0LL;
                  RtlpInterlockedPushEntrySList(v129, v112 + 6);
                }
                goto LABEL_9;
              }
            }
            else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v128 + 2, v120, 0LL) )
            {
              goto LABEL_9;
            }
          }
          v67 = *(unsigned __int16 **)v120;
          v68 = (_QWORD *)(v120 + 48);
          goto LABEL_120;
        }
      }
      continue;
    }
    break;
  }
  RtlpFreeUserBlock(a1, (unsigned __int8 *)UserBlockFromHeap);
  return 0LL;
}
