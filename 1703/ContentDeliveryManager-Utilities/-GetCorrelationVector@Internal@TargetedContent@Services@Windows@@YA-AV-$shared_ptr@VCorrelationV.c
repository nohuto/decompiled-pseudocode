/*
 * XREFs of ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x1800476F0
 * Callers:
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x180047A40 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x1800483D0 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x180049E98 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18004A18C (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@_W@std@@@std@@@std@@@-$basic_s.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetCorrelationVector(__int64 a1, HSTRING a2)
{
  WCHAR *StringRawBuffer; // rax
  __int64 v4; // r8
  void **v5; // rcx
  void **v6; // rdx
  void **v7; // rax
  _QWORD v9[2]; // [rsp+28h] [rbp-58h] BYREF
  void *v10[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  unsigned __int64 v12; // [rsp+50h] [rbp-30h]
  void *v13[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h]
  unsigned __int64 v15; // [rsp+70h] [rbp-10h]

  v9[1] = -2LL;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  v12 = 7LL;
  v11 = 0LL;
  LOWORD(v10[0]) = 0;
  if ( *StringRawBuffer )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( StringRawBuffer[v4] );
  }
  std::wstring::assign(v10, StringRawBuffer);
  v5 = v10;
  if ( v12 >= 8 )
    v5 = (void **)v10[0];
  v6 = v10;
  if ( v12 >= 8 )
    v6 = (void **)v10[0];
  v15 = 15LL;
  v14 = 0LL;
  LOBYTE(v13[0]) = 0;
  std::string::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<wchar_t>>>>(
    v13,
    v6,
    (char *)v5 + 2 * v11);
  v7 = v13;
  if ( v15 >= 0x10 )
    v7 = (void **)v13[0];
  v9[0] = v7;
  std::make_shared<ContentDeliveryManager::Background::CorrelationVectorWrapper,char const *>(a1, v9);
  if ( v15 >= 0x10 )
    operator delete(v13[0]);
  v15 = 15LL;
  v14 = 0LL;
  LOBYTE(v13[0]) = 0;
  if ( v12 >= 8 )
    operator delete(v10[0]);
  return a1;
}
