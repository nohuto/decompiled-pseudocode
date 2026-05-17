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

bool __fastcall RtlpValidateHeapInternal(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 (__fastcall *v10)(__int64, _QWORD, unsigned __int64); // rbx
  bool v12; // bl
  int v13; // r15d
  __int64 v14; // rcx
  char v16; // [rsp+20h] [rbp-68h]
  int v17; // [rsp+24h] [rbp-64h]
  _BYTE v18[6]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v19; // [rsp+36h] [rbp-52h]
  __int64 v20; // [rsp+50h] [rbp-38h]

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v12 = 1;
    v13 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap(a1);
    v17 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v14 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v14 && (_DWORD)v14 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v17 |= 1u;
    if ( a3 )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 && !((_WORD)a3 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v14, a3 >> 16)) )
        a3 -= 16LL;
      v12 = RtlpHpSizeHeap(a1, a3, v17) != -1;
    }
    if ( !v13 )
      RtlUnlockHeap(a1);
    return v12;
  }
  else
  {
    v16 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v10 = (__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64))qword_180143CF8;
      _guard_check_icall_fptr();
      v16 = v10(a1, a2, a3);
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
      v16 = v9;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v19 = 4141;
        v20 = a1;
        NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v18);
      }
    }
    return v16;
  }
}
