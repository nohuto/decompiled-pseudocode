/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x14057171C (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x140639400 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406413C0 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swscanf_s @ 0x140153568 (swscanf_s.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDriverNode @ 0x140638DD0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140639094 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14063BE34 (PiDevCfgQueryDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgCheckDeviceNeedsUpdate(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // edi
  int DeviceDriver; // eax
  __int64 v6; // rsi
  int ObjectProperties; // r14d
  __int64 v8; // r8
  __int64 v9; // rdx
  void *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  int DriverConfiguration; // eax
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v23; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v24[16]; // [rsp+A0h] [rbp-60h] BYREF

  v17 = 1;
  *a2 = 0;
  v16 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v21 = 0LL;
  v15 = 0;
  *(_DWORD *)&v23.Length = 0;
  v23.Buffer = 0LL;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v21);
  v6 = v21;
  ObjectProperties = DeviceDriver;
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v15 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v9, v8, 11, (__int64)&v17, (__int64)&v16, (__int64)&v15, 0) < 0
      || v17 != 4
      || v15 != 4 )
    {
      v16 = 0;
    }
    memset(v24, 0, 0x78uLL);
    v10 = *(void **)(a1 + 16);
    v24[0] = &DEVPKEY_Device_DriverInfPath;
    LODWORD(v24[1]) = 18;
    v24[2] = &DestinationString;
    v24[5] = &DEVPKEY_Device_DriverDate;
    v24[7] = &v22;
    LODWORD(v24[11]) = 18;
    v24[10] = &DEVPKEY_Device_DriverVersion;
    v11 = *(_QWORD *)(a1 + 8);
    v24[12] = &UnicodeString;
    HIDWORD(v24[3]) = 6;
    LODWORD(v24[6]) = 16;
    LODWORD(v24[8]) = 8;
    HIDWORD(v24[13]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(6LL, v11, 1u, v10, (__int64)v24, 3u);
    if ( ObjectProperties >= 0 )
    {
      if ( SLODWORD(v24[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v24[9]) < 0 )
        v22 = 0LL;
      if ( SLODWORD(v24[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( UnicodeString.Buffer
        && swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v18 + 6,
             (char *)&v18 + 4,
             (char *)&v18 + 2,
             &v18) == 4 )
      {
        v12 = v18;
      }
      else
      {
        v12 = 0LL;
        v18 = 0LL;
      }
      if ( (v16 & 0x40) != 0 || !DestinationString.Buffer )
      {
        if ( !v6 )
          goto LABEL_21;
      }
      else if ( v6 && RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 40), &DestinationString, 1u) )
      {
        if ( *(_QWORD *)(v6 + 112) == v22 && *(_QWORD *)(v6 + 120) == v12 )
        {
          if ( !PnpBootMode )
          {
LABEL_39:
            *a2 = v4;
            goto LABEL_40;
          }
          v4 = 0x40000;
LABEL_21:
          if ( PnpBootMode && v6 && (v4 & 0x20) != 0 )
          {
            DriverConfiguration = PiDevCfgQueryDriverConfiguration(v6);
            ObjectProperties = DriverConfiguration;
            if ( DriverConfiguration == -1073740653 )
            {
              ObjectProperties = 0;
              v4 = v4 & 0xFFFBFFDF | 0x40000;
            }
            else if ( DriverConfiguration < 0 )
            {
              goto LABEL_40;
            }
          }
          goto LABEL_39;
        }
      }
      else if ( PnpBootMode && (PiDevCfgFlags & 2) != 0 )
      {
        v4 = 0x40000;
        if ( v6 && (int)PiDevCfgGetDriverPackageId(DestinationString.Buffer, &v23) < 0 )
          v4 = 262176;
        goto LABEL_21;
      }
      v4 = 32;
      goto LABEL_21;
    }
  }
LABEL_40:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v23);
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
  return (unsigned int)ObjectProperties;
}
