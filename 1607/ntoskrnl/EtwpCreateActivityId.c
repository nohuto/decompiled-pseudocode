/*
 * XREFs of EtwpCreateActivityId @ 0x14009F6A4
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCreateActivityId(_QWORD *a1)
{
  volatile signed __int64 *EtwSupport; // rdx
  __int64 result; // rax

  EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
  a1[1] = _InterlockedIncrement64(EtwSupport + 137);
  result = *((_QWORD *)EtwSupport + 136);
  *a1 = result;
  return result;
}
