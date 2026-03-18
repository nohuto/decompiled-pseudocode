/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x1C0213A30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C023B1F4 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(unsigned int a1, _OWORD *a2)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD v11[2]; // [rsp+50h] [rbp-48h] BYREF

  memset(v11, 0, 28);
  v4 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( a1 && a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForWrite(a2, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v7 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetReportInfo(
                v7,
                (unsigned __int16)a1,
                HIWORD(a1),
                (struct tagINTERACTIVECTRL_INFO *)v11) < 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_OWORD *)W32UserProbeAddress;
      *a2 = v11[0];
      *((_QWORD *)a2 + 2) = *(_QWORD *)&v11[1];
      *((_DWORD *)a2 + 6) = DWORD2(v11[1]);
    }
  }
  else
  {
    v4 = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v4;
}
