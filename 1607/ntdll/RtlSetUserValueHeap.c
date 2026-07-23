/*
 * XREFs of RtlSetUserValueHeap @ 0x180029040
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x1800FB1B0 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x180029010 (RtlpGetExtraStuffPointer.c)
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004667C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FB1B0 (RtlDebugSetUserValueHeap.c)
 */

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  unsigned __int64 v5; // rbx
  BOOLEAN v7; // r15
  char v8; // r12
  int v9; // ecx
  BOOLEAN v10; // di
  __int64 v11; // rax
  ULONG v13; // r14d
  char *v14; // rbx
  struct _TEB *v15; // rbx
  struct _TEB *v17; // rbx
  int v18; // ecx
  struct _TEB *v19; // rbx
  char v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+34h] [rbp-34h]

  v5 = (unsigned __int64)BaseAddress;
  v7 = 0;
  v8 = 0;
  v20 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v21 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v9 = *((_DWORD *)HeapHandle + 10);
    v10 = 1;
    if ( v9 && v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v21 |= 1u;
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && v5
      && !((_WORD)v5 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v5 >> 16, 1LL)) )
    {
      v5 -= 16LL;
    }
    v11 = RtlpHpExtrasGet(HeapHandle, v5, v21 | *((_DWORD *)HeapHandle + 5), 0LL);
    if ( v11 )
      *(_QWORD *)(v11 + 8) = UserValue;
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
  v13 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return RtlDebugSetUserValueHeap(HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v14 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    goto LABEL_17;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v18 = 9;
    goto LABEL_45;
  }
  v14 = (char *)BaseAddress - 16;
  _m_prefetchw((char *)BaseAddress - 16);
  if ( *((char *)BaseAddress - 1) == 5 )
    v14 -= 16 * (unsigned __int8)v14[14];
  if ( (v14[15] & 0x3F) == 0 )
  {
    LODWORD(BaseAddress) = (_DWORD)v14;
    v18 = 8;
LABEL_45:
    RtlpLogHeapFailure(v18, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
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
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v8 = 1;
    v20 = 1;
  }
  if ( (v14[15] & 0x3F) != 0 )
  {
    if ( v14[15] >= 0 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v14 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v14[11] != ((unsigned __int8)v14[8] ^ (unsigned __int8)(v14[9] ^ v14[10])) )
          RtlpAnalyzeHeapFailure(HeapHandle, v14);
      }
      if ( (v14[10] & 2) != 0 )
      {
        *(_QWORD *)(RtlpGetExtraStuffPointer((__int64)v14) + 8) = UserValue;
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
  if ( v14 && *((_DWORD *)HeapHandle + 31) )
  {
    v14[11] = v14[8] ^ v14[9] ^ v14[10];
    *((_DWORD *)v14 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v7;
}
