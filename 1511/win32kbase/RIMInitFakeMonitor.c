/*
 * XREFs of RIMInitFakeMonitor @ 0x1C0006060
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMOnMonitorNotification @ 0x1C0008E10 (RIMOnMonitorNotification.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMInitFakeMonitor(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm1

  *(_OWORD *)(*(_QWORD *)(a1 + 280) + 44LL) = *(_OWORD *)(gpDispInfo + 120);
  *(_OWORD *)(*(_QWORD *)(a1 + 280) + 60LL) = *(_OWORD *)(gpDispInfo + 136);
  *(_OWORD *)(*(_QWORD *)(a1 + 280) + 28LL) = *(_OWORD *)(gpDispInfo + 104);
  result = *(_QWORD *)(a1 + 280);
  v2 = *(_OWORD *)(result + 28);
  *(_DWORD *)(a1 + 724) = 1;
  *(_OWORD *)(a1 + 124) = v2;
  return result;
}
