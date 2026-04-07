/*
 * XREFs of ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180072310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetNTDLLModuleHandle@details@wil@@YAPEAUHINSTANCE__@@XZ @ 0x18007172C (-GetNTDLLModuleHandle@details@wil@@YAPEAUHINSTANCE__@@XZ.c)
 */

char __fastcall wil::details::RtlDllShutdownInProgress(wil::details *this)
{
  FARPROC ProcAddress; // rax
  char v2; // bl
  HMODULE NTDLLModuleHandle; // rax

  ProcAddress = (FARPROC)`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress;
  v2 = 0;
  if ( `wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress )
    return ((__int64 (__fastcall *)(wil::details *))ProcAddress)(this);
  NTDLLModuleHandle = wil::details::GetNTDLLModuleHandle(this);
  ProcAddress = GetProcAddress(NTDLLModuleHandle, "RtlDllShutdownInProgress");
  `wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(wil::details *))ProcAddress)(this);
  return v2;
}
