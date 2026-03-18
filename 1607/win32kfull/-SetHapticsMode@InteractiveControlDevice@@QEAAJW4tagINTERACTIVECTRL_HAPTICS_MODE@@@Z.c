/*
 * XREFs of ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023E740
 * Callers:
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023C130 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023DEA4 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::SetHapticsMode(__int64 a1, int a2)
{
  ULONG v4; // ebp
  UCHAR *v5; // rsi
  int SpecificValueCaps; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  USHORT ValueCapsLength[8]; // [rsp+40h] [rbp-88h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-78h] BYREF

  ValueCapsLength[0] = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v4 = 2;
  if ( !a2
    && !*(_DWORD *)(a1 + 108)
    && !*((_DWORD *)InteractiveControlManager::Instance() + 21)
    && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
  {
    v4 = 3;
  }
  v5 = (UCHAR *)Win32AllocPool(*(unsigned __int16 *)(a1 + 124), 1819440195LL);
  if ( v5 )
  {
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          0xEu,
                          0,
                          0x20u,
                          &ValueCaps,
                          ValueCapsLength,
                          *(PHIDP_PREPARSED_DATA *)(a1 + 288));
    if ( SpecificValueCaps >= 0 )
    {
      *v5 = ValueCaps.ReportID;
      SpecificValueCaps = InteractiveControlDevice::SendDeviceIOControl(
                            (InteractiveControlDevice *)a1,
                            0xB0192u,
                            0LL,
                            0,
                            v5,
                            *(unsigned __int16 *)(a1 + 124),
                            0LL);
      if ( SpecificValueCaps >= 0 )
      {
        SpecificValueCaps = HidP_SetUsageValue(
                              HidP_Feature,
                              0xEu,
                              ValueCaps.LinkCollection,
                              0x20u,
                              v4,
                              *(PHIDP_PREPARSED_DATA *)(a1 + 288),
                              (PCHAR)v5,
                              *(unsigned __int16 *)(a1 + 124));
        if ( SpecificValueCaps >= 0 )
        {
          SpecificValueCaps = InteractiveControlDevice::SendDeviceIOControl(
                                (InteractiveControlDevice *)a1,
                                0xB0191u,
                                v5,
                                *(unsigned __int16 *)(a1 + 124),
                                0LL,
                                0,
                                0LL);
          if ( SpecificValueCaps >= 0 )
            *(_DWORD *)(a1 + 104) = a2;
        }
      }
    }
    Win32FreePool(v5, v7, v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SpecificValueCaps;
}
