/*
 * XREFs of VfZwPowerInformation @ 0x1406D3034
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        void *a2,
        ULONG InputBufferLength,
        void *a4,
        ULONG a5)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
  }
  return pXdvZwPowerInformation(InformationLevel, a2, InputBufferLength, a4, a5);
}
