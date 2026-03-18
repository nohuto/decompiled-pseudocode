/*
 * XREFs of PiCMSetObjectProperty @ 0x1404DA470
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14015FDCC (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PiCMReleasePropertyInputData @ 0x1404410D0 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140441214 (PiCMCapturePropertyInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404D83F4 (PiPnpRtlSetObjectProperty.c)
 *     PiCMReturnBasicResultData @ 0x1404DD148 (PiCMReturnBasicResultData.c)
 */

__int64 __fastcall PiCMSetObjectProperty(ULONG64 a1, unsigned int a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // r13d
  const WCHAR *v12; // r14
  ACCESS_MASK v13; // ecx
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  _DWORD *v23; // [rsp+68h] [rbp-61h]
  char v24[4]; // [rsp+70h] [rbp-59h] BYREF
  int v25; // [rsp+74h] [rbp-55h]
  int v26; // [rsp+78h] [rbp-51h]
  PCWSTR SourceString; // [rsp+80h] [rbp-49h]
  __int64 v28; // [rsp+8Ch] [rbp-3Dh] BYREF
  __int64 v29; // [rsp+94h] [rbp-35h]
  int v30; // [rsp+9Ch] [rbp-2Dh]
  int v31; // [rsp+A0h] [rbp-29h]
  __int64 v32; // [rsp+A8h] [rbp-21h]
  int v33; // [rsp+B0h] [rbp-19h]
  unsigned int v34; // [rsp+B4h] [rbp-15h]

  v23 = a6;
  *a6 = 0;
  v8 = PiCMCapturePropertyInputData(a1, a2, a5, v24);
  if ( v8 >= 0 )
  {
    v9 = 3;
    v10 = v26;
    v11 = v31;
    v12 = SourceString;
    *(_QWORD *)&DestinationString.Length = v32;
    v21 = v33;
    if ( v30 == 14 )
    {
      v16 = v28 - *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1;
      if ( v28 == *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1 )
        v16 = v29 - *(_QWORD *)DEVPKEY_Device_FriendlyName.fmtid.Data4;
      if ( !v16 )
        goto LABEL_47;
    }
    if ( v30 == 3 )
    {
      v17 = v28 - *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1;
      if ( v28 == *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1 )
        v17 = v29 - *(_QWORD *)DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data4;
      if ( !v17 )
        goto LABEL_47;
    }
    if ( v30 == 4 )
    {
      v19 = v28 - DEVPKEY_DriverPackage_SourceMediaPath;
      if ( v28 == DEVPKEY_DriverPackage_SourceMediaPath )
        v19 = v29 + 0x4524B8338B5D1E6CLL;
      if ( !v19 )
        goto LABEL_47;
    }
    if ( v30 != 2 )
      goto LABEL_6;
    v18 = v28 - DEVPKEY_WIA_DeviceType;
    if ( v28 == DEVPKEY_WIA_DeviceType )
      v18 = v29 - 0x2F09E22B0008C7BELL;
    if ( v18 )
LABEL_6:
      v13 = 2;
    else
LABEL_47:
      v13 = 64;
    if ( !PiAuDoesClientHaveAccess(v13) )
    {
      v8 = -1073741790;
      goto LABEL_20;
    }
    if ( !v12 || v25 || !a3 || a4 < 8 )
    {
      v8 = -1073741811;
      goto LABEL_20;
    }
    if ( (v10 & 0x7FFF0000) == 0 )
    {
      v14 = 0x80000000LL;
      if ( (v10 & 0x80000000) == 0x80000000 )
      {
        v9 = 0;
        if ( (unsigned __int16)v10 < 0xBu )
          v9 = (unsigned __int16)v10;
LABEL_16:
        if ( v9 )
          goto LABEL_17;
        goto LABEL_50;
      }
      v14 = (unsigned int)(unsigned __int16)v10 - 1;
      if ( (unsigned __int16)v10 == 1 )
      {
        v9 = (unsigned __int16)v10;
        goto LABEL_16;
      }
      v14 = (unsigned int)(unsigned __int16)v10 - 2;
      if ( (unsigned __int16)v10 == 2 )
      {
        v9 = 2;
      }
      else
      {
        v14 = (unsigned int)(unsigned __int16)v10 - 3;
        if ( (unsigned __int16)v10 != 3 )
        {
          if ( (unsigned __int16)v10 == 4 )
            goto LABEL_17;
          goto LABEL_49;
        }
        v9 = 4;
      }
LABEL_17:
      if ( v8 >= 0 )
      {
        v8 = PiPnpRtlSetObjectProperty(
               v14,
               v12,
               v9,
               0LL,
               0LL,
               (__int64)&v28,
               v11,
               *(__int64 *)&DestinationString.Length,
               v21);
        if ( v8 == -1073741790 )
        {
          if ( v30 != 38 )
            goto LABEL_20;
          v20 = v28 - *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1;
          if ( v28 == *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1 )
            v20 = v29 - *(_QWORD *)DEVPKEY_Device_BaseContainerId.fmtid.Data4;
          if ( v20 )
            goto LABEL_20;
          v8 = -1073741264;
        }
        if ( v8 >= 0 && v9 == 1 && RtlInitUnicodeStringEx(&DestinationString, v12) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
      }
LABEL_20:
      v8 = PiCMReturnBasicResultData((unsigned int)v8, v34, a3, a4, v23);
      goto LABEL_21;
    }
LABEL_49:
    v9 = 0;
LABEL_50:
    v8 = -1073741811;
    goto LABEL_17;
  }
LABEL_21:
  PiCMReleasePropertyInputData((__int64)v24);
  return (unsigned int)v8;
}
