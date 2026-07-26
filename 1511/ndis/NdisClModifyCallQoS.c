/*
 * XREFs of NdisClModifyCallQoS @ 0x1C00F0690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisClModifyCallQoS(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  return (*((__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 23))(
           *((_QWORD *)NdisVcHandle + 18),
           CallParameters);
}
