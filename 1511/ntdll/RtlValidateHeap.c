/*
 * XREFs of RtlValidateHeap @ 0x1800756A0
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800E07B0 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x18001BDD0 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18001C0D4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlUnlockHeap @ 0x180023960 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18002E860 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18007587C (RtlpValidateHeapEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  char v6; // r15
  char *v7; // rdx
  BOOLEAN v8; // al
  PRTL_DYNAMIC_HASH_TABLE v9; // rbx
  BOOLEAN v11; // bl
  ULONG v12; // r15d
  __int64 v13; // rcx
  BOOLEAN v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+24h] [rbp-64h]
  _BYTE Fields[6]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v18; // [rsp+36h] [rbp-52h]
  PVOID v19; // [rsp+50h] [rbp-38h]

  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v11 = 1;
    v12 = Flags & 1;
    if ( (Flags & 1) == 0 )
      RtlLockHeap(HeapHandle);
    v16 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v13 = *((unsigned int *)HeapHandle + 10);
    if ( (_DWORD)v13 && (_DWORD)v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v16 |= 1u;
    if ( BaseAddress )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0
        && !((_WORD)BaseAddress ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v13, (unsigned __int64)BaseAddress >> 16)) )
      {
        BaseAddress = (char *)BaseAddress - 16;
      }
      v11 = RtlpHpSizeHeap((__int64)HeapHandle, (unsigned __int64)BaseAddress, v16) != -1;
    }
    if ( !v12 )
      RtlUnlockHeap(HeapHandle);
    return v11;
  }
  else
  {
    v15 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v9 = qword_180142118;
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, ULONG))_guard_check_icall_fptr)(qword_180142118, Flags);
      v15 = ((__int64 (__fastcall *)(PVOID, _QWORD, PVOID))v9)(HeapHandle, Flags, BaseAddress);
    }
    else if ( RtlpCheckHeapSignature(HeapHandle, "RtlValidateHeap") )
    {
      if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
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
        v8 = RtlpValidateHeap(HeapHandle);
      }
      v15 = v8;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v18 = 4141;
        v19 = HeapHandle;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
      }
    }
    return v15;
  }
}
