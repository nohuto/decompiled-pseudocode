/*
 * XREFs of DwmSetProcessBreakOnTerminate @ 0x1C00C04F0
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1C0045760 (GreLockDwmState.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C0080038 (-IsMobileCore@@YAEXZ.c)
 */

__int64 __fastcall DwmSetProcessBreakOnTerminate(__int64 a1, __int64 a2)
{
  int v2; // esi
  NTSTATUS v3; // edi
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  PVOID v10; // rcx
  int ProcessInformation; // [rsp+58h] [rbp+10h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1;
  v3 = -1073741823;
  v7 = 0;
  if ( IsMobileCore(a1, a2) )
  {
    GreLockDwmState(v5, v4, v6);
    v10 = g_pepDwm;
    if ( g_pepDwm )
    {
      ProcessHandle = (HANDLE)-1LL;
      v3 = ObOpenObjectByPointer(g_pepDwm, 0x200u, 0LL, 0x200u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
      if ( v3 >= 0 )
      {
        LOBYTE(v7) = v2 != 0;
        ProcessInformation = v7;
        v3 = ZwSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &ProcessInformation, 4u);
        ObCloseHandle(ProcessHandle, 0);
      }
    }
    GreUnlockDwmState((__int64)v10, v8, v9);
  }
  return (unsigned int)v3;
}
