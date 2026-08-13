/*
 * XREFs of main @ 0x140001360
 * Callers:
 *     NtProcessStartup_AfterSecurityCookieInitialized @ 0x140001030 (NtProcessStartup_AfterSecurityCookieInitialized.c)
 * Callees:
 *     <none>
 */

int __fastcall main(int argc, const char **argv, const char **envp)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  int v8; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v9[4]; // [rsp+28h] [rbp-10h] BYREF
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  ProcessInformation = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleCheckingMode, &ProcessInformation, 4u);
  RtlSetUnhandledExceptionFilter(CsrUnhandledExceptionFilter);
  v11 = 13;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, &v11, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v9[0] = 2;
  v9[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessMitigationPolicy, v9, 8u);
  v5 = CsrServerInitialization((unsigned int)argc, argv);
  v6 = v5;
  if ( v5 < 0 )
    NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5);
  v8 = 0;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &v8, 4u);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v6);
  return 0;
}
