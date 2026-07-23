/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800E94E0
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x1800FAFE4 (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004667C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FAFE4 (RtlDebugSetUserFlagsHeap.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  unsigned __int64 v6; // rbx
  int v8; // ecx
  BOOLEAN v9; // si
  unsigned __int64 v11; // rax
  struct _TEB *v12; // rbx
  ULONG v13; // eax
  ULONG v14; // r12d
  unsigned __int8 *v15; // rcx
  int v16; // ecx
  unsigned __int64 v17; // rbx
  struct _TEB *v18; // rbx
  ULONG v19; // r15d
  char v21; // [rsp+31h] [rbp-37h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]
  int v23; // [rsp+88h] [rbp+20h]

  v6 = (unsigned __int64)BaseAddress;
  v21 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_46;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v14 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v14 & 0x61000000) != 0 && (v14 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(HeapHandle, UserFlagsSet);
    v9 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v15 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
    }
    else
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v16 = 9;
        goto LABEL_27;
      }
      v15 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v15 -= 16 * v15[14];
      if ( (v15[15] & 0x3F) == 0 )
      {
        BaseAddress = v15;
        v16 = 8;
LABEL_27:
        RtlpLogHeapFailure(v16, (__int64)HeapHandle, (__int64)BaseAddress, 0LL, 0LL, 0LL);
        v15 = 0LL;
      }
    }
    if ( v15 && (v15[15] & 0x80u) == 0 )
    {
      if ( (v14 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v21 = 1;
      }
      v17 = v6 - 16;
      _m_prefetchw((const void *)v17);
      if ( *(_BYTE *)(v17 + 15) == 5 )
        v17 -= 16LL * *(unsigned __int8 *)(v17 + 14);
      v22 = v17;
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_DWORD *)(v17 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
          RtlpAnalyzeHeapFailure(HeapHandle, v17);
      }
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) != 0 )
      {
        v19 = *(unsigned __int8 *)(v17 + 10) & ~(UserFlagsReset >> 4);
        *(_BYTE *)(v17 + 10) = v19;
        *(_BYTE *)(v17 + 10) = v19 | (UserFlagsSet >> 4);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v18 = NtCurrentTeb();
        v18->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v9 = 0;
        v17 = v22;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v21 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v9;
    }
LABEL_46:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v12 = NtCurrentTeb();
    v13 = RtlNtStatusToDosError(-1073741811);
    v9 = 0;
    goto LABEL_47;
  }
  v23 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v8 = *((_DWORD *)HeapHandle + 10);
  v9 = 1;
  if ( v8 && v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v23 |= 1u;
  if ( !v6 )
    goto LABEL_46;
  if ( (RtlpHpAppCompatFlags & 2) != 0
    && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal((__int64)&RtlpHpLargeAllocationBitmap, v6 >> 16, 1uLL, 1)) )
  {
    v6 -= 16LL;
  }
  v11 = RtlpHpExtrasGet((__int64)HeapHandle, v6, (unsigned int)v23 | *((_DWORD *)HeapHandle + 5), 0LL);
  if ( v11 )
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v11 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF) | (16 * BYTE1(UserFlagsSet));
  else
    v9 = 0;
  if ( !v9 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v12 = NtCurrentTeb();
    v13 = RtlNtStatusToDosError(-1073741811);
LABEL_47:
    v12->LastErrorValue = v13;
  }
  return v9;
}
