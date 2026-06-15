/*
 * XREFs of ??0HandleRegistrations@CpuManager@@QEAA@XZ @ 0x140001F40
 * Callers:
 *     ??0CpuManager@@QEAA@XZ @ 0x140001D9C (--0CpuManager@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA@IMMMI@Z @ 0x140001FF4 (--0-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$CEle.c)
 */

__int64 __fastcall CpuManager::HandleRegistrations::HandleRegistrations(
        CpuManager::HandleRegistrations *this,
        int a2,
        int a3,
        int a4)
{
  __int64 v4; // rcx

  ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>(
    (_DWORD)this,
    a2,
    a3,
    a4,
    LODWORD(FLOAT_2_25));
  return v4;
}
