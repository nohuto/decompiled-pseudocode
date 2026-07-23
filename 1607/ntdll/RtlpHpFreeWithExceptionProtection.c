/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x180046F80
 * Callers:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpGetReservedBlockSize @ 0x180001058 (RtlpGetReservedBlockSize.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x180045F38 (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800460D4 (RtlpIsSubSegmentReuseable.c)
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlpCallInterceptRoutine @ 0x180090F44 (RtlpCallInterceptRoutine.c)
 *     RtlpValidateLFHBlock @ 0x18009116C (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A9DB0 (RtlpInterlockedFlushSList.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1800E3070 (RtlpHeapFatalExceptionFilter.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(PVOID BaseAddress, unsigned __int64 a2, int a3)
{
  int v3; // r12d
  unsigned __int64 v4; // r13
  unsigned int v6; // edi
  unsigned __int64 v7; // r14
  int v8; // r8d
  struct _TEB *v9; // rbx
  char v10; // bl
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // ecx
  unsigned __int16 v14; // ax
  int v15; // ecx
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // rsi
  _DWORD *v19; // rsi
  __int64 v20; // r9
  int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 i; // rdx
  signed __int32 v26; // ebx
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  int v31; // r12d
  _DWORD *v32; // r8
  unsigned int v33; // edx
  unsigned int v34; // r9d
  __int64 v35; // r14
  _DWORD *v36; // rbx
  __int64 v37; // rcx
  signed __int32 v38; // eax
  _QWORD *v39; // r10
  unsigned int v40; // r8d
  _QWORD *v41; // r9
  __int64 **v42; // rdx
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  __int64 v45; // rcx
  __int64 v46; // r13
  __int64 v47; // r14
  ULONG HeapProtection; // eax
  int v49; // r8d
  signed __int64 v50; // rdx
  signed __int32 v51; // eax
  signed __int32 v52; // ett
  __int64 v53; // rcx
  signed __int32 v54; // eax
  __int64 v55; // r10
  unsigned int v56; // r8d
  __int64 v57; // r9
  _QWORD **v58; // rdx
  unsigned __int8 v59; // al
  _WORD v61[4]; // [rsp+3Ch] [rbp-ECh] BYREF
  int v62; // [rsp+44h] [rbp-E4h]
  int v63; // [rsp+48h] [rbp-E0h]
  int v64; // [rsp+4Ch] [rbp-DCh]
  int v65; // [rsp+54h] [rbp-D4h]
  int v66; // [rsp+58h] [rbp-D0h]
  unsigned int j; // [rsp+5Ch] [rbp-CCh]
  unsigned int k; // [rsp+60h] [rbp-C8h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-C0h] BYREF
  signed __int64 v70; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v71; // [rsp+78h] [rbp-B0h]
  __int64 v72; // [rsp+80h] [rbp-A8h]
  PVOID BaseAddressa; // [rsp+88h] [rbp-A0h] BYREF
  int v74; // [rsp+98h] [rbp-90h]
  unsigned int v75; // [rsp+A0h] [rbp-88h]
  ULONG OldProtect; // [rsp+A4h] [rbp-84h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-80h]
  __int64 v78; // [rsp+B0h] [rbp-78h]
  int v79; // [rsp+C0h] [rbp-68h]
  int v80; // [rsp+D0h] [rbp-58h]
  __int64 v81; // [rsp+D8h] [rbp-50h]
  signed __int64 v82; // [rsp+E0h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v6 = RtlpFreeHeapInternal(BaseAddress, (__int64)v61);
    if ( v6 && v61[0] )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_180150938 + 8LL * (v61[0] - 1)) + 32LL),
        -v77);
    return v6;
  }
  v6 = 0;
  v7 = 0LL;
  if ( *((_DWORD *)BaseAddress + 4) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && a2
      && ((_WORD)a2 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL)) )
    {
      v4 -= 16LL;
    }
    v8 = (v3 & 1) != 0;
    if ( (v3 & 8) != 0 )
      v8 |= 2u;
    if ( (v3 & 4) != 0 )
      v8 |= 0x80000000;
    if ( (v3 & 0x100) != 0 )
      v8 |= 0x100u;
    if ( (v3 & 0xE00) != 0 )
      v8 |= v3 & 0xE00;
    if ( (v3 & 0x10) != 0 )
      v8 |= 0x2000000u;
    if ( (v3 & 2) != 0 )
      v8 |= 0x1000000u;
    v6 = RtlpHpFreeHeap((_DWORD)BaseAddress, v4, v8 & 0x11000001, 0, 0LL);
    if ( v6 )
    {
      if ( (RtlpHpHeapFeatures & 4) != 0 && BaseAddress != RtlpHpMetadataHeap )
        goto LABEL_156;
      return v6;
    }
LABEL_24:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v9 = NtCurrentTeb();
    v9->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v6;
  }
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
  {
LABEL_152:
    v59 = RtlpFreeHeap(BaseAddress);
    v6 = v59;
    if ( v59 )
      goto LABEL_153;
    return v6;
  }
  if ( (*((_BYTE *)BaseAddress + 120) & 1) != 0 )
  {
    v7 = RtlpProbeUserBufferSafe(BaseAddress, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, a2, 0, 0LL, 0LL);
    v71 = 0LL;
  }
  else
  {
    v7 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
    if ( (*(_BYTE *)(v7 + 15) & 0x3F) != 0 )
    {
      v71 = v7;
    }
    else
    {
      RtlpLogHeapFailure(8, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
      v7 = 0LL;
      v71 = 0LL;
    }
  }
  if ( !v7 )
    goto LABEL_24;
  if ( *(_BYTE *)(v4 - 16 + 15) == 5 )
  {
    if ( *(char *)(v7 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v74 = *(_DWORD *)(v7 + 8) ^ *((_DWORD *)BaseAddress + 34);
        if ( HIBYTE(v74) != (BYTE2(v74) ^ (unsigned __int8)(BYTE1(v74) ^ v74)) )
          goto LABEL_68;
      }
      v10 = 1;
    }
    else
    {
      v10 = RtlpValidateLFHBlock(BaseAddress, v7);
      if ( !v10 )
      {
LABEL_67:
        if ( !v10 )
        {
LABEL_68:
          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v7, v4, 0LL, 0LL);
          goto LABEL_24;
        }
        if ( (v3 & 0x3C000102) == 0 )
        {
          if ( *(_BYTE *)(v4 - 16 + 15) == 5 )
          {
            v18 = v4 - 16LL * *(unsigned __int8 *)(v4 - 16 + 14);
            v78 = v18;
          }
          else
          {
            v18 = 0LL;
            v78 = 0LL;
          }
          if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v4 - 8), (_DWORD)BaseAddress, v4, 3, v18) < 0 )
            goto LABEL_24;
        }
        goto LABEL_74;
      }
    }
    if ( *(char *)(v7 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v13 = *(_DWORD *)(v7 + 8);
        v79 = v13;
        if ( (v13 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v79 = v13 ^ *((_DWORD *)BaseAddress + 34);
        v14 = v79;
      }
      else
      {
        v14 = *(_WORD *)(v7 + 8);
      }
      v61[2] = v14;
      v12 = v14;
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(v7
                        - (((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12));
      v12 = *(unsigned __int16 *)(v11 + 36);
    }
    if ( *(_BYTE *)(v7 + 15) == 4 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v15 = *(_DWORD *)(v7 + 8);
        v80 = v15;
        if ( (v15 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v80 = v15 ^ *((_DWORD *)BaseAddress + 34);
        v16 = v80;
      }
      else
      {
        v16 = *(_WORD *)(v7 + 8);
      }
      v61[3] = v16;
      v17 = v12 + *(_QWORD *)(v7 - 16) - v16;
    }
    else
    {
      v17 = 16LL * v12;
    }
    if ( v17 + v7 < v4 )
      goto LABEL_68;
    goto LABEL_67;
  }
LABEL_74:
  if ( *(char *)(v7 + 15) >= 0 )
    goto LABEL_152;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))
    || (v19 = *(_DWORD **)(v7
                         - (((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12))) == 0LL )
  {
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
    goto LABEL_151;
  }
  _m_prefetchw(v19);
  v20 = *((_QWORD *)v19 + 1);
  v72 = v20;
  v21 = 0;
  v66 = 0;
  v22 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
  v65 = v22;
  v23 = *(_QWORD *)(**(_QWORD **)v19 + 24LL);
  v81 = v23;
  v75 = RtlpLFHKey ^ v23 ^ v20 ^ *(_DWORD *)(v20 + 24);
  if ( v20 + (unsigned int)v22 * HIWORD(v75) + (unsigned __int16)v75 != v7 )
  {
    RtlpLogHeapFailure(3, *(_QWORD *)(v23 + 24), v7, 0, 0LL, 0LL);
    goto LABEL_150;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapFreeEvent(*(_QWORD *)(v23 + 24), v7 + 16, 2LL);
    v20 = v72;
  }
  v63 = 0;
  v62 = 0;
  v24 = 100LL;
  if ( MEMORY[0x7FFE036A] <= 1u )
    v24 = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v62 = i;
    if ( (unsigned int)i > (unsigned int)v24 )
      break;
    v26 = v19[8];
    v63 = v26;
    if ( (v26 & 0x80000000) == 0 && v26 == _InterlockedCompareExchange(v19 + 8, v26 | 0x80000000, v26) )
      goto LABEL_90;
  }
  v26 = -1;
  v63 = -1;
LABEL_90:
  v64 = v26;
  *(_BYTE *)(v7 + 15) = 0x80;
  if ( v26 == -1 )
  {
    v27 = (_DWORD *)(v7 + 16);
    v28 = (__int64)(v19 + 4);
    goto LABEL_149;
  }
  _bittestandreset64(*(signed __int64 **)(v20 + 40), v22);
  if ( *((_WORD *)v19 + 8) )
  {
    v29 = (_QWORD *)RtlpInterlockedFlushSList(v19 + 4, i, v24, v20);
    while ( v29 )
    {
      v30 = v29 - 2;
      v29 = (_QWORD *)*v29;
      v22 = (unsigned __int16)(*((_DWORD *)v30 + 3) >> 8);
      v65 = (unsigned __int16)(*((_DWORD *)v30 + 3) >> 8);
      _bittestandreset64(*(signed __int64 **)(v72 + 40), v22);
      v66 = ++v21;
    }
  }
  v31 = (_DWORD)v22 << 16;
  v64 = v31 | (v21 + (unsigned __int16)v26 + 1);
  v32 = *(_DWORD **)v19;
  if ( ((unsigned __int16)v31 | (unsigned __int16)(v21 + v26 + 1)) == *((_WORD *)v19 + 20) )
  {
    v33 = *(_DWORD *)(*(_QWORD *)v32 + 32LL);
    v34 = v32[42];
    if ( v32[41] != 1 || v33 < v34 || v33 - v34 >= *(_DWORD *)(*(_QWORD *)v32 + 36LL) )
    {
      v64 = 0;
      v35 = *(_QWORD *)v19;
      v36 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v19 + 8LL), 0LL);
      if ( !v36 )
        goto LABEL_121;
      _m_prefetchw(v36 + 11);
      if ( _InterlockedAnd(v36 + 11, 0xFFFFFFF9) == 6 )
      {
        v37 = **(_QWORD **)v36;
        *(_QWORD *)v36 = 0LL;
        RtlpInterlockedPushEntrySList(v37, v36 + 12);
        goto LABEL_121;
      }
      if ( RtlpIsSubSegmentReuseable(v35, (__int64)v36) )
      {
        do
        {
          v38 = v36[11];
          if ( !v38 || (v38 & 2) != 0 )
            goto LABEL_121;
        }
        while ( v38 != _InterlockedCompareExchange(v36 + 11, v38 | 2, v38) );
        v39 = *(_QWORD **)v36;
        v40 = 0;
        for ( j = 0; ; j = v40 )
        {
          if ( v40 >= 0x10 )
          {
            RtlpInterlockedPushEntrySList(
              *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v36 + 24LL)
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v36 + 172LL)
                        + 1192)
            + 144LL,
              v36 + 12);
            break;
          }
          v41 = &v39[((_BYTE)v40 + (unsigned __int8)*((_WORD *)v39 + 87)) & 0xF];
          v42 = (__int64 **)v41[2];
          if ( v42 )
          {
            if ( (*((_BYTE *)v42 + 44) & 1) == 0
              && v42 == (__int64 **)_InterlockedCompareExchange64(v41 + 2, (signed __int64)v36, (signed __int64)v42) )
            {
              _m_prefetchw((char *)v42 + 44);
              v43 = *((_DWORD *)v42 + 11);
              do
              {
                v44 = v43;
                v43 = _InterlockedCompareExchange((volatile signed __int32 *)v42 + 11, v43 & 0xFFFFFFFD, v43);
              }
              while ( v44 != v43 );
              if ( v43 == 2 )
              {
                v45 = **v42;
                *v42 = 0LL;
                RtlpInterlockedPushEntrySList(v45, v42 + 6);
              }
              break;
            }
          }
          else if ( !_InterlockedCompareExchange64(v41 + 2, (signed __int64)v36, 0LL) )
          {
            break;
          }
          ++v40;
        }
      }
