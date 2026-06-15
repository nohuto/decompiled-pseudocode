/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000D290
 * Callers:
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x14000C620 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14000C6D0 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001B521 (_ATL--CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager--DeviceRegistrations_ea_14001B521.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 i; // rax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 40) % *(_DWORD *)(a1 + 16));
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
  if ( a2 == v6 )
    goto LABEL_3;
  for ( i = *(_QWORD *)(v6 + 32); i != a2; i = *(_QWORD *)(i + 32) )
    v6 = i;
  if ( !v6 )
LABEL_3:
    *(_QWORD *)(v5 + 8 * v4) = *(_QWORD *)(a2 + 32);
  else
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(a2 + 32);
  ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::FreeNode(
    a1,
    a2);
}
