/*
 * XREFs of ?RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180042270
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpActivityHostCommitSavingsCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        _DWORD *a4)
{
  bool v4; // zf
  int ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  _BOOL8 ProcessInformation_4; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+2Ch] [rbp-1Ch]

  v4 = *a4 == 0;
  v8 = 0;
  ProcessInformation = 2;
  ProcessInformation_4 = !v4;
  return NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x10u);
}
