/*
 * XREFs of BiBindEfiEntryToBcdObject @ 0x1406D38D4
 * Callers:
 *     BiBindEfiEntries @ 0x1406D380C (BiBindEfiEntries.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1404FB370 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x1405328D4 (BiGetKeyName.c)
 *     BcdCloseObject @ 0x14053D664 (BcdCloseObject.c)
 *     BiCreateObject @ 0x1406D2334 (BiCreateObject.c)
 */

__int64 __fastcall BiBindEfiEntryToBcdObject(void *a1, GUID *a2)
{
  int KeyName; // ebx
  GUID v4; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  SourceString = 0LL;
  Handle = 0LL;
  if ( (a2[3].Data1 & 4) != 0 )
  {
    return 0;
  }
  else
  {
    v8[1] = 270532607;
    v8[0] = 1;
    KeyName = BiCreateObject(a1, 0LL, (__int64)v8, 1u, &Handle);
    if ( KeyName >= 0 )
    {
      KeyName = BiGetKeyName(Handle, &SourceString);
      if ( KeyName >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyName = RtlGUIDFromString(&DestinationString, &Guid);
        if ( KeyName >= 0 )
        {
          v4 = Guid;
          a2[3].Data1 |= 4u;
          a2[1] = v4;
        }
      }
      if ( SourceString )
        ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    }
    if ( Handle )
      BcdCloseObject(Handle);
  }
  return (unsigned int)KeyName;
}
