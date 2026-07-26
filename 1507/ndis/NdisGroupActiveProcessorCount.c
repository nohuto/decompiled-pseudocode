/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C0020250
 * Callers:
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00A88B0 (ndisCreateReceiveWorkerThreadPool.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D85D8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
