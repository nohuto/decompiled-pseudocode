/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x18004EFA0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAC8 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x1800460D4 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLfhFindClearBitAndSet @ 0x18004F310 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x18004F4A4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpSetSegmentInfo @ 0x180051A40 (RtlpSetSegmentInfo.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180080584 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A9D30 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A9DE0 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x1800F8F64 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1800F949C (RtlpLogHeapSubSegmentActivate.c)
 */

__int64 __fastcall RtlpLocalInfoAllocFromCache(__int64 a1, char a2)
{
  __int64 v3; // rdi
  int v4; // r15d
  __int64 v5; // rbp
  unsigned int v6; // r8d
  int v7; // edx
  signed __int32 v8; // ebx
  __int64 v9; // r14
  struct _TEB *v10; // r8
  __int64 LowFragHeapDataSlot; // rdx
  __int64 v12; // r9
  unsigned int v13; // ecx
  int ClearBitAndSet; // eax
  __int64 v15; // r8
  volatile signed __int32 *v17; // rdi
  unsigned int v18; // r12d
  volatile signed __int64 *v19; // rbp
  unsigned int v20; // r14d
  _QWORD *v21; // r15
  __int64 v22; // rbx
  _SLIST_HEADER *v23; // r14
  PSLIST_ENTRY v24; // rax
  _QWORD **v25; // rbx
  signed __int32 v26; // eax
  __int64 *v27; // r8
  unsigned int v28; // r13d
  unsigned int v29; // ebp
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // r15
  _SLIST_HEADER *v32; // r14
  PSLIST_ENTRY v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  signed __int32 v38; // eax
  __int64 *v39; // rcx
  int v40; // r9d
  __int64 v41; // r8
  _QWORD **v42; // rdx
  __int64 v43; // rcx
  volatile signed __int32 *v44; // rdx
  signed __int32 v45; // eax
  __int64 *v46; // rcx
  int v47; // r9d
  __int64 v48; // r8
  __int64 v49; // [rsp+70h] [rbp+8h]

LABEL_1:
  while ( 2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = 0;
      v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( (*(_DWORD *)(v3 + 32) & 0x80000000) != 0 )
      {
        v34 = *(unsigned __int16 *)(a1 + 172);
        v4 = 1;
        if ( (*(_BYTE *)(v5 + 4 * v34 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(
                    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
                    *(unsigned __int8 *)(v5 + 4 * v34 + 678)) >= 0 )
        {
          *(_BYTE *)(v5 + 4 * v34 + 679) |= 1u;
          if ( MEMORY[0x7FFE0380] )
          {
            if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v5 + 24), *(unsigned __int8 *)(v5 + 4 * v34 + 678));
          }
        }
      }
      v6 = 100;
      v7 = 0;
      if ( MEMORY[0x7FFE036A] <= 1u )
        v6 = 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v3 + 32);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v8 )
            goto LABEL_49;
          if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 32), v8 | 0x80000000, v8) )
            break;
        }
        if ( ++v7 > v6 )
        {
          v8 = -1;
          break;
        }
      }
      if ( v8 != -1 )
      {
        v9 = *(_QWORD *)(v3 + 8);
        if ( v9 && *(_QWORD *)v3 == a1 && (_WORD)v8 )
        {
          v10 = NtCurrentTeb();
          LowFragHeapDataSlot = v10->LowFragHeapDataSlot;
          v12 = RtlpSearchWidth[*(unsigned __int16 *)(a1 + 172)];
          v13 = RtlpLowFragHeapRandomData[LowFragHeapDataSlot];
          v10->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
          ClearBitAndSet = RtlpLfhFindClearBitAndSet(v9 + 32, (unsigned int)(v8 >> 16), v13, v12);
          *(_DWORD *)(v3 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v8 - 1);
          v15 = v9
              + ClearBitAndSet
              * (((unsigned int)v5 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v9 ^ *(_DWORD *)(v9 + 24)) >> 16)
              + (unsigned __int16)(v5 ^ RtlpLFHKey ^ v9 ^ *(_WORD *)(v9 + 24));
          if ( (*(_BYTE *)(v15 + 15) & 0x3F) == 0 )
            goto LABEL_13;
          RtlpLogHeapFailure(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), v15, 0, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v3 + 32) = v8;
        }
      }
