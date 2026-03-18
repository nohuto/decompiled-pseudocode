/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x1404EC974
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PnpSaveDeviceCapabilities @ 0x1404EE568 (PnpSaveDeviceCapabilities.c)
 *     PpIrpQueryCapabilities @ 0x1404F10C0 (PpIrpQueryCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _BYTE v3[64]; // [rsp+20h] [rbp-58h] BYREF

  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
