/*
 * XREFs of PiDevCfgCheckDeviceNeedsUpdate @ 0x140607950
 * Callers:
 *     PiDevCfgProcessDeviceCallback @ 0x14053B0A0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x140608D10 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14060CEF4 (PpDevCfgCheckDeviceNeedsUpdate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     swscanf_s @ 0x140149C18 (swscanf_s.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     PiDevCfgFindDeviceDriver @ 0x140510680 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405113A0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFreeDriverNode @ 0x140514E48 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
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
  char v13; // r15
  int DriverConfiguration; // eax
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v24[16]; // [rsp+90h] [rbp-70h] BYREF

  v18 = 1;
  *a2 = 0;
  v17 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v22 = 0LL;
  v16 = 0;
  DeviceDriver = PiDevCfgFindDeviceDriver(a1, 0LL, &v22);
  v6 = v22;
  ObjectProperties = DeviceDriver;
  if ( (int)(DeviceDriver + 0x80000000) < 0 || DeviceDriver == -1073740656 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v16 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v9, v8, 11, (__int64)&v18, (__int64)&v17, (__int64)&v16) < 0
      || v18 != 4
      || v16 != 4 )
    {
      v17 = 0;
    }
    memset(v24, 0, 0x78uLL);
    v10 = *(void **)(a1 + 16);
    v24[0] = &DEVPKEY_Device_DriverInfPath;
    LODWORD(v24[1]) = 18;
    v24[2] = &DestinationString;
    v24[5] = &DEVPKEY_Device_DriverDate;
    v24[7] = &v23;
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
        v23 = 0LL;
      if ( SLODWORD(v24[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( UnicodeString.Buffer
        && swscanf_s(
             UnicodeString.Buffer,
             L"%hu.%hu.%hu.%hu",
             (char *)&v19 + 6,
             (char *)&v19 + 4,
             (char *)&v19 + 2,
             &v19) == 4 )
      {
        v12 = v19;
      }
      else
      {
        v12 = 0LL;
        v19 = 0LL;
      }
      v13 = PnpBootMode;
      if ( (v17 & 0x40) != 0 || !DestinationString.Buffer )
      {
        if ( !v6 )
        {
LABEL_21:
          if ( v13 && v6 && (v4 & 0x20) != 0 )
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
              goto LABEL_38;
            }
          }
          goto LABEL_37;
        }
      }
      else if ( v6 && RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 40), &DestinationString, 1u) )
      {
        if ( *(_QWORD *)(v6 + 112) == v23 && *(_QWORD *)(v6 + 120) == v12 )
        {
          if ( !v13 )
          {
LABEL_37:
            *a2 = v4;
            goto LABEL_38;
          }
          goto LABEL_35;
        }
      }
      else if ( v13 && (PiDevCfgFlags & 2) != 0 )
      {
LABEL_35:
        v4 = 0x40000;
        goto LABEL_21;
      }
      v4 = 32;
      goto LABEL_21;
    }
  }
LABEL_38:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
  return (unsigned int)ObjectProperties;
}
