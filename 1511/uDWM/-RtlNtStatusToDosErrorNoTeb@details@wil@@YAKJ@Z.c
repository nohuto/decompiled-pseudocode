/*
 * XREFs of ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x180070F60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall wil::details::RtlNtStatusToDosErrorNoTeb(wil::details *this)
{
  CIconicAnimatedVisual *v1; // rdi
  unsigned int v2; // ebx
  unsigned int v3; // esi
  HMODULE Library; // rax

  v1 = `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb;
  v2 = 0;
  v3 = (unsigned int)this;
  if ( `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))v1)(v3);
  Library = `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod;
  if ( !`wil::details::GetNTDLLModuleHandle'::`2'::s_hmod )
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    `wil::details::GetNTDLLModuleHandle'::`2'::s_hmod = Library;
  }
  `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb = (CIconicAnimatedVisual *)GetProcAddress(Library, "RtlNtStatusToDosErrorNoTeb");
  v1 = `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb;
  if ( `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))v1)(v3);
  return v2;
}
