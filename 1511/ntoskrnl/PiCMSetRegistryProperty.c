/*
 * XREFs of PiCMSetRegistryProperty @ 0x1406140E8
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1401303D4 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x140443BAC (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x140443BF8 (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140443D54 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReturnBasicResultData @ 0x14045BD10 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406056EC (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmSetInstallerClassRegProp @ 0x140694708 (_CmSetInstallerClassRegProp.c)
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
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+40h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  char v17[4]; // [rsp+58h] [rbp+7h] BYREF
  int v18; // [rsp+5Ch] [rbp+Bh]
  int v19; // [rsp+60h] [rbp+Fh]
  PCWSTR SourceString; // [rsp+68h] [rbp+17h]
  int v21; // [rsp+74h] [rbp+23h]
  unsigned int v22; // [rsp+78h] [rbp+27h]
  unsigned int *v23; // [rsp+80h] [rbp+2Fh]
  unsigned int v24; // [rsp+88h] [rbp+37h]
  int v25; // [rsp+8Ch] [rbp+3Bh]

  v6 = a6;
  LODWORD(a6) = 0;
  *v6 = 0;
  v9 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, v17);
  if ( v9 >= 0 )
  {
    v10 = 2;
    if ( v21 == 13 )
      v10 = 64;
    if ( PiAuDoesClientHaveAccess(v10) )
    {
      if ( SourceString && !v18 && a3 && a4 >= 8 )
      {
        v11 = PiCMConvertRegistryProperty(v21, &a6);
        if ( v11 >= 0 )
        {
          if ( v19 == 1 )
          {
            v11 = PiPnpRtlSetDeviceRegProperty(v12, SourceString, v13, (signed int)a6, v22, v23, v24, v15);
            if ( v11 >= 0 && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
              PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
          }
          else if ( v19 == 2 )
          {
            v11 = CmSetInstallerClassRegProp(PiPnpRtlCtx, (_DWORD)SourceString, v22, (__int64)v23, v24);
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
    v9 = PiCMReturnBasicResultData(v11, v25, a3, a4, v6);
  }
  PiCMReleaseRegistryPropertyInputData((__int64)v17);
  return (unsigned int)v9;
}
