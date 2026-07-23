/*
 * XREFs of PiCMSetObjectProperty @ 0x1404CCC18
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140139198 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DA01C (PiCMReturnBasicResultData.c)
 *     PiCMReleasePropertyInputData @ 0x1404DFB70 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1404E2F88 (PiCMCapturePropertyInputData.c)
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiCMSetObjectProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v8; // ebx
  unsigned int v9; // edi
  int v10; // esi
  int v11; // r13d
  const WCHAR *v12; // r14
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-61h]
  _BYTE v23[4]; // [rsp+70h] [rbp-59h] BYREF
  int v24; // [rsp+74h] [rbp-55h]
  int v25; // [rsp+78h] [rbp-51h]
  PCWSTR SourceString; // [rsp+80h] [rbp-49h]
  __int64 v27; // [rsp+8Ch] [rbp-3Dh] BYREF
  __int64 v28; // [rsp+94h] [rbp-35h]
  int v29; // [rsp+9Ch] [rbp-2Dh]
  int v30; // [rsp+A0h] [rbp-29h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  int v32; // [rsp+B0h] [rbp-19h]
  unsigned int v33; // [rsp+B4h] [rbp-15h]

  v22 = a6;
  *a6 = 0;
  v8 = PiCMCapturePropertyInputData(a1, a2, a5, v23);
  if ( v8 >= 0 )
  {
    v9 = 3;
    v10 = v25;
    v11 = v30;
    v12 = SourceString;
    *(_QWORD *)&DestinationString.Length = v31;
    v20 = v32;
    if ( v29 == 14 )
    {
      v15 = v27 - *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1;
      if ( v27 == *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1 )
        v15 = v28 - *(_QWORD *)DEVPKEY_Device_FriendlyName.fmtid.Data4;
      if ( !v15 )
        goto LABEL_47;
    }
    if ( v29 == 3 )
    {
      v16 = v27 - *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1;
      if ( v27 == *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1 )
        v16 = v28 - *(_QWORD *)DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data4;
      if ( !v16 )
        goto LABEL_47;
    }
    if ( v29 == 4 )
    {
      v17 = v27 - DEVPKEY_DriverPackage_SourceMediaPath;
      if ( v27 == DEVPKEY_DriverPackage_SourceMediaPath )
        v17 = v28 + 0x4524B8338B5D1E6CLL;
      if ( !v17 )
        goto LABEL_47;
    }
    if ( v29 != 2 )
      goto LABEL_6;
    v18 = v27 - DEVPKEY_WIA_DeviceType;
    if ( v27 == DEVPKEY_WIA_DeviceType )
      v18 = v28 - 0x2F09E22B0008C7BELL;
    if ( v18 )
LABEL_6:
      v13 = 2LL;
    else
LABEL_47:
      v13 = 64LL;
    if ( !(unsigned __int8)PiAuDoesClientHaveAccess(v13) )
    {
      v8 = -1073741790;
      goto LABEL_25;
    }
    if ( !v12 || v24 || !a3 || a4 < 8 )
    {
      v8 = -1073741811;
      goto LABEL_25;
    }
    if ( (v10 & 0x7FFF0000) == 0 )
    {
      if ( (v10 & 0x80000000) == 0x80000000 )
      {
        v9 = 0;
        if ( (unsigned __int16)v10 < 0xBu )
          v9 = (unsigned __int16)v10;
      }
      else
      {
        if ( (unsigned __int16)v10 != 1 )
        {
          switch ( (unsigned __int16)v10 )
          {
            case 2u:
              v9 = 2;
              goto LABEL_21;
            case 3u:
              v9 = 4;
              goto LABEL_21;
            case 4u:
LABEL_21:
              if ( v8 >= 0 )
              {
                v8 = PiPnpRtlSetObjectProperty(
                       *(_QWORD *)&PiPnpRtlCtx,
                       v12,
                       v9,
                       0LL,
                       0LL,
                       &v27,
                       v11,
                       *(_QWORD *)&DestinationString.Length,
                       v20,
                       0);
                if ( v8 == -1073741790 )
                {
                  if ( v29 != 38 )
                    goto LABEL_25;
                  v19 = v27 - *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1;
                  if ( v27 == *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1 )
                    v19 = v28 - *(_QWORD *)DEVPKEY_Device_BaseContainerId.fmtid.Data4;
                  if ( v19 )
                    goto LABEL_25;
                  v8 = -1073741264;
                }
                if ( v8 >= 0 && v9 == 1 && RtlInitUnicodeStringEx(&DestinationString, v12) >= 0 )
                  PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
              }
LABEL_25:
              v8 = PiCMReturnBasicResultData((unsigned int)v8, v33, a3, a4, v22);
              goto LABEL_26;
          }
          goto LABEL_49;
        }
        v9 = 1;
      }
      if ( v9 )
        goto LABEL_21;
      goto LABEL_50;
    }
LABEL_49:
    v9 = 0;
LABEL_50:
    v8 = -1073741811;
    goto LABEL_21;
  }
LABEL_26:
  PiCMReleasePropertyInputData(v23);
  return (unsigned int)v8;
}
