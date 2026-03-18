/*
 * XREFs of ObGetProcessHandleCount @ 0x1403E94CC
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     EtwpPsProvTraceProcess @ 0x14044A4A8 (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14044A950 (EtwTraceAppStateChange.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140665F58 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExHandleTableQuery @ 0x1403EC340 (ExHandleTableQuery.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
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
    ExReleaseRundownProtection_0(a1 + 92);
    return v6;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return result;
}
