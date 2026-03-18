/*
 * XREFs of ExpUpdateComPlusPackage @ 0x14066BDD0
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 */

__int64 __fastcall ExpUpdateComPlusPackage(int a1)
{
  NTSTATUS v1; // ebx
  int Data; // [rsp+50h] [rbp+8h] BYREF
  ULONG Disposition; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a1;
  v1 = ZwOpenKey(&KeyHandle, 0x40000000u, &stru_1402D40A8);
  if ( v1 == -1073741772 )
    v1 = ZwCreateKey(&KeyHandle, 0x40000000u, &stru_1402D40A8, 0, 0LL, 0, &Disposition);
  if ( v1 >= 0 )
  {
    v1 = ZwSetValueKey(KeyHandle, &stru_1402CFD20, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v1;
}
