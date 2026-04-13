/*
 * XREFs of ??0?$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D28C
 * Callers:
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B24C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18002B8B4 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_ @ 0x18002BEC0 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001648 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180028718 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall CreativeFramework::Health::details::OffersHealthTracker<14,1>::OffersHealthTracker<14,1>(void **a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  wchar_t Buffer[104]; // [rsp+30h] [rbp-E8h] BYREF

  memset_0(a1, 0, 0xD8uLL);
  *a1 = &CreativeFramework::Health::details::BaseScenarioEvents<14>::`vftable';
  memset_0(a1 + 2, 0, 0x58uLL);
  memset_0(a1 + 14, 0, 0x20uLL);
  a1[19] = 0LL;
  a1[20] = 0LL;
  *((_DWORD *)a1 + 42) = 14;
  a1[25] = (void *)7;
  v2 = 0LL;
  a1[24] = 0LL;
  *((_WORD *)a1 + 88) = 0;
  *((_DWORD *)a1 + 52) = 0;
  *((_WORD *)a1 + 106) = 0;
  *((_BYTE *)a1 + 8) = 3;
  *((_BYTE *)a1 + 104) = 3;
  *((_BYTE *)a1 + 144) = 3;
  StringCchPrintfW(
    Buffer,
    100LL,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Health\\Placement-%u",
    *((unsigned int *)a1 + 42),
    -2LL,
    a1);
  if ( Buffer[0] )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( Buffer[v3] );
    v2 = v3;
  }
  std::wstring::assign(a1 + 22, (char *)Buffer, v2);
  *a1 = &CreativeFramework::Health::details::BaseEventsWithEvaluation<1,14>::`vftable';
  return a1;
}
