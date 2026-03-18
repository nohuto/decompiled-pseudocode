/*
 * XREFs of ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180123D64
 * Callers:
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x1800FA2D4 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1800FA7C4 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 * Callees:
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x18005FEA0 (-ProcessEvent@-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU-$Asi.c)
 *     ?Lookup@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEBA_N_KAEAUUsageEventData@DwmCoreAsimov@@@Z @ 0x1800612B0 (-Lookup@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@U.c)
 *     ?RemoveKey@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA_N_K@Z @ 0x18008DE38 (-RemoveKey@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrait.c)
 */

void __fastcall DwmCoreAsimov::CDwmEventManager::EndUsageLogging(DwmCoreAsimov::CDwmEventManager *this, __int64 a2)
{
  _QWORD *v4; // rcx
  time_t v5; // rax
  _QWORD *v6; // rcx
  __int64 (__fastcall **v7[4])(_QWORD, _QWORD); // [rsp+40h] [rbp-38h] BYREF
  time_t v8; // [rsp+60h] [rbp-18h]

  if ( GetCurrentThreadId() == *((_DWORD *)this + 2) )
  {
    v4 = *(_QWORD **)this;
    v7[3] = 0LL;
    v8 = 0LL;
    v7[0] = (__int64 (__fastcall **)(_QWORD, _QWORD))&DwmCoreAsimov::UsageEventData::`vftable';
    v7[2] = (__int64 (__fastcall **)(_QWORD, _QWORD))&unk_180167798;
    if ( ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::Lookup(
           v4 + 21,
           a2,
           (__int64)v7) )
    {
      v5 = time(0LL);
      v6 = *(_QWORD **)this;
      v8 = v5;
      DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(v6, v7);
      ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::RemoveKey(
        (__int64 *)(*(_QWORD *)this + 168LL),
        a2);
    }
  }
}
