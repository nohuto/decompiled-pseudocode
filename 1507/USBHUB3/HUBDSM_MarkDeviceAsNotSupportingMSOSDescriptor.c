/*
 * XREFs of HUBDSM_MarkDeviceAsNotSupportingMSOSDescriptor @ 0x1C00187A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_MarkDeviceAsNotSupportingMSOSDescriptor @ 0x1C00690A0 (HUBMISC_MarkDeviceAsNotSupportingMSOSDescriptor.c)
 */

__int64 __fastcall HUBDSM_MarkDeviceAsNotSupportingMSOSDescriptor(__int64 a1)
{
  HUBMISC_MarkDeviceAsNotSupportingMSOSDescriptor(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
