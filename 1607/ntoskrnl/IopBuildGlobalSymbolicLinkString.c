/*
 * XREFs of IopBuildGlobalSymbolicLinkString @ 0x1403F1348
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopAllocateUnicodeString @ 0x1403F1458 (IopAllocateUnicodeString.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1403F14A8 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall IopBuildGlobalSymbolicLinkString(__int64 a1, UNICODE_STRING *a2)
{
  PVOID PoolWithTag; // rdi
  NTSTATUS DeviceInterfaceSymbolicLinkName; // ebx
  __int64 v6; // rcx
  UNICODE_STRING *v7; // rcx
  __int64 v9; // rcx
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  PoolWithTag = 0LL;
  v11 = 0LL;
  DeviceInterfaceSymbolicLinkName = PnpUnicodeStringToWstr(&v11, 0LL, a1);
  if ( DeviceInterfaceSymbolicLinkName < 0 )
    goto LABEL_9;
  v10 = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  if ( !PoolWithTag )
    goto LABEL_15;
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v6, v11, PoolWithTag, 512LL, &v10);
  if ( DeviceInterfaceSymbolicLinkName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(PoolWithTag, 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v10, 0x20207050u);
  if ( !PoolWithTag )
  {
LABEL_15:
    DeviceInterfaceSymbolicLinkName = -1073741670;
    goto LABEL_9;
  }
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v9, v11, PoolWithTag, v10, &v10);
LABEL_4:
  if ( DeviceInterfaceSymbolicLinkName < 0 )
  {
    if ( DeviceInterfaceSymbolicLinkName == -1073741773 )
      DeviceInterfaceSymbolicLinkName = -1073741811;
  }
  else if ( 2 * v10 + 20 > 0xFFFF )
  {
    DeviceInterfaceSymbolicLinkName = -1073741675;
  }
  else
  {
    DeviceInterfaceSymbolicLinkName = IopAllocateUnicodeString(a2, (unsigned __int16)(2 * v10 + 20));
    if ( DeviceInterfaceSymbolicLinkName < 0 )
      goto LABEL_9;
    DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, L"\\GLOBAL??\\");
    v7 = a2;
    if ( DeviceInterfaceSymbolicLinkName >= 0 )
    {
      DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, (PCWSTR)PoolWithTag);
      if ( DeviceInterfaceSymbolicLinkName >= 0 )
        goto LABEL_9;
      v7 = a2;
    }
    RtlFreeAnsiString(v7);
  }
LABEL_9:
  PnpUnicodeStringToWstrFree(v11, a1);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceSymbolicLinkName;
}
