/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C0024E60
 * Callers:
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00A0B60 (ndisCreateReceiveWorkerThreadPool.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D1CD8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
