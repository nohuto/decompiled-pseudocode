/*
 * XREFs of ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180027890
 * Callers:
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$2 @ 0x180071161 (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$3 @ 0x18007116D (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$3.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$9 @ 0x180074587 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_180074587.c)
 * Callees:
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18002C518 (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 */

void __fastcall std::basic_istringstream<unsigned short>::`vbase destructor'(__int64 a1)
{
  struct std::ios_base *v1; // rbx

  v1 = (struct std::ios_base *)(a1 + 144);
  std::wistringstream::~wistringstream(a1 + 144);
  *(_QWORD *)v1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(v1);
}
