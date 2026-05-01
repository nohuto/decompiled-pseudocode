/*
 * XREFs of MemUtilEmptyProcess @ 0x180038A00
 * Callers:
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18002A7B8 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     MemUtilPrioritizeWsPages @ 0x180038B90 (MemUtilPrioritizeWsPages.c)
 */

ULONG __fastcall MemUtilEmptyProcess(HANDLE ProcessHandle, char a2, unsigned int a3)
{
  int v6; // r8d
  ULONG result; // eax
  int v8; // eax
  int v9; // eax
  __int64 ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]

  v6 = (a2 & 2) != 0;
  if ( (a2 & 4) != 0 )
    v6 |= 2u;
  if ( !v6 || (result = MemUtilPrioritizeWsPages(ProcessHandle, a3)) == 0 )
  {
    v11 = 4;
    ProcessInformation = 0x100000003LL;
    if ( (a2 & 1) == 0 )
    {
      v8 = 15;
      if ( (a2 & 8) != 0 )
        v8 = 31;
      v11 = v8;
    }
    v9 = NtSetInformationProcess(
           ProcessHandle,
           ProcessThreadStackAllocation|ProcessUserModeIOPL,
           &ProcessInformation,
           0xCu);
    if ( v9 >= 0 )
      return 0;
    else
      return RtlNtStatusToDosError(v9);
  }
  return result;
}
