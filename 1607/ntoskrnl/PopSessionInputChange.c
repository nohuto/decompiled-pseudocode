/*
 * XREFs of PopSessionInputChange @ 0x14052E6DC
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     PopAcquireAdaptiveLock @ 0x1404D1254 (PopAcquireAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x1404D27C4 (PopDiagTraceSessionStates.c)
 *     PopConsoleSessionPassiveInput @ 0x14052E804 (PopConsoleSessionPassiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x14052E87C (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x14052EB54 (PopRemoteSessionActiveInput.c)
 *     PopGetDisplayTimeout @ 0x14052EB88 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x14052EBB4 (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopSessionInputChange(unsigned int a1, char *a2, _DWORD *a3)
{
  char v3; // r14
  const char *v4; // rax
  unsigned int v5; // ebp
  const char *v8; // r8
  bool v9; // si
  const EVENT_DESCRIPTOR *v10; // rcx
  __int64 v11; // rdx

  v3 = *a2;
  v4 = "Active";
  v5 = *((_DWORD *)a2 + 1);
  if ( !*a2 )
    v4 = "Passive";
  if ( PopConsoleContext != a1 || (v8 = "Console", a1 == -1) )
    v8 = "Remote";
  PopPrintEx(3u, "PopAdaptive:>>>>> %s session %u input is %s\n", v8, a1, v4);
  v9 = PopConsoleContext == a1 && a1 != -1;
  v10 = (const EVENT_DESCRIPTOR *)&POP_ETW_ADPM_ACTIVE_INPUT;
  if ( !v3 )
    v10 = &POP_ETW_ADPM_PASSIVE_INPUT;
  PopDiagTraceSessionStates(v10, a1, v9);
  PopAcquireAdaptiveLock(1);
  if ( v3 )
  {
    if ( v9 )
      PopConsoleSessionActiveInput(a1, v5, a3);
    else
      PopRemoteSessionActiveInput(a1, v11, a3);
  }
  else if ( v9 )
  {
    PopConsoleSessionPassiveInput(a1, v5, a3);
  }
  else
  {
    PopSetSessionUserStatus(a1, 2LL);
    a3[1] = PopGetDisplayTimeout(a1);
    *a3 = PopInputTimeout;
  }
  return PopReleaseAdaptiveLock();
}
