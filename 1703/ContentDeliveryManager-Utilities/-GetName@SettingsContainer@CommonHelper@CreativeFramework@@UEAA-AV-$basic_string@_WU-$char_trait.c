/*
 * XREFs of ?GetName@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800693C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreativeFramework::CommonHelper::SettingsContainer::GetName(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  int v4; // eax
  PCWSTR StringRawBuffer; // rax
  char *v6; // rdx
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 8) + 48LL))(*(_QWORD *)(a1 + 8), &string);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  a2[3] = 7LL;
  v6 = (char *)StringRawBuffer;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  if ( *StringRawBuffer )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v6[2 * v7] );
    v3 = v7;
  }
  std::wstring::assign(a2, v6, v3);
  return a2;
}
