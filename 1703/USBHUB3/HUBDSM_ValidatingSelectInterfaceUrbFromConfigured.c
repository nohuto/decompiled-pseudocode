/*
 * XREFs of HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x1C0019AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingSelectInterfaceUrbFromConfigured(__int64 a1)
{
  return HUBPDO_ValidateSelectInterfaceUrb(*(_QWORD *)(a1 + 960));
}
