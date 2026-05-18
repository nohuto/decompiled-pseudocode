/*
 * XREFs of sub_180003738 @ 0x180003738
 * Callers:
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

__int64 sub_180003738()
{
  unsigned int v0; // ebx
  HANDLE EventW; // rax
  void *v2; // rsi
  signed int v3; // eax
  __int64 v4; // rcx
  SC_HANDLE v5; // rbp
  signed int LastError; // eax
  __int64 v7; // rcx
  SC_HANDLE v8; // rdi
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _SERVICE_STATUS ServiceStatus; // [rsp+20h] [rbp-38h] BYREF

  memset(&ServiceStatus, 0, sizeof(ServiceStatus));
  v0 = 0;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, L"Global\\SC_AutoStartPhase1Done");
  v2 = EventW;
  if ( EventW )
  {
    WaitForSingleObject(EventW, 0xFFFFFFFF);
    SetLastError(0);
    v5 = OpenSCManagerW(0LL, 0LL, 1u);
    if ( !v5 )
    {
      LastError = GetLastError();
      v7 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v7 = (unsigned int)LastError;
      if ( (int)v7 >= 0 )
        v7 = 2291662851LL;
      v0 = v7;
      sub_180003A80(v7, 29LL);
      goto LABEL_33;
    }
    SetLastError(0);
    v8 = OpenServiceW(v5, L"LaunchAppSvc", 0x14u);
    if ( !v8 )
    {
      v9 = GetLastError();
      v10 = (unsigned __int16)v9 | 0x80070000;
      if ( v9 <= 0 )
        v10 = (unsigned int)v9;
      if ( (int)v10 >= 0 )
        v10 = 2291662851LL;
      v0 = v10;
      sub_180003A80(v10, 33LL);
      goto LABEL_32;
    }
    SetLastError(0);
    if ( !QueryServiceStatus(v8, &ServiceStatus) )
    {
      v11 = GetLastError();
      v12 = 35LL;
LABEL_26:
      v13 = (unsigned __int16)v11 | 0x80070000;
      if ( v11 <= 0 )
        v13 = (unsigned int)v11;
      if ( (int)v13 >= 0 )
        v13 = 2291662851LL;
      v0 = v13;
      sub_180003A80(v13, v12);
      goto LABEL_31;
    }
    if ( ServiceStatus.dwCurrentState != 2 )
    {
      if ( ServiceStatus.dwCurrentState == 4 )
        goto LABEL_31;
      StartServiceW(v8, 0, 0LL);
    }
    SetLastError(0);
    if ( !(unsigned int)WaitServiceState(v8, 8LL, 0xFFFFFFFFLL) )
    {
      v11 = GetLastError();
      v12 = 59LL;
      goto LABEL_26;
    }
LABEL_31:
    CloseServiceHandle(v8);
LABEL_32:
    CloseServiceHandle(v5);
LABEL_33:
    CloseHandle(v2);
    return v0;
  }
  v3 = GetLastError();
  v4 = (unsigned __int16)v3 | 0x80070000;
  if ( v3 <= 0 )
    v4 = (unsigned int)v3;
  if ( (int)v4 >= 0 )
    v4 = 2291662851LL;
  v0 = v4;
  sub_180003A80(v4, 25LL);
  return v0;
}
