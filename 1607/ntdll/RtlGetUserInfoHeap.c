/*
 * XREFs of RtlGetUserInfoHeap @ 0x18007AB50
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800FA794 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x180029020 (RtlpGetExtraStuffPointer.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004668C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007AE0C (RtlpProbeUserBufferSafe.c)
 *     RtlpHpGetUserInfo @ 0x18007AE90 (RtlpHpGetUserInfo.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800FA794 (RtlDebugGetUserInfoHeap.c)
 */

char __fastcall RtlGetUserInfoHeap(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rbx
  int v8; // r15d
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rbx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v15; // rbx
  int v17; // ecx
  int v19; // ecx
  struct _TEB *v20; // rbx
  char v21; // [rsp+31h] [rbp-27h]
  int v22; // [rsp+34h] [rbp-24h]
  __int64 v23; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v21 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v22 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v17 = *(_DWORD *)(a1 + 40);
    if ( v17 && v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v22 |= 1u;
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && v6
      && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal((__int64)&RtlpHpLargeAllocationBitmap, v6 >> 16, 1uLL, 1)) )
    {
      LODWORD(v6) = v6 - 16;
    }
    return RtlpHpGetUserInfo(a1, v6, v22, (_DWORD)a4, (__int64)a5);
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(a1, v8, a3, (_DWORD)a4, (__int64)a5);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(a1, a3);
    v10 = 1;
LABEL_5:
    v11 = v9;
    goto LABEL_6;
  }
  v10 = 1;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(a1, a3);
    goto LABEL_5;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v19 = 9;
  }
  else
  {
    v11 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
    if ( (*(_BYTE *)(v11 + 15) & 0x3F) != 0 )
      goto LABEL_6;
    LODWORD(a3) = v11;
    v19 = 8;
  }
  RtlpLogHeapFailure(v19, a1, a3, 0, 0LL, 0LL);
  v11 = 0LL;
LABEL_6:
  if ( v11 )
  {
    v12 = *(_BYTE *)(v11 + 15);
    if ( v12 >= 0 )
    {
      v13 = v6 - 16;
      _m_prefetchw((const void *)v13);
      if ( *(_BYTE *)(v13 + 15) == 5 )
        v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
      v23 = v13;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v21 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v13);
      }
      if ( (*(_BYTE *)(v13 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v13);
          if ( a4 )
            *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
        }
        if ( a5 )
          *a5 = 16 * (*(_BYTE *)(v13 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v13 = v23;
        v10 = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v21 )
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      return v10;
    }
    if ( (v12 & 0x3F) != 0 )
    {
      if ( a5 )
        *a5 = 0;
      return v10;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v20 = NtCurrentTeb();
  v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
