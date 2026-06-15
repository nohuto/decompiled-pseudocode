/*
 * XREFs of ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x14000C620
 * Callers:
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F590 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?FinalUnregisterForDevice@GraphStreamingResourceManager@@EEAAXPEAURegistrationData@DeviceRegistrations@1@@Z @ 0x14000C550 (-FinalUnregisterForDevice@GraphStreamingResourceManager@@EEAAXPEAURegistrationData@DeviceRegistr.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000D290 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall GraphStreamingResourceManager::UnregisterDevice(
        GraphStreamingResourceManager *this,
        struct DeviceRegistrationToken__ *a2)
{
  void (__fastcall *v4)(GraphStreamingResourceManager *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *); // rbp
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    v4 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *))(*((_QWORD *)this - 1) + 72LL);
    if ( v4 == GraphStreamingResourceManager::FinalUnregisterForDevice )
      GraphStreamingResourceManager::FinalUnregisterForDevice(
        (GraphStreamingResourceManager *)((char *)this - 8),
        (struct DeviceRegistrationToken__ *)((char *)a2 + 16));
    else
      v4((GraphStreamingResourceManager *)((char *)this - 8), (struct DeviceRegistrationToken__ *)((char *)a2 + 16));
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      (char *)this + 200,
      a2);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
