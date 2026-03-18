/*
 * XREFs of BiOpenKeyNonBcd @ 0x1404FBCF4
 * Callers:
 *     BiLoadHive @ 0x1404FB31C (BiLoadHive.c)
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 *     BiDoesHiveKeyExist @ 0x14068E2AC (BiDoesHiveKeyExist.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 */

__int64 __fastcall BiOpenKeyNonBcd(void *a1, const WCHAR *a2, ACCESS_MASK a3, HANDLE *a4)
{
  unsigned int i; // edi
  NTSTATUS v9; // ebx
  HANDLE KeyHandle; // [rsp+28h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF

  for ( i = 0; ; ++i )
  {
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    if ( v9 < 0 )
    {
      if ( KeyHandle )
        ZwClose(KeyHandle);
    }
    else
    {
      *a4 = KeyHandle;
    }
    if ( v9 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v9;
}
