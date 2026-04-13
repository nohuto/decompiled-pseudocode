/*
 * XREFs of ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x180001930
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall wil::details::RtlNtStatusToDosErrorNoTeb(wil::details *this)
{
  unsigned int (__fastcall *v1)(_QWORD); // rdi
  unsigned int v2; // ebx
  unsigned int v3; // esi
  HMODULE Library; // rax

  v1 = (unsigned int (__fastcall *)(_QWORD))`wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb;
  v2 = 0;
  v3 = (unsigned int)this;
  if ( `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb )
    return v1(v3);
  Library = `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod;
  if ( !`wil::details::GetNTDLLModuleHandle'::`2'::s_hmod )
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod = Library;
  }
  `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb = (__int64)GetProcAddress(
                                                                                                Library,
                                                                                                "RtlNtStatusToDosErrorNoTeb");
  v1 = (unsigned int (__fastcall *)(_QWORD))`wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb;
  if ( `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb )
    return v1(v3);
  return v2;
}
