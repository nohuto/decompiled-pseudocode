/*
 * XREFs of HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x1C0018850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero(__int64 a1)
{
  return HUBDTX_ValidateFirstDeviceDescriptorFor20(*(_QWORD *)(a1 + 960));
}
