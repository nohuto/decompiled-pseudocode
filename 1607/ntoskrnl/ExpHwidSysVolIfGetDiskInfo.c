/*
 * XREFs of ExpHwidSysVolIfGetDiskInfo @ 0x140500B70
 * Callers:
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140500954 (ExpHwidSysVolIfDeviceInfoProvider.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404D8AA8 (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidGetDeviceProperties @ 0x1404D9330 (ExpHwidGetDeviceProperties.c)
 *     sub_140500A84 @ 0x140500A84 (sub_140500A84.c)
 *     sub_140500B0C @ 0x140500B0C (sub_140500B0C.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140500D54 (ExpHwidSendSynchronousIrpToDevice.c)
 */

__int64 __fastcall ExpHwidSysVolIfGetDiskInfo(__int64 a1, unsigned int a2)
{
  NTSTATUS v3; // ebx
  PVOID PoolWithTag; // rsi
  _DWORD NumberOfBytes[5]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v7; // [rsp+60h] [rbp-A0h] BYREF
  int v8; // [rsp+68h] [rbp-98h]
  char v9[32]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[264]; // [rsp+F0h] [rbp-10h] BYREF

  sub_140500A84(v9);
  v3 = RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\??\\PhysicalDrive%u", a2);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&NumberOfBytes[1], pszDest);
    v7 = 0LL;
    v8 = 0;
    v3 = ExpHwidSendSynchronousIrpToDevice(&NumberOfBytes[1], 2954240LL, &v7);
    if ( v3 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20534C53u);
      if ( PoolWithTag )
      {
        v3 = ExpHwidSendSynchronousIrpToDevice(&NumberOfBytes[1], 2954240LL, &v7);
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        v3 = -1073741670;
      }
    }
  }
  sub_140500B0C(v9);
  return (unsigned int)v3;
}
