/*
 * XREFs of _anonymous_namespace_::StringToWString @ 0x180027608
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800292B4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x1800333A0 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$basic_st.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::StringToWString(__int64 a1, void **a2)
{
  void **v2; // rbx
  _QWORD *v4; // rcx
  char *v5; // r8

  v2 = a2;
  if ( (unsigned __int64)a2[3] < 0x10 )
    v4 = a2;
  else
    v4 = *a2;
  v5 = (char *)a2[2] + (_QWORD)v4;
  if ( (unsigned __int64)a2[3] >= 0x10 )
    a2 = (void **)*a2;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<char>>>>(a1, a2, v5);
  if ( (unsigned __int64)v2[3] >= 0x10 )
    operator delete(*v2);
  v2[3] = (void *)15;
  v2[2] = 0LL;
  *(_BYTE *)v2 = 0;
  return a1;
}
