/*
 * XREFs of NtUserUpdateInstance @ 0x1C02218F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C00FBA48 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall NtUserUpdateInstance(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v6; // ebx
  unsigned int *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax

  v6 = 0;
  EnterCrit(1LL);
  v7 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v7 = (unsigned int *)W32UserProbeAddress;
  *v7 = *v7;
  v8 = HMValidateHandleNoRip(a1, 9);
  if ( v8 )
  {
    xxxChangeMonitorFlags(v8, a3);
    v11 = MonitorFlags;
  }
  else
  {
    v6 = 16390;
    v11 = 0;
  }
  *a2 = v11;
  UserSessionSwitchLeaveCrit(v10, v9);
  return v6;
}
