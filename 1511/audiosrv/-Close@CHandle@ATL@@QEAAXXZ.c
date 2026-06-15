/*
 * XREFs of ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800922E4
 * Callers:
 *     ??1CEvent@ATL@@QEAA@XZ @ 0x180091E80 (--1CEvent@ATL@@QEAA@XZ.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x180091F38 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x1800964A0 (--1CMonitor@@IEAA@XZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180099868 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::Close(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
