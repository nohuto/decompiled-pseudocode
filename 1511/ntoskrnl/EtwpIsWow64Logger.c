/*
 * XREFs of EtwpIsWow64Logger @ 0x1404C7E34
 * Callers:
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x1404C79EC (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
