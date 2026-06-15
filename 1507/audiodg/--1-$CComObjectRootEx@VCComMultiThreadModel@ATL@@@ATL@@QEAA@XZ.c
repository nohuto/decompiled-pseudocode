/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x140025E18
 * Callers:
 *     _CVpoContext::_CVpoContext_::_1_::dtor$0 @ 0x14001A931 (_CVpoContext--_CVpoContext_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$0 @ 0x14001A947 (_CSystemAudioDeviceOffload--_CSystemAudioDeviceOffload_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::CSystemAudioDeviceOffload_::_1_::dtor$0 @ 0x14001A9B8 (_CSystemAudioDeviceOffload--CSystemAudioDeviceOffload_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedNew::_CSystemAudioDeviceSharedNew_::_1_::dtor$0 @ 0x14001B622 (_CSystemAudioDeviceSharedNew--_CSystemAudioDeviceSharedNew_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedNew::CSystemAudioDeviceSharedNew_::_1_::dtor$0 @ 0x14001B679 (_CSystemAudioDeviceSharedNew--CSystemAudioDeviceSharedNew_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$0 @ 0x14001B730 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$0 @ 0x14001B7D8 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$0 @ 0x14001BB60 (_CStreamGroup--_CStreamGroup_--_1_--dtor$0.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$0 @ 0x14001BC30 (_CStreamGroup--CStreamGroup_--_1_--dtor$0.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::_CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x14001BD47 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--_CComObject_CCrossProcessServer_ea_14001BD47.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$5 @ 0x14001BE4C (_privateCreateCrossProcessEndpoint_--_1_--dtor$5.c)
 *     _CCrossProcessServerOutputEndpoint::_CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x140025B99 (_CCrossProcessServerOutputEndpoint--_CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x140025C34 (_CCrossProcessServerInputEndpoint--CCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x14002A9A9 (_CSystemAudioDeviceExclusive--CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::_CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x14002AB71 (_CSystemAudioDeviceExclusive--_CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x14002BA4C (_CSystemAudioDeviceShared--CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x14002BC74 (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint_::_1_::dtor$0 @ 0x140035568 (_CCrossProcessClientInputEndpoint--CCrossProcessClientInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140035618 (_CCrossProcessClientOutputEndpoint--CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x1400356B7 (_CCrossProcessServerOutputEndpoint--CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::_CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140035C89 (_CCrossProcessClientOutputEndpoint--_CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::~CComObjectRootEx<ATL::CComMultiThreadModel>(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 8;
  if ( *(_BYTE *)(v1 + 40) )
  {
    *(_BYTE *)(v1 + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)v1);
  }
}
