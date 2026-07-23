/*
 * XREFs of PopDispatchStateCallout @ 0x1404D136C
 * Callers:
 *     PoPowerOffMonitor @ 0x140126D04 (PoPowerOffMonitor.c)
 *     PoBlockConsoleSwitch @ 0x1404D1324 (PoBlockConsoleSwitch.c)
 *     PopReleaseAdaptiveLock @ 0x1404D2038 (PopReleaseAdaptiveLock.c)
 *     PopResumeServices @ 0x140530424 (PopResumeServices.c)
 *     PopResumeApps @ 0x140530498 (PopResumeApps.c)
 *     PopSuspendServices @ 0x140530508 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x14053055C (PopSuspendApps.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PoUnblockConsoleSwitch @ 0x140534984 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1405349A4 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1405349B4 (PoStartPowerStateTasks.c)
 *     PoEndPartitionReplace @ 0x14066E978 (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x14066EA84 (PoStartPartitionReplace.c)
 *     PopBlockSessionSwitch @ 0x14066FE80 (PopBlockSessionSwitch.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // r8d
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // [rsp+30h] [rbp-30h] BYREF
  int *v10; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+44h] [rbp-1Ch]
  _DWORD v13[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
  {
    v8 = a1[1];
    v12 = 0;
    v13[0] = v8;
    v13[1] = a1[2];
    v13[2] = a1[3];
    v13[3] = a1[4];
    v10 = v13;
    v11 = 16;
    EtwTraceKernelEvent((int)&v10, 1, 0x80008000, 4648, 4200450);
  }
  if ( a2 )
  {
    v4 = a2;
    v5 = 1;
  }
  else
  {
    v4 = 0LL;
    v5 = 2;
  }
  v6 = PsInvokeWin32Callout(4, (__int64)a1, v5, v4);
  if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
  {
    v12 = 0;
    v10 = (int *)&v9;
    v9 = v6;
    v11 = 4;
    EtwTraceKernelEvent((int)&v10, 1, 0x80008000, 4649, 4200450);
  }
  return v6;
}
