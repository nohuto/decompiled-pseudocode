/*
 * XREFs of BiLoadHive @ 0x1404FB31C
 * Callers:
 *     BiAddStoreFromFile @ 0x1404FB0A0 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x140152540 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x140152560 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x140153BC0 (ZwUnloadKey.c)
 *     BiReleasePrivilege @ 0x1404FB4AC (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1404FB4F8 (BiAcquirePrivilege.c)
 *     BiOpenKeyNonBcd @ 0x1404FBCF4 (BiOpenKeyNonBcd.c)
 *     BiDoesHiveExist @ 0x1404FE728 (BiDoesHiveExist.c)
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
