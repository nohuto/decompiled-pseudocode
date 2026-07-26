/*
 * XREFs of NdisCmDispatchCallConnected @ 0x1C00F0CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisCmDispatchCallConnected(NDIS_HANDLE NdisVcHandle)
{
  (*((void (__fastcall **)(_QWORD))NdisVcHandle + 16))(*((_QWORD *)NdisVcHandle + 3));
}
