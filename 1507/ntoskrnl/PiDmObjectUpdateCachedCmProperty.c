/*
 * XREFs of PiDmObjectUpdateCachedCmProperty @ 0x14043E1DC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14043A8B8 (PiDmObjectUpdateCachedObjectProperty.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14043E2AC (_CmMapCmObjectTypeToPnpObjectType.c)
 */

void __fastcall PiDmObjectUpdateCachedCmProperty(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        PCWSTR SourceString,
        int a7)
{
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  GUID Guid; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 == 1 && a4 == 9 )
  {
    if ( a7 )
    {
      if ( a5 == 1 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
        {
          v8 = CmMapCmObjectTypeToPnpObjectType(1LL);
          PiDmObjectUpdateCachedObjectProperty(
            v8,
            a2,
            v9,
            0LL,
            (__int64)&DEVPKEY_Device_ClassGuid,
            0xDu,
            (__int64)&Guid,
            0x10u);
        }
      }
    }
    else
    {
      v10 = CmMapCmObjectTypeToPnpObjectType(1LL);
      PiDmObjectUpdateCachedObjectProperty(v10, a2, v11, 0LL, (__int64)&DEVPKEY_Device_ClassGuid, 0, 0LL, 0);
    }
  }
}
