/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140026004
 * Callers:
 *     _CStreamGroup::GetStreamGroupLatency_::_1_::dtor$0 @ 0x14001AA01 (_CStreamGroup--GetStreamGroupLatency_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x14001AA9A (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x14001AB64 (_CStreamGroup--CreateStream_--_1_--dtor$3.c)
 *     _CStreamGroup::Initialize_::_1_::dtor$1 @ 0x14001AC2C (_CStreamGroup--Initialize_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$3 @ 0x14001AF74 (_CSystemAudioDeviceSharedBase--_CSystemAudioDeviceSharedBase_--_1_--dtor$3.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$2 @ 0x14001AFD8 (_CAudioDeviceGraph--Initialize_--_1_--dtor$2.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14001B21A (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x14001B266 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterProcess_::_1_::dtor$0 @ 0x14001B2AF (_GraphStreamingResourceManager--RegisterProcess_--_1_--dtor$0.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$3 @ 0x14001B404 (_PublishDeviceGraphWnfState_--_1_--dtor$3.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x14001B410 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$2 @ 0x14001BF4F (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$2.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x140029460 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x14002963A (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x140029812 (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$6 @ 0x14002E987 (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$6.c)
 *     _CAudioDeviceGraph::CreateMode_::_1_::dtor$0 @ 0x14003150C (_CAudioDeviceGraph--CreateMode_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::CreateStream_::_1_::dtor$0 @ 0x140031B5F (_CAudioDeviceGraph--CreateStream_--_1_--dtor$0.c)
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
