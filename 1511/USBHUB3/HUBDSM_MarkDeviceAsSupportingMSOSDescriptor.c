/*
 * XREFs of HUBDSM_MarkDeviceAsSupportingMSOSDescriptor @ 0x1C00191F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry @ 0x1C0069D40 (HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry.c)
 */

__int64 __fastcall HUBDSM_MarkDeviceAsSupportingMSOSDescriptor(__int64 a1)
{
  HUBMISC_StoreDeviceMSOSVendorCodeInRegsitry(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
