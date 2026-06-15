/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x140024E20
 * Callers:
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$0 @ 0x14001A610 (_CStreamGroup--_CStreamGroup_--_1_--dtor$0.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$0 @ 0x14001A6E7 (_CStreamGroup--CStreamGroup_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$0 @ 0x14001ABF1 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$0 @ 0x14001AC99 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$0.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::CComObject_CSystemAudioDeviceShared__::_1_::dtor$1 @ 0x14001B67B (_ATL--CComObject_CSystemAudioDeviceShared_--CComObject_CSystemAudioDeviceShared__--_1_--dtor$1.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::_CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x14001B6D0 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--_CComObject_CCrossProcessServer_ea_14001B6D0.c)
 *     _CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x14001B927 (_CCrossProcessServerInputEndpoint--CCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x14001BA3C (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::_CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x140024CE5 (_CCrossProcessServerOutputEndpoint--_CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::CSystemAudioDeviceShared_::_1_::dtor$0 @ 0x140024D52 (_CSystemAudioDeviceShared--CSystemAudioDeviceShared_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x1400299E9 (_CSystemAudioDeviceExclusive--CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::_CSystemAudioDeviceExclusive_::_1_::dtor$0 @ 0x140029B7D (_CSystemAudioDeviceExclusive--_CSystemAudioDeviceExclusive_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::CSystemAudioDeviceOffload_::_1_::dtor$0 @ 0x14002B996 (_CSystemAudioDeviceOffload--CSystemAudioDeviceOffload_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$0 @ 0x14002BBE7 (_CSystemAudioDeviceOffload--_CSystemAudioDeviceOffload_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph_::_1_::dtor$0 @ 0x14002CFB9 (_CSystemAudioDeviceOffloadGraph--CSystemAudioDeviceOffloadGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$0 @ 0x14002D1D6 (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$0.c)
 *     _CVpoContext::_CVpoContext_::_1_::dtor$0 @ 0x140031C5A (_CVpoContext--_CVpoContext_--_1_--dtor$0.c)
 *     _CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint_::_1_::dtor$0 @ 0x140034A38 (_CCrossProcessClientInputEndpoint--CCrossProcessClientInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140034AE8 (_CCrossProcessClientOutputEndpoint--CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x140034B87 (_CCrossProcessServerOutputEndpoint--CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::_CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x1400350A9 (_CCrossProcessClientOutputEndpoint--_CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
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
