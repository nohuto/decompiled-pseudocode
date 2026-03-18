/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1C02037B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     DrvReleaseHDEV @ 0x1C025E118 (DrvReleaseHDEV.c)
 *     bDrvDisconnect @ 0x1C02B75C4 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteConsoleShadowStop(__int64 a1)
{
  _QWORD *RemoteContext; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v7; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-458h] BYREF
  _DWORD v9[57]; // [rsp+50h] [rbp-448h] BYREF
  WCHAR SourceString[422]; // [rsp+134h] [rbp-364h] BYREF

  memset(v9, 0, 220);
  RemoteContext = (_QWORD *)GreGetRemoteContext(a1);
  if ( PsGetCurrentProcess(v3, v2, v4, v5) != gpepCSRSS )
    return 3221225506LL;
  if ( !gConsoleShadowhDev )
    return 3221225473LL;
  bDrvDisconnect();
  DrvGetHdevName(gConsoleShadowhDev, SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DrvReleaseHDEV();
  gfRemotingConsole = 0;
  LOWORD(v9[17]) = 220;
  v9[18] = 1572896;
  if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v9, 0LL, 268435457LL, 0LL, 0, 0) )
  {
    v7 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, 0);
    RemoteContext[1] = G_SaveRemoteVideoFileObject;
    RemoteContext[2] = G_SaveRemoteConnectionFileObject;
    RemoteContext[4] = G_SavePerformanceStatistics;
    RemoteContext[3] = G_SaveRemoteConnectionChannel;
    v7 = 0;
  }
  if ( gConsoleShadowVideoFileObject )
  {
    ObfDereferenceObject(gConsoleShadowVideoFileObject);
    gConsoleShadowVideoFileObject = 0LL;
  }
  if ( gConsoleShadowThinwireFileObject )
  {
    ObfDereferenceObject(gConsoleShadowThinwireFileObject);
    gConsoleShadowThinwireFileObject = 0LL;
  }
  if ( gpConsoleShadowBeepDevice )
  {
    ObfDereferenceObject(gpConsoleShadowBeepDevice);
    gpConsoleShadowBeepDevice = 0LL;
  }
  if ( gpConsoleShadowDisplayChangeEvent )
  {
    ObfDereferenceObject(gpConsoleShadowDisplayChangeEvent);
    gpConsoleShadowDisplayChangeEvent = 0LL;
  }
  gConsoleShadowhDev = 0LL;
  return v7;
}
