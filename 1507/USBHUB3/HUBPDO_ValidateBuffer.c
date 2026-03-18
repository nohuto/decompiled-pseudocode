/*
 * XREFs of HUBPDO_ValidateBuffer @ 0x1C0010A2C
 * Callers:
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C0010A60 (HUBPDO_ValidateConfigurationDescriptor.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBPDO_ValidateBuffer(__int64 a1, __int64 a2)
{
  return *(_BYTE *)(a2 + a1 - 1);
}
