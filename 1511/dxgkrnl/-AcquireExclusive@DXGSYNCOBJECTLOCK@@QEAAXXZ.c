/*
 * XREFs of ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011220
 * Callers:
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C012F268 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECTLOCK::AcquireExclusive(DXGSYNCOBJECTLOCK *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx

  if ( *((_BYTE *)this + 8) )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v2[3] = 275LL;
    v2[4] = 4LL;
    v2[5] = this;
    v2[6] = 0LL;
    v2[7] = 0LL;
    WdLogEvent5_WdCriticalError(v2);
  }
  v3 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 384), 1u);
  *((_BYTE *)this + 8) = 1;
}
