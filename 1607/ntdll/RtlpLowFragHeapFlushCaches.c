/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x18004EAC8
 * Callers:
 *     RtlpFlushHeap @ 0x18004E5C8 (RtlpFlushHeap.c)
 * Callees:
 *     RtlpGetReservedBlockSize @ 0x180001058 (RtlpGetReservedBlockSize.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x180045F38 (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800460D4 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004F40C (RtlpFreeUserBlockToHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A9DB0 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800F95AC (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1800F9638 (RtlpLogHeapSubSegmentFree.c)
 */

struct _PEB *__fastcall RtlpLowFragHeapFlushCaches(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r12d
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r15
  int v11; // ebx
  struct _PEB *result; // rax
  __int64 v13; // r12
  struct _PEB *v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  _DWORD *v18; // rdi
  __int64 v19; // r14
  int v20; // r15d
  unsigned __int64 v21; // rbp
  __int64 v22; // r10
  unsigned int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rdx
  signed __int32 v26; // ebx
  _WORD *v27; // rcx
  int v28; // ebp
  unsigned int v29; // edx
  __int64 *v30; // rsi
  volatile signed __int32 *v31; // rbx
  signed __int32 v32; // eax
  __int64 *v33; // rcx
  int v34; // r9d
  __int64 v35; // r8
  volatile signed __int32 *v36; // rdx
  __int64 v37; // rcx
  volatile signed __int32 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rbx
  int v42; // edx
  signed __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rcx
  _DWORD *v46; // rdx
  struct _PEB *v47; // rbp
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r14
  _QWORD *v50; // rax
  unsigned int v51; // edx
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v53; // rcx
  ULONG HeapProtection; // eax
  signed __int32 v55; // eax
  __int64 v56; // rcx
  __int64 **v57; // rdx
  __int64 v58; // [rsp+30h] [rbp-68h]
  __int64 v59; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v62; // [rsp+A0h] [rbp+8h]
  __int64 v63; // [rsp+A0h] [rbp+8h]
  unsigned int v64; // [rsp+A8h] [rbp+10h]
  __int64 v65; // [rsp+A8h] [rbp+10h]
  ULONG OldProtect; // [rsp+B0h] [rbp+18h] BYREF
  signed __int64 v67; // [rsp+B8h] [rbp+20h]

  v5 = 0;
  v59 = 0LL;
  v6 = 0LL;
  v64 = 0;
  v58 = 0LL;
  do
  {
    v7 = 0;
    if ( (*(_BYTE *)(a1 + 4 * v6 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v62 = 1;
      goto LABEL_4;
    }
    v62 = RtlpAffinityState;
    if ( RtlpAffinityState )
    {
LABEL_4:
      if ( v7 )
        v8 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v6 + 2224) + 192LL * v7 - 192);
      else
        v8 = *(_DWORD **)(a1 + 8 * v6 + 1192);
      if ( !v8 || v8[41] != 1 )
        goto LABEL_8;
      v15 = RtlpLocalInfoAllocFromCache(v8, v7);
      v16 = v15;
      if ( !v15 )
        goto LABEL_31;
      *(_DWORD *)(*(_QWORD *)v8 + 36LL) = 0;
      v17 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v17 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v15 + 8) ^ (v15 >> 4))
        || (v18 = *(_DWORD **)(v15
                             - ((unsigned __int64)((unsigned int)v17 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v15 + 8) ^ (unsigned int)(v15 >> 4)) >> 12))) == 0LL )
      {
        RtlpLogHeapFailure(3, v17, v15, 0, 0LL, 0LL);
        goto LABEL_31;
      }
      _m_prefetchw(v18);
      v19 = *((_QWORD *)v18 + 1);
      v20 = 0;
      v21 = (unsigned __int16)(*(_DWORD *)(v15 + 12) >> 8);
      v22 = *(_QWORD *)(**(_QWORD **)v18 + 24LL);
      v23 = RtlpLFHKey ^ v22 ^ v19 ^ *(_DWORD *)(v19 + 24);
      if ( v19 + (unsigned int)v21 * HIWORD(v23) + (unsigned __int16)v23 != v15 )
      {
        RtlpLogHeapFailure(3, *(_QWORD *)(v22 + 24), v15, 0, 0LL, 0LL);
        goto LABEL_31;
      }
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapFreeEvent(*(_QWORD *)(v22 + 24), v15 + 16, 2LL);
      v24 = 100LL;
      v25 = 0LL;
      if ( MEMORY[0x7FFE036A] <= 1u )
        v24 = 0LL;
      do
      {
        v26 = v18[8];
        if ( v26 >= 0 && v26 == _InterlockedCompareExchange(v18 + 8, v26 | 0x80000000, v26) )
          goto LABEL_27;
        v25 = (unsigned int)(v25 + 1);
      }
      while ( (unsigned int)v25 <= (unsigned int)v24 );
      v26 = -1;
LABEL_27:
      *(_BYTE *)(v16 + 15) = 0x80;
      v27 = v18 + 4;
      if ( v26 == -1 )
      {
        RtlpInterlockedPushEntrySList(v27, v16 + 16);
        goto LABEL_31;
      }
      _bittestandreset64(*(signed __int64 **)(v19 + 40), v21);
      if ( *v27 )
      {
        v50 = (_QWORD *)RtlpInterlockedFlushSList(v27, v25, v24, a4);
        while ( v50 )
        {
          ++v20;
          v51 = *((_DWORD *)v50 - 1);
          v50 = (_QWORD *)*v50;
          v21 = (unsigned __int16)(v51 >> 8);
          _bittestandreset64(*(signed __int64 **)(v19 + 40), v21);
        }
      }
      a3 = *(_QWORD *)v18;
      v28 = (_DWORD)v21 << 16;
      if ( ((unsigned __int16)v28 | (unsigned __int16)(v20 + v26 + 1)) == *((_WORD *)v18 + 20) )
      {
        a4 = *(unsigned int *)(a3 + 168);
        v29 = *(_DWORD *)(*(_QWORD *)a3 + 32LL);
        if ( *(_DWORD *)(a3 + 164) != 1
          || v29 < (unsigned int)a4
          || v29 - (unsigned int)a4 >= *(_DWORD *)(*(_QWORD *)a3 + 36LL) )
        {
          v30 = *(__int64 **)v18;
          v31 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v18 + 8LL), 0LL);
          if ( v31 )
          {
            _m_prefetchw((const void *)(v31 + 11));
            if ( _InterlockedAnd(v31 + 11, 0xFFFFFFF9) == 6 )
            {
              v37 = **(_QWORD **)v31;
              *(_QWORD *)v31 = 0LL;
LABEL_81:
              v38 = v31 + 12;
LABEL_47:
              RtlpInterlockedPushEntrySList(v37, v38);
            }
            else if ( RtlpIsSubSegmentReuseable((__int64)v30, (__int64)v31) )
            {
              while ( 1 )
              {
                v32 = *((_DWORD *)v31 + 11);
                if ( !v32 || (v32 & 2) != 0 )
                  break;
                if ( v32 == _InterlockedCompareExchange(v31 + 11, v32 | 2, v32) )
                {
                  v33 = *(__int64 **)v31;
                  v34 = 0;
                  while ( 1 )
                  {
                    v35 = ((_BYTE)v34 + (unsigned __int8)*((_WORD *)v33 + 87)) & 0xF;
                    v36 = (volatile signed __int32 *)v33[v35 + 2];
                    if ( v36 )
                    {
                      if ( (v36[11] & 1) == 0
                        && v36 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                               &v33[v35 + 2],
                                                               (signed __int64)v31,
                                                               (signed __int64)v36) )
                      {
                        _m_prefetchw((const void *)(v36 + 11));
                        if ( _InterlockedAnd(v36 + 11, 0xFFFFFFFD) != 2 )
                          goto LABEL_48;
                        v37 = **(_QWORD **)v36;
                        *(_QWORD *)v36 = 0LL;
                        v38 = v36 + 12;
                        goto LABEL_47;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(&v33[v35 + 2], (signed __int64)v31, 0LL) )
                    {
                      goto LABEL_48;
                    }
                    if ( (unsigned int)++v34 >= 0x10 )
                    {
                      v37 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v31 + 24LL)
                                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)v31 + 172LL)
                                      + 1192)
                          + 144LL;
                      goto LABEL_81;
                    }
                  }
                }
              }
            }
          }
