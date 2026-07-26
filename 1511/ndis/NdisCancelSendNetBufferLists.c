/*
 * XREFs of NdisCancelSendNetBufferLists @ 0x1C0055D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelSendNetBufferLists(NDIS_HANDLE NdisBindingHandle, PVOID CancelId)
{
  (*(void (__fastcall **)(NDIS_HANDLE, PVOID))(*((_QWORD *)NdisBindingHandle + 2) + 184LL))(NdisBindingHandle, CancelId);
}
