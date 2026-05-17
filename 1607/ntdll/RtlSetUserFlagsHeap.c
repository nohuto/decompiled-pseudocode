/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800E9420
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x1800FAFE4 (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpHpExtrasGet @ 0x18002926C (RtlpHpExtrasGet.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004668C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007AE0C (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FAFE4 (RtlDebugSetUserFlagsHeap.c)
 */

char __fastcall RtlSetUserFlagsHeap(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v6; // rbx
  int v8; // ecx
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
  int v23; // [rsp+88h] [rbp+20h]

  v6 = a3;
  v21 = 0;
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    goto LABEL_46;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v14 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v14 & 0x61000000) != 0 && (v14 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(a1, v14, a3, a4, a5);
    v9 = 1;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v15 = RtlpProbeUserBufferSafe(a1, a3);
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
        RtlpLogHeapFailure(v16, a1, a3, 0LL, 0LL, 0LL);
        v15 = 0LL;
      }
    }
    if ( v15 && (v15[15] & 0x80u) == 0 )
    {
      if ( (v14 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v21 = 1;
      }
      v17 = v6 - 16;
      _m_prefetchw((const void *)v17);
      if ( *(_BYTE *)(v17 + 15) == 5 )
        v17 -= 16LL * *(unsigned __int8 *)(v17 + 14);
      v22 = v17;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v17);
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
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v21 )
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
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
  v8 = *(_DWORD *)(a1 + 40);
  v9 = 1;
  if ( v8 && v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v23 |= 1u;
  if ( !v6 )
    goto LABEL_46;
  if ( (RtlpHpAppCompatFlags & 2) != 0
    && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal((__int64)RtlpHpLargeAllocationBitmap, v6 >> 16, 1uLL, 1)) )
  {
    v6 -= 16LL;
  }
  v11 = RtlpHpExtrasGet(a1, v6, (unsigned int)v23 | *(_DWORD *)(a1 + 20), 0LL);
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
