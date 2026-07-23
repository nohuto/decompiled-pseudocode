/*
 * XREFs of RtlpLowFragHeapFree @ 0x180020B00
 * Callers:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004F614 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlpTryAcquireSubSegmentLock @ 0x180021010 (RtlpTryAcquireSubSegmentLock.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800238C0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x180023AD4 (RtlpFreeUserBlock.c)
 *     RtlpGetReservedBlockSize @ 0x1800867D0 (RtlpGetReservedBlockSize.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A8930 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A8970 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F18BC (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpLowFragHeapFree(int a1, unsigned __int64 a2, ULONG a3)
{
  unsigned int v4; // edx
  _QWORD **v5; // rdi
  _QWORD *v6; // r12
  int v7; // r15d
  unsigned __int64 v8; // rbp
  __int64 v9; // r10
  unsigned int v10; // ecx
  __int64 result; // rax
  int v12; // eax
  unsigned __int16 v13; // bx
  _WORD *v14; // rcx
  _QWORD **v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // edx
  unsigned __int64 v18; // r8
  int v19; // ebp
  unsigned __int64 v20; // r9
  signed __int64 v21; // rdx
  __int64 v22; // rsi
  _DWORD *v23; // rbx
  __int64 v24; // rcx
  signed __int32 v25; // eax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _DWORD *v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rsi
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v32; // rcx
  ULONG HeapProtection; // eax
  int v34; // edx
  signed __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // r9
  int v38; // r8d
  __int64 v39; // rax
  volatile signed __int32 *v40; // rdx
  __int64 v41; // rcx
  signed __int64 v42; // [rsp+70h] [rbp+8h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  OldProtect = a3;
  v4 = a1 ^ RtlpLFHKey ^ *(_DWORD *)(a2 + 8) ^ (a2 >> 4);
  if ( (_WORD)v4 )
    return RtlpLogHeapFailure(3, a1, a2, 0, 0LL, 0LL);
  v5 = *(_QWORD ***)(a2 - ((unsigned __int64)v4 >> 12));
  if ( !v5 )
    return RtlpLogHeapFailure(3, a1, a2, 0, 0LL, 0LL);
  _m_prefetchw(v5);
  v6 = v5[1];
  v7 = 0;
  v8 = (unsigned __int16)(*(_DWORD *)(a2 + 12) >> 8);
  v9 = *(_QWORD *)(**v5 + 24LL);
  v10 = v9 ^ (unsigned int)v6 ^ RtlpLFHKey ^ *((_DWORD *)v6 + 6);
  if ( (_QWORD *)((char *)v6 + (unsigned int)v8 * HIWORD(v10) + (unsigned __int16)v10) != (_QWORD *)a2 )
    return RtlpLogHeapFailure(3, *(_QWORD *)(v9 + 24), a2, 0, 0LL, 0LL);
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v9 + 24), a2 + 16, 2LL);
  v12 = RtlpTryAcquireSubSegmentLock(v5, 0LL);
  *(_BYTE *)(a2 + 15) = 0x80;
  v13 = v12;
  v14 = v5 + 2;
  if ( v12 == -1 )
  {
    v15 = (_QWORD **)(a2 + 16);
    return RtlpInterlockedPushEntrySList(v14, v15);
  }
  _bittestandreset64((signed __int64 *)v6[5], v8);
  if ( *v14 )
  {
    v16 = (_QWORD *)RtlpInterlockedFlushSList();
    while ( v16 )
    {
      v17 = *((_DWORD *)v16 - 1);
      v16 = (_QWORD *)*v16;
      ++v7;
      v8 = (unsigned __int16)(v17 >> 8);
      _bittestandreset64((signed __int64 *)v6[5], v8);
    }
  }
  v18 = (unsigned __int64)*v5;
  v19 = (_DWORD)v8 << 16;
  if ( ((unsigned __int16)v19 | (unsigned __int16)(v7 + v13 + 1)) != *((_WORD *)v5 + 20)
    || (v20 = *(unsigned int *)(v18 + 168), v21 = *(unsigned int *)(*(_QWORD *)v18 + 32LL), *(_DWORD *)(v18 + 164) == 1)
    && (unsigned int)v21 >= (unsigned int)v20
    && (v21 = (unsigned int)(v21 - v20), (unsigned int)v21 < *(_DWORD *)(*(_QWORD *)v18 + 36LL)) )
  {
    *((_DWORD *)v5 + 8) = v19 | (v7 + v13 + 1);
    result = *((unsigned int *)v5 + 11);
    if ( (result & 2) != 0 )
      return result;
    result = RtlpIsSubSegmentReuseable(v18, v5);
    if ( !(_BYTE)result )
      return result;
    do
    {
      result = *((unsigned int *)v5 + 11);
      if ( !(_DWORD)result || (result & 2) != 0 )
        return result;
    }
    while ( (_DWORD)result != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 11, result | 2, result) );
    v37 = (__int64)*v5;
    v38 = 0;
    while ( 1 )
    {
      v39 = ((_BYTE)v38 + (unsigned __int8)*(_WORD *)(v37 + 174)) & 0xF;
      v40 = *(volatile signed __int32 **)(v37 + 8 * v39 + 16);
      v41 = v37 + 8 * v39;
      if ( v40 )
      {
        if ( (v40[11] & 1) == 0
          && v40 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)(v41 + 16),
                                                 (signed __int64)v5,
                                                 (signed __int64)v40) )
        {
          _m_prefetchw((const void *)(v40 + 11));
          result = (unsigned int)_InterlockedAnd(v40 + 11, 0xFFFFFFFD);
          if ( (_DWORD)result != 2 )
            return result;
          v14 = **(_WORD ***)v40;
          *(_QWORD *)v40 = 0LL;
          v15 = (_QWORD **)(v40 + 12);
          return RtlpInterlockedPushEntrySList(v14, v15);
        }
      }
      else
      {
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 16), (signed __int64)v5, 0LL);
        if ( !result )
          return result;
      }
      if ( (unsigned int)++v38 >= 0x10 )
      {
        v15 = v5 + 6;
        v14 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(**v5 + 24LL) + 8LL * *((unsigned __int16 *)*v5 + 86) + 1192) + 144LL);
        return RtlpInterlockedPushEntrySList(v14, v15);
      }
    }
  }
  v22 = (__int64)*v5;
  v23 = (_DWORD *)_InterlockedExchange64(*v5 + 1, 0LL);
  if ( !v23 )
    goto LABEL_36;
  _m_prefetchw(v23 + 11);
  if ( _InterlockedAnd(v23 + 11, 0xFFFFFFF9) == 6 )
  {
    v24 = **(_QWORD **)v23;
    *(_QWORD *)v23 = 0LL;
LABEL_34:
    v28 = v23 + 12;
LABEL_35:
    RtlpInterlockedPushEntrySList(v24, v28);
    goto LABEL_36;
  }
  if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v22, v23) )
    goto LABEL_36;
  do
  {
    v25 = v23[11];
    if ( !v25 || (v25 & 2) != 0 )
      goto LABEL_36;
  }
  while ( v25 != _InterlockedCompareExchange(v23 + 11, v25 | 2, v25) );
  v20 = *(_QWORD *)v23;
  v18 = 0LL;
  while ( 1 )
  {
    v26 = ((_BYTE)v18 + (unsigned __int8)*(_WORD *)(v20 + 174)) & 0xF;
    v21 = *(_QWORD *)(v20 + 8 * v26 + 16);
    v27 = (_QWORD *)(v20 + 8 * v26);
    if ( !v21 )
    {
      if ( !_InterlockedCompareExchange64(v27 + 2, (signed __int64)v23, 0LL) )
        goto LABEL_36;
      goto LABEL_32;
    }
    if ( (*(_DWORD *)(v21 + 44) & 1) == 0 && v21 == _InterlockedCompareExchange64(v27 + 2, (signed __int64)v23, v21) )
      break;
LABEL_32:
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= 0x10 )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v23 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v23 + 172LL) + 1192)
          + 144LL;
      goto LABEL_34;
    }
  }
  _m_prefetchw((const void *)(v21 + 44));
  if ( _InterlockedAnd((volatile signed __int32 *)(v21 + 44), 0xFFFFFFFD) == 2 )
  {
    v24 = **(_QWORD **)v21;
    *(_QWORD *)v21 = 0LL;
    v28 = (_DWORD *)(v21 + 48);
    goto LABEL_35;
  }
LABEL_36:
  v29 = (__int64)*v5;
  v30 = *(_QWORD *)(*(_QWORD *)v22 + 24LL);
  if ( (*((_BYTE *)v5 + 38) & 3) != 0 )
  {
    BaseAddress = (PVOID)(((unsigned __int64)v5[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
    ReservedBlockSize = RtlpGetReservedBlockSize(v5, v21, v18, v20);
    v32 = *(_DWORD **)(v30 + 24);
    RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v5 + 20);
    HeapProtection = RtlpGetHeapProtection(v32, 1);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &OldProtect);
  }
  *((_DWORD *)v5[1] + 5) = 0;
  RtlpFreeUserBlock(v30, v5[1], v18, v20);
  v34 = -*((unsigned __int16 *)v5 + 20);
  do
  {
    v35 = *(_QWORD *)(v29 + 160);
    if ( v34 <= 0 )
      v36 = HIDWORD(v35) - 1;
    else
      v36 = HIDWORD(v35) + 1;
    HIDWORD(v42) = v36;
    LODWORD(v42) = v35 + v34;
  }
  while ( v35 != _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 160), v42, v35) );
  v5[1] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v30 + 60));
  *((_DWORD *)v5 + 8) = 0;
  _m_prefetchw((char *)v5 + 44);
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)v5 + 11, 0xFFFFFFFE);
  if ( (_DWORD)result == 1 )
  {
    v15 = v5 + 6;
    v14 = (_WORD *)**v5;
    *v5 = 0LL;
    return RtlpInterlockedPushEntrySList(v14, v15);
  }
  return result;
}
