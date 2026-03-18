/*
 * XREFs of HUBDSM_ValidatingSelectConfigUrbFromConfigured @ 0x1C00175E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingSelectConfigUrbFromConfigured(__int64 a1)
{
  return HUBPDO_ValidateSelectConfigUrb(*(_QWORD *)(a1 + 960));
}
