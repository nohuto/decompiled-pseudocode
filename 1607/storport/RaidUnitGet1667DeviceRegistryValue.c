/*
 * XREFs of RaidUnitGet1667DeviceRegistryValue @ 0x1C0010C84
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C0011DE4 (RaidUnitGetCompatibleIds.c)
 * Callees:
 *     PortRegistryReadDeviceKey @ 0x1C0059EF4 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall RaidUnitGet1667DeviceRegistryValue(__int64 a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+8h] BYREF
  int v6; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *v7; // [rsp+70h] [rbp+18h] BYREF

  result = *(_QWORD *)(a1 + 96);
  if ( (*(_BYTE *)result & 0x1F) == 0 )
  {
    v5 = -1;
    v7 = &v5;
    v6 = 4;
    RtlInitUnicodeString(&DestinationString, L"Storport");
    RtlInitUnicodeString(&v3, L"Is1667Device");
    result = PortRegistryReadDeviceKey(
               *(_QWORD *)(a1 + 8),
               (unsigned int)&DestinationString,
               (unsigned int)&v3,
               4,
               (__int64)&v7,
               (__int64)&v6);
    if ( (int)result >= 0 )
    {
      result = v5;
      if ( v5 )
      {
        if ( v5 != -1 )
          *(_BYTE *)(a1 + 120) = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 120) = 0;
      }
    }
  }
  return result;
}
