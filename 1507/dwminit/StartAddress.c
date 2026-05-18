/*
 * XREFs of StartAddress @ 0x1800028C0
 * Callers:
 *     DwmpCreateSessionProcess @ 0x180002CD0 (DwmpCreateSessionProcess.c)
 * Callees:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     sub_18000149C @ 0x18000149C (sub_18000149C.c)
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     sub_1800018D0 @ 0x1800018D0 (sub_1800018D0.c)
 *     sub_180001A88 @ 0x180001A88 (sub_180001A88.c)
 *     sub_180001E78 @ 0x180001E78 (sub_180001E78.c)
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 *     sub_180003430 @ 0x180003430 (sub_180003430.c)
 *     sub_180003738 @ 0x180003738 (sub_180003738.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_1800043E0 @ 0x1800043E0 (sub_1800043E0.c)
 *     sub_180005974 @ 0x180005974 (sub_180005974.c)
 *     sub_180005A40 @ 0x180005A40 (sub_180005A40.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 *     sub_180006994 @ 0x180006994 (sub_180006994.c)
 *     sub_180006C30 @ 0x180006C30 (sub_180006C30.c)
 *     memset @ 0x180007606 (memset.c)
 */

__int64 __fastcall StartAddress(PVOID Parameter)
{
  signed int v1; // ebx
  HANDLE v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  signed int LastError; // eax
  __int64 v8; // r9
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE hToken[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+98h] [rbp-70h] BYREF
  WCHAR Dst[264]; // [rsp+108h] [rbp+0h] BYREF

  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  v1 = 0;
  memset(&StartupInfo.lpReserved, 0, 0x60uLL);
  StartupInfo.cb = 104;
  StartupInfo.lpDesktop = L"Winsta0\\Default";
  v2 = 0LL;
  hToken[0] = 0LL;
  AcquireSRWLockExclusive(&SRWLock);
  if ( hTargetProcessHandle )
  {
    v3 = sub_180002764();
    v1 = v3;
    if ( v3 < 0 )
    {
      v4 = 1118LL;
LABEL_4:
      v5 = (unsigned int)v3;
LABEL_5:
      sub_180003A80(v5, v4);
      goto LABEL_32;
    }
  }
  if ( byte_18000C014 )
  {
    v3 = sub_1800018D0();
    v1 = v3;
    if ( v3 < 0 )
    {
      v4 = 1132LL;
      goto LABEL_4;
    }
  }
  if ( (unsigned __int8)sub_180006C30() )
    DwmLockScreenUpdates(1LL);
  if ( sub_180001548() )
  {
    if ( byte_18000C014 )
    {
      memset(Dst, 0, 0x208uLL);
      ExpandEnvironmentStringsW(L"%SystemRoot%\\system32\\dwm.exe", Dst, 0x104u);
      v3 = sub_180003738();
      v1 = v3;
      if ( v3 < 0 )
      {
        v4 = 1185LL;
        goto LABEL_4;
      }
      CreateProcessInChamber(0LL, 0LL, Dst, 0LL, 0, 67109920, 0LL, &StartupInfo, &ProcessInformation);
    }
  }
  else
  {
    v3 = sub_180001A88();
    v1 = v3;
    if ( v3 < 0 )
    {
      v4 = 1146LL;
      goto LABEL_4;
    }
    v6 = sub_180001E78(hToken);
    v1 = v6;
    if ( v6 < 0 )
    {
      sub_180003A80((unsigned int)v6, 1149LL);
      v2 = hToken[0];
      goto LABEL_32;
    }
    SetLastError(0);
    v2 = hToken[0];
    if ( !CreateProcessAsUserW(
            hToken[0],
            L"dwm.exe",
            0LL,
            0LL,
            0LL,
            0,
            0x4000420u,
            0LL,
            0LL,
            &StartupInfo,
            &ProcessInformation) )
    {
      LastError = GetLastError();
      v4 = 1169LL;
      v1 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v1 = LastError;
      if ( v1 >= 0 )
        v1 = -2003304445;
      v5 = (unsigned int)v1;
      goto LABEL_5;
    }
  }
  if ( ProcessInformation.hProcess )
  {
    if ( (unsigned __int8)sub_180006994() )
      WaitForInputIdle(ProcessInformation.hProcess, 0xFFFFFFFF);
    if ( WaitForSingleObject(ProcessInformation.hProcess, 0) )
    {
      hTargetProcessHandle = ProcessInformation.hProcess;
      ProcessInformation.hProcess = 0LL;
    }
    else
    {
      v1 = -2147467259;
      sub_18000149C(4, -2147467259, 0, v8);
    }
  }
LABEL_32:
  byte_18000C014 = 0;
  if ( ProcessInformation.hProcess )
  {
    CloseHandle(ProcessInformation.hProcess);
    ProcessInformation.hProcess = 0LL;
  }
  if ( ProcessInformation.hThread )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  if ( v2 )
    CloseHandle(v2);
  if ( (unsigned __int8)sub_180006C30() )
    DwmLockScreenUpdates(0LL);
  if ( v1 < 0 )
  {
    LOBYTE(v9) = 1;
    sub_180003430((unsigned int)&off_18000C068, 3, 1, v9, 1);
    *(GUID *)hToken = ActivityId;
    v10 = sub_180005A40();
    sub_180005974(v10, hToken, (unsigned int)v1);
    if ( qword_18000C070 )
    {
      sub_180001310((_DWORD *)qword_18000C070);
      v12 = qword_18000C070;
      if ( qword_18000C070 )
      {
        *(_QWORD *)(qword_18000C070 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
      }
    }
    byte_18000C078 = 0;
    sub_18000149C(2, v1, 0, v11);
  }
  ReleaseSRWLockExclusive(&SRWLock);
  if ( v1 < 0 )
  {
    sub_1800043E0();
    sub_180003A80((unsigned int)v1, 1297LL);
  }
  sub_18000149C(10, v1, 0, v13);
  return 0LL;
}
