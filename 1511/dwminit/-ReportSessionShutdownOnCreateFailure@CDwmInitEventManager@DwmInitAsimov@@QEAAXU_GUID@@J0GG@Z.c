/*
 * XREFs of ?ReportSessionShutdownOnCreateFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@J0GG@Z @ 0x180005D6C
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@@Z @ 0x180005F34 (-ProcessEvent@-$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU-.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 */

void __fastcall DwmInitAsimov::CDwmInitEventManager::ReportSessionShutdownOnCreateFailure(
        DwmInitAsimov::CDwmInitEventManager *this,
        struct _GUID *a2,
        int a3,
        struct _GUID *a4)
{
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  void **v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+44h] [rbp-24h]
  unsigned __int16 v12; // [rsp+54h] [rbp-14h]
  unsigned __int16 v13; // [rsp+56h] [rbp-12h]

  v4 = *(_QWORD *)this;
  if ( v4 )
  {
    v5 = (__int128)*a2;
    v6 = (__int128)*a4;
    v7 = &DwmInitAsimov::SessionShutdownOnCreateFailureEventData::`vftable';
    v12 = gBootId;
    v13 = gSessionId;
    v8 = 2;
    v9 = v5;
    v10 = a3;
    v11 = v6;
    DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ProcessEvent(v4, &v7);
  }
}
