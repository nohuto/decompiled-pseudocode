/*
 * XREFs of EtwpIsWow64Logger @ 0x1404AC0A0
 * Callers:
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x1404ABC40 (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
