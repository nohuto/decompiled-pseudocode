/*
 * XREFs of PopDispatchStateCallout @ 0x1404C427C
 * Callers:
 *     PoPowerOffMonitor @ 0x1401177BC (PoPowerOffMonitor.c)
 *     PoBlockConsoleSwitch @ 0x1404C4220 (PoBlockConsoleSwitch.c)
 *     PopReleaseAdaptiveLock @ 0x1404C50D8 (PopReleaseAdaptiveLock.c)
 *     PoUnblockConsoleSwitch @ 0x1404F551C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1404F553C (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1404F554C (PoStartPowerStateTasks.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x1404F86B4 (PopResumeApps.c)
 *     PopResumeServices @ 0x1404F8710 (PopResumeServices.c)
 *     PoEndPartitionReplace @ 0x1406364EC (PoEndPartitionReplace.c)
 *     PoStartPartitionReplace @ 0x1406365F8 (PoStartPartitionReplace.c)
 *     PdcPoBlockSessionSwitch @ 0x140637568 (PdcPoBlockSessionSwitch.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  int v4; // r9d
  int v5; // r8d
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // [rsp+30h] [rbp-30h] BYREF
  int *v10; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+44h] [rbp-1Ch]
  _DWORD v13[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140382290 & 0x8000) != 0 )
  {
    v8 = a1[1];
    v12 = 0;
    v13[0] = v8;
    v13[1] = a1[2];
    v13[2] = a1[3];
    v13[3] = a1[4];
    v10 = v13;
    v11 = 16;
    EtwTraceKernelEvent((int)&v10, 1, 0x80008000, 0x1228u, 4200450);
  }
  if ( a2 )
  {
    v4 = a2;
    v5 = 1;
  }
  else
  {
    v4 = 0;
    v5 = 2;
  }
  v6 = PsInvokeWin32Callout((_KPROCESS *)4, (__int64)a1, v5, v4);
  if ( (xmmword_140382290 & 0x8000) != 0 )
  {
    v12 = 0;
    v10 = (int *)&v9;
    v9 = v6;
    v11 = 4;
    EtwTraceKernelEvent((int)&v10, 1, 0x80008000, 0x1229u, 4200450);
  }
  return v6;
}