LABEL_49:
      v15 = 0LL;
LABEL_13:
      if ( v4 && dword_1801503E4 + 1 < (unsigned int)RtlpAffinityState )
        _InterlockedCompareExchange(&dword_1801503E4, 2 * (dword_1801503E4 + 1) - 1, dword_1801503E4);
      if ( v15 )
        return v15;
    }
    v49 = *(_QWORD *)a1;
    while ( 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        v18 = 0;
        v19 = 0LL;
        v20 = 0;
        v21 = (_QWORD *)(a1 + 16);
        do
        {
          v22 = *v21;
          if ( *v21 )
          {
            v28 = *(unsigned __int16 *)(v22 + 32);
            if ( v28 > v18 && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(a1, *v21) )
            {
              v17 = (volatile signed __int32 *)v22;
              v18 = v28;
              v19 = (volatile signed __int64 *)(a1 + 8 * (v20 + 2LL));
            }
          }
          ++v20;
          ++v21;
        }
        while ( v20 < 0x10 );
        if ( !v19 )
        {
          v17 = 0LL;
          goto LABEL_27;
        }
        v23 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v49 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
        while ( 1 )
        {
          v24 = RtlpInterlockedPopEntrySList(v23);
          v25 = (_QWORD **)v24;
          if ( !v24 )
            break;
          v25 = (_QWORD **)&v24[-3];
          if ( (*((_DWORD *)&v24[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v25, a1) )
            {
              RtlpInterlockedPushEntrySList(v23, v25 + 6);
              v25 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)v25 + 44);
          if ( _InterlockedAnd((volatile signed __int32 *)v25 + 11, 0xFFFFFFFD) == 2 )
          {
            v35 = **v25;
            *v25 = 0LL;
            RtlpInterlockedPushEntrySList(v35, v24);
          }
        }
        if ( v17 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v19,
                                                 (signed __int64)v25,
                                                 (signed __int64)v17) )
          break;
        if ( v25 )
          RtlpInterlockedPushEntrySList(v23, v25 + 6);
      }
      if ( !v25 )
        *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v19 - a1 - 16) >> 3);
