/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x140025FCC
 * Callers:
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$5 @ 0x14001ACD3 (_CStreamGroup--_CStreamGroup_--_1_--dtor$5.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$3 @ 0x14001AE85 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$3.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$4 @ 0x14001B061 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$5 @ 0x14001B074 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$5.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$4 @ 0x14001B109 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14001BE19 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14001BE52 (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
