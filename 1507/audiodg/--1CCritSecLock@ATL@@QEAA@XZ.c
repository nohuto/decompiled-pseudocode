/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140025DF0
 * Callers:
 *     _CStreamGroup::GetStreamGroupLatency_::_1_::dtor$0 @ 0x14001A8D3 (_CStreamGroup--GetStreamGroupLatency_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14001B3EC (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x14001B438 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterProcess_::_1_::dtor$0 @ 0x14001B481 (_GraphStreamingResourceManager--RegisterProcess_--_1_--dtor$0.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$3 @ 0x14001B604 (_PublishDeviceGraphWnfState_--_1_--dtor$3.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x14001B610 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CSystemAudioDeviceSharedNew::_CSystemAudioDeviceSharedNew_::_1_::dtor$4 @ 0x14001B667 (_CSystemAudioDeviceSharedNew--_CSystemAudioDeviceSharedNew_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$1 @ 0x14001B6DC (_CAudioDeviceGraph--Initialize_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x14001B9C0 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x14001BA44 (_CStreamGroup--CreateStream_--_1_--dtor$3.c)
 *     _CStreamGroup::Initialize_::_1_::dtor$1 @ 0x14001BB0C (_CStreamGroup--Initialize_--_1_--dtor$1.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x140028950 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x140028B2A (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x140028D02 (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::CreateMode_::_1_::dtor$0 @ 0x1400319CC (_CAudioDeviceGraph--CreateMode_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::CreateStream_::_1_::dtor$0 @ 0x14003201F (_CAudioDeviceGraph--CreateStream_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x140032EE4 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
