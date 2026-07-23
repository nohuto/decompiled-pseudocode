/*
 * XREFs of RtlpEnumProcessHeaps @ 0x180008524
 * Callers:
 *     RtlFlushHeaps @ 0x1800094D0 (RtlFlushHeaps.c)
 *     RtlGetProcessHeaps @ 0x18007F020 (RtlGetProcessHeaps.c)
 *     RtlQueryProcessHeapInformation @ 0x1800C36B0 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800D8000 (RtlEnumProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800D852C (RtlSetHeapDebuggingInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800D9AE0 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1800E4B50 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2,
        char a3)
{
  struct _PEB *v6; // r15
  int v7; // ebx
  __int64 i; // rsi
  void **ProcessHeaps; // rbx
  __int64 j; // rdi

  v6 = NtCurrentPeb();
  v7 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  for ( i = 0LL; (unsigned int)i < v6->NumberOfHeaps; i = (unsigned int)(i + 1) )
  {
    ProcessHeaps = v6->ProcessHeaps;
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
      HashTable,
      a2);
    v7 = ((__int64 (__fastcall *)(void *, _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *))HashTable)(ProcessHeaps[i], a2);
    if ( v7 < 0 )
      goto LABEL_12;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0LL; (unsigned int)j < (unsigned __int16)RtlpNumberOfProtectedHeaps; j = (unsigned int)(j + 1) )
    {
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
        HashTable,
        a2);
      v7 = ((__int64 (__fastcall *)(_QWORD, _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *))HashTable)(
             *((_QWORD *)RtlpProtectedHeapsList + j),
             a2);
      if ( v7 < 0 )
        break;
    }
  }
LABEL_12:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return (unsigned int)v7;
}
