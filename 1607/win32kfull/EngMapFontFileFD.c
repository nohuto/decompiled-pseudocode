/*
 * XREFs of EngMapFontFileFD @ 0x1C027C840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal((struct _FILEVIEW *)iFile, ppjBuf, pcjBuf, 1);
}
