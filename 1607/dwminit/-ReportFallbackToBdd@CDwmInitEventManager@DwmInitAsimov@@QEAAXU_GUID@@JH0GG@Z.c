/*
 * XREFs of ?ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180006338
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000271C (-FallBackToBDD@@YA_NXZ.c)
 * Callees:
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@@Z @ 0x180006524 (-ProcessEvent@-$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU-.c)
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 */

void __fastcall DwmInitAsimov::CDwmInitEventManager::ReportFallbackToBdd(
        DwmInitAsimov::CDwmInitEventManager *this,
        struct _GUID *a2,
        int a3,
        __int64 a4,
        struct _GUID *a5)
{
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  void **v8; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+28h] [rbp-50h]
  __int128 v10; // [rsp+30h] [rbp-48h]
  int v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+44h] [rbp-34h]
  __int128 v13; // [rsp+48h] [rbp-30h]
  unsigned __int16 v14; // [rsp+58h] [rbp-20h]
  unsigned __int16 v15; // [rsp+5Ah] [rbp-1Eh]

  v5 = *(_QWORD *)this;
  if ( v5 )
  {
    v6 = (__int128)*a2;
    v8 = &DwmInitAsimov::FallbackToBddEventData::`vftable';
    v12 = gDwmNumRetriesSoFar;
    v10 = v6;
    v9 = 1;
    v11 = a3;
    v7 = (__int128)*a5;
    v14 = gBootId;
    v15 = gSessionId;
    v13 = v7;
    DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ProcessEvent(v5, &v8);
  }
}
