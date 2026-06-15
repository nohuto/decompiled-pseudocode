/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x14002602C
 * Callers:
 *     _CVpoContext::_CVpoContext_::_1_::dtor$0 @ 0x14001A972 (_CVpoContext--_CVpoContext_--_1_--dtor$0.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$0 @ 0x14001AC80 (_CStreamGroup--_CStreamGroup_--_1_--dtor$0.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$0 @ 0x14001AD57 (_CStreamGroup--CStreamGroup_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$0 @ 0x14001B01E (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$0 @ 0x14001B0C6 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::CComObject_CSystemAudioDeviceShared__::_1_::dtor$1 @ 0x14001B1A0 (_ATL--CComObject_CSystemAudioDeviceShared_--CComObject_CSystemAudioDeviceShared__--_1_--dtor$1.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::_CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x14001B1D1 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--_CComObject_CCrossProcessServer_ea_14001B1D1.c)
 *     _CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x14001BE00 (_CCrossProcessServerInputEndpoint--CCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x14001BF30 (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::_CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x140025F15 (_CCrossProcessServerOutputEndpoint--_CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x140025F82 (_CSystemAudioDeviceShared--CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x14002ADB1 (_CSystemAudioDeviceExclusive--CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::_CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x14002AF79 (_CSystemAudioDeviceExclusive--_CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::CSystemAudioDeviceOffload_::_1_::dtor$0 @ 0x14002CF2A (_CSystemAudioDeviceOffload--CSystemAudioDeviceOffload_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$0 @ 0x14002D1D8 (_CSystemAudioDeviceOffload--_CSystemAudioDeviceOffload_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph_::_1_::dtor$0 @ 0x14002E699 (_CSystemAudioDeviceOffloadGraph--CSystemAudioDeviceOffloadGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$0 @ 0x14002E91C (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$0.c)
 *     _CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint_::_1_::dtor$0 @ 0x140035738 (_CCrossProcessClientInputEndpoint--CCrossProcessClientInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x1400357E8 (_CCrossProcessClientOutputEndpoint--CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x140035887 (_CCrossProcessServerOutputEndpoint--CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::_CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140035E59 (_CCrossProcessClientOutputEndpoint--_CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
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
