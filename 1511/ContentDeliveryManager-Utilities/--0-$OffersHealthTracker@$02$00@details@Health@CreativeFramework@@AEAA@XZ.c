/*
 * XREFs of ??0?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A3FC
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x180019C2C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$08$$$V@PlacementHealth@?A0x15bf3041@@YAXPEBG@Z @ 0x180019D68 (--$HandleEvent@$08$$$V@PlacementHealth@-A0x15bf3041@@YAXPEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001408 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800163F4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800280CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Health::details::OffersHealthTracker<3,1>::OffersHealthTracker<3,1>(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  wchar_t Buffer[104]; // [rsp+30h] [rbp-E8h] BYREF

  *(_QWORD *)a1 = &CreativeFramework::Health::details::BaseScenarioEvents<3>::`vftable';
  memset_0((void *)(a1 + 16), 0, 0x50uLL);
  memset_0((void *)(a1 + 104), 0, 0x20uLL);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 3;
  *(_QWORD *)(a1 + 192) = 7LL;
  v2 = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_WORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_WORD *)(a1 + 204) = 0;
  *(_BYTE *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 96) = 1;
  *(_BYTE *)(a1 + 136) = 1;
  StringCchPrintfW(
    Buffer,
    100LL,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Health\\Placement-%u",
    *(unsigned int *)(a1 + 160),
    a1,
    -2LL);
  if ( Buffer[0] )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( Buffer[v3] );
    v2 = v3;
  }
  std::wstring::assign((void **)(a1 + 168), (char *)Buffer, v2);
  *(_QWORD *)a1 = &CreativeFramework::Health::details::BaseEventsWithEvaluation<1,3>::`vftable';
  return a1;
}
