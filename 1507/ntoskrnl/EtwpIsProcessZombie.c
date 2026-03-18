/*
 * XREFs of EtwpIsProcessZombie @ 0x14041C450
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14041C13C (EtwpProcessEnumCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406E94E0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsProcessZombie(__int64 a1)
{
  return (*(_DWORD *)(a1 + 772) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 1168)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}
