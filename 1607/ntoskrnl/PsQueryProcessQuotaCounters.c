/*
 * XREFs of PsQueryProcessQuotaCounters @ 0x1404D8180
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1406A7998 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryProcessQuotaCounters(__int64 a1, int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax

  if ( a3 )
  {
    result = a2;
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 784);
  }
  if ( a4 )
  {
    result = a2;
    *a4 = *(_QWORD *)(a1 + 8LL * a2 + 800);
  }
  return result;
}
