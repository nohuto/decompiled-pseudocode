/*
 * XREFs of ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x1800369E4
 * Callers:
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180036CA0 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x1800039BC (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 */

bool __fastcall ExecutionModel::ExternalResourceSet::IsDebuggerAttached(DWORD dwProcessId)
{
  bool v1; // bl
  HANDLE v2; // rdi
  void *ProcessInformation; // [rsp+48h] [rbp+10h] BYREF
  void *v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v5 = 0LL;
  v2 = OpenProcess(0x400u, 0, dwProcessId);
  if ( v2 )
  {
    tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v5);
    v5 = v2;
    ProcessInformation = 0LL;
    tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&ProcessInformation);
    ProcessInformation = 0LL;
    if ( NtQueryInformationProcess(v2, ProcessDebugPort, &ProcessInformation, 8u, 0LL) >= 0 )
      v1 = ProcessInformation != 0LL;
    tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&ProcessInformation);
  }
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v5);
  return v1;
}
