/*
 * XREFs of WinSqmStartSession @ 0x1C0067664
 * Callers:
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WinSqmEventWrite @ 0x1C00677D0 (WinSqmEventWrite.c)
 *     ?RegisterWinSqmProvider@@YAKXZ @ 0x1C0067808 (-RegisterWinSqmProvider@@YAKXZ.c)
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C0067888 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 WinSqmStartSession()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int128 v2; // xmm0
  int v4; // [rsp+28h] [rbp-29h] BYREF
  int v5; // [rsp+30h] [rbp-21h] BYREF
  _DWORD Sid[4]; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+48h] [rbp-9h] BYREF

  Sid[0] = 257;
  v4 = 0;
  v5 = 401412;
  Sid[1] = 83886080;
  Sid[2] = 18;
  memset(UserData, 0, sizeof(UserData));
  if ( (WPP_MAIN_CB.DeviceQueue.Type & 2) == 0 && (unsigned int)IsSessionDisabled(&Win32kSQMSession, 0x62004u) )
  {
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type |= 2u;
  }
  else
  {
    v0 = Win32AllocPool();
    v1 = v0;
    if ( v0 )
    {
      v2 = xmmword_1C01020E8;
      *(_DWORD *)(v0 + 16) = 40;
      *(_OWORD *)v0 = v2;
      *(_DWORD *)(v0 + 20) = v4;
      *(GUID *)(v0 + 24) = Win32kSQMSession;
      if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink || !RegisterWinSqmProvider() )
      {
        UserData[0].Ptr = (ULONGLONG)&Win32kSQMSession;
        UserData[1].Ptr = (ULONGLONG)&unk_1C01071E8;
        *(_QWORD *)&UserData[0].Size = 16LL;
        *(_QWORD *)&UserData[1].Size = 4LL;
        *(_QWORD *)&UserData[2].Size = RtlLengthSid(Sid);
        UserData[2].Ptr = (ULONGLONG)Sid;
        UserData[3].Ptr = (ULONGLONG)&v5;
        *(_QWORD *)&UserData[3].Size = 4LL;
        UserData[4].Ptr = (ULONGLONG)&v4;
        *(_QWORD *)&UserData[4].Size = 4LL;
        WinSqmEventWrite(&SQM_START_SESSION, 5u, UserData);
        return v1;
      }
      Win32FreePool();
    }
  }
  return -1LL;
}
