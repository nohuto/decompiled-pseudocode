/*
 * XREFs of NtUserUpdateInstance @ 0x1C021BA50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C012B764 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall NtUserUpdateInstance(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax

  v6 = 0;
  EnterCrit(0LL, 1LL);
  v9 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v9 = (unsigned int *)W32UserProbeAddress;
  *v9 = *v9;
  LOBYTE(v9) = 9;
  v10 = HMValidateHandleNoRip(a1, (__int64)v9, v7, v8);
  if ( v10 )
  {
    xxxChangeMonitorFlags(v10, a3);
    v13 = MonitorFlags;
  }
  else
  {
    v6 = 16390;
    v13 = 0;
  }
  *a2 = v13;
  UserSessionSwitchLeaveCrit(v12, v11);
  return v6;
}
