/*
 * XREFs of ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C00DDEF8
 * Callers:
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C00E0290 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 *     ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C00E0410 (-NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

_UNICODE_STRING *__fastcall NDIS_PD_EC::`scalar deleting destructor'(_UNICODE_STRING *P)
{
  RtlFreeUnicodeString(P + 3);
  ExFreePoolWithTag(P, 0x6541444Eu);
  return P;
}
