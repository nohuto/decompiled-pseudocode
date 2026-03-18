/*
 * XREFs of BiLoadHive @ 0x14056D8B4
 * Callers:
 *     BiAddStoreFromFile @ 0x14056D638 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x140180EB0 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x140180ED0 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x140182530 (ZwUnloadKey.c)
 *     BiReleasePrivilege @ 0x14056DA44 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14056DA90 (BiAcquirePrivilege.c)
 *     BiOpenKeyNonBcd @ 0x14056E31C (BiOpenKeyNonBcd.c)
 *     BiDoesHiveExist @ 0x140571370 (BiDoesHiveExist.c)
 */

__int64 __fastcall BiLoadHive(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  unsigned int i; // edi
  NTSTATUS v7; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES KeyObjectAttributes; // [rsp+30h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES FileObjectAttributes; // [rsp+60h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-48h] BYREF
  UNICODE_STRING v14; // [rsp+A0h] [rbp-38h] BYREF

  for ( i = 0; ; ++i )
  {
    Handle = 0LL;
    if ( (unsigned __int8)BiDoesHiveExist(a2) )
    {
      v7 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyObjectAttributes.Length = 48;
        KeyObjectAttributes.RootDirectory = Handle;
        KeyObjectAttributes.Attributes = 576;
        KeyObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&KeyObjectAttributes.SecurityDescriptor = 0LL;
        RtlInitUnicodeString(&v14, (PCWSTR)(a2 + 12));
        FileObjectAttributes.Length = 48;
        FileObjectAttributes.RootDirectory = 0LL;
        FileObjectAttributes.Attributes = 576;
        FileObjectAttributes.ObjectName = &v14;
        *(_OWORD *)&FileObjectAttributes.SecurityDescriptor = 0LL;
        v7 = BiAcquirePrivilege(18LL, v10);
        if ( v7 >= 0 )
        {
          v7 = ZwLoadKey2(&KeyObjectAttributes, &FileObjectAttributes, 0x1780u);
          if ( v7 < 0 )
            v7 = ZwLoadKey2(&KeyObjectAttributes, &FileObjectAttributes, 0x1380u);
          if ( v7 < 0 )
            v7 = ZwLoadKey(&KeyObjectAttributes, &FileObjectAttributes);
          BiReleasePrivilege(v10);
          if ( v7 >= 0 )
          {
            v7 = ZwOpenKey(a3, 0x20019u, &KeyObjectAttributes);
            if ( v7 < 0 )
            {
              BiAcquirePrivilege(17LL, v10);
              ZwUnloadKey(&KeyObjectAttributes);
              BiReleasePrivilege(v10);
            }
          }
        }
      }
    }
    else
    {
      v7 = -1073741809;
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v7 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v7;
}
