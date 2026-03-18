/*
 * XREFs of HUBMISC_AttachDevice @ 0x1C0025144
 * Callers:
 *     HUBPSM20_IssuingAttachDeviceToPort @ 0x1C000D700 (HUBPSM20_IssuingAttachDeviceToPort.c)
 *     HUBPSM30_IssuingAttachDeviceToDsm @ 0x1C000E4A0 (HUBPSM30_IssuingAttachDeviceToDsm.c)
 *     HUBPSM30_IssuingAttachDeviceWithResetToDsm @ 0x1C000E4C0 (HUBPSM30_IssuingAttachDeviceWithResetToDsm.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMISC_AttachDevice(__int64 a1)
{
  __int64 result; // rax

  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1328) + 1620LL), 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1336), 0xFFFFFFFD);
  HUBSM_AddEvent(*(_QWORD *)(a1 + 1328) + 488LL, 0xFC2u);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1620LL) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 1u);
    result = 3013LL;
    *(_DWORD *)(a1 + 1424) = 9;
  }
  else
  {
    result = 3009LL;
    *(_DWORD *)(a1 + 1424) = 3;
  }
  return result;
}
