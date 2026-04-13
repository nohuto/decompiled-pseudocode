/*
 * XREFs of ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020708
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18000D908 (-ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char_tr.c)
 *     ?ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18000DA34 (-ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char.c)
 *     ?ReadTrackingInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019880 (-ReadTrackingInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019918 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AB30 (-WriteHealthEvaluationInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x180021188 (--$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ??$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x1800212C4 (--$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeli.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void CreativeFramework::Health::details::BaseScenarioEvents<2>::Evaluate()
{
  const WCHAR *v0; // rdx
  __int64 v1; // rsi
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbx
  __int16 v5; // di
  int v6; // r9d
  void **v7; // rax
  void **v8; // rax
  int v9; // r9d
  void **v10; // rax
  void **v11; // rax
  DWORD pcbData; // [rsp+48h] [rbp-39h] BYREF
  int v13; // [rsp+4Ch] [rbp-35h] BYREF
  void **v14; // [rsp+50h] [rbp-31h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-29h] BYREF
  void **v16; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-19h] BYREF
  void *v18[3]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+Fh]
  void *v20[3]; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int64 v21; // [rsp+B0h] [rbp+2Fh]

  v17[1] = -2LL;
  CreativeFramework::Health::details::BaseScenarioEvents<3>::ReadTrackingInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::s_traits);
  CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::s_traits);
  word_18003E3BC = 256;
  pcbData = 20;
  v0 = (const WCHAR *)&qword_18003E398;
  if ( (unsigned __int64)qword_18003E3B0 >= 8 )
    v0 = qword_18003E398;
  if ( RegGetValueW(HKEY_CURRENT_USER, v0, L"HealthEvaluation", 8u, 0LL, &dword_18003E378, &pcbData)
    || pcbData <= 4
    || (_BYTE)dword_18003E378 != 1 )
  {
    dword_18003E378 = 1;
    qword_18003E380 = 0LL;
    qword_18003E388 = 0LL;
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v1 = qword_18003E380;
  v2 = qword_18003E380 + 864000000000LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *))`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::s_traits)(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::s_traits);
  v4 = v3;
  if ( (v3 & 2) != 0 )
    v5 = 2;
  else
    v5 = (v3 & 1) != 0;
  CreativeFramework::Health::details::HealthTrackingInfo::ToString((__int64)&unk_18003E300, v20);
  CreativeFramework::Health::details::PlacementReportedInfo::ToString((__int64)&unk_18003E358, v18);
  v7 = v18;
  if ( v19 >= 8 )
    v7 = (void **)v18[0];
  v17[0] = v7;
  v8 = v20;
  if ( v21 >= 8 )
    v8 = (void **)v20[0];
  v16 = v8;
  v14 = (void **)v4;
  LOWORD(pcbData) = v5;
  v13 = 2;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned int,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    (unsigned int)&v13,
    (unsigned int)&pcbData,
    (unsigned int)&v14,
    v6,
    (__int64)&v16,
    (__int64)v17);
  if ( (_WORD)qword_18003E388 != v5 || v2 <= *(_QWORD *)&SystemTimeAsFileTime || !v1 )
  {
    LOWORD(qword_18003E388) = v5;
    qword_18003E380 = (__int64)SystemTimeAsFileTime;
    LOBYTE(word_18003E3BC) = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WriteHealthEvaluationInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::s_traits);
    v10 = v18;
    if ( v19 >= 8 )
      v10 = (void **)v18[0];
    SystemTimeAsFileTime = (struct _FILETIME)v10;
    v11 = v20;
    if ( v21 >= 8 )
      v11 = (void **)v20[0];
    v14 = v11;
    v16 = (void **)v4;
    LOWORD(pcbData) = v5;
    v13 = 2;
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned int,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
      (unsigned int)&v13,
      (unsigned int)&pcbData,
      (unsigned int)&v16,
      v9,
      (__int64)&v14,
      (__int64)&SystemTimeAsFileTime);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  if ( v21 >= 8 )
    operator delete(v20[0]);
}
