/*
 * XREFs of ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00E1A8C
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF2E0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0185508 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     <none>
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(char *Tag, struct MONITOR_MGR *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v9; // rax

  *((_QWORD *)Tag + 2) = a2;
  v5 = 0xFFFFFFFFLL;
  *((_DWORD *)Tag + 7) = -1;
  *((_DWORD *)Tag + 8) = -2;
  *((_QWORD *)Tag + 5) = 0LL;
  *((_QWORD *)Tag + 6) = 0LL;
  *((_QWORD *)Tag + 7) = 0LL;
  *((_QWORD *)Tag + 8) = 0LL;
  *((_DWORD *)Tag + 26) = 3;
  *(_QWORD *)(Tag + 108) = 1LL;
  *((_DWORD *)Tag + 29) = 0;
  *((_QWORD *)Tag + 15) = 0LL;
  *((_QWORD *)Tag + 16) = 0LL;
  *((_QWORD *)Tag + 18) = Tag + 136;
  *((_QWORD *)Tag + 17) = Tag + 136;
  *((_DWORD *)Tag + 38) = 0;
  *((_DWORD *)Tag + 39) = 1024;
  *((_QWORD *)Tag + 21) = Tag + 160;
  *((_QWORD *)Tag + 20) = Tag + 160;
  *((_QWORD *)Tag + 22) = 0LL;
  *((_QWORD *)Tag + 24) = Tag + 184;
  *((_QWORD *)Tag + 23) = Tag + 184;
  *((_DWORD *)Tag + 50) = 0;
  *((_QWORD *)Tag + 27) = Tag + 208;
  *((_QWORD *)Tag + 26) = Tag + 208;
  *((_QWORD *)Tag + 29) = Tag + 224;
  *((_QWORD *)Tag + 28) = Tag + 224;
  *((_QWORD *)Tag + 47) = 0LL;
  *((_QWORD *)Tag + 48) = 0LL;
  *((_QWORD *)Tag + 49) = 0LL;
  *((_QWORD *)Tag + 50) = 0LL;
  Tag[408] = 0;
  *((_QWORD *)Tag + 52) = 0LL;
  *((_DWORD *)Tag + 106) = -1;
  *((_QWORD *)Tag + 54) = 0LL;
  *((_DWORD *)Tag + 110) = 0;
  Tag[444] = 0;
  *((_QWORD *)Tag + 62) = 0LL;
  *((_DWORD *)Tag + 126) = 0;
  Tag[508] = 0;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    WdLogEvent5_WdAssertion(v9);
  }
  v7 = WdLogNewEntry5_WdTrace(v5, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = Tag;
  *(_QWORD *)(v7 + 32) = a2;
  *((_DWORD *)Tag + 6) &= 0xFFFFFF40;
  *((_DWORD *)Tag + 6) = *((_DWORD *)Tag + 6) & 0xFFFFFCBF | ((*((_BYTE *)a2 + 5) != 0) << 6);
  *((_QWORD *)Tag + 1) = Tag;
  *(_QWORD *)Tag = Tag;
  ExInitializeResourceLite((PERESOURCE)(Tag + 240));
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 344), 0x4D677844u, 0, 0, 0x20u);
  *((_QWORD *)Tag + 10) = 0LL;
  *((_DWORD *)Tag + 18) = 0;
  *((_QWORD *)Tag + 12) = 0LL;
  *((_DWORD *)Tag + 22) = 0;
  *((_QWORD *)Tag + 57) = 0LL;
  *((_DWORD *)Tag + 112) = 0;
  *((_QWORD *)Tag + 59) = 0LL;
  *((_DWORD *)Tag + 116) = 0;
  *((_QWORD *)Tag + 61) = 0LL;
  *((_DWORD *)Tag + 120) = 0;
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 344), Tag, &byte_1C00ED620, 1u, 0x20u);
  return (DXGMONITOR *)Tag;
}
