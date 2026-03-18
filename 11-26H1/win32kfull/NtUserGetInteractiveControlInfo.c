/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x1402B3B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1402F17BC (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(unsigned int a1, volatile void *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  InteractiveControlManager *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 Src; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]

  Src = 0LL;
  v15 = 0LL;
  v16 = 0;
  v4 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  if ( a1 && a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
    ProbeForWrite(a2, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = InteractiveControlManager::Instance(v9, v8);
    if ( (int)InteractiveControlManager::GetReportInfo(
                v10,
                (unsigned __int16)a1,
                HIWORD(a1),
                (struct tagINTERACTIVECTRL_INFO *)&Src) < 0 )
      v4 = 0;
    else
      RtlCopyToUser((void *)a2, &Src, 0x1CuLL);
  }
  else
  {
    v4 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
