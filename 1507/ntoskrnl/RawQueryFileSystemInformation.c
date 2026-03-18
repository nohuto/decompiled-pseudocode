/*
 * XREFs of RawQueryFileSystemInformation @ 0x1406C6C80
 * Callers:
 *     RawUserFsCtrl @ 0x14055F784 (RawUserFsCtrl.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoBuildSynchronousFsdRequest @ 0x14040DFC8 (IoBuildSynchronousFsdRequest.c)
 *     RawComputeFileSystemInformationChecksum @ 0x1406C6C24 (RawComputeFileSystemInformationChecksum.c)
 *     RawPerformDevIoCtrl @ 0x1406C6E80 (RawPerformDevIoCtrl.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r15
  size_t v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
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
  v5 = *(unsigned int *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  if ( (unsigned int)v5 >= 9 )
  {
    memset(v3, 0, v5);
    v6 = RawPerformDevIoCtrl(v7, *(_QWORD *)(a3 + 176));
    if ( v6 >= 0 )
      return (unsigned int)-1073741637;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v6;
}
