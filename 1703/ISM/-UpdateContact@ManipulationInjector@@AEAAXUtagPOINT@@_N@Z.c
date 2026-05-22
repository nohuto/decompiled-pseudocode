/*
 * XREFs of ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z @ 0x180098478
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x1800977E8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x180097A40 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::UpdateContact(ManipulationInjector *this, struct tagPOINT a2, char a3)
{
  char v3; // r10
  ManipulationInjector *v4; // r9
  _QWORD *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v4 = this;
  if ( *((_DWORD *)this + 12) != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4DA,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)this);
    JUMPOUT(0x1800984D9LL);
  }
  *((struct tagPOINT *)this + 18) = a2;
  if ( *(_DWORD *)this == 3 )
  {
    v5 = (_QWORD *)ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v7, *(_QWORD *)&a2);
    *((_QWORD *)v4 + 19) = *v5;
  }
  *((_DWORD *)v4 + 31) = v3 != 0 ? 2 : 131078;
}
