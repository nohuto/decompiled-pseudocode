/*
 * XREFs of ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800318EC
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_ @ 0x18002BEC0 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_.c)
 * Callees:
 *     ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18001EB80 (-ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char_tr.c)
 *     ?ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18001ECB8 (-ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char.c)
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AA18 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadTrackingInfo@?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AAB4 (-ReadTrackingInfo@-$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DBC4 (-WriteHealthEvaluationInfo@-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x1800324C0 (--$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ??$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x1800325F8 (--$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeli.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void CreativeFramework::Health::details::BaseScenarioEvents<3>::Evaluate()
{
  const WCHAR *v0; // rdx
  unsigned __int64 v1; // rsi
  __int64 v2; // r15
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int16 v5; // bx
  int v6; // r9d
  void **v7; // rax
  void **v8; // rax
  int v9; // r9d
  void **v10; // rax
  void **v11; // rax
  DWORD pcbData; // [rsp+48h] [rbp-39h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h] BYREF
  void **v15; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-19h] BYREF
  void *v17[3]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp+Fh]
  void *v19[3]; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int64 v20; // [rsp+B0h] [rbp+2Fh]

  v16[1] = -2LL;
  CreativeFramework::Health::details::BaseScenarioEvents<12>::ReadTrackingInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::s_traits);
  CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::s_traits);
  word_18008C944 = 256;
  pcbData = 20;
  v0 = (const WCHAR *)&qword_18008C920;
  if ( (unsigned __int64)qword_18008C938 >= 8 )
    v0 = qword_18008C920;
  if ( RegGetValueW(HKEY_CURRENT_USER, v0, L"HealthEvaluation", 8u, 0LL, &dword_18008C900, &pcbData)
    || pcbData <= 4
    || (_BYTE)dword_18008C900 != 3 )
  {
    dword_18008C900 = 3;
    qword_18008C908 = 0LL;
    qword_18008C910 = 0LL;
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v1 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v2 = qword_18008C908;
  v3 = (unsigned int)(qword_18008C908 + 711573504)
     + ((unsigned __int64)((unsigned int)qword_18008C908 + (HIDWORD(qword_18008C908) << 32) + 864000000000LL) >> 32 << 32);
  v4 = (*(__int64 (__fastcall **)(__int64 *))`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::s_traits)(&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::s_traits);
  if ( (v4 & 2) != 0 )
    v5 = 2;
  else
    v5 = (v4 & 1) != 0;
  CreativeFramework::Health::details::HealthTrackingInfo::ToString((__int64)&unk_18008C880, v19);
  CreativeFramework::Health::details::PlacementReportedInfo::ToString((__int64)&unk_18008C8E0, v17);
  v7 = v17;
  if ( v18 >= 8 )
    v7 = (void **)v17[0];
  v14 = (__int64)v7;
  v8 = v19;
  if ( v20 >= 8 )
    v8 = (void **)v19[0];
  v15 = v8;
  v16[0] = v4;
  LOWORD(pcbData) = v5;
  SystemTimeAsFileTime.dwLowDateTime = 3;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned int,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    (unsigned int)&SystemTimeAsFileTime,
    (unsigned int)&pcbData,
    (unsigned int)v16,
    v6,
    (__int64)&v15,
    (__int64)&v14);
  if ( (_WORD)qword_18008C910 != v5 || v3 <= v1 || !v2 )
  {
    LOWORD(qword_18008C910) = v5;
    qword_18008C908 = v1;
    LOBYTE(word_18008C944) = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<15>::WriteHealthEvaluationInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::s_traits);
    v10 = v17;
    if ( v18 >= 8 )
      v10 = (void **)v17[0];
    v16[0] = v10;
    v11 = v19;
    if ( v20 >= 8 )
      v11 = (void **)v19[0];
    v15 = v11;
    v14 = v4;
    LOWORD(pcbData) = v5;
    SystemTimeAsFileTime.dwLowDateTime = 3;
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned int,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
      (unsigned int)&SystemTimeAsFileTime,
      (unsigned int)&pcbData,
      (unsigned int)&v14,
      v9,
      (__int64)&v15,
      (__int64)v16);
  }
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v18 = 7LL;
  v17[2] = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v20 >= 8 )
    operator delete(v19[0]);
}
