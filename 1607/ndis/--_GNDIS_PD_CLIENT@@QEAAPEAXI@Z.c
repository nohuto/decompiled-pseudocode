/*
 * XREFs of ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x1C00DD68C
 * Callers:
 *     ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C00DE060 (-NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z.c)
 *     NdisPDStartup @ 0x1C00E1020 (NdisPDStartup.c)
 * Callees:
 *     <none>
 */

NDIS_PD_CLIENT *__fastcall NDIS_PD_CLIENT::`scalar deleting destructor'(NDIS_PD_CLIENT *this)
{
  ExFreePoolWithTag(this, 0x6341444Eu);
  return this;
}
