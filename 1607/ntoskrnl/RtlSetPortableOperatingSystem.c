/*
 * XREFs of RtlSetPortableOperatingSystem @ 0x1402135D4
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteRegistryValue @ 0x1404E08E4 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall RtlSetPortableOperatingSystem(char a1)
{
  BOOL ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = a1 != 0;
  return RtlWriteRegistryValue(2u, 0LL, L"PortableOperatingSystem", 4u, &ValueData, 4u);
}
