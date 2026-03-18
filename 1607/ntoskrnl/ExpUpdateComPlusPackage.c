/*
 * XREFs of ExpUpdateComPlusPackage @ 0x1406AC670
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14015A020 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 */

__int64 __fastcall ExpUpdateComPlusPackage(int a1)
{
  NTSTATUS v1; // ebx
  int Data; // [rsp+50h] [rbp+8h] BYREF
  ULONG Disposition; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a1;
  v1 = ZwOpenKey(&KeyHandle, 0x40000000u, &stru_1402F4BA8);
  if ( v1 == -1073741772 )
    v1 = ZwCreateKey(&KeyHandle, 0x40000000u, &stru_1402F4BA8, 0, 0LL, 0, &Disposition);
  if ( v1 >= 0 )
  {
    v1 = ZwSetValueKey(KeyHandle, &stru_1402F3350, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v1;
}
