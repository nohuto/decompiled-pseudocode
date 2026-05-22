/*
 * XREFs of ?AddZoomContacts@ManipulationInjector@@AEAAXXZ @ 0x1800984DC
 * Callers:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXM@Z @ 0x1800975C8 (-InjectZoom@ManipulationInjector@@QEAAXM@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z @ 0x1800983BC (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z.c)
 */

void __fastcall ManipulationInjector::AddZoomContacts(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  LONG v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct tagPOINT v7; // [rsp+30h] [rbp+10h]
  struct tagPOINT v8; // [rsp+30h] [rbp+10h]
  struct tagPOINT v9; // [rsp+30h] [rbp+10h]

  if ( *((_DWORD *)this + 22) == 16 )
  {
    v7.x = *((_DWORD *)this + 20) - *((_DWORD *)this + 6);
    v7.y = *((_DWORD *)this + 21);
    ManipulationInjector::AddContact(this, v7, 0);
    v5 = *((_DWORD *)this + 20) + *((_DWORD *)this + 6);
  }
  else
  {
    if ( *((_DWORD *)this + 22) != 32 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4EE,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      __debugbreak();
    }
    v8.x = *((_DWORD *)this + 20) - *((_DWORD *)this + 8);
    v8.y = *((_DWORD *)this + 21);
    ManipulationInjector::AddContact(this, v8, 0);
    v5 = *((_DWORD *)this + 8) + *((_DWORD *)this + 20);
  }
  v9.x = v5;
  v9.y = *((_DWORD *)this + 21);
  ManipulationInjector::AddContact(this, v9, 0);
}
