/*
 * XREFs of ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800072A0
 * Callers:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostCommitDebtCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, __int64 a3, _QWORD *a4)
{
  int ProcessInformation; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]

  memset_0(&ProcessInformation, 0, 0x20uLL);
  ProcessInformation = 3;
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u, 0LL);
  *a4 += v8;
  return 0LL;
}
