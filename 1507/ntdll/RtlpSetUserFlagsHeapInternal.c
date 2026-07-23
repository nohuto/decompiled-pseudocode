/*
 * XREFs of RtlpSetUserFlagsHeapInternal @ 0x1800DA634
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800D85F0 (RtlSetUserFlagsHeap.c)
 *     RtlpHpVirtSetUserFlagsHeap @ 0x1800EBBE0 (RtlpHpVirtSetUserFlagsHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18002AB24 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x1800582D4 (RtlpHpExtrasGet.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800ED358 (RtlDebugSetUserFlagsHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpSetUserFlagsHeapInternal(
        PRTL_CRITICAL_SECTION *BaseAddress,
        int a2,
        __int64 a3,
        unsigned int a4,
        ULONG a5)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // rcx
  char v9; // si
  unsigned __int64 v11; // rax
  struct _TEB *v12; // rbx
  ULONG v13; // eax
  int v14; // r12d
  unsigned __int8 *v15; // rcx
  int v16; // ecx
  unsigned __int64 v17; // rbx
  struct _TEB *v18; // rbx
  int v19; // r15d
  char v21; // [rsp+31h] [rbp-37h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v6 = a3;
  v21 = 0;
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    goto LABEL_46;
  if ( *((_DWORD *)BaseAddress + 4) != -571548178 )
  {
    v14 = *((_DWORD *)BaseAddress + 29) | a2;
    if ( (v14 & 0x61000000) != 0 && (v14 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(BaseAddress, a5);
    v9 = 1;
    if ( ((_BYTE)BaseAddress[15] & 1) != 0 )
    {
      v15 = RtlpProbeUserBufferSafe((int)BaseAddress, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v16 = 9;
        goto LABEL_27;
      }
      v15 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v15 -= 16 * v15[14];
      if ( (v15[15] & 0x3F) == 0 )
      {
        a3 = (__int64)v15;
        v16 = 8;
LABEL_27:
        RtlpLogHeapFailure(v16, (__int64)BaseAddress, a3, 0LL, 0LL, 0LL);
        v15 = 0LL;
      }
    }
    if ( v15 && (v15[15] & 0x80u) == 0 )
    {
      if ( (v14 & 1) == 0 )
      {
        RtlEnterCriticalSection(BaseAddress[44]);
        v21 = 1;
      }
      v17 = v6 - 16;
      _m_prefetchw((const void *)v17);
      if ( *(_BYTE *)(v17 + 15) == 5 )
        v17 -= 16LL * *(unsigned __int8 *)(v17 + 14);
      v22 = v17;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v17 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v17);
      }
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) != 0 )
      {
        v19 = *(unsigned __int8 *)(v17 + 10) & ~(a4 >> 4);
        *(_BYTE *)(v17 + 10) = v19;
        *(_BYTE *)(v17 + 10) = v19 | (a5 >> 4);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v18 = NtCurrentTeb();
        v18->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v9 = 0;
        v17 = v22;
      }
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      if ( v21 )
        RtlLeaveCriticalSection(BaseAddress[44]);
      return v9;
    }
LABEL_46:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v12 = NtCurrentTeb();
    v13 = RtlNtStatusToDosError(-1073741811);
    v9 = 0;
    goto LABEL_47;
  }
  v23 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v8 = *((unsigned int *)BaseAddress + 10);
  v9 = 1;
  if ( (_DWORD)v8 && (_DWORD)v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v23 |= 1u;
  if ( !v6 )
    goto LABEL_46;
  if ( (RtlpHpAppCompatFlags & 2) != 0 && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v8, v6 >> 16)) )
    v6 -= 16LL;
  v11 = RtlpHpExtrasGet((__int64)BaseAddress, v6, v23 | *((_DWORD *)BaseAddress + 5));
  if ( v11 )
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v11 + 2) & ((16 * ~BYTE1(a4)) | 0xF) | (16 * BYTE1(a5));
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
