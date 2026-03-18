/*
 * XREFs of BiSetRegistryValue @ 0x140570278
 * Callers:
 *     BiAddStoreFromFile @ 0x14056D638 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x14056D744 (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x14070D93C (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x14070F68C (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     BiZwSetValueKey @ 0x14014FE94 (BiZwSetValueKey.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
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
