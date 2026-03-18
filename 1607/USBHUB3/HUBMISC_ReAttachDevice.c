/*
 * XREFs of HUBMISC_ReAttachDevice @ 0x1C0025EBC
 * Callers:
 *     HUBPSM30_IssuingReAttachDeviceToBootDevice @ 0x1C000DE40 (HUBPSM30_IssuingReAttachDeviceToBootDevice.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMISC_ReAttachDevice(__int64 a1)
{
  HUBSM_AddEvent(*(_QWORD *)(a1 + 1328) + 488LL, 0xFD2u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 1u);
  *(_DWORD *)(a1 + 1424) = 9;
}
