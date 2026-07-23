/*
 * XREFs of RtlpLowFragHeapFree @ 0x18002ACB0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180008B34 (RtlpLowFragHeapFlushCaches.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpFreeUserBlock @ 0x18002A230 (RtlpFreeUserBlock.c)
 *     RtlpTryAcquireSubSegmentLock @ 0x18002B100 (RtlpTryAcquireSubSegmentLock.c)
 *     RtlpIsSubSegmentReuseable @ 0x18002D980 (RtlpIsSubSegmentReuseable.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800955E0 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFreeEvent @ 0x1800EF964 (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x1800F0768 (RtlpGetReservedBlockSize.c)
 */

__int64 __fastcall RtlpLowFragHeapFree(int a1, unsigned __int64 a2, ULONG a3)
{
  unsigned int v4; // eax
  __int64 **v5; // rdi
  __int64 *v6; // r14
  int v7; // r15d
  unsigned __int64 v8; // rbp
  __int64 v9; // r10
  unsigned int v10; // ecx
  int v11; // eax
  unsigned __int16 v12; // bx
  _WORD *v13; // rcx
  volatile signed __int64 *v14; // r8
  int v15; // ebp
  __int64 result; // rax
  _QWORD *v17; // r9
  signed __int64 v18; // rdx
  __int64 *v19; // rsi
  _DWORD *v20; // rbx
  signed __int32 v21; // eax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // rsi
  __int64 v28; // rbx
  int v29; // edx
  signed __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rcx
  __int64 *v33; // r9
  int v34; // r8d
  __int64 v35; // rax
  volatile signed __int32 *v36; // rdx
  __int64 *v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned int v40; // edx
  unsigned __int16 ReservedBlockSize; // ax
  void *v42; // rcx
  ULONG HeapProtection; // eax
  signed __int64 v44; // [rsp+70h] [rbp+8h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  OldProtect = a3;
  v4 = a1 ^ RtlpLFHKey ^ *(_DWORD *)(a2 + 8) ^ (a2 >> 4);
  if ( (_WORD)v4 )
    return RtlpLogHeapFailure(3, a1, a2, 0, 0LL, 0LL);
  v5 = *(__int64 ***)(a2 - ((unsigned __int64)v4 >> 12));
  if ( !v5 )
    return RtlpLogHeapFailure(3, a1, a2, 0, 0LL, 0LL);
  _m_prefetchw(v5);
  v6 = v5[1];
  v7 = 0;
  v8 = (unsigned __int16)(*(_DWORD *)(a2 + 12) >> 8);
  v9 = *(_QWORD *)(**v5 + 24);
  v10 = v9 ^ (unsigned int)v6 ^ RtlpLFHKey ^ *((_DWORD *)v6 + 6);
  if ( (__int64 *)((char *)v6 + (unsigned int)v8 * HIWORD(v10) + (unsigned __int16)v10) != (__int64 *)a2 )
    return RtlpLogHeapFailure(3, *(_QWORD *)(v9 + 24), a2, 0, 0LL, 0LL);
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v9 + 24), a2 + 16, 2LL);
  v11 = RtlpTryAcquireSubSegmentLock(v5, 0LL);
  *(_BYTE *)(a2 + 15) = 0x80;
  v12 = v11;
  v13 = v5 + 2;
  if ( v11 == -1 )
    return RtlpInterlockedPushEntrySList(v13, a2 + 16);
  _bittestandreset64((signed __int64 *)v6[5], v8);
  if ( *v13 )
  {
    v39 = (_QWORD *)RtlpInterlockedFlushSList(v13);
    while ( v39 )
    {
      v40 = *((_DWORD *)v39 - 1);
      v39 = (_QWORD *)*v39;
      ++v7;
      v8 = (unsigned __int16)(v40 >> 8);
      _bittestandreset64((signed __int64 *)v6[5], v8);
    }
  }
  v14 = *v5;
  v15 = (_DWORD)v8 << 16;
  if ( ((unsigned __int16)v15 | (unsigned __int16)(v7 + v12 + 1)) != *((_WORD *)v5 + 20)
    || (v17 = (_QWORD *)*((unsigned int *)v14 + 42), v18 = *(unsigned int *)(*v14 + 32), *((_DWORD *)v14 + 41) == 1)
    && (unsigned int)v18 >= (unsigned int)v17
    && (v18 = (unsigned int)(v18 - (_DWORD)v17), (unsigned int)v18 < *(_DWORD *)(*v14 + 36)) )
  {
    *((_DWORD *)v5 + 8) = v15 | (v7 + v12 + 1);
    result = *((unsigned int *)v5 + 11);
    if ( (result & 2) == 0 )
    {
      result = RtlpIsSubSegmentReuseable(v14, v5);
      if ( (_BYTE)result )
      {
        while ( 1 )
        {
          result = *((unsigned int *)v5 + 11);
          if ( !(_DWORD)result || (result & 2) != 0 )
            break;
          if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)v5 + 11, result | 2, result) )
          {
            v33 = *v5;
            v34 = 0;
            while ( 1 )
            {
              v35 = ((_BYTE)v34 + (unsigned __int8)*((_WORD *)v33 + 87)) & 0xF;
              v36 = (volatile signed __int32 *)v33[v35 + 2];
              v37 = &v33[v35];
              if ( v36 )
              {
                if ( (v36[11] & 1) == 0
                  && v36 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                         v37 + 2,
                                                         (signed __int64)v5,
                                                         (signed __int64)v36) )
                {
                  _m_prefetchw((const void *)(v36 + 11));
                  result = (unsigned int)_InterlockedAnd(v36 + 11, 0xFFFFFFFD);
                  if ( (_DWORD)result == 2 )
                  {
                    v38 = **(_QWORD **)v36;
                    *(_QWORD *)v36 = 0LL;
                    return RtlpInterlockedPushEntrySList(v38, v36 + 12);
                  }
                  return result;
                }
              }
              else
              {
                result = _InterlockedCompareExchange64(v37 + 2, (signed __int64)v5, 0LL);
                if ( !result )
                  return result;
              }
              if ( (unsigned int)++v34 >= 0x10 )
                return RtlpInterlockedPushEntrySList(
                         *(_QWORD *)(*(_QWORD *)(**v5 + 24) + 8LL * *((unsigned __int16 *)*v5 + 86) + 1192) + 144LL,
                         v5 + 6);
            }
          }
        }
      }
    }
  }
  else
  {
    v19 = *v5;
    v20 = (_DWORD *)_InterlockedExchange64(*v5 + 1, 0LL);
    if ( v20 )
    {
      _m_prefetchw(v20 + 11);
      if ( _InterlockedAnd(v20 + 11, 0xFFFFFFF9) == 6 )
      {
        v25 = v20 + 12;
        v24 = **(_QWORD **)v20;
        *(_QWORD *)v20 = 0LL;
        goto LABEL_25;
      }
      if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v19, v20) )
      {
        do
        {
          v21 = v20[11];
          if ( !v21 || (v21 & 2) != 0 )
            goto LABEL_26;
        }
        while ( v21 != _InterlockedCompareExchange(v20 + 11, v21 | 2, v21) );
        v17 = *(_QWORD **)v20;
        v22 = 0;
        while ( 1 )
        {
          v23 = ((_BYTE)v22 + (unsigned __int8)*((_WORD *)v17 + 87)) & 0xF;
          v18 = v17[v23 + 2];
          v14 = &v17[v23];
          if ( v18 )
          {
            if ( (*(_DWORD *)(v18 + 44) & 1) == 0
              && v18 == _InterlockedCompareExchange64(v14 + 2, (signed __int64)v20, v18) )
            {
              _m_prefetchw((const void *)(v18 + 44));
              if ( _InterlockedAnd((volatile signed __int32 *)(v18 + 44), 0xFFFFFFFD) != 2 )
                break;
              v24 = **(_QWORD **)v18;
              *(_QWORD *)v18 = 0LL;
              v25 = (_DWORD *)(v18 + 48);
LABEL_25:
              RtlpInterlockedPushEntrySList(v24, v25);
              break;
            }
          }
          else if ( !_InterlockedCompareExchange64(v14 + 2, (signed __int64)v20, 0LL) )
          {
            break;
          }
          if ( (unsigned int)++v22 >= 0x10 )
          {
            v25 = v20 + 12;
            v24 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v20 + 24LL)
                            + 8LL * *(unsigned __int16 *)(*(_QWORD *)v20 + 172LL)
                            + 1192)
                + 144LL;
            goto LABEL_25;
          }
        }
      }
    }
