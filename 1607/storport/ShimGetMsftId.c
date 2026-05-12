/*
 * XREFs of ShimGetMsftId @ 0x1C00431E0
 * Callers:
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0042FF0 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     PortRegistryReadDeviceKey @ 0x1C0059EF4 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C005A7AC (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall ShimGetMsftId(__int64 a1, __int64 a2)
{
  int DeviceKey; // eax
  __int64 result; // rax
  char v6; // al
  __int128 v7; // xmm0
  int v8; // [rsp+30h] [rbp-50h] BYREF
  __int128 *v9; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING v10; // [rsp+48h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-28h] BYREF
  __int128 v12; // [rsp+68h] [rbp-18h] BYREF

  v8 = 16;
  v9 = &v12;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v10, L"GeneratedID");
  DeviceKey = PortRegistryReadDeviceKey(
                *(_QWORD *)(a1 + 8),
                (unsigned int)&DestinationString,
                (unsigned int)&v10,
                3,
                (__int64)&v9,
                (__int64)&v8);
  if ( DeviceKey == -1073741772 )
  {
    if ( ExUuidCreate((UUID *)(a2 + 12)) < 0 )
      return 3221225473LL;
    DeviceKey = PortRegistryWriteDeviceKey(
                  *(_QWORD *)(a1 + 8),
                  (unsigned int)&DestinationString,
                  (unsigned int)&v10,
                  3,
                  (__int64)v9,
                  v8);
  }
  if ( DeviceKey < 0 )
    return 3221225473LL;
  v6 = *(_BYTE *)a2 & 0xF1;
  v9 = *(__int128 **)"MSFT    ";
  v7 = v12;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)a2 = v6 | 1;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xC0 | 1;
  *(_QWORD *)(a2 + 4) = v9;
  result = 0LL;
  *(_OWORD *)(a2 + 12) = v7;
  return result;
}
