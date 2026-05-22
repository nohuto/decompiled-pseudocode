/*
 * XREFs of ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z @ 0x1800983BC
 * Callers:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x180097848 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXXZ @ 0x1800984DC (-AddZoomContacts@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x180097A40 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::AddContact(ManipulationInjector *this, struct tagPOINT a2, char a3)
{
  char v3; // r10
  ManipulationInjector *v4; // r9
  _QWORD *v5; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v4 = this;
  if ( *((_DWORD *)this + 12) >= 4u )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4C3,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)this);
    JUMPOUT(0x180098475LL);
  }
  *((struct tagPOINT *)this + 19 * *((unsigned int *)this + 12) + 18) = a2;
  if ( *(_DWORD *)this == 3 )
  {
    v5 = (_QWORD *)ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v8, *(_QWORD *)&a2);
    *((_QWORD *)v4 + 19 * *((unsigned int *)v4 + 12) + 19) = *v5;
  }
  *((_DWORD *)v4 + 38 * *((unsigned int *)v4 + 12) + 29) = (*((_DWORD *)v4 + 11))++;
  v6 = *((_DWORD *)v4 + 11);
  if ( v6 == 4 )
    v6 = 0;
  *((_DWORD *)v4 + 11) = v6;
  *((_DWORD *)v4 + 38 * (unsigned int)(*((_DWORD *)v4 + 12))++ + 31) = v3 != 0 ? 2 : 65542;
}
