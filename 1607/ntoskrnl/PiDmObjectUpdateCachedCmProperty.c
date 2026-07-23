/*
 * XREFs of PiDmObjectUpdateCachedCmProperty @ 0x1404E34C4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1404E12BC (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404E2C6C (PiDmObjectUpdateCachedObjectProperty.c)
 */

void __fastcall PiDmObjectUpdateCachedCmProperty(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        const WCHAR *SourceString,
        int a7)
{
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // r8
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-40h]
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
          LODWORD(NumberOfBytes) = 16;
          v8 = CmMapCmObjectTypeToPnpObjectType(1);
          PiDmObjectUpdateCachedObjectProperty(
            v8,
            a2,
            v9,
            0LL,
            (__int64)&DEVPKEY_Device_ClassGuid,
            13,
            (__int128 *)&Guid,
            NumberOfBytes);
        }
      }
    }
    else
    {
      LODWORD(NumberOfBytes) = 0;
      v10 = CmMapCmObjectTypeToPnpObjectType(1);
      PiDmObjectUpdateCachedObjectProperty(v10, a2, v11, 0LL, (__int64)&DEVPKEY_Device_ClassGuid, 0, 0LL, NumberOfBytes);
    }
  }
}
