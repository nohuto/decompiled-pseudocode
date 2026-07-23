/*
 * XREFs of PpDevCfgInit @ 0x1407B8124
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PiDmEnumObjectsWithCallback @ 0x1404E4280 (PiDmEnumObjectsWithCallback.c)
 *     PipOpenServiceEnumKeys @ 0x140539324 (PipOpenServiceEnumKeys.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
 */

__int64 PpDevCfgInit()
{
  int ObjectProperties; // ebx
  int v1; // eax
  char v2; // al
  int v3; // ecx
  __int64 v5; // [rsp+30h] [rbp-D8h]
  int v6; // [rsp+68h] [rbp-A0h] BYREF
  int v7; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v8; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v10; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v11[16]; // [rsp+98h] [rbp-70h] BYREF

  memset(v11, 0, 0x78uLL);
  LODWORD(v11[1]) = 7;
  v11[0] = &DEVPKEY_DriverDatabase_ConfigMode;
  LODWORD(v11[6]) = 7;
  v11[2] = &v7;
  LODWORD(v11[3]) = 4;
  v11[5] = &DEVPKEY_DriverDatabase_ConfigOptions;
  LODWORD(v11[8]) = 4;
  v11[7] = &v8;
  v11[10] = &DEVPKEY_DriverDatabase_Updated;
  v11[12] = &v6;
  LODWORD(v11[11]) = 17;
  LODWORD(v11[13]) = 1;
  ObjectProperties = PiDevCfgQueryObjectProperties(4LL, (__int64)L"SYSTEM", 6u, 0LL, (__int64)v11, 3u);
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v11[4]) >= 0 )
      v7 = (v7 & 3) != 0 ? v7 : 0;
    else
      v7 = 3;
    v1 = v8;
    *(_DWORD *)&v10.Length = 1835034;
    if ( SLODWORD(v11[9]) < 0 )
      v1 = 0;
    LODWORD(v8) = v1;
    v2 = v6;
    if ( SLODWORD(v11[14]) < 0 )
      v2 = 0;
    LOBYTE(v6) = v2;
    v10.Buffer = L"DeviceInstall";
    if ( PipOpenServiceEnumKeys(&v10, 0x20019u, &Handle, 0LL, 0) < 0 )
    {
      v3 = PiDevCfgFlags;
    }
    else
    {
      ZwClose(Handle);
      v3 = PiDevCfgFlags | 2;
      PiDevCfgFlags |= 2u;
    }
    PiDevCfgMode = v7;
    PiDevCfgOptions = v8;
    if ( (_BYTE)v6 == 0xFF )
    {
      v3 |= 1u;
      PiDevCfgFlags = v3;
    }
    if ( v7 )
    {
      if ( (v3 & 1) != 0 )
      {
        ObjectProperties = PiDmEnumObjectsWithCallback(
                             1,
                             (__int64 (__fastcall *)(unsigned int *, __int64, char *))PiDevCfgInitDeviceCallback,
                             0LL);
        if ( ObjectProperties >= 0 )
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            0LL,
            L"SYSTEM",
            6,
            0LL,
            v5,
            (__int64)&DEVPKEY_DriverDatabase_Updated,
            0,
            0LL,
            0);
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
