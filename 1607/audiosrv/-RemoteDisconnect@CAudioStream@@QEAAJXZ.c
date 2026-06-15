/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x180064E58
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180064FF0 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 */

__int64 __fastcall CAudioStream::RemoteDisconnect(HANDLE *this)
{
  DWORD v2; // eax
  signed int LastError; // eax
  signed int v4; // ebx
  HANDLE v5; // rdx
  DWORD v6; // ecx
  DWORD v7; // ecx
  int v8; // eax
  char *v9; // rcx
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = WaitForSingleObject(this[58], 0x3E8u);
  if ( v2 == -1 )
  {
LABEL_2:
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_15;
  }
  if ( v2 == 258 )
  {
    v4 = -2147467259;
    goto LABEL_15;
  }
  if ( !this[8] )
  {
    v4 = 0;
    goto LABEL_15;
  }
  v4 = CAudioStream::SendRemoteDisconnectionRequest((CAudioStream *)this);
  if ( v4 >= 0 )
  {
    v5 = this[9];
    Handles[0] = this[57];
    v6 = 1;
    Handles[1] = v5;
    if ( v5 )
      v6 = 2;
    v7 = WaitForMultipleObjects(v6, Handles, 0, 0x3E8u);
    if ( v7 == -1 )
      goto LABEL_2;
    v8 = v4;
    if ( v7 == 258 )
      v8 = -2147467259;
    v4 = v8;
  }
LABEL_15:
  v9 = (char *)this[9];
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v9);
    this[9] = 0LL;
  }
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::RemoteDisconnect", 2106, v4);
  return (unsigned int)v4;
}
