/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x140486C30
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PpIrpQueryCapabilities @ 0x140486BB0 (PpIrpQueryCapabilities.c)
 *     PnpSaveDeviceCapabilities @ 0x14048990C (PnpSaveDeviceCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
