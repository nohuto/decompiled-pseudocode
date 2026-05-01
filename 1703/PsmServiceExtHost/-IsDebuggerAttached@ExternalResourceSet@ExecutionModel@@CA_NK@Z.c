/*
 * XREFs of ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x180034C4C
 * Callers:
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180034D20 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ExternalResourceSet::IsDebuggerAttached(DWORD dwProcessId)
{
  bool v1; // bl
  HANDLE v2; // rax
  void *v3; // rdi
  HANDLE ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = OpenProcess(0x400u, 0, dwProcessId);
  v3 = v2;
  if ( v2 )
  {
    ProcessInformation = 0LL;
    v1 = NtQueryInformationProcess(v2, ProcessDebugPort, &ProcessInformation, 8u, 0LL) >= 0 && ProcessInformation;
    if ( ProcessInformation )
      CloseHandle(ProcessInformation);
    CloseHandle(v3);
  }
  return v1;
}
