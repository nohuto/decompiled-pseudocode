/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x180008CE4
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180008B34 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpLfhFindClearBitAndSet @ 0x180008FD0 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180009460 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpTryAcquireSubSegmentLock @ 0x18002B100 (RtlpTryAcquireSubSegmentLock.c)
 *     RtlpIsSubSegmentReuseable @ 0x18002D980 (RtlpIsSubSegmentReuseable.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18006AB38 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180072200 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x180095560 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180095610 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x1800EF4F8 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1800EFA4C (RtlpLogHeapSubSegmentActivate.c)
 */

__int64 __fastcall RtlpLocalInfoAllocFromCache(__int64 *a1, char a2)
{
  __int64 v3; // rbp
  int v4; // r15d
  __int64 v5; // rdi
  int v6; // eax
  unsigned __int16 v7; // bx
  __int64 v8; // r14
  struct _TEB *v9; // r8
  __int64 LowFragHeapDataSlot; // rdx
  __int64 v11; // r9
  unsigned int v12; // ecx
  int ClearBitAndSet; // eax
  __int64 v14; // r8
  volatile signed __int32 *v16; // rdi
  unsigned int v17; // r12d
  volatile signed __int64 *v18; // rbp
  unsigned int v19; // ebx
  _QWORD *v20; // r15
  __int64 v21; // r14
  _SLIST_HEADER *v22; // r14
  PSLIST_ENTRY v23; // rax
  _QWORD **v24; // rbx
  signed __int32 v25; // eax
  __int64 *v26; // r8
  unsigned int v27; // r13d
  unsigned int v28; // ebp
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // r15
  _SLIST_HEADER *v31; // r14
  PSLIST_ENTRY v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  signed __int32 v37; // eax
  __int64 *v38; // rcx
  int v39; // r9d
  __int64 v40; // r8
  _QWORD **v41; // rdx
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rdx
  signed __int32 v44; // eax
  __int64 *v45; // rcx
  int v46; // r9d
  __int64 v47; // r8
  __int64 v48; // [rsp+70h] [rbp+8h]

  while ( 1 )
  {
LABEL_1:
    v3 = a1[1];
    if ( !v3 )
      goto LABEL_11;
    v4 = 0;
    v5 = *(_QWORD *)(*a1 + 24);
    if ( (HIWORD(*(_DWORD *)(v3 + 32)) & 0x8000u) != 0 )
    {
      v33 = *((unsigned __int16 *)a1 + 86);
      v4 = 1;
      if ( (*(_BYTE *)(v5 + 4 * v33 + 679) & 1) == 0
        && (int)RtlpAffinitizeSegmentInfoForBucket(*(_QWORD *)(*a1 + 24), *(unsigned __int8 *)(v5 + 4 * v33 + 678)) >= 0 )
      {
        *(_BYTE *)(v5 + 4 * v33 + 679) |= 1u;
        if ( MEMORY[0x7FFE0380] )
        {
          if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v5 + 24), *(unsigned __int8 *)(v5 + 4 * v33 + 678));
        }
      }
    }
    v6 = RtlpTryAcquireSubSegmentLock(v3, 1LL);
    v7 = v6;
    if ( v6 == -1 )
      goto LABEL_41;
    v8 = *(_QWORD *)(v3 + 8);
    if ( !v8 || *(__int64 **)v3 != a1 || !(_WORD)v6 )
    {
      *(_DWORD *)(v3 + 32) = v6;
LABEL_41:
      v14 = 0LL;
      goto LABEL_8;
    }
    v9 = NtCurrentTeb();
    LowFragHeapDataSlot = v9->LowFragHeapDataSlot;
    v11 = RtlpSearchWidth[*((unsigned __int16 *)a1 + 86)];
    v12 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
    v9->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
    ClearBitAndSet = RtlpLfhFindClearBitAndSet(v8 + 32, (unsigned int)(v6 >> 16), v12, v11);
    *(_DWORD *)(v3 + 32) = (v7 - 1) | (ClearBitAndSet << 16);
    v14 = v8
        + ClearBitAndSet
        * (((unsigned int)v5 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v8 ^ *(_DWORD *)(v8 + 24)) >> 16)
        + (unsigned __int16)(v5 ^ RtlpLFHKey ^ v8 ^ *(_WORD *)(v8 + 24));
    if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
    {
      RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*a1 + 24) + 24LL), v14, 0, 0LL, 0LL);
      goto LABEL_41;
    }
