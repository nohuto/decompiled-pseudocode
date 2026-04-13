/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x1800239F8
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x180031AC4 (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ @ 0x1800340B8 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ @ 0x1800341C0 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ @ 0x1800342C8 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800343D0 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@st.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800345C8 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_1800345C8.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800347C0 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_1800347C0.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18002FD9C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::to_wstring(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-A8h]
  wchar_t Buffer[64]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  swprintf_s(Buffer, 0x40uLL, L"%u", a2, v5);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( Buffer[0] )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( Buffer[v3] );
  }
  std::wstring::assign(a1, Buffer);
  return a1;
}
