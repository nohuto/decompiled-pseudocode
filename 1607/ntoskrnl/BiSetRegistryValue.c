/*
 * XREFs of BiSetRegistryValue @ 0x14053E75C
 * Callers:
 *     BiSetFirmwareModified @ 0x14012E4F0 (BiSetFirmwareModified.c)
 *     BiAddStoreFromFile @ 0x14053BF10 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x14053C01C (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x1406D27BC (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x1406D4448 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140125318 (BiSanitizeHandle.c)
 *     BiZwSetValueKey @ 0x14012E630 (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 */

__int64 __fastcall BiSetRegistryValue(HANDLE a1, const WCHAR *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  unsigned int i; // esi
  void *v11; // rax
  __int64 v12; // r8
  int v13; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = (void *)BiSanitizeHandle((__int64)a1);
    a1 = v11;
    Handle = 0LL;
    if ( a3 )
    {
      v13 = BiOpenKey(v11, a3, 0x2001Fu, &Handle);
      if ( v13 < 0 )
        goto LABEL_5;
    }
    else
    {
      Handle = v11;
    }
    v13 = BiZwSetValueKey(Handle, &DestinationString, v12, a4, a5, a6);
LABEL_5:
    if ( Handle != a1 && Handle )
      BiCloseKey(Handle);
    if ( v13 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v13;
}
