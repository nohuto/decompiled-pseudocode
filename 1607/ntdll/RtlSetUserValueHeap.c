/*
 * XREFs of RtlSetUserValueHeap @ 0x180029050
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x1800FB1B0 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x180029020 (RtlpGetExtraStuffPointer.c)
 *     RtlpHpExtrasGet @ 0x18002926C (RtlpHpExtrasGet.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004668C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007AE0C (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FB1B0 (RtlDebugSetUserValueHeap.c)
 */

char __fastcall RtlSetUserValueHeap(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  char v7; // r15
  char v8; // r12
  int v9; // ecx
  char v10; // di
  __int64 v11; // rax
  unsigned int v13; // r14d
  __int64 v14; // rbx
  struct _TEB *v15; // rbx
  struct _TEB *v17; // rbx
  int v18; // ecx
  struct _TEB *v19; // rbx
  char v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+34h] [rbp-34h]

  v5 = a3;
  v7 = 0;
  v8 = 0;
  v20 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v21 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v9 = *(_DWORD *)(a1 + 40);
    v10 = 1;
    if ( v9 && v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v21 |= 1u;
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && v5
      && !((_WORD)v5 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v5 >> 16, 1LL)) )
    {
      v5 -= 16LL;
    }
    v11 = RtlpHpExtrasGet(a1, v5, v21 | *(_DWORD *)(a1 + 20), 0LL);
    if ( v11 )
      *(_QWORD *)(v11 + 8) = a4;
    else
      v10 = 0;
    if ( !v10 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v17 = NtCurrentTeb();
      v17->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v10;
  }
  v13 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return RtlDebugSetUserValueHeap(a1, v13);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v14 = RtlpProbeUserBufferSafe(a1, a3);
    goto LABEL_17;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v18 = 9;
    goto LABEL_45;
  }
  v14 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
  if ( (*(_BYTE *)(v14 + 15) & 0x3F) == 0 )
  {
    LODWORD(a3) = v14;
    v18 = 8;
LABEL_45:
    RtlpLogHeapFailure(v18, a1, a3, 0, 0LL, 0LL);
    v14 = 0LL;
  }
LABEL_17:
  if ( !v14 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v19 = NtCurrentTeb();
    v19->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (v13 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v8 = 1;
    v20 = 1;
  }
  if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
  {
    if ( *(char *)(v14 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v14);
      }
      if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
      {
        *(_QWORD *)(RtlpGetExtraStuffPointer(v14) + 8) = a4;
        v7 = 1;
      }
      goto LABEL_29;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v15 = NtCurrentTeb();
    v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    v8 = v20;
    v7 = 0;
  }
  v14 = 0LL;
LABEL_29:
  if ( v14 && *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
    *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v7;
}
