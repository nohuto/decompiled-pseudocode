/*
 * XREFs of RtlGetUserInfoHeap @ 0x1800744C0
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800EF27C (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18001C0D4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x180074788 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpGetUserInfo @ 0x18007480C (RtlpHpGetUserInfo.c)
 *     RtlpGetExtraStuffPointer @ 0x180074A8C (RtlpGetExtraStuffPointer.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800EF27C (RtlDebugGetUserInfoHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
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
  char *v14; // rbx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v16; // rbx
  __int64 v17; // rcx
  int v19; // ecx
  struct _TEB *v20; // rbx
  char v21; // [rsp+31h] [rbp-27h]
  int v22; // [rsp+34h] [rbp-24h]
  char *v23; // [rsp+38h] [rbp-20h]

  v6 = (unsigned __int64)BaseAddress;
  v21 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v22 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v17 = *((unsigned int *)HeapHandle + 10);
    if ( (_DWORD)v17 && (_DWORD)v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v22 |= 1u;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v17, v6 >> 16)) )
      LODWORD(v6) = v6 - 16;
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
      v14 = (char *)(v6 - 16);
      _m_prefetchw(v14);
      if ( v14[15] == 5 )
        v14 -= 16 * (unsigned __int8)v14[14];
      v23 = v14;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v21 = 1;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v14 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v14[11] != ((unsigned __int8)v14[8] ^ (unsigned __int8)(v14[9] ^ v14[10])) )
          RtlpAnalyzeHeapFailure(HeapHandle, v14);
      }
      if ( (v14[15] & 0x3F) != 0 )
      {
        if ( (v14[10] & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v14);
          if ( UserValue )
            *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
        }
        if ( UserFlags )
          *UserFlags = 16 * (v14[10] & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v16 = NtCurrentTeb();
        v16->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v14 = v23;
        v10 = 0;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v14[11] = v14[8] ^ v14[9] ^ v14[10];
        *((_DWORD *)v14 + 2) ^= *((_DWORD *)HeapHandle + 34);
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
