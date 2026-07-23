/*
 * XREFs of BiSetFirmwareModified @ 0x14012E4F0
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1401263AC (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14053BC34 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x1406D20DC (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x14053CBDC (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x14053E75C (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
