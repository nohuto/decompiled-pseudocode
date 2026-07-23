/*
 * XREFs of LdrpCallInitRoutine @ 0x18001527C
 * Callers:
 *     LdrpProcessDetachNode @ 0x18000554C (LdrpProcessDetachNode.c)
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     LdrShutdownProcess @ 0x18005B1A0 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x180071F68 (LdrpInitializeNode.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800CED88 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogError @ 0x180003CE8 (LdrpLogError.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // r14
  int v8; // r8d
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
    LdrpLogError(-1073741502, 150, v8, 0LL);
  }
  return v11;
}