LABEL_121:
      v46 = *(_QWORD *)(*(_QWORD *)v35 + 24LL);
      v47 = *(_QWORD *)v19;
      if ( (*((_BYTE *)v19 + 38) & 3) != 0 )
      {
        BaseAddressa = (PVOID)((*((_QWORD *)v19 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
        RegionSize = 16
                   * *((unsigned __int16 *)v19 + 20)
                   * (unsigned __int64)(unsigned __int16)RtlpGetReservedBlockSize((__int64)v19);
        HeapProtection = RtlpGetHeapProtection(*(_DWORD **)(v46 + 24), 1);
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, HeapProtection, &OldProtect);
      }
      *(_DWORD *)(*((_QWORD *)v19 + 1) + 20LL) = 0;
      RtlpFreeUserBlock(v46, *((__int64 **)v19 + 1));
      v49 = -*((unsigned __int16 *)v19 + 20);
      do
      {
        v50 = *(_QWORD *)(v47 + 160);
        v82 = v50;
        LODWORD(v70) = v49 + v50;
        if ( v49 <= 0 )
          HIDWORD(v70) = HIDWORD(v50) - 1;
        else
          HIDWORD(v70) = HIDWORD(v50) + 1;
      }
      while ( v50 != _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 160), v70, v50) );
      *((_QWORD *)v19 + 1) = 0LL;
      _InterlockedIncrement((volatile signed __int32 *)(v46 + 60));
      v19[8] = 0;
      _m_prefetchw(v19 + 11);
      v51 = v19[11];
      do
      {
        v52 = v51;
        v51 = _InterlockedCompareExchange(v19 + 11, v51 & 0xFFFFFFFE, v51);
      }
      while ( v52 != v51 );
      if ( v51 == 1 )
      {
        v53 = **(_QWORD **)v19;
        *(_QWORD *)v19 = 0LL;
        RtlpInterlockedPushEntrySList(v53, v19 + 12);
      }
      goto LABEL_150;
    }
  }
  v19[8] = v31 | (v21 + (unsigned __int16)v26 + 1);
  if ( (v19[11] & 2) != 0 || !RtlpIsSubSegmentReuseable((__int64)v32, (__int64)v19) )
    goto LABEL_150;
  do
  {
    v54 = v19[11];
    if ( !v54 || (v54 & 2) != 0 )
      goto LABEL_150;
  }
  while ( v54 != _InterlockedCompareExchange(v19 + 11, v54 | 2, v54) );
  v55 = *(_QWORD *)v19;
  v56 = 0;
  for ( k = 0; ; k = v56 )
  {
    if ( v56 >= 0x10 )
    {
      v27 = v19 + 12;
      v28 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v19 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v19 + 172LL) + 1192)
          + 144LL;
      goto LABEL_149;
    }
    v57 = v55 + 8LL * (((_BYTE)v56 + (unsigned __int8)*(_WORD *)(v55 + 174)) & 0xF);
    v58 = *(_QWORD ***)(v57 + 16);
    if ( v58 )
      break;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 16), (signed __int64)v19, 0LL) )
      goto LABEL_150;
LABEL_146:
    ++v56;
  }
  if ( (*((_BYTE *)v58 + 44) & 1) != 0
    || v58 != (_QWORD **)_InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v57 + 16),
                           (signed __int64)v19,
                           (signed __int64)v58) )
  {
    goto LABEL_146;
  }
  _m_prefetchw((char *)v58 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v58 + 11, 0xFFFFFFFD) != 2 )
    goto LABEL_150;
  v28 = **v58;
  *v58 = 0LL;
  v27 = v58 + 6;
LABEL_149:
  RtlpInterlockedPushEntrySList(v28, v27);
LABEL_150:
  v4 = a2;
  v3 = a3;
LABEL_151:
  v6 = 1;
LABEL_153:
  if ( (RtlpHpHeapFeatures & 4) != 0 && BaseAddress != RtlpHpMetadataHeap && (v3 & 0x10000000) == 0 )
LABEL_156:
    RtlpHpStackTraceRemoveStack(BaseAddress, v4);
  return v6;
}
