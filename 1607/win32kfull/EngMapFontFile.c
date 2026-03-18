/*
 * XREFs of EngMapFontFile @ 0x1C027C830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EngMapFontFile(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileInternal(iFile, ppjBuf, pcjBuf);
}
