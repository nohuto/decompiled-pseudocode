/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C0020670
 * Callers:
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00A87A0 (ndisCreateReceiveWorkerThreadPool.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D7CC8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