LABEL_26:
    v26 = *v19;
    v27 = *v5;
    v28 = *(_QWORD *)(v26 + 24);
    if ( (*((_BYTE *)v5 + 38) & 3) != 0 )
    {
      BaseAddress = (PVOID)(((unsigned __int64)v5[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
      ReservedBlockSize = RtlpGetReservedBlockSize(v5, v18, v14, v17);
      v42 = *(void **)(v28 + 24);
      RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v5 + 20);
      HeapProtection = RtlpGetHeapProtection(v42);
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &OldProtect);
    }
    *((_DWORD *)v5[1] + 5) = 0;
    RtlpFreeUserBlock(v28, v5[1]);
    v29 = -*((unsigned __int16 *)v5 + 20);
    do
    {
      v30 = v27[20];
      if ( v29 > 0 )
        v31 = HIDWORD(v30) + 1;
      else
        v31 = HIDWORD(v30) - 1;
      HIDWORD(v44) = v31;
      LODWORD(v44) = v30 + v29;
    }
    while ( v30 != _InterlockedCompareExchange64(v27 + 20, v44, v30) );
    v5[1] = 0LL;
    _InterlockedIncrement((volatile signed __int32 *)(v28 + 60));
    *((_DWORD *)v5 + 8) = 0;
    _m_prefetchw((char *)v5 + 44);
    result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)v5 + 11, 0xFFFFFFFE);
    if ( (_DWORD)result == 1 )
    {
      v32 = **v5;
      *v5 = 0LL;
      return RtlpInterlockedPushEntrySList(v32, v5 + 6);
    }
  }
  return result;
}
