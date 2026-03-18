/*
 * XREFs of BiDeleteRegistryValue @ 0x14068E22C
 * Callers:
 *     BiMarkTreatAsSystemStore @ 0x1404FB1AC (BiMarkTreatAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     BiZwClose @ 0x14011BBB8 (BiZwClose.c)
 *     BiZwDeleteValueKey @ 0x14021EDC8 (BiZwDeleteValueKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteRegistryValue(HANDLE a1, __int64 a2, void *a3)
{
  int v4; // edi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  KeyHandle = a3;
  RtlInitUnicodeString(&DestinationString, L"TreatAsSystem");
  KeyHandle = 0LL;
  v4 = BiOpenKey(a1, L"Description", 0x2001Fu, &KeyHandle);
  if ( v4 >= 0 )
    v4 = BiZwDeleteValueKey(KeyHandle, &DestinationString);
  if ( KeyHandle != a1 && KeyHandle )
    BiZwClose(KeyHandle);
  return (unsigned int)v4;
}
