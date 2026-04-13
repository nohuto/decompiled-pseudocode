/*
 * XREFs of ?ResolveEventNameFromTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180046ACC
 * Callers:
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180047074 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800136E0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180038088 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolveEventNameFromTrigger(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rax
  int v6; // eax
  WCHAR *StringRawBuffer; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  _WORD *v10; // rdx
  __int64 v11; // rcx
  HSTRING string; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v14[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  void *v16[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  unsigned __int64 v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v15 = -2LL;
  v14[1] = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 80LL))(a2, v14);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = &unk_1800F3420;
  while ( *(_DWORD *)v5 != v14[0] )
  {
    v5 += 2;
    if ( v5 == (_QWORD *)&unk_1800F3440 )
    {
      if ( v14[0] != 8 )
      {
        v9 = wil::verify_hresult<long>(0x80070057);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x91,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)v9);
        __debugbreak();
      }
      WindowsDeleteString(0LL);
      string = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 208LL))(a2, &string);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x8C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
      if ( WindowsIsStringEmpty(string) )
      {
        wil::details::OriginateError();
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x8D,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)0x80070057LL);
        __debugbreak();
      }
      StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
      v18 = 7LL;
      v17 = 0LL;
      LOWORD(v16[0]) = 0;
      if ( *StringRawBuffer )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( StringRawBuffer[v8] );
      }
      std::wstring::assign(v16, StringRawBuffer);
      a1[3] = 7LL;
      a1[2] = 0LL;
      *(_WORD *)a1 = 0;
      std::wstring::_Assign_rv(a1, v16);
      if ( v18 >= 8 )
        operator delete(v16[0]);
      v18 = 7LL;
      v17 = 0LL;
      LOWORD(v16[0]) = 0;
      WindowsDeleteString(string);
      return a1;
    }
  }
  v10 = (_WORD *)v5[1];
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( *v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
  }
  std::wstring::assign(a1, v10);
  return a1;
}
