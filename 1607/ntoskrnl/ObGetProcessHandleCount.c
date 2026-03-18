/*
 * XREFs of ObGetProcessHandleCount @ 0x1404A2C34
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x1404A3048 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14054B508 (EtwpPsProvTraceProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1406A7998 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ExHandleTableQuery @ 0x1404A2C84 (ExHandleTableQuery.c)
 *     ObReferenceProcessHandleTable @ 0x14050D150 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = ObReferenceProcessHandleTable(a1);
  result = 0LL;
  if ( v4 )
  {
    ExHandleTableQuery(v4, &v6, a2);
    ExReleaseRundownProtection(a1 + 92);
    return v6;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return result;
}
