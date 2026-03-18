/*
 * XREFs of ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C00068C4
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0093A20 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0152E7C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct VIDMM_MONITORED_FENCE_STORAGE *__fastcall DXGSYNCOBJECT::GetMonitoredFenceStorage(DXGSYNCOBJECT *this)
{
  __int64 v3; // rax

  if ( *((_DWORD *)this + 38) != 5 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return (DXGSYNCOBJECT *)((char *)this + 112);
}
