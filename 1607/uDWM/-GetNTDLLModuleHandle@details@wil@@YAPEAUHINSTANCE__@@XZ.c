/*
 * XREFs of ?GetNTDLLModuleHandle@details@wil@@YAPEAUHINSTANCE__@@XZ @ 0x18007172C
 * Callers:
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180072310 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 * Callees:
 *     <none>
 */

HINSTANCE __fastcall wil::details::GetNTDLLModuleHandle(wil::details *this)
{
  HINSTANCE result; // rax

  result = (HINSTANCE)`wil::details::GetNTDLLModuleHandle'::`2'::s_hmod;
  if ( !`wil::details::GetNTDLLModuleHandle'::`2'::s_hmod )
  {
    result = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod = (__int64)result;
  }
  return result;
}
