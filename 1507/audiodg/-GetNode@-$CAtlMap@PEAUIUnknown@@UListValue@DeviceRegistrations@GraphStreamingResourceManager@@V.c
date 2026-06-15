/*
 * XREFs of ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x14000D250
 * Callers:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14000C6D0 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x14000D2E0 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::GetNode(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // eax
  __int64 v9; // r8
  __int64 v10; // rdx

  v5 = *a2;
  *a4 = *a2;
  *a3 = v5 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v9 = 0LL;
  *a5 = 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !v10 )
    return 0LL;
  while ( *(_DWORD *)(v10 + 40) != *a4 || *(_QWORD *)v10 != *(_QWORD *)a2 )
  {
    v9 = v10;
    v10 = *(_QWORD *)(v10 + 32);
    if ( !v10 )
      return 0LL;
  }
  *a5 = v9;
  return v10;
}
