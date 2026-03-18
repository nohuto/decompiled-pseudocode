/*
 * XREFs of _CmValidateDeviceName @ 0x14043D110
 * Callers:
 *     _PnpDispatchDevice @ 0x14043B544 (_PnpDispatchDevice.c)
 *     _CmGetDeviceRegKeyPath @ 0x14043CF8C (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x140459864 (_CmGetDeviceInterfaceName.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14058D600 (PiCMGetDeviceDepth.c)
 *     _CmEnumSubkeyCallback @ 0x1405A9344 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     PiCMRegisterDeviceInterface @ 0x1406934E4 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406936F4 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14001988C (RtlUnalignedStringCchLengthW.c)
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, const wchar_t *a2)
{
  int v2; // ebx
  int v3; // edi
  NTSTATUS v4; // r8d
  __int16 *v5; // r11
  __int16 v6; // ax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v4 >= 0 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      while ( (unsigned __int16)(v6 - 33) <= 0x5Eu && v6 != 44 )
      {
        if ( v6 == 92 )
        {
          if ( !v2 )
            return 3221225523LL;
          v2 = 0;
          ++v3;
        }
        else
        {
          ++v2;
        }
        v6 = v5[1];
        ++v5;
        if ( !v6 )
        {
          if ( v2 && v3 == 3 )
            return (unsigned int)v4;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}
