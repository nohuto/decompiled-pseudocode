/*
 * XREFs of sub_1800024AC @ 0x1800024AC
 * Callers:
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 *     DwmpTerminateSessionProcess @ 0x1800030E0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_18000434C @ 0x18000434C (sub_18000434C.c)
 */

__int64 __fastcall sub_1800024AC(LPDWORD lpExitCode, LPFILETIME lpExitTime)
{
  signed int v4; // ebx
  signed int v5; // eax
  signed int v6; // eax
  __int64 v7; // rdx
  signed int LastError; // eax
  _FILETIME CreationTime; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  sub_18000434C();
  if ( !WaitForSingleObject(hTargetProcessHandle, 0x12Cu)
    || TerminateProcess(hTargetProcessHandle, 0x42Bu)
    || (v5 = GetLastError(), v5 == 5) )
  {
    if ( WaitForSingleObject(hTargetProcessHandle, 0xFFFFFFFF) )
    {
      v4 = -2147467259;
      v7 = 921LL;
    }
    else
    {
      SetLastError(0);
      if ( GetExitCodeProcess(hTargetProcessHandle, lpExitCode) )
      {
        if ( !lpExitTime )
          goto LABEL_23;
        SetLastError(0);
        if ( GetProcessTimes(hTargetProcessHandle, &CreationTime, lpExitTime, &CreationTime, &CreationTime) )
          goto LABEL_23;
        LastError = GetLastError();
        v7 = 916LL;
        v4 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v4 = LastError;
        if ( v4 >= 0 )
          v4 = -2003304445;
      }
      else
      {
        v6 = GetLastError();
        v7 = 906LL;
        v4 = (unsigned __int16)v6 | 0x80070000;
        if ( v6 <= 0 )
          v4 = v6;
        if ( v4 >= 0 )
          v4 = -2003304445;
      }
    }
    sub_180003A80((unsigned int)v4, v7);
    goto LABEL_23;
  }
  v4 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    v4 = v5;
LABEL_23:
  if ( hTargetProcessHandle )
  {
    CloseHandle(hTargetProcessHandle);
    hTargetProcessHandle = 0LL;
  }
  return (unsigned int)v4;
}
