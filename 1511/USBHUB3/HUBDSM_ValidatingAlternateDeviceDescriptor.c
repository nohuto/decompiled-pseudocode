/*
 * XREFs of HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x1C0018B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingAlternateDeviceDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheDeviceDescriptor(*(_QWORD *)(a1 + 960));
}
