/*
 * XREFs of ?LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C0086AA4
 * Callers:
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0087068 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C0087510 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C0087658 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogAllProcesses(VIDMM_COMMIT_TELEMETRY *this, struct _GUID *a2)
{
  _QWORD **v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx

  if ( *((_BYTE *)this + 24) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)this + 40704LL));
    v4 = (_QWORD **)(*(_QWORD *)this + 40744LL);
    v5 = *v4;
    while ( v5 != v4 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, (struct VIDMM_PROCESS_ADAPTER_INFO *)(v5 - 3), a2);
      v5 = (_QWORD *)*v5;
      v4 = (_QWORD **)(*(_QWORD *)this + 40744LL);
    }
    v6 = *(_QWORD *)this + 40704LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
}
