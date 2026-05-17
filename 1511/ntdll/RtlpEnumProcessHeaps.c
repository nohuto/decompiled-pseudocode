/*
 * XREFs of RtlpEnumProcessHeaps @ 0x180051130
 * Callers:
 *     RtlFlushHeaps @ 0x18004F590 (RtlFlushHeaps.c)
 *     RtlGetProcessHeaps @ 0x18008E3D0 (RtlGetProcessHeaps.c)
 *     RtlQueryProcessHeapInformation @ 0x180094380 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800DFE10 (RtlEnumProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800E01FC (RtlSetHeapDebuggingInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800E1840 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1800E96B0 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 (__fastcall *a1)(void *, __int64), __int64 a2, char a3)
{
  struct _PEB *v6; // r15
  int v7; // ebx
  __int64 i; // rsi
  void **ProcessHeaps; // rbx
  __int64 j; // rdi

  v6 = NtCurrentPeb();
  v7 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  for ( i = 0LL; (unsigned int)i < v6->NumberOfHeaps; i = (unsigned int)(i + 1) )
  {
    ProcessHeaps = v6->ProcessHeaps;
    _guard_check_icall_fptr();
    v7 = a1(ProcessHeaps[i], a2);
    if ( v7 < 0 )
      goto LABEL_12;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0LL; (unsigned int)j < (unsigned __int16)RtlpNumberOfProtectedHeaps; j = (unsigned int)(j + 1) )
    {
      _guard_check_icall_fptr();
      v7 = a1(*((void **)RtlpProtectedHeapsList + j), a2);
      if ( v7 < 0 )
        break;
    }
  }
LABEL_12:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
  return (unsigned int)v7;
}
