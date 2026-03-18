/*
 * XREFs of PiCMSetRegistryProperty @ 0x14058C0C0
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14015FDCC (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x140440A1C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1404414C0 (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140441620 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DD148 (PiCMReturnBasicResultData.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14058C1FC (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmSetInstallerClassRegProp @ 0x1407142A0 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall PiCMSetRegistryProperty(
        ULONG64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  ACCESS_MASK v10; // ecx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  char v16[4]; // [rsp+58h] [rbp+7h] BYREF
  int v17; // [rsp+5Ch] [rbp+Bh]
  int v18; // [rsp+60h] [rbp+Fh]
  PCWSTR SourceString; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+74h] [rbp+23h]
  int v21; // [rsp+78h] [rbp+27h]
  __int64 v22; // [rsp+80h] [rbp+2Fh]
  int v23; // [rsp+88h] [rbp+37h]
  int v24; // [rsp+8Ch] [rbp+3Bh]

  v6 = a6;
  LODWORD(a6) = 0;
  *v6 = 0;
  v9 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, v16);
  if ( v9 >= 0 )
  {
    v10 = 2;
    if ( v20 == 13 )
      v10 = 64;
    if ( PiAuDoesClientHaveAccess(v10) )
    {
      if ( SourceString && !v17 && a3 && a4 >= 8 )
      {
        v12 = PiCMConvertRegistryProperty(v20, &a6);
        if ( v12 >= 0 )
        {
          if ( v18 == 1 )
          {
            v12 = PiPnpRtlSetDeviceRegProperty(v11, SourceString, v13, (unsigned int)a6, v21, v22, v23);
            if ( v12 >= 0 && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
              PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
          }
          else if ( v18 == 2 )
          {
            v12 = CmSetInstallerClassRegProp(PiPnpRtlCtx, (_DWORD)SourceString, v21, v22, v23);
          }
          else
          {
            v12 = -1073741811;
          }
          if ( v12 == -1073741790 )
            v12 = -1073741264;
        }
      }
      else
      {
        v12 = -1073741811;
      }
    }
    else
    {
      v12 = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(v12, v24, a3, a4, v6);
  }
  PiCMReleaseRegistryPropertyInputData((__int64)v16);
  return (unsigned int)v9;
}
