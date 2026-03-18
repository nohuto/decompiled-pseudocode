/*
 * XREFs of DwmSetProcessBreakOnTerminate @ 0x1C00CD7A0
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x1C001D890 (GreLockDwmState.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C007187C (-IsMobileCore@@YAEXZ.c)
 *     GreUnlockDwmState @ 0x1C0071C10 (GreUnlockDwmState.c)
 */

__int64 __fastcall DwmSetProcessBreakOnTerminate(__int64 a1)
{
  int v1; // esi
  NTSTATUS v2; // edi
  int v3; // ebx
  int ProcessInformation; // [rsp+58h] [rbp+10h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp+18h] BYREF

  v1 = a1;
  v2 = -1073741823;
  v3 = 0;
  if ( IsMobileCore(a1) )
  {
    GreLockDwmState();
    if ( g_pepDwm )
    {
      ProcessHandle = (HANDLE)-1LL;
      v2 = ObOpenObjectByPointer(g_pepDwm, 0x200u, 0LL, 0x200u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
      if ( v2 >= 0 )
      {
        LOBYTE(v3) = v1 != 0;
        ProcessInformation = v3;
        v2 = ZwSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &ProcessInformation, 4u);
        ObCloseHandle(ProcessHandle, 0);
      }
    }
    GreUnlockDwmState();
  }
  return (unsigned int)v2;
}