LABEL_8:
    if ( v4 && dword_180144364 + 1 < (unsigned int)RtlpAffinityState )
      _InterlockedCompareExchange(&dword_180144364, 2 * (dword_180144364 + 1) - 1, dword_180144364);
    if ( v14 )
      return v14;
LABEL_11:
    v48 = *a1;
    while ( 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        v17 = 0;
        v18 = 0LL;
        v19 = 0;
        v20 = a1 + 2;
        do
        {
          v21 = *v20;
          if ( *v20 )
          {
            v27 = *(unsigned __int16 *)(v21 + 32);
            if ( v27 > v17 && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(a1, *v20) )
            {
              v16 = (volatile signed __int32 *)v21;
              v17 = v27;
              v18 = &a1[v19 + 2];
            }
          }
          ++v19;
          ++v20;
        }
        while ( v19 < 0x10 );
        if ( !v18 )
        {
          v16 = 0LL;
          goto LABEL_22;
        }
        v22 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v48 + 24) + 8LL * *((unsigned __int16 *)a1 + 86) + 1192) + 144LL);
        while ( 1 )
        {
          v23 = RtlpInterlockedPopEntrySList(v22);
          v24 = (_QWORD **)v23;
          if ( !v23 )
            break;
          v24 = (_QWORD **)&v23[-3];
          if ( (*((_DWORD *)&v23[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v24, a1) )
            {
              RtlpInterlockedPushEntrySList(v22, v24 + 6);
              v24 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v24 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v24 + 11, 0xFFFFFFFD) == 2 )
          {
            v34 = **v24;
            *v24 = 0LL;
            RtlpInterlockedPushEntrySList(v34, v23);
          }
        }
        if ( v16 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v18,
                                                 (signed __int64)v24,
                                                 (signed __int64)v16) )
          break;
        if ( v24 )
          RtlpInterlockedPushEntrySList(v22, v24 + 6);
      }
      if ( !v24 )
        *((_WORD *)a1 + 87) = (unsigned __int8)(((char *)v18 - (char *)a1 - 16) >> 3);
