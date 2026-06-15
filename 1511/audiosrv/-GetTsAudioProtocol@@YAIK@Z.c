/*
 * XREFs of ?GetTsAudioProtocol@@YAIK@Z @ 0x18003EF58
 * Callers:
 *     s_tsSessionGetAudioProtocol @ 0x18002C4B0 (s_tsSessionGetAudioProtocol.c)
 *     VADServerUserSessionChanged @ 0x18002FDEC (VADServerUserSessionChanged.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003AD7C (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     IsWinStationIsSessionRemoteablePresent @ 0x180048730 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x180048884 (IsWTSQuerySessionInformationWPresent.c)
 */

__int64 __fastcall GetTsAudioProtocol(DWORD SessionId)
{
  WCHAR v1; // di
  char v2; // bl
  unsigned int v4; // ebx
  _BYTE v6[4]; // [rsp+30h] [rbp-D0h] BYREF
  DWORD pBytesReturned; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-C8h] BYREF
  LPWSTR v9; // [rsp+40h] [rbp-C0h] BYREF
  LPWSTR ppBuffer; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v11[576]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = -1;
  v6[0] = 0;
  v2 = 0;
  if ( !(unsigned __int8)IsWinStationIsSessionRemoteablePresent()
    || !(unsigned __int8)IsWTSQuerySessionInformationWPresent() )
  {
    return 0;
  }
  if ( SessionId == -1 )
    SessionId = NtCurrentPeb()->SessionId;
  if ( !(unsigned __int8)WinStationIsSessionRemoteable(0LL, SessionId, v6) )
    return (WCHAR)-1;
  if ( MEMORY[0x7FFE02D8] == SessionId )
  {
    if ( !v6[0] )
      return 0;
    v2 = 1;
    v1 = 2;
  }
  if ( !SessionId )
    return 0;
  if ( !v2 )
  {
    if ( !WTSQuerySessionInformationW(0LL, SessionId, WTSClientProtocolType, &ppBuffer, &pBytesReturned) )
      return (WCHAR)-1;
    v1 = *ppBuffer;
    WTSFreeMemory(ppBuffer);
  }
  if ( !WTSQuerySessionInformationW(0LL, SessionId, WTSConnectState, &v9, &pBytesReturned) )
    return (WCHAR)-1;
  v4 = *(_DWORD *)v9;
  WTSFreeMemory(v9);
  if ( v4 > 2 )
    return (WCHAR)-1;
  if ( v1 )
  {
    if ( (unsigned __int8)WinStationQueryInformationW(0LL, SessionId, 6LL, v11, 2296, v8) )
    {
      if ( (v11[0] & 0x100) == 0 )
        return v1;
      return 0;
    }
    return (WCHAR)-1;
  }
  return v1;
}
