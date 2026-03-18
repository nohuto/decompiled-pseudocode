/*
 * XREFs of VfPowerIsSystemRestrictedIrp @ 0x14074D86C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfPowerIsSystemRestrictedIrp(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) != 1;
}
