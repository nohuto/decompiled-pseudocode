/*
 * XREFs of ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x1400095C0
 * Callers:
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140004834 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphS.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x140001F78 (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@.c)
 *     ??0?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA@IMMMI@Z @ 0x140001FF4 (--0-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$CEle.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140008164 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
GraphStreamingResourceManager *__fastcall GraphStreamingResourceManager::GraphStreamingResourceManager(
        GraphStreamingResourceManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  float v4; // xmm4_4
  int v5; // xmm5_4

  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( *(_QWORD *)g_hSqmSession.Data4 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)g_hSqmSession.Data4 + 8LL))(*(_QWORD *)g_hSqmSession.Data4);
  *(_QWORD *)this = &GraphStreamingResourceManager::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &GraphStreamingResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>,1,0>'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 17;
  *((_QWORD *)this + 12) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 10;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 21) = 1061158912;
  *((_DWORD *)this + 22) = 1048576000;
  *((_DWORD *)this + 23) = 1074790400;
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds((__int64)this + 64);
  ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>(
    (__int64)this + 136,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>(
    (__int64)this + 208,
    v3,
    v4,
    0.25,
    v5);
  *((_QWORD *)this + 35) = 0LL;
  return this;
}
