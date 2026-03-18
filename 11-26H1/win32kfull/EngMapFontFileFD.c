/*
 * XREFs of EngMapFontFileFD @ 0x14031C160
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal((struct FILEVIEW *)iFile, ppjBuf, pcjBuf, 1);
}
