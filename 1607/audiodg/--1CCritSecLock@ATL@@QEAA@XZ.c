/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140024DF8
 * Callers:
 *     _CStreamGroup::GetStreamGroupLatency_::_1_::dtor$0 @ 0x14001A4BE (_CStreamGroup--GetStreamGroupLatency_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x14001A4E8 (_CStreamGroup--CreateStream_--_1_--dtor$2.c)
 *     _CStreamGroup::Initialize_::_1_::dtor$1 @ 0x14001A5BC (_CStreamGroup--Initialize_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14001A87C (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x14001A8C8 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterProcess_::_1_::dtor$0 @ 0x14001A911 (_GraphStreamingResourceManager--RegisterProcess_--_1_--dtor$0.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$3 @ 0x14001AA94 (_PublishDeviceGraphWnfState_--_1_--dtor$3.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x14001AAA0 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$3 @ 0x14001AB36 (_CSystemAudioDeviceSharedBase--_CSystemAudioDeviceSharedBase_--_1_--dtor$3.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$2 @ 0x14001ABA8 (_CAudioDeviceGraph--Initialize_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x14001B9DC (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$2 @ 0x14001BA5B (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$2.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x140027FC5 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x14002818A (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x140028352 (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$6 @ 0x14002D241 (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$6.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x140030178 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
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
