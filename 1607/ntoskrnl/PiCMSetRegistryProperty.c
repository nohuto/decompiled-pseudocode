/*
 * XREFs of PiCMSetRegistryProperty @ 0x140648964
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140139198 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DA01C (PiCMReturnBasicResultData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1404E5B98 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1404E5F00 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1404E5F4C (PiCMConvertRegistryProperty.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14062F780 (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmSetInstallerClassRegProp @ 0x1406D9768 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall PiCMSetRegistryProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  ACCESS_MASK v10; // ecx
  int v11; // ebx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  char v14[4]; // [rsp+58h] [rbp+7h] BYREF
  int v15; // [rsp+5Ch] [rbp+Bh]
  int v16; // [rsp+60h] [rbp+Fh]
  PCWSTR SourceString; // [rsp+68h] [rbp+17h]
  int v18; // [rsp+74h] [rbp+23h]
  unsigned int v19; // [rsp+78h] [rbp+27h]
  unsigned int *v20; // [rsp+80h] [rbp+2Fh]
  unsigned int v21; // [rsp+88h] [rbp+37h]
  int v22; // [rsp+8Ch] [rbp+3Bh]

  v6 = a6;
  LODWORD(a6) = 0;
  *v6 = 0;
  v9 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, v14);
  if ( v9 >= 0 )
  {
    v10 = 2;
    if ( v18 == 13 )
      v10 = 64;
    if ( PiAuDoesClientHaveAccess(v10) )
    {
      if ( SourceString && !v15 && a3 && a4 >= 8 )
      {
        v11 = PiCMConvertRegistryProperty(v18, &a6);
        if ( v11 >= 0 )
        {
          if ( v16 == 1 )
          {
            v11 = PiPnpRtlSetDeviceRegProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    SourceString,
                    0LL,
                    (signed int)a6,
                    v19,
                    v20,
                    v21,
                    0);
            if ( v11 >= 0 && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
              PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
          }
          else if ( v16 == 2 )
          {
            v11 = CmSetInstallerClassRegProp(PiPnpRtlCtx, (_DWORD)SourceString, v19, (__int64)v20, v21);
          }
          else
          {
            v11 = -1073741811;
          }
          if ( v11 == -1073741790 )
            v11 = -1073741264;
        }
      }
      else
      {
        v11 = -1073741811;
      }
    }
    else
    {
      v11 = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(v11, v22, a3, a4, v6);
  }
  PiCMReleaseRegistryPropertyInputData((__int64)v14);
  return (unsigned int)v9;
}
