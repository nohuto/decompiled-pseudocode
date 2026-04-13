/*
 * XREFs of ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18002C518
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x1800276B8 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180027890 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??_G?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x18002D400 (--_G-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAAPEAXI@Z.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180060CD8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18002CCA8 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::wistringstream::~wistringstream(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::basic_istringstream<unsigned short>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(a1 - 128);
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::basic_istream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 144);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 148) = *(_DWORD *)(result + 4) - 24;
  return result;
}
