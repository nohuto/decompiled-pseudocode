/*
 * XREFs of _CmValidateDeviceName @ 0x1404FD9C0
 * Callers:
 *     _CmGetDeviceInterfaceName @ 0x140487220 (_CmGetDeviceInterfaceName.c)
 *     _CmGetDeviceRegKeyPath @ 0x1404FD838 (_CmGetDeviceRegKeyPath.c)
 *     _PnpDispatchDevice @ 0x140500604 (_PnpDispatchDevice.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C468 (PiCMGetRelatedDeviceInstance.c)
 *     _CmEnumSubkeyCallback @ 0x140562C98 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140647364 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x140647B14 (PiCMGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140648420 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406486BC (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400C38D0 (RtlUnalignedStringCchLengthW.c)
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
