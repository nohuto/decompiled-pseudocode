/*
 * XREFs of RawQueryFileSystemInformation @ 0x140518FE0
 * Callers:
 *     RawUserFsCtrl @ 0x1404EB368 (RawUserFsCtrl.c)
 * Callees:
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoBuildSynchronousFsdRequest @ 0x1404A9D3C (IoBuildSynchronousFsdRequest.c)
 *     RawPerformDevIoCtrl @ 0x140519170 (RawPerformDevIoCtrl.c)
 *     RawComputeFileSystemInformationChecksum @ 0x140643EEC (RawComputeFileSystemInformationChecksum.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r15
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  struct _IO_STATUS_BLOCK v9; // [rsp+50h] [rbp-29h]
  struct _KEVENT Event; // [rsp+60h] [rbp-19h] BYREF
  _BYTE Timeout[12]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v12; // [rsp+84h] [rbp+Bh]
  SIZE_T NumberOfBytes; // [rsp+8Ch] [rbp+13h]

  v3 = *(void **)(a1 + 24);
  v9.Pointer = 0LL;
  memset(Timeout, 0, sizeof(Timeout));
  v9.Information = 0LL;
  v12 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5 = *(_DWORD *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  if ( v5 < 9 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memset(v3, 0, v5);
    v7 = RawPerformDevIoCtrl(v6, *(_QWORD *)(a3 + 176));
    if ( v7 >= 0 )
      return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