LABEL_27:
      if ( !v17 )
        break;
      _m_prefetchw((const void *)(v17 + 11));
      if ( _InterlockedAnd(v17 + 11, 0xFFFFFFFD) != 2 )
        goto LABEL_29;
      v36 = **(_QWORD **)v17;
      *(_QWORD *)v17 = 0LL;
      RtlpInterlockedPushEntrySList(v36, v17 + 12);
    }
    v29 = 0;
    v30 = 0LL;
    v31 = 0LL;
    v32 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v49 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
    v33 = RtlpInterlockedPopEntrySList(v32);
    if ( !v33 )
      return 0LL;
    do
    {
      v17 = (volatile signed __int32 *)&v33[-3];
      if ( (*((_DWORD *)&v33[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v17 + 11));
        if ( _InterlockedAnd(v17 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_76;
LABEL_75:
        v37 = **(_QWORD **)v17;
        *(_QWORD *)v17 = 0LL;
        RtlpInterlockedPushEntrySList(v37, v17 + 12);
        goto LABEL_76;
      }
      if ( (unsigned int)RtlpSetSegmentInfo(v17, a1) )
      {
        _m_prefetchw((const void *)(v17 + 11));
        if ( _InterlockedAnd(v17 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_75;
        if ( RtlpIsSubSegmentReuseable(a1, (__int64)v17) )
          break;
      }
      else
      {
        if ( !v29 )
          v31 = v17 + 12;
        *((_QWORD *)v17 + 6) = v30;
        ++v29;
        v30 = v17 + 12;
      }
LABEL_76:
      v17 = 0LL;
      v33 = RtlpInterlockedPopEntrySList(v32);
    }
    while ( v33 );
    if ( v29 )
      InterlockedPushListSList(v32, v30, v31, v29);
LABEL_29:
    if ( v17 )
    {
      *((_BYTE *)v17 + 43) = a2;
      do
      {
        v26 = *((_DWORD *)v17 + 11);
        if ( !v26 || (v26 & 6) != 0 )
          goto LABEL_1;
      }
      while ( v26 != _InterlockedCompareExchange(v17 + 11, v26 | 6, v26) );
      v27 = *(__int64 **)v17;
      if ( *(_QWORD *)v17 == a1 )
      {
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), *((_QWORD *)v17 + 1));
        v17 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v17);
        if ( !v17 )
          continue;
        _m_prefetchw((const void *)(v17 + 11));
        if ( _InterlockedAnd(v17 + 11, 0xFFFFFFF9) != 6 )
        {
          if ( RtlpIsSubSegmentReuseable(a1, (__int64)v17) )
          {
            while ( 1 )
            {
              v45 = *((_DWORD *)v17 + 11);
              if ( !v45 || (v45 & 2) != 0 )
                break;
              if ( v45 == _InterlockedCompareExchange(v17 + 11, v45 | 2, v45) )
              {
                v46 = *(__int64 **)v17;
                v47 = 0;
                while ( 1 )
                {
                  v48 = ((_BYTE)v47 + (unsigned __int8)*((_WORD *)v46 + 87)) & 0xF;
                  v42 = (_QWORD **)v46[v48 + 2];
                  if ( v42 )
                  {
                    if ( (*((_DWORD *)v42 + 11) & 1) == 0
                      && v42 == (_QWORD **)_InterlockedCompareExchange64(
                                             &v46[v48 + 2],
                                             (signed __int64)v17,
                                             (signed __int64)v42) )
                    {
                      goto LABEL_109;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(&v46[v48 + 2], (signed __int64)v17, 0LL) )
                  {
                    goto LABEL_1;
                  }
                  if ( (unsigned int)++v47 >= 0x10 )
                    goto LABEL_88;
                }
              }
            }
          }
          continue;
        }
        goto LABEL_91;
      }
      _m_prefetchw((const void *)(v17 + 11));
      if ( _InterlockedAnd(v17 + 11, 0xFFFFFFF9) == 6 )
      {
LABEL_91:
        v43 = **(_QWORD **)v17;
        *(_QWORD *)v17 = 0LL;
LABEL_89:
        v44 = v17 + 12;
LABEL_90:
        RtlpInterlockedPushEntrySList(v43, v44);
        continue;
      }
      if ( RtlpIsSubSegmentReuseable((__int64)v27, (__int64)v17) )
      {
        while ( 1 )
        {
          v38 = *((_DWORD *)v17 + 11);
          if ( !v38 || (v38 & 2) != 0 )
            break;
          if ( v38 == _InterlockedCompareExchange(v17 + 11, v38 | 2, v38) )
          {
            v39 = *(__int64 **)v17;
            v40 = 0;
            while ( 1 )
            {
              v41 = ((_BYTE)v40 + (unsigned __int8)*((_WORD *)v39 + 87)) & 0xF;
              v42 = (_QWORD **)v39[v41 + 2];
              if ( v42 )
              {
                if ( (*((_DWORD *)v42 + 11) & 1) == 0
                  && v42 == (_QWORD **)_InterlockedCompareExchange64(
                                         &v39[v41 + 2],
                                         (signed __int64)v17,
                                         (signed __int64)v42) )
                {
LABEL_109:
                  _m_prefetchw((char *)v42 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v42 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v43 = **v42;
                    *v42 = 0LL;
                    v44 = (volatile signed __int32 *)(v42 + 6);
                    goto LABEL_90;
                  }
                  goto LABEL_1;
                }
              }
              else if ( !_InterlockedCompareExchange64(&v39[v41 + 2], (signed __int64)v17, 0LL) )
              {
                goto LABEL_1;
              }
              if ( (unsigned int)++v40 >= 0x10 )
              {
LABEL_88:
                v43 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v17 + 24LL)
                                + 8LL * *(unsigned __int16 *)(*(_QWORD *)v17 + 172LL)
                                + 1192)
                    + 144LL;
                goto LABEL_89;
              }
            }
          }
        }
      }
      continue;
    }
    return 0LL;
  }
}
