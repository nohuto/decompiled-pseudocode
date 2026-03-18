/*
 * XREFs of BiSetRegistryValue @ 0x1404FD7D8
 * Callers:
 *     BiAddStoreFromFile @ 0x1404FB0A0 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x1404FB1AC (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x14068DE24 (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x14068FB74 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     BiZwSetValueKey @ 0x14011BC08 (BiZwSetValueKey.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 */

__int64 __fastcall BiSetRegistryValue(HANDLE a1, const WCHAR *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  unsigned int i; // esi
  __int64 v11; // r8
  int v12; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    Handle = 0LL;
    if ( a3 )
    {
      v12 = BiOpenKey(a1, a3, 0x2001Fu, &Handle);
      if ( v12 < 0 )
        goto LABEL_5;
    }
    else
    {
      Handle = a1;
    }
    v12 = BiZwSetValueKey(Handle, &DestinationString, v11, a4, a5, a6);
LABEL_5:
    if ( Handle != a1 && Handle )
      BiCloseKey(Handle);
    if ( v12 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v12;
}