LABEL_48:
          v39 = *v30;
          v40 = *(_QWORD *)v18;
          v41 = *(_QWORD *)(v39 + 24);
          if ( (*((_BYTE *)v18 + 38) & 3) != 0 )
          {
            BaseAddress = (PVOID)((*((_QWORD *)v18 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
            ReservedBlockSize = RtlpGetReservedBlockSize((__int64)v18);
            v53 = *(_DWORD **)(v41 + 24);
            RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v18 + 20);
            HeapProtection = RtlpGetHeapProtection(v53, 1);
            ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &OldProtect);
          }
          *(_DWORD *)(*((_QWORD *)v18 + 1) + 20LL) = 0;
          RtlpFreeUserBlock(v41, *((__int64 **)v18 + 1));
          v42 = -*((unsigned __int16 *)v18 + 20);
          do
          {
            v43 = *(_QWORD *)(v40 + 160);
            LODWORD(v67) = v43 + v42;
            if ( v42 > 0 )
              v44 = HIDWORD(v43) + 1;
            else
              v44 = HIDWORD(v43) - 1;
            HIDWORD(v67) = v44;
          }
          while ( v43 != _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 160), v67, v43) );
          *((_QWORD *)v18 + 1) = 0LL;
          _InterlockedAdd((volatile signed __int32 *)(v41 + 60), 1u);
          v18[8] = 0;
          _m_prefetchw(v18 + 11);
          if ( _InterlockedAnd(v18 + 11, 0xFFFFFFFE) == 1 )
          {
            v45 = **(_QWORD **)v18;
            *(_QWORD *)v18 = 0LL;
LABEL_56:
            v46 = v18 + 12;
LABEL_57:
            RtlpInterlockedPushEntrySList(v45, v46);
          }
          goto LABEL_31;
        }
      }
      v18[8] = v28 | (v20 + (unsigned __int16)v26 + 1);
      if ( (v18[11] & 2) != 0 || !RtlpIsSubSegmentReuseable(a3, (__int64)v18) )
        goto LABEL_31;
      do
      {
        v55 = v18[11];
        if ( !v55 || (v55 & 2) != 0 )
          goto LABEL_31;
      }
      while ( v55 != _InterlockedCompareExchange(v18 + 11, v55 | 2, v55) );
      v56 = *(_QWORD *)v18;
      a4 = 0LL;
      while ( 1 )
      {
        a3 = ((_BYTE)a4 + (unsigned __int8)*(_WORD *)(v56 + 174)) & 0xF;
        v57 = *(__int64 ***)(v56 + 8 * a3 + 16);
        if ( v57 )
        {
          if ( (*((_DWORD *)v57 + 11) & 1) == 0
            && v57 == (__int64 **)_InterlockedCompareExchange64(
                                    (volatile signed __int64 *)(v56 + 8 * a3 + 16),
                                    (signed __int64)v18,
                                    (signed __int64)v57) )
          {
            _m_prefetchw((char *)v57 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v57 + 11, 0xFFFFFFFD) == 2 )
            {
              v45 = **v57;
              *v57 = 0LL;
              v46 = v57 + 6;
              goto LABEL_57;
            }
LABEL_31:
            v6 = v58;
LABEL_8:
            if ( ++v7 >= v62 )
            {
              v5 = v64;
              break;
            }
            goto LABEL_4;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v56 + 8 * a3 + 16),
                     (signed __int64)v18,
                     0LL) )
        {
          goto LABEL_31;
        }
        a4 = (unsigned int)(a4 + 1);
        if ( (unsigned int)a4 >= 0x10 )
        {
          v45 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v18 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v18 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_56;
        }
      }
    }
    ++v5;
    ++v6;
    v64 = v5;
    v58 = v6;
  }
  while ( v5 < 0x81 );
  v9 = a1 + 96;
  v10 = 12LL;
  v63 = a1 + 96;
  v65 = 12LL;
  do
  {
    v11 = 0;
    result = (struct _PEB *)RtlpInterlockedFlushSList(v9, v6, a3, a4);
    v13 = v59;
    v14 = result;
    if ( result )
    {
      do
      {
        v47 = v14;
        v14 = *(struct _PEB **)&v14->InheritedAddressSpace;
        v48 = 1LL << LOBYTE(v47->ImageBaseAddress);
        if ( v48 > 0xF0000 )
          v48 = 983040LL;
        v49 = v48 + WORD1(v47->ImageBaseAddress);
        v13 += v49;
        result = (struct _PEB *)RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v47);
        ++v11;
        if ( MEMORY[0x7FFE0380] )
        {
          result = NtCurrentPeb();
          if ( (result->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v47, v49, 0LL);
            result = (struct _PEB *)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v47, v49, 0LL);
          }
        }
      }
      while ( v14 );
      v9 = v63;
      v10 = v65;
      v59 = v13;
      if ( v11 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v63 + 16), -v11);
    }
    v9 += 48LL;
    --v10;
    v63 = v9;
    v65 = v10;
  }
  while ( v10 );
  if ( v13 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v13);
  return result;
}
