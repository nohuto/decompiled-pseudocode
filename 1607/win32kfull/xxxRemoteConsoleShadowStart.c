/*
 * XREFs of xxxRemoteConsoleShadowStart @ 0x1C01FA640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C01F9E70 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     bDrvReconnect @ 0x1C02BAB34 (bDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteConsoleShadowStart(__int64 a1, const WCHAR *a2, __int64 a3)
{
  __int64 v6; // rcx
  _QWORD *RemoteContext; // rsi
  __int64 v8; // xmm0_8
  NTSTATUS MirrorDriver; // edi
  NTSTATUS v10; // eax
  PVOID v11; // rcx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 HDEV; // rax
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D8h]
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v19; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v20; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v21; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v23[56]; // [rsp+70h] [rbp-90h] BYREF
  _DISPLAY_DEVICEW v24; // [rsp+150h] [rbp+50h] BYREF

  memset(v23, 0, 0xDCuLL);
  memset(&v24, 0, sizeof(v24));
  RemoteContext = (_QWORD *)GreGetRemoteContext(v6);
  if ( gbConnected && !gProtocolType )
  {
    HandleInformation = 0LL;
    gConsoleShadowhDev = 0LL;
    gfRemotingConsole = 0;
    v8 = *(_QWORD *)(a1 + 268);
    ghConsoleShadowVideoChannel = *(HANDLE *)(a1 + 32);
    ghConsoleShadowBeepChannel = *(HANDLE *)(a1 + 40);
    ghConsoleShadowKeyboardChannel = *(HANDLE *)(a1 + 56);
    ghConsoleShadowThinwireChannel = *(HANDLE *)(a1 + 64);
    gpConsoleShadowThinWireCache = ThinWireCache;
    *(_QWORD *)gRemoteClientKeyboardType = v8;
    gRemoteClientKeyboardType[2] = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    MirrorDriver = ObReferenceObjectByHandle(
                     *(HANDLE *)(a1 + 72),
                     2u,
                     (POBJECT_TYPE)ExEventObjectType,
                     0,
                     &Object,
                     HandleInformation);
    gpConsoleShadowDisplayChangeEvent = Object;
    if ( MirrorDriver < 0 )
      goto LABEL_19;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowVideoChannel, 0, 0LL, 0, &v19, 0LL);
    if ( MirrorDriver < 0 )
      goto LABEL_19;
    gConsoleShadowVideoFileObject = v19;
    IoGetRelatedDeviceObject((PFILE_OBJECT)v19);
    v10 = ObReferenceObjectByHandle(ghConsoleShadowThinwireChannel, 0, 0LL, 0, &v20, 0LL);
    v11 = v20;
    MirrorDriver = v10;
    gConsoleShadowThinwireFileObject = v20;
    if ( v10 < 0 )
      goto LABEL_19;
    G_SaveRemoteVideoFileObject = (struct _FILE_OBJECT *)RemoteContext[1];
    G_SaveRemoteConnectionFileObject = (struct _FILE_OBJECT *)RemoteContext[2];
    G_SavePerformanceStatistics = (unsigned __int8 *)RemoteContext[4];
    G_SaveRemoteConnectionChannel = (void *)RemoteContext[3];
    RemoteContext[1] = gConsoleShadowVideoFileObject;
    RemoteContext[4] = gpConsoleShadowThinWireCache;
    RemoteContext[3] = ghConsoleShadowThinwireChannel;
    RemoteContext[2] = v11;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowBeepChannel, 0, 0LL, 0, &v21, 0LL);
    gpConsoleShadowBeepDevice = v21;
    if ( MirrorDriver < 0 )
      goto LABEL_19;
    MirrorDriver = FindMirrorDriver(a2, &v24);
    if ( MirrorDriver < 0 )
      goto LABEL_19;
    RtlInitUnicodeString(&DestinationString, v24.DeviceName);
    v12 = *(_DWORD *)(a1 + 248);
    v13 = 546LL;
    v23[18] = 1835040;
    LOWORD(v23[17]) = 220;
    v23[42] = v12;
    v14 = 548LL;
    do
    {
      v23[v13 - 527] = *(_DWORD *)(v13 * 4 + gpsi);
      ++v13;
    }
    while ( v13 < 548 );
    do
    {
      v23[v14 - 505] = *(_DWORD *)(v14 * 4 + gpsi);
      ++v14;
    }
    while ( v14 < 550 );
    if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v23, 0LL, 268435457LL, 0LL, 0, 0, a3)
      || (unsigned int)xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, a3) )
    {
      MirrorDriver = -1073741823;
    }
    else
    {
      HDEV = DrvGetHDEV(&DestinationString);
      gConsoleShadowhDev = HDEV;
      if ( !HDEV
        || (gfRemotingConsole = 1,
            !(unsigned int)bDrvReconnect(HDEV, ghConsoleShadowThinwireChannel, gConsoleShadowThinwireFileObject, 0LL)) )
      {
        MirrorDriver = -1073741823;
        goto LABEL_19;
      }
      HDXDrvEscape(gConsoleShadowhDev, 2LL, gptmrWD, 8LL);
    }
    if ( MirrorDriver >= 0 )
      return (unsigned int)MirrorDriver;
LABEL_19:
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
    return (unsigned int)MirrorDriver;
  }
  return 3221225473LL;
}
