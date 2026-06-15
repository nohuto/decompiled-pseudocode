/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x140024DC0
 * Callers:
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$5 @ 0x14001A663 (_CStreamGroup--_CStreamGroup_--_1_--dtor$5.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$3 @ 0x14001A7A5 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$3.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$4 @ 0x14001AC34 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$5 @ 0x14001AC47 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$5.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$4 @ 0x14001ACDC (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14001B8B6 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14001B8EF (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
