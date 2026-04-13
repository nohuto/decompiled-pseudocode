/*
 * XREFs of ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18001EB80
 * Callers:
 *     ?Evaluate@?$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030824 (-Evaluate@-$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030AF0 (-Evaluate@-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030DBC (-Evaluate@-$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031088 (-Evaluate@-$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031354 (-Evaluate@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031620 (-Evaluate@-$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800318EC (-Evaluate@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031BB8 (-Evaluate@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031E84 (-Evaluate@-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001648 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180028718 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall CreativeFramework::Health::details::HealthTrackingInfo::ToString(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  int v5; // [rsp+58h] [rbp-460h]
  int v6; // [rsp+60h] [rbp-458h]
  int v7; // [rsp+68h] [rbp-450h]
  int v8; // [rsp+70h] [rbp-448h]
  int v9; // [rsp+78h] [rbp-440h]
  int v10; // [rsp+80h] [rbp-438h]
  int v11; // [rsp+88h] [rbp-430h]
  int v12; // [rsp+90h] [rbp-428h]
  wchar_t Buffer[512]; // [rsp+A0h] [rbp-418h] BYREF

  v11 = *(unsigned __int8 *)(a1 + 82);
  v10 = *(unsigned __int8 *)(a1 + 81);
  v12 = 0;
  v9 = *(unsigned __int8 *)(a1 + 80);
  v8 = *(_DWORD *)(a1 + 76);
  v7 = *(_DWORD *)(a1 + 72);
  v6 = *(_DWORD *)(a1 + 68);
  v5 = *(_DWORD *)(a1 + 64);
  StringCchPrintfW(
    Buffer,
    512LL,
    L"{ %llu; %llu; %llu; %llu; %llu; %llu; %llu; %llu; %llu; %u; %u; %u; %u; %u; %u }",
    *(_QWORD *)a1,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16),
    *(_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 32),
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 48),
    *(_QWORD *)(a1 + 56),
    v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  if ( Buffer[0] )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( Buffer[v3] );
  }
  std::wstring::assign(a2, Buffer);
  return a2;
}
