/*
 * XREFs of ??_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z @ 0x1C00DD64C
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00E1260 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E15A0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     <none>
 */

NDIS_PD_ASSOCIATION *__fastcall NDIS_PD_ASSOCIATION::`scalar deleting destructor'(NDIS_PD_ASSOCIATION *this)
{
  ExFreePoolWithTag(this, 0x6141444Eu);
  return this;
}
