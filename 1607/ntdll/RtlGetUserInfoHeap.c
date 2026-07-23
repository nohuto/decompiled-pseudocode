/*
 * XREFs of RtlGetUserInfoHeap @ 0x18007AB40
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800FA794 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x180029010 (RtlpGetExtraStuffPointer.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004667C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlpHpGetUserInfo @ 0x18007AE80 (RtlpHpGetUserInfo.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800FA794 (RtlDebugGetUserInfoHeap.c)
 */

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  unsigned __int64 v6; // rbx
  ULONG v8; // r15d
  __int64 v9; // rax
  BOOLEAN v10; // r14
  char *v11; // rcx
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

  v6 = (unsigned __int64)BaseAddress;
  v21 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v22 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v17 = *((_DWORD *)HeapHandle + 10);
    if ( v17 && v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v22 |= 1u;
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && v6
      && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal((__int64)&RtlpHpLargeAllocationBitmap, v6 >> 16, 1uLL, 1)) )
    {
      LODWORD(v6) = v6 - 16;
    }
    return RtlpHpGetUserInfo((_DWORD)HeapHandle, v6, v22, (_DWORD)UserValue, (__int64)UserFlags);
  }
  v8 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(HeapHandle, UserFlags);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    v10 = 1;
LABEL_5:
    v11 = (char *)v9;
    goto LABEL_6;
  }
  v10 = 1;
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    goto LABEL_5;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v19 = 9;
  }
  else
  {
    v11 = (char *)BaseAddress - 16;
    _m_prefetchw((char *)BaseAddress - 16);
    if ( *((char *)BaseAddress - 1) == 5 )
      v11 -= 16 * (unsigned __int8)v11[14];
    if ( (v11[15] & 0x3F) != 0 )
      goto LABEL_6;
    LODWORD(BaseAddress) = (_DWORD)v11;
    v19 = 8;
  }
  RtlpLogHeapFailure(v19, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  v11 = 0LL;
LABEL_6:
  if ( v11 )
  {
    v12 = v11[15];
    if ( v12 >= 0 )
    {
      v13 = v6 - 16;
      _m_prefetchw((const void *)v13);
      if ( *(_BYTE *)(v13 + 15) == 5 )
        v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
      v23 = v13;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v21 = 1;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_DWORD *)(v13 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
          RtlpAnalyzeHeapFailure(HeapHandle, v13);
      }
      if ( (*(_BYTE *)(v13 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v13);
          if ( UserValue )
            *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
        }
        if ( UserFlags )
          *UserFlags = 16 * (*(_BYTE *)(v13 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v13 = v23;
        v10 = 0;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v21 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v10;
    }
    if ( (v12 & 0x3F) != 0 )
    {
      if ( UserFlags )
        *UserFlags = 0;
      return v10;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v20 = NtCurrentTeb();
  v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
