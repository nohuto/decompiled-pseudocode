/*
 * XREFs of ?RmpActivityHostQueryOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18002E8D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemoryCommitSaveCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  _DWORD ProcessInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]

  memset_0(ProcessInformation, 0, 0x20uLL);
  ProcessInformation[0] = 3;
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u, 0LL);
  *a4 += v8;
  return 0LL;
}
