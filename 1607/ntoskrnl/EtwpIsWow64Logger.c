/*
 * XREFs of EtwpIsWow64Logger @ 0x140494288
 * Callers:
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x140493E48 (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
