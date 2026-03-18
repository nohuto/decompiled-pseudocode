/*
 * XREFs of ??0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x180069744
 * Callers:
 *     ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x180069910 (--0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ??0?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x180069470 (--0-$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@.c)
 *     ??0?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA@IMMMI@Z @ 0x1800696E8 (--0-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@UUsage.c)
 */

__int64 __fastcall DwmCoreAsimov::CDwmEventManager_Private::CDwmEventManager_Private(
        DwmCoreAsimov::CDwmEventManager_Private *this,
        const struct _TlgProvider_t *a2,
        int a3)
{
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // rdx
  float v7; // xmm4_4
  int v8; // xmm5_4
  __int64 v9; // r10

  DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>(
    this,
    (int)a2,
    a3);
  ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>(
    v3 + 96,
    v4,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>(
    v5 + 168,
    v6,
    v7,
    0.25,
    v8);
  return v9;
}
