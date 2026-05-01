/*
 * XREFs of ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x180044AB8
 * Callers:
 *     ?RecvCallback@ExternalResourceSet@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180044FC0 (-RecvCallback@ExternalResourceSet@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PE.c)
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005574 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     ??$replace@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@YAPEAPEAXAEAV?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@0@@Z @ 0x18003B0D4 (--$replace@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@YAPEAPEAXAEAV-$auto_xxx@PEAXP6AHPEAX@Z$.c)
 */

bool __fastcall ExecutionModel::ExternalResourceSet::IsDebuggerAttached(DWORD dwProcessId)
{
  bool v1; // bl
  HANDLE v2; // rdi
  void **v3; // rax
  void *v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v6 = 0LL;
  v2 = OpenProcess(0x400u, 0, dwProcessId);
  if ( v2 )
  {
    tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v6);
    v6 = v2;
    v5 = 0LL;
    v3 = tlx::replace<void *,int (*)(void *),&int CloseHandle(void *),0>(&v5);
    if ( NtQueryInformationProcess(v2, ProcessDebugPort, v3, 8u, 0LL) >= 0 )
      v1 = v5 != 0LL;
    tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v5);
  }
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v6);
  return v1;
}
