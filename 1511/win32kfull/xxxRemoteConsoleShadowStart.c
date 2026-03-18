/*
 * XREFs of xxxRemoteConsoleShadowStart @ 0x1C0203330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C0202B5C (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     bDrvReconnect @ 0x1C02B7900 (bDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteConsoleShadowStart(__int64 a1, const WCHAR *a2)
{
  _QWORD *RemoteContext; // rsi
  __int64 v5; // xmm0_8
  __int16 v6; // ax
  __int64 v7; // rcx
  NTSTATUS MirrorDriver; // edi
  NTSTATUS v9; // eax
  PVOID v10; // rcx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 HDEV; // rax
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D8h]
  PVOID v17; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v19; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v20; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v22[56]; // [rsp+70h] [rbp-90h] BYREF
  _DISPLAY_DEVICEW v23; // [rsp+150h] [rbp+50h] BYREF

  memset(v22, 0, 220);
  memset(&v23, 0, sizeof(v23));
  RemoteContext = (_QWORD *)GreGetRemoteContext(a1);
  if ( gbConnected && !gProtocolType )
  {
    HandleInformation = 0LL;
    gConsoleShadowhDev = 0LL;
    gfRemotingConsole = 0;
    v5 = *(_QWORD *)(a1 + 268);
    ghConsoleShadowVideoChannel = *(HANDLE *)(a1 + 32);
    ghConsoleShadowBeepChannel = *(HANDLE *)(a1 + 40);
    ghConsoleShadowKeyboardChannel = *(HANDLE *)(a1 + 56);
    ghConsoleShadowThinwireChannel = *(HANDLE *)(a1 + 64);
    v6 = *(_WORD *)(a1 + 264);
    gpConsoleShadowThinWireCache = ThinWireCache;
    v7 = *(_QWORD *)(a1 + 48);
    gConsoleShadowProtocolType = v6;
    ghConsoleShadowMouseChannel = v7;
    *(_QWORD *)gRemoteClientKeyboardType = v5;
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
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowVideoChannel, 0, 0LL, 0, &v20, 0LL);
    if ( MirrorDriver < 0 )
      goto LABEL_19;
    gConsoleShadowVideoFileObject = v20;
    IoGetRelatedDeviceObject((PFILE_OBJECT)v20);
    v9 = ObReferenceObjectByHandle(ghConsoleShadowThinwireChannel, 0, 0LL, 0, &v19, 0LL);
    v10 = v19;
    MirrorDriver = v9;
    gConsoleShadowThinwireFileObject = v19;
    if ( v9 < 0 )
      goto LABEL_19;
    G_SaveRemoteVideoFileObject = (struct _FILE_OBJECT *)RemoteContext[1];
    G_SaveRemoteConnectionFileObject = (struct _FILE_OBJECT *)RemoteContext[2];
    G_SavePerformanceStatistics = (unsigned __int8 *)RemoteContext[4];
    G_SaveRemoteConnectionChannel = (void *)RemoteContext[3];
    RemoteContext[1] = gConsoleShadowVideoFileObject;
    RemoteContext[4] = gpConsoleShadowThinWireCache;
    RemoteContext[3] = ghConsoleShadowThinwireChannel;
    RemoteContext[2] = v10;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowBeepChannel, 0, 0LL, 0, &v17, 0LL);
    gpConsoleShadowBeepDevice = v17;
    if ( MirrorDriver < 0 )
      goto LABEL_19;
    MirrorDriver = FindMirrorDriver(a2, &v23);
    if ( MirrorDriver < 0 )
      goto LABEL_19;
    RtlInitUnicodeString(&DestinationString, v23.DeviceName);
    v11 = *(_DWORD *)(a1 + 248);
    v12 = 546LL;
    v22[18] = 1835040;
    LOWORD(v22[17]) = 220;
    v22[42] = v11;
    v13 = 548LL;
    do
    {
      v22[v12 - 527] = *(_DWORD *)(v12 * 4 + gpsi);
      ++v12;
    }
    while ( v12 < 548 );
    do
    {
      v22[v13 - 505] = *(_DWORD *)(v13 * 4 + gpsi);
      ++v13;
    }
    while ( v13 < 550 );
    if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v22, 0LL, 268435457LL, 0LL, 0, 0)
      || (unsigned int)xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, 0) )
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
