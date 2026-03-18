/*
 * XREFs of RIMGetPhysicalSizeFromMonitor @ 0x1C00D39B0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GetMonitorPhysicalDimensions @ 0x1C005DB60 (GetMonitorPhysicalDimensions.c)
 */

__int64 __fastcall RIMGetPhysicalSizeFromMonitor(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int MonitorPhysicalDimensions; // eax
  int v5; // ecx
  int v6; // edx
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0;
  v3 = *(_QWORD *)(gpDispInfo + 88);
  v9 = 0;
  MonitorPhysicalDimensions = GetMonitorPhysicalDimensions(*(_QWORD *)(v3 + 160), &v8, &v9, 0LL);
  if ( MonitorPhysicalDimensions < 0
    || (v5 = 1000 * v8, v6 = 1000 * v9, *(_DWORD *)(a1 + 164) = 1000 * v8, *(_DWORD *)(a1 + 168) = v6, v5 <= 0)
    || v6 <= 0 )
  {
    *(_DWORD *)(a1 + 168) = 15240;
    *(_DWORD *)(a1 + 164) = 20320;
  }
  LOBYTE(v2) = MonitorPhysicalDimensions >= 0;
  return v2;
}
