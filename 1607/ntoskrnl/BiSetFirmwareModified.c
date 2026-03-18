/*
 * XREFs of BiSetFirmwareModified @ 0x14012DF80
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140125E3C (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14053B6F4 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x1406D1FA4 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x14053C69C (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x14053E21C (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
