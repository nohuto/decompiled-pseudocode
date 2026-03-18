/*
 * XREFs of EtwpIsProcessZombie @ 0x140498C84
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1404989B4 (EtwpProcessEnumCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7D94 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsProcessZombie(__int64 a1)
{
  return (*(_DWORD *)(a1 + 772) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 1176)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}
