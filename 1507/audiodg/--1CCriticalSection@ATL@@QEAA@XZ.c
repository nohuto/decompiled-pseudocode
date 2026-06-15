/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x140010634
 * Callers:
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$4 @ 0x14001B773 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$5 @ 0x14001B786 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$5.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$4 @ 0x14001B81B (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$4.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$3 @ 0x14001B8C3 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$3.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$5 @ 0x14001BBB3 (_CStreamGroup--_CStreamGroup_--_1_--dtor$5.c)
 *     _CCrossProcessBaseEndpoint::_CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14001BE95 (_CCrossProcessBaseEndpoint--_CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14001BED0 (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
