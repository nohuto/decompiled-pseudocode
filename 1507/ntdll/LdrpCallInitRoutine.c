/*
 * XREFs of LdrpCallInitRoutine @ 0x180024024
 * Callers:
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180021AB8 (LdrpInitializeThread.c)
 *     LdrpProcessDetachNode @ 0x180043728 (LdrpProcessDetachNode.c)
 *     LdrShutdownProcess @ 0x180044620 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x180044DE4 (LdrpInitializeNode.c)
 *     LdrpCallTlsInitializers @ 0x1800450A4 (LdrpCallTlsInitializers.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800C5A58 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpLogError @ 0x180075B80 (LdrpLogError.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 v8; // r8
  int v9; // r9d
  char v11; // [rsp+48h] [rbp-28h]

  v4 = a4;
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    LOBYTE(a4) = a3;
    LdrpLogEtwEvent(5283, (_DWORD)a2, 0, a4, 0LL);
  }
  ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
    HashTable,
    a2);
  v11 = ((__int64 (__fastcall *)(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *, _QWORD, __int64))HashTable)(a2, a3, v4);
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    LOBYTE(v9) = -1;
    LOBYTE(v8) = -1;
    LdrpLogEtwEvent(5270, (_DWORD)a2, v8, v9, 0LL);
  }
  if ( !v11 && a3 == 1 )
  {
    LOBYTE(v8) = 1;
    LdrpLogError(3221225794LL, 5270LL, v8, 0LL);
  }
  return v11;
}
