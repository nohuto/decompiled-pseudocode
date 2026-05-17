/*
 * XREFs of RtlValidateHeap @ 0x180076860
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800E9910 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlLockHeap @ 0x180019AC0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180019E50 (RtlUnlockHeap.c)
 *     RtlpHpSizeHeap @ 0x180046370 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004668C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x1800769B8 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 */

bool __fastcall RtlValidateHeap(__int64 a1, __int16 a2, unsigned __int64 a3)
{
  char v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  char v9; // al
  bool v11; // di
  int v12; // r15d
  int v13; // ecx
  char v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+24h] [rbp-64h]
  _BYTE v17[6]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v18; // [rsp+36h] [rbp-52h]
  __int64 v19; // [rsp+50h] [rbp-38h]

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v11 = 1;
    v12 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap(a1);
    v16 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v13 = *(_DWORD *)(a1 + 40);
    if ( v13 && v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v16 |= 1u;
    if ( a3 )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0
        && !((_WORD)a3
           ? 0
           : RtlSparseBitmapCtxCheckBitsInternal((__int64)&RtlpHpLargeAllocationBitmap, a3 >> 16, 1uLL, 1)) )
      {
        a3 -= 16LL;
      }
      v11 = RtlpHpSizeHeap(a1, a3, v16) != -1;
    }
    if ( !v12 )
      RtlUnlockHeap(a1);
    return v11;
  }
  else
  {
    v15 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v15 = _guard_dispatch_icall_fptr();
    }
    else if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlValidateHeap") )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)a2) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = 1;
      }
      if ( a3 )
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        v9 = RtlpValidateHeapEntry(a1, v8, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v7) = 1;
        v9 = RtlpValidateHeap(a1, v7);
      }
      v15 = v9;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v18 = 4141;
        v19 = a1;
        NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v17);
      }
    }
    return v15;
  }
}
