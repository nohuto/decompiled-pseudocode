/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1C02138F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C023AC10 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, __m256i *Address)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v9; // rax
  __m256i v11; // [rsp+48h] [rbp-30h] BYREF

  v4 = 0;
  memset(&v11, 0, sizeof(v11));
  EnterSharedCrit(0LL, 1LL);
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForWrite(Address, 0x20uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetDeviceInfo(v9, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)&v11) >= 0 )
    {
      if ( (unsigned __int64)Address >= W32UserProbeAddress )
        Address = (__m256i *)W32UserProbeAddress;
      *Address = v11;
      v4 = 1;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
