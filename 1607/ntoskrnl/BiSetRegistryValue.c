/*
 * XREFs of BiSetRegistryValue @ 0x14053E21C
 * Callers:
 *     BiSetFirmwareModified @ 0x14012DF80 (BiSetFirmwareModified.c)
 *     BiAddStoreFromFile @ 0x14053B9D0 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x14053BADC (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x1406D2684 (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x1406D4310 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140124DA8 (BiSanitizeHandle.c)
 *     BiZwSetValueKey @ 0x14012E0C0 (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
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
