/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1402B3A80
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1402F11F0 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  InteractiveControlManager *v11; // rax
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  _OWORD Src[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h]

  memset(Src, 0, sizeof(Src));
  v15 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v6 = 0;
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = InteractiveControlManager::Instance(v10, v9);
    if ( (int)InteractiveControlManager::GetDeviceInfo(v11, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)Src) >= 0 )
    {
      RtlCopyToUser(a2, Src, 0x28uLL);
      v6 = 1;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
