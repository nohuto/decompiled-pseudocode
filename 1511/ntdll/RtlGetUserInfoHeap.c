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

char __fastcall RtlGetUserInfoHeap(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rbx
  int v8; // r15d
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rcx
  char v12; // al
  unsigned __int64 v14; // rbx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v16; // rbx
  __int64 v17; // rcx
  int v19; // ecx
  struct _TEB *v20; // rbx
  char v21; // [rsp+31h] [rbp-27h]
  int v22; // [rsp+34h] [rbp-24h]
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v21 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v22 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v17 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v17 && (_DWORD)v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v22 |= 1u;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v17, v6 >> 16)) )
      LODWORD(v6) = v6 - 16;
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
      v14 = v6 - 16;
      _m_prefetchw((const void *)v14);
      if ( *(_BYTE *)(v14 + 15) == 5 )
        v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
      v23 = v14;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v21 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v14);
      }
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v14);
          if ( a4 )
            *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
        }
        if ( a5 )
          *a5 = 16 * (*(_BYTE *)(v14 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v16 = NtCurrentTeb();
        v16->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v14 = v23;
        v10 = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
        *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
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
