/*
 * XREFs of ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20
 * Callers:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000BD84 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000CB20 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C00274D0 (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C002753C (-WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C006F8E4 (-DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C006FA24 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0076580 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0079D88 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0079E68 (DxgkAcquireSessionModeChangeLock.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0088C5C (DmmIsSourceInActiveVidPnTopology.c)
 *     DmmGetNextVideoPresentTarget @ 0x1C0088D50 (DmmGetNextVideoPresentTarget.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C0089640 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     DmmIsTargetForcable @ 0x1C0089AD0 (DmmIsTargetForcable.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C008FCC4 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C009329C (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C0096B84 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00A38A8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00C3B08 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     DxgkAcquireHandleDataCB @ 0x1C00CC550 (DxgkAcquireHandleDataCB.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00DD544 (DxgkAcquireAdapterOpmI2CSync.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E90EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C00FAD0C (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C00FBB70 (-SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0147394 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C014877C (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014943C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0169FDC (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     DxgkCacheHybridQueryValue @ 0x1C0173DE0 (DxgkCacheHybridQueryValue.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C0173FB0 (DxgkGetCachedHybridQueryValue.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

void __fastcall DXGFASTMUTEX::Acquire(DXGFASTMUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax

  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)this + 1) == KeGetCurrentThread() )
  {
    if ( *((int *)this + 6) <= 0 )
    {
      v5 = WdLogNewEntry5_WdAssertion(v2);
      *(_QWORD *)(v5 + 24) = 326LL;
      WdLogEvent5_WdAssertion(v5);
    }
    ++*((_DWORD *)this + 6);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v6 = *((unsigned int *)this + 7);
        if ( (_DWORD)v6 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v3, &EventBlockThread, v4, v6);
      }
      _InterlockedIncrement64((volatile signed __int64 *)this);
      ExAcquirePushLockExclusiveEx((char *)this + 16, 0LL);
    }
    if ( *((_QWORD *)this + 1) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v3);
      *(_QWORD *)(v7 + 24) = 350LL;
      WdLogEvent5_WdAssertion(v7);
    }
    if ( *((_DWORD *)this + 6) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v3);
      *(_QWORD *)(v8 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v8);
    }
    *((_QWORD *)this + 1) = KeGetCurrentThread();
    *((_DWORD *)this + 6) = 1;
  }
}
