/*
 * XREFs of GetPhysicalSizeFromMonitor @ 0x1C01C7E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPhysicalSizeFromMonitor(__int64 a1)
{
  unsigned int v2; // ebx
  int MonitorPhysicalDimensions; // eax
  int v4; // ecx
  int v5; // edx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  v8 = 0;
  MonitorPhysicalDimensions = GetMonitorPhysicalDimensions(
                                *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88LL) + 160LL),
                                &v7,
                                &v8,
                                0LL);
  if ( MonitorPhysicalDimensions < 0
    || (v4 = 1000 * v7, v5 = 1000 * v8, *(_DWORD *)(a1 + 164) = 1000 * v7, *(_DWORD *)(a1 + 168) = v5, v4 <= 0)
    || v5 <= 0 )
  {
    *(_DWORD *)(a1 + 168) = 15240;
    *(_DWORD *)(a1 + 164) = 20320;
  }
  LOBYTE(v2) = MonitorPhysicalDimensions >= 0;
  return v2;
}
