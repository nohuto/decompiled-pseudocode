/*
 * XREFs of NdisCmModifyCallQoSComplete @ 0x1C00F1030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisCmModifyCallQoSComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters)
{
  (*((void (__fastcall **)(NDIS_STATUS, _QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 14))(
    Status,
    *((_QWORD *)NdisVcHandle + 3),
    CallParameters);
}
