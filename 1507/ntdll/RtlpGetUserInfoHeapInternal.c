/*
 * XREFs of RtlpGetUserInfoHeapInternal @ 0x180057D00
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180057CD0 (RtlGetUserInfoHeap.c)
 *     RtlpHpVirtGetUserInfoHeap @ 0x1800EAD04 (RtlpHpVirtGetUserInfoHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18002AB24 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetExtraStuffPointer @ 0x1800582B0 (RtlpGetExtraStuffPointer.c)
 *     RtlpHpExtrasGet @ 0x1800582D4 (RtlpHpExtrasGet.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800ECAF0 (RtlDebugGetUserInfoHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpGetUserInfoHeapInternal(
        PRTL_CRITICAL_SECTION *BaseAddress,
        int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        PULONG a5)
{
  unsigned __int64 v6; // rbx
  int v8; // r15d
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rcx
  char v12; // al
  unsigned __int64 v13; // rbx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v15; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v20; // ecx
  struct _TEB *v21; // rbx
  char v22; // [rsp+31h] [rbp-27h]
  unsigned int v23; // [rsp+34h] [rbp-24h]
  unsigned __int64 v24; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v22 = 0;
  if ( *((_DWORD *)BaseAddress + 4) == -571548178 )
  {
    v23 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v17 = *((unsigned int *)BaseAddress + 10);
    v10 = 1;
    if ( (_DWORD)v17 && (_DWORD)v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v23 |= 1u;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v17, v6 >> 16)) )
      v6 -= 16LL;
    v18 = RtlpHpExtrasGet(BaseAddress, v6, v23 | *((_DWORD *)BaseAddress + 5));
    if ( a4 && v18 )
      *a4 = *(_QWORD *)(v18 + 8);
    if ( a5 )
    {
      if ( v18 )
        *a5 = *(unsigned __int8 *)(v18 + 2) >> 4 << 8;
      else
        *a5 = 0;
    }
    return v10;
  }
  v8 = *((_DWORD *)BaseAddress + 29) | a2;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(BaseAddress, a5);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(BaseAddress, a3);
    v10 = 1;
LABEL_5:
    v11 = v9;
    goto LABEL_6;
  }
  v10 = 1;
  if ( ((_BYTE)BaseAddress[15] & 1) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(BaseAddress, a3);
    goto LABEL_5;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v20 = 9;
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
    v20 = 8;
  }
  RtlpLogHeapFailure(v20, (_DWORD)BaseAddress, a3, 0, 0LL, 0LL);
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
      v24 = v13;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(BaseAddress[44]);
        v22 = 1;
      }
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v13 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v13);
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
        v13 = v24;
        v10 = 0;
      }
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      if ( v22 )
        RtlLeaveCriticalSection(BaseAddress[44]);
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
  v21 = NtCurrentTeb();
  v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
