/*
 * XREFs of IcIsActiveBothPrimaryInterrupt @ 0x1C00804F8
 * Callers:
 *     IcCheckIrqConflict @ 0x1C006CCB0 (IcCheckIrqConflict.c)
 * Callees:
 *     <none>
 */

bool __fastcall IcIsActiveBothPrimaryInterrupt(__int64 a1, unsigned int a2)
{
  return (*(_DWORD *)(a1 + 28) & 4) == 0 && (unsigned int)(*(_DWORD *)(184LL * a2 + a1 + 140) - 3) <= 1;
}