LABEL_22:
      if ( !v16 )
        break;
      _m_prefetchw((const void *)(v16 + 11));
      if ( _InterlockedAnd(v16 + 11, 0xFFFFFFFD) != 2 )
        goto LABEL_24;
      v35 = **(_QWORD **)v16;
      *(_QWORD *)v16 = 0LL;
      RtlpInterlockedPushEntrySList(v35, v16 + 12);
    }
    v28 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v31 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v48 + 24) + 8LL * *((unsigned __int16 *)a1 + 86) + 1192) + 144LL);
    v32 = RtlpInterlockedPopEntrySList(v31);
    if ( !v32 )
      return 0LL;
    do
    {
      v16 = (volatile signed __int32 *)&v32[-3];
      if ( (*((_DWORD *)&v32[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v16 + 11));
        if ( _InterlockedAnd(v16 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_68;
LABEL_67:
        v36 = **(_QWORD **)v16;
        *(_QWORD *)v16 = 0LL;
        RtlpInterlockedPushEntrySList(v36, v16 + 12);
        goto LABEL_68;
      }
      if ( (unsigned int)RtlpSetSegmentInfo(v16, a1) )
      {
        _m_prefetchw((const void *)(v16 + 11));
        if ( _InterlockedAnd(v16 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_67;
        if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, v16) )
          break;
      }
      else
      {
        if ( !v28 )
          v30 = v16 + 12;
        *((_QWORD *)v16 + 6) = v29;
        ++v28;
        v29 = v16 + 12;
      }
LABEL_68:
      v16 = 0LL;
      v32 = RtlpInterlockedPopEntrySList(v31);
    }
    while ( v32 );
    if ( v28 )
      InterlockedPushListSList(v31, v29, v30, v28);
LABEL_24:
    if ( !v16 )
      return 0LL;
    *((_BYTE *)v16 + 43) = a2;
    do
    {
      v25 = *((_DWORD *)v16 + 11);
      if ( !v25 || (v25 & 6) != 0 )
        goto LABEL_1;
    }
    while ( v25 != _InterlockedCompareExchange(v16 + 11, v25 | 6, v25) );
    v26 = *(__int64 **)v16;
    if ( *(__int64 **)v16 == a1 )
    {
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*a1 + 24) + 24LL), *((_QWORD *)v16 + 1));
      v16 = (volatile signed __int32 *)_InterlockedExchange64(a1 + 1, (__int64)v16);
      if ( !v16 )
        continue;
      _m_prefetchw((const void *)(v16 + 11));
      if ( _InterlockedAnd(v16 + 11, 0xFFFFFFF9) != 6 )
      {
        if ( (unsigned __int8)RtlpIsSubSegmentReuseable(a1, v16) )
        {
          while ( 1 )
          {
            v44 = *((_DWORD *)v16 + 11);
            if ( !v44 || (v44 & 2) != 0 )
              break;
            if ( v44 == _InterlockedCompareExchange(v16 + 11, v44 | 2, v44) )
            {
              v45 = *(__int64 **)v16;
              v46 = 0;
              while ( 1 )
              {
                v47 = ((_BYTE)v46 + (unsigned __int8)*((_WORD *)v45 + 87)) & 0xF;
                v41 = (_QWORD **)v45[v47 + 2];
                if ( v41 )
                {
                  if ( (*((_DWORD *)v41 + 11) & 1) == 0
                    && v41 == (_QWORD **)_InterlockedCompareExchange64(
                                           &v45[v47 + 2],
                                           (signed __int64)v16,
                                           (signed __int64)v41) )
                  {
                    goto LABEL_101;
                  }
                }
                else if ( !_InterlockedCompareExchange64(&v45[v47 + 2], (signed __int64)v16, 0LL) )
                {
                  goto LABEL_1;
                }
                if ( (unsigned int)++v46 >= 0x10 )
                  goto LABEL_80;
              }
            }
          }
        }
        continue;
      }
      goto LABEL_83;
    }
    _m_prefetchw((const void *)(v16 + 11));
    if ( _InterlockedAnd(v16 + 11, 0xFFFFFFF9) == 6 )
    {
LABEL_83:
      v42 = **(_QWORD **)v16;
      *(_QWORD *)v16 = 0LL;
LABEL_81:
      v43 = v16 + 12;
LABEL_82:
      RtlpInterlockedPushEntrySList(v42, v43);
      continue;
    }
    if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v26, v16) )
    {
      while ( 1 )
      {
        v37 = *((_DWORD *)v16 + 11);
        if ( !v37 || (v37 & 2) != 0 )
          break;
        if ( v37 == _InterlockedCompareExchange(v16 + 11, v37 | 2, v37) )
        {
          v38 = *(__int64 **)v16;
          v39 = 0;
          while ( 1 )
          {
            v40 = ((_BYTE)v39 + (unsigned __int8)*((_WORD *)v38 + 87)) & 0xF;
            v41 = (_QWORD **)v38[v40 + 2];
            if ( v41 )
            {
              if ( (*((_DWORD *)v41 + 11) & 1) == 0
                && v41 == (_QWORD **)_InterlockedCompareExchange64(
                                       &v38[v40 + 2],
                                       (signed __int64)v16,
                                       (signed __int64)v41) )
              {
LABEL_101:
                _m_prefetchw((char *)v41 + 44);
                if ( _InterlockedAnd((volatile signed __int32 *)v41 + 11, 0xFFFFFFFD) == 2 )
                {
                  v42 = **v41;
                  *v41 = 0LL;
                  v43 = (volatile signed __int32 *)(v41 + 6);
                  goto LABEL_82;
                }
                goto LABEL_1;
              }
            }
            else if ( !_InterlockedCompareExchange64(&v38[v40 + 2], (signed __int64)v16, 0LL) )
            {
              goto LABEL_1;
            }
            if ( (unsigned int)++v39 >= 0x10 )
            {
LABEL_80:
              v42 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v16 + 24LL)
                              + 8LL * *(unsigned __int16 *)(*(_QWORD *)v16 + 172LL)
                              + 1192)
                  + 144LL;
              goto LABEL_81;
            }
          }
        }
      }
    }
  }
}
