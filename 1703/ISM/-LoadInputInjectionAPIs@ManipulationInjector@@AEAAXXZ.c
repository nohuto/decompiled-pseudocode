/*
 * XREFs of ?LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ @ 0x18009883C
 * Callers:
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@K@Z @ 0x180096804 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@K@Z.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::LoadInputInjectionAPIs(ManipulationInjector *this)
{
  HMODULE LibraryA; // rax
  FARPROC ProcAddress; // rax
  HMODULE v4; // rcx
  FARPROC v5; // rax
  bool v6; // zf
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 98) )
  {
    LibraryA = LoadLibraryA("InputInjection.Dll");
    *((_QWORD *)this + 98) = LibraryA;
    if ( !LibraryA )
    {
      v7 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x61A, v8, (const char *)v7);
      __debugbreak();
    }
    ProcAddress = GetProcAddress(LibraryA, "ApiInjectInitialize");
    v4 = (HMODULE)*((_QWORD *)this + 98);
    *((_QWORD *)this + 99) = ProcAddress;
    v5 = GetProcAddress(v4, "ApiInjectTouchEvent");
    v6 = *((_QWORD *)this + 99) == 0LL;
    *((_QWORD *)this + 100) = v5;
    if ( v6 || !v5 )
    {
      v9 = wil::verify_hresult<long>(0x80004005);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x62A, v10, (const char *)v9);
      JUMPOUT(0x1800988E8LL);
    }
  }
}
