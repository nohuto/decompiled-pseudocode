/*
 * XREFs of ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180026C2C
 * Callers:
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800267C8 (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180026484 (-ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char_tr.c)
 *     ?ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800265B4 (-ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char.c)
 *     ?ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002694C (-ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800269DC (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180026B4C (-WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180031590 (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180031720 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x1800318D0 (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        char *a2)
{
  _DWORD *v4; // rdi
  __int16 v5; // si
  const WCHAR *v6; // rdx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  char v11; // al
  int v12; // r9d
  void **v13; // rax
  void **v14; // rax
  char *v15; // rdi
  char *v16; // rax
  __int16 v17; // r8
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  char v20; // al
  void **v21; // rax
  void **v22; // rax
  void **v23; // rax
  volatile signed __int32 *v24; // rbx
  __int16 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+4Ah] [rbp-BEh] BYREF
  __int16 v27; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-B0h] BYREF
  struct _FILETIME v30; // [rsp+60h] [rbp-A8h] BYREF
  char *v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h]
  void **v33; // [rsp+78h] [rbp-90h] BYREF
  void **v34; // [rsp+80h] [rbp-88h] BYREF
  __int64 v35; // [rsp+88h] [rbp-80h] BYREF
  char *v36; // [rsp+90h] [rbp-78h] BYREF
  void **v37; // [rsp+98h] [rbp-70h] BYREF
  void **v38; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-60h] BYREF
  char *v40; // [rsp+B0h] [rbp-58h] BYREF
  void **v41; // [rsp+B8h] [rbp-50h] BYREF
  void **v42; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v43[2]; // [rsp+C8h] [rbp-40h] BYREF
  void *v44[3]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v45; // [rsp+F0h] [rbp-18h]
  void *v46[3]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v47; // [rsp+110h] [rbp+8h]

  v43[1] = -2LL;
  v31 = a2;
  CreativeFramework::Health::details::BaseScenarioEvents::ReadTrackingInfo(this);
  CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  v4 = (_DWORD *)((char *)this + 144);
  v5 = 0;
  *(_WORD *)((char *)this + 253) = 256;
  pcbData[0] = 36;
  v6 = (const WCHAR *)((char *)this + 216);
  if ( *((_QWORD *)this + 30) >= 8uLL )
    v6 = *(const WCHAR **)v6;
  if ( RegGetValueW(HKEY_CURRENT_USER, v6, L"HealthEvaluation", 8u, 0LL, (char *)this + 144, pcbData)
    || pcbData[0] <= 4
    || *(_BYTE *)v4 != 4 )
  {
    LODWORD(v32) = 0;
    *v4 = 0;
    *(_BYTE *)v4 = 4;
    memset_0((char *)this + 152, 0, 0x20uLL);
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v8 = *((_QWORD *)this + 19);
  v9 = (*(__int64 (__fastcall **)(CreativeFramework::Health::details::BaseScenarioEvents *))(*(_QWORD *)this + 8LL))(this);
  if ( (v9 & 2) != 0 )
  {
    v5 = 2;
  }
  else if ( (v9 & 1) != 0 )
  {
    v5 = 1;
  }
  GetSystemTimeAsFileTime(&v30);
  v10 = v30.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v30) << 32);
  if ( *((_WORD *)this + 81) != v5 || !*((_QWORD *)this + 21) )
  {
    *((_WORD *)this + 81) = v5;
    *((_BYTE *)this + 176) = 0;
    *((_QWORD *)this + 21) = v10;
    *((_BYTE *)this + 253) = 1;
  }
  v11 = *((_BYTE *)this + 176);
  if ( v11 != -1 )
  {
    *((_BYTE *)this + 176) = v11 + 1;
    *((_BYTE *)this + 253) = 1;
  }
  if ( v5 != 2
    && ((unsigned int)*((_QWORD *)this + 21)
      - 2028888064
      + (((unsigned __int64)(unsigned int)*((_QWORD *)this + 21)
        + (HIDWORD(*((_QWORD *)this + 21)) << 32)
        + 144000000000LL) >> 32 << 32) > v10
     || *((_BYTE *)this + 176) <= 3u) )
  {
    v5 = *((_WORD *)this + 80);
  }
  CreativeFramework::Health::details::HealthTrackingInfo::ToString((__int64)this + 16, v46);
  CreativeFramework::Health::details::PlacementReportedInfo::ToString((__int64)this + 112, v44);
  v13 = v44;
  if ( v45 >= 8 )
    v13 = (void **)v44[0];
  v33 = v13;
  v14 = v46;
  if ( v47 >= 8 )
    v14 = (void **)v46[0];
  v34 = v14;
  v35 = v9;
  v25 = v5;
  v15 = (char *)this + 184;
  if ( *((_QWORD *)this + 26) < 8uLL )
    v16 = (char *)this + 184;
  else
    v16 = *(char **)v15;
  v36 = v16;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    (unsigned int)&v36,
    (unsigned int)&v25,
    (unsigned int)&v35,
    v12,
    (__int64)&v34,
    (__int64)&v33,
    *(_QWORD *)a2 + 8LL);
  v17 = *((_WORD *)this + 80);
  if ( *((_QWORD *)this + 19) <= *((_QWORD *)this + 21) )
  {
    v19 = 1LL;
  }
  else
  {
    v18 = *((_BYTE *)this + 177);
    v19 = 10LL;
    if ( v18 < 0xAu )
      v19 = v18;
  }
  if ( v17 != v5
    || !v8
    || (unsigned int)(v8 + 711573504 * v19)
     + ((unsigned __int64)((unsigned int)v8 + 864000000000LL * v19 + (HIDWORD(v8) << 32)) >> 32 << 32) <= v7 )
  {
    *((_WORD *)this + 80) = v5;
    *((_QWORD *)this + 19) = v7;
    if ( v17 == v5 )
    {
      v20 = *((_BYTE *)this + 177);
      if ( v20 != -1 )
        ++v20;
    }
    else
    {
      v20 = 1;
    }
    *((_BYTE *)this + 177) = v20;
    *((_BYTE *)this + 253) = 1;
    v21 = v44;
    if ( *((_BYTE *)this + 248) )
    {
      if ( v45 >= 8 )
        v21 = (void **)v44[0];
      v37 = v21;
      v22 = v46;
      if ( v47 >= 8 )
        v22 = (void **)v46[0];
      v38 = v22;
      v39 = v9;
      v26 = v5;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v15 = *(char **)v15;
      v40 = v15;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (unsigned int)&v40,
        (unsigned int)&v26,
        (unsigned int)&v39,
        1,
        (__int64)&v38,
        (__int64)&v37,
        *(_QWORD *)a2 + 8LL);
    }
    else
    {
      if ( v45 >= 8 )
        v21 = (void **)v44[0];
      v41 = v21;
      v23 = v46;
      if ( v47 >= 8 )
        v23 = (void **)v46[0];
      v42 = v23;
      v43[0] = v9;
      v27 = v5;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v15 = *(char **)v15;
      v31 = v15;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (unsigned int)&v31,
        (unsigned int)&v27,
        (unsigned int)v43,
        1,
        (__int64)&v42,
        (__int64)&v41,
        *(_QWORD *)a2 + 8LL);
    }
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(this);
  if ( v45 >= 8 )
    operator delete(v44[0]);
  v45 = 7LL;
  v44[2] = 0LL;
  LOWORD(v44[0]) = 0;
  if ( v47 >= 8 )
    operator delete(v46[0]);
  v47 = 7LL;
  v46[2] = 0LL;
  LOWORD(v46[0]) = 0;
  v24 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
  if ( v24 && _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
    if ( !_InterlockedDecrement(v24 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
  }
}
