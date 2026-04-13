/*
 * XREFs of ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180032BB4
 * Callers:
 *     ??0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@PEBGU_FILETIME@@@Z @ 0x180034A0C (--0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA.c)
 *     ?TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPEAUHSTRING__@@22PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180049274 (-TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPE.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX$$QEAV12@@Z @ 0x1800273A0 (-_Assign_rv@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800375B4 (-str@-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800375DC (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1800376BC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1800384E4 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800548DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v9[13]; // [rsp+D0h] [rbp-38h] BYREF
  void *v10[3]; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v11; // [rsp+150h] [rbp+48h]

  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(&v7);
  v4 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(&v8, L"SubscribedContent-");
  std::operator<<<unsigned short,std::char_traits<unsigned short>>(v4, a2);
  v5 = (_QWORD *)std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(
                   &v7,
                   v10);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v5);
  if ( v11 >= 8 )
    operator delete(v10[0]);
  v11 = 7LL;
  v10[2] = 0LL;
  LOWORD(v10[0]) = 0;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v9);
  v9[0] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)v9);
  return a1;
}
