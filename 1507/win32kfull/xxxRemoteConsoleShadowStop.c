/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1C0203410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     DrvReleaseHDEV @ 0x1C025E938 (DrvReleaseHDEV.c)
 *     bDrvDisconnect @ 0x1C02B81B0 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteConsoleShadowStop(__int64 a1)
{
  _QWORD *RemoteContext; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v5; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-458h] BYREF
  _DWORD v7[57]; // [rsp+50h] [rbp-448h] BYREF
  WCHAR SourceString[422]; // [rsp+134h] [rbp-364h] BYREF

  memset(v7, 0, 220);
  RemoteContext = (_QWORD *)GreGetRemoteContext(a1);
  if ( PsGetCurrentProcess(v3, v2) != gpepCSRSS )
    return 3221225506LL;
  if ( !gConsoleShadowhDev )
    return 3221225473LL;
  bDrvDisconnect();
  DrvGetHdevName(gConsoleShadowhDev, SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DrvReleaseHDEV();
  gfRemotingConsole = 0;
  LOWORD(v7[17]) = 220;
  v7[18] = 1572896;
  if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v7, 0LL, 268435457LL, 0LL, 0, 0) )
  {
    v5 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, 0);
    RemoteContext[1] = G_SaveRemoteVideoFileObject;
    RemoteContext[2] = G_SaveRemoteConnectionFileObject;
    RemoteContext[4] = G_SavePerformanceStatistics;
    RemoteContext[3] = G_SaveRemoteConnectionChannel;
    v5 = 0;
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
  return v5;
}
