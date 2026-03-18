/*
 * XREFs of ObGetProcessHandleCount @ 0x140508648
 * Callers:
 *     EtwTraceAppStateChange @ 0x1405075DC (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1406E90E4 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExHandleTableQuery @ 0x1405086B0 (ExHandleTableQuery.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rtt
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = ObReferenceProcessHandleTable(a1);
  result = 0LL;
  if ( v4 )
  {
    ExHandleTableQuery(v4, &v7, a2);
    _m_prefetchw(&a1[92]);
    v6 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v6 - 2, v6) )
      ExfReleaseRundownProtection(a1 + 92);
    return v7;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return result;
}
