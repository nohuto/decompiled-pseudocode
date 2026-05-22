/*
 * XREFs of ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x1800986C8
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall ManipulationInjector::UpdatePanContact(
        ManipulationInjector *this,
        unsigned int a2,
        struct tagPOINT a3,
        const char *a4)
{
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 152LL * a2;
  if ( ((*(_DWORD *)((char *)this + v4 + 124) - 65542) & 0xFFFEFFFF) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x55B,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
    JUMPOUT(0x180098720LL);
  }
  *(_DWORD *)((char *)this + v4 + 124) = 131078;
  *(_DWORD *)((char *)this + v4 + 144) += a3.x;
  *(_DWORD *)((char *)this + v4 + 148) += a3.y;
}
