/*
 * XREFs of RtlpEnumProcessHeaps @ 0x18004E4BC
 * Callers:
 *     RtlFlushHeaps @ 0x180050EC0 (RtlFlushHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x18008F840 (RtlSetHeapDebuggingInformation.c)
 *     RtlGetProcessHeaps @ 0x180090E60 (RtlGetProcessHeaps.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B40 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800E90F0 (RtlEnumProcessHeaps.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800EABFC (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1800F29C0 (RtlpInitializeStackTraceDatabase.c)
 *     RtlpHpStackTraceSerialize @ 0x1800F885C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 a1, __int64 a2, char a3)
{
  struct _PEB *v4; // r14
  int v5; // esi
  unsigned int i; // ebx
  unsigned int j; // ebx

  v4 = NtCurrentPeb();
  v5 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  for ( i = 0; i < v4->NumberOfHeaps; ++i )
  {
    v5 = _guard_dispatch_icall_fptr();
    if ( v5 < 0 )
      goto LABEL_12;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0; j < (unsigned __int16)RtlpNumberOfProtectedHeaps; ++j )
    {
      v5 = _guard_dispatch_icall_fptr();
      if ( v5 < 0 )
        break;
    }
  }
LABEL_12:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return (unsigned int)v5;
}
