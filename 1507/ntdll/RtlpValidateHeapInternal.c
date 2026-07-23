/*
 * XREFs of RtlpValidateHeapInternal @ 0x180038748
 * Callers:
 *     RtlValidateHeap @ 0x180038730 (RtlValidateHeap.c)
 *     RtlpHpVirtValidateHeap @ 0x1800EBD20 (RtlpHpVirtValidateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlLockHeap @ 0x180027440 (RtlLockHeap.c)
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18002AB24 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlUnlockHeap @ 0x180033370 (RtlUnlockHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpValidateHeapEntry @ 0x180038924 (RtlpValidateHeapEntry.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 */

bool __fastcall RtlpValidateHeapInternal(
        PRTL_CRITICAL_SECTION *BaseAddress,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR a2,
        unsigned __int64 a3)
{
  unsigned int v4; // r14d
  char v6; // r15
  unsigned __int64 v7; // rdx
  char v8; // al
  PRTL_DYNAMIC_HASH_TABLE v9; // rbx
  bool v11; // bl
  int v12; // r15d
  __int64 v13; // rcx
  char v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+24h] [rbp-64h]
  _BYTE Fields[6]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v18; // [rsp+36h] [rbp-52h]
  PRTL_CRITICAL_SECTION *v19; // [rsp+50h] [rbp-38h]

  v4 = (unsigned int)a2;
  v6 = 0;
  if ( *((_DWORD *)BaseAddress + 4) == -571548178 )
  {
    v11 = 1;
    v12 = (unsigned __int8)a2 & 1;
    if ( ((unsigned __int8)a2 & 1) == 0 )
      RtlLockHeap(BaseAddress);
    v16 = RtlpHpConvertFlagsToSegmentFlags(v4);
    v13 = *((unsigned int *)BaseAddress + 10);
    if ( (_DWORD)v13 && (_DWORD)v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v16 |= 1u;
    if ( a3 )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 && !((_WORD)a3 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v13, a3 >> 16)) )
        a3 -= 16LL;
      v11 = RtlpHpSizeHeap((__int64)BaseAddress, a3, v16) != -1;
    }
    if ( !v12 )
      RtlUnlockHeap(BaseAddress);
    return v11;
  }
  else
  {
    v15 = 0;
    if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    {
      v9 = HashTable;
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
        HashTable,
        a2);
      v15 = ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, unsigned __int64))v9)(BaseAddress, v4, a3);
    }
    else if ( RtlpCheckHeapSignature(BaseAddress, "RtlValidateHeap") )
    {
      if ( ((*((_BYTE *)BaseAddress + 116) | (unsigned __int8)v4) & 1) == 0 )
      {
        RtlEnterCriticalSection(BaseAddress[44]);
        v6 = 1;
      }
      if ( a3 )
      {
        v7 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
        v8 = RtlpValidateHeapEntry(BaseAddress, v7, "RtlValidateHeap");
      }
      else
      {
        v8 = RtlpValidateHeap(BaseAddress);
      }
      v15 = v8;
    }
    if ( v6 )
      RtlLeaveCriticalSection(BaseAddress[44]);
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v18 = 4141;
        v19 = BaseAddress;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
      }
    }
    return v15;
  }
}
