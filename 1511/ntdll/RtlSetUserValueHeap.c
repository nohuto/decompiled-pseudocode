/*
 * XREFs of RtlSetUserValueHeap @ 0x180074870
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x1800EFCB8 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x180019CBC (RtlpHpExtrasGet.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18001C0D4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x180074788 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetExtraStuffPointer @ 0x180074A8C (RtlpGetExtraStuffPointer.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlDebugSetUserValueHeap @ 0x1800EFCB8 (RtlDebugSetUserValueHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlSetUserValueHeap(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  char v7; // r15
  char v8; // r12
  unsigned int v9; // r14d
  unsigned __int8 *v10; // rbx
  struct _TEB *v11; // rbx
  __int64 v13; // rcx
  char v14; // si
  unsigned __int64 v15; // rax
  struct _TEB *v17; // rbx
  int v18; // ecx
  struct _TEB *v19; // rbx
  char v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+34h] [rbp-34h]

  v5 = a3;
  v7 = 0;
  v8 = 0;
  v20 = 0;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v9 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(a1, v9);
    if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
    {
      if ( (a3 & 0xF) != 0 )
      {
        v18 = 9;
      }
      else
      {
        v10 = (unsigned __int8 *)(a3 - 16);
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v10 -= 16 * v10[14];
        if ( (v10[15] & 0x3F) != 0 )
        {
LABEL_8:
          if ( !v10 )
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v19 = NtCurrentTeb();
            v19->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            return 0;
          }
          if ( (v9 & 1) == 0 )
          {
            RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
            v8 = 1;
            v20 = 1;
          }
          if ( (v10[15] & 0x3F) != 0 )
          {
            if ( (v10[15] & 0x80u) == 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                *((_DWORD *)v10 + 2) ^= *(_DWORD *)(a1 + 136);
                if ( v10[11] != (v10[8] ^ (unsigned __int8)(v10[9] ^ v10[10])) )
                  RtlpAnalyzeHeapFailure(a1, v10);
              }
              if ( (v10[10] & 2) != 0 )
              {
                *(_QWORD *)(RtlpGetExtraStuffPointer(v10) + 8) = a4;
                v7 = 1;
              }
              goto LABEL_20;
            }
          }
          else
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v11 = NtCurrentTeb();
            v11->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            v8 = v20;
            v7 = 0;
          }
          v10 = 0LL;
LABEL_20:
          if ( v10 && *(_DWORD *)(a1 + 124) )
          {
            v10[11] = v10[8] ^ v10[9] ^ v10[10];
            *((_DWORD *)v10 + 2) ^= *(_DWORD *)(a1 + 136);
          }
          if ( v8 )
            RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
          return v7;
        }
        LODWORD(a3) = (_DWORD)v10;
        v18 = 8;
      }
      RtlpLogHeapFailure(v18, a1, a3, 0, 0LL, 0LL);
      v10 = 0LL;
      goto LABEL_8;
    }
    v10 = RtlpProbeUserBufferSafe(a1, a3);
    goto LABEL_8;
  }
  v21 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v13 = *(unsigned int *)(a1 + 40);
  v14 = 1;
  if ( (_DWORD)v13 && (_DWORD)v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v21 |= 1u;
  if ( (RtlpHpAppCompatFlags & 2) != 0 && v5 && !((_WORD)v5 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v13, v5 >> 16)) )
    v5 -= 16LL;
  v15 = RtlpHpExtrasGet(a1, v5, v21 | *(_DWORD *)(a1 + 20), 0LL);
  if ( v15 )
    *(_QWORD *)(v15 + 8) = a4;
  else
    v14 = 0;
  if ( !v14 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v17 = NtCurrentTeb();
    v17->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  }
  return v14;
}
