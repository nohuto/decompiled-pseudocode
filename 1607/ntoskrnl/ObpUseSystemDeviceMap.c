/*
 * XREFs of ObpUseSystemDeviceMap @ 0x140665600
 * Callers:
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

bool __fastcall ObpUseSystemDeviceMap(__int64 a1)
{
  WCHAR *v1; // rcx
  WCHAR v2; // bx
  bool result; // al

  result = 0;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0
    && *(_WORD *)a1 >= 0xEu
    && (ObpDriveRemappingMitigation & 1) != 0 )
  {
    v1 = *(WCHAR **)(a1 + 8);
    if ( v1[5] == 58 && v1[6] == 92 )
    {
      v2 = RtlUpcaseUnicodeChar(v1[4]);
      if ( RtlUpcaseUnicodeChar(*NtSystemRoot.Buffer) == v2 )
        return 1;
    }
  }
  return result;
}
