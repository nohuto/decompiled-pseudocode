/*
 * XREFs of SetThreadBasePriority @ 0x1C0084560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SetThreadBasePriority(PETHREAD Thread, int a2)
{
  __int128 v5; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]

  *(_QWORD *)&v5 = PsGetThreadProcessId(Thread);
  v7 = a2;
  *((_QWORD *)&v5 + 1) = PsGetThreadId(Thread);
  SystemInformation = v5;
  return ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
}
