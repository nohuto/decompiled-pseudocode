/*
 * XREFs of NtUserInteractiveControlQueryUsage @ 0x1C0216B40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C023AF78 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 */

__int64 __fastcall NtUserInteractiveControlQueryUsage(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int *a5)
{
  int v9; // esi
  int *v10; // rdx
  InteractiveControlManager *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15[6]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]

  v9 = 1;
  v16 = EnterSharedCrit(0LL, 1LL);
  v10 = a5;
  if ( (unsigned __int64)a5 >= W32UserProbeAddress )
    v10 = (int *)W32UserProbeAddress;
  *v10 = *v10;
  v11 = InteractiveControlManager::Instance();
  if ( (int)InteractiveControlManager::GetReportExtendedUsage(v11, (unsigned __int16)a1, HIWORD(a1), a3, a2, a4, v15) < 0 )
    v9 = 0;
  else
    *a5 = v15[0];
  UserSessionSwitchLeaveCrit(v13, v12);
  return v9;
}
