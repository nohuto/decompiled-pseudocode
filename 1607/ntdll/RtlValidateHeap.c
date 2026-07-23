/*
 * XREFs of RtlValidateHeap @ 0x180076850
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800E99D0 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlLockHeap @ 0x180019AB0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180019E40 (RtlUnlockHeap.c)
 *     RtlpHpSizeHeap @ 0x180046360 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004667C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x1800769A8 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int16 v4; // r14
  char v6; // r15
  char *v7; // rdx
  BOOLEAN v8; // al
  BOOLEAN v10; // di
  ULONG v11; // r15d
  int v12; // ecx
  BOOLEAN v14; // [rsp+20h] [rbp-68h]
  int v15; // [rsp+24h] [rbp-64h]
  _BYTE Fields[6]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v17; // [rsp+36h] [rbp-52h]
  PVOID v18; // [rsp+50h] [rbp-38h]

  v4 = Flags;
  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v10 = 1;
    v11 = Flags & 1;
    if ( (Flags & 1) == 0 )
      RtlLockHeap(HeapHandle);
    v15 = RtlpHpConvertFlagsToSegmentFlags(v4);
    v12 = *((_DWORD *)HeapHandle + 10);
    if ( v12 && v12 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v15 |= 1u;
    if ( BaseAddress )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0
        && !((_WORD)BaseAddress
           ? 0
           : RtlSparseBitmapCtxCheckBitsInternal(
               (__int64)&RtlpHpLargeAllocationBitmap,
               (unsigned __int64)BaseAddress >> 16,
               1uLL,
               1)) )
      {
        BaseAddress = (char *)BaseAddress - 16;
      }
      v10 = RtlpHpSizeHeap((__int64)HeapHandle, (unsigned __int64)BaseAddress, v15) != -1;
    }
    if ( !v11 )
      RtlUnlockHeap(HeapHandle);
    return v10;
  }
  else
  {
    v14 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v14 = _guard_dispatch_icall_fptr();
    }
    else if ( RtlpCheckHeapSignature(HeapHandle, "RtlValidateHeap") )
    {
      if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)v4) & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v6 = 1;
      }
      if ( BaseAddress )
      {
        v7 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v7 -= 16 * (unsigned __int8)v7[14];
        v8 = RtlpValidateHeapEntry(HeapHandle, v7, "RtlValidateHeap");
      }
      else
      {
        v8 = RtlpValidateHeap((_DWORD)HeapHandle);
      }
      v14 = v8;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v17 = 4141;
        v18 = HeapHandle;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
      }
    }
    return v14;
  }
}
