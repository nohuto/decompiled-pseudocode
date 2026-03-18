/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x1C0055FB0
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorFlags @ 0x1C00560B0 (GetMonitorFlags.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00560F0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00566E0 (LogicalToPhysicalDPIPoint.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbp
  int v12; // ecx
  int v13; // edx
  unsigned int MonitorFlags; // eax
  int v15; // ebx
  unsigned int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-18h]
  __int64 v19; // [rsp+28h] [rbp-10h]

  if ( a3 )
    CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 384LL);
  else
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, 0LL, a4, v18, v19);
  if ( a4 )
  {
    v8 = *(_QWORD *)(a4 + 16);
    v9 = *(_QWORD *)(v8 + 384);
  }
  else
  {
    v9 = PsGetCurrentProcessWin32Process(a1, a2, a3, a4, v18, v19);
  }
  v10 = v9;
  v11 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process )
    v11 = PsGetCurrentProcessWin32Process(v8, a2, a3, a4, v18, v19);
  if ( !v9 )
    v10 = PsGetCurrentProcessWin32Process(v8, a2, a3, a4, v18, v19);
  v12 = *(_DWORD *)(v10 + 776);
  v13 = *(_DWORD *)(v11 + 776);
  if ( ((v13 ^ v12) & 0x4000) != 0 || (((unsigned __int16)v13 ^ (unsigned __int16)v12) & 0x2000) != 0 )
  {
    MonitorFlags = GetMonitorFlags(v9);
    v15 = LogicalToPhysicalDPIPoint(a1, a2, MonitorFlags, 0LL);
    v16 = GetMonitorFlags(CurrentProcessWin32Process);
    return v15 | (unsigned int)PhysicalToLogicalDPIPoint(a1, a1, v16, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
