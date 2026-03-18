/*
 * XREFs of CheckSpaceAvailable @ 0x1C003AEA4
 * Callers:
 *     WerKernelCreateReport @ 0x1C003B058 (WerKernelCreateReport.c)
 * Callees:
 *     WerpFreeMem @ 0x1C003BBFC (WerpFreeMem.c)
 */

__int64 __fastcall CheckSpaceAvailable(HANDLE KeyHandle)
{
  unsigned int v1; // ebx
  NTSTATUS v3; // eax
  _DWORD *PoolWithTag; // rdi
  NTSTATUS v5; // eax
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( v3 == -2147483643 || v3 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (int)Length, 0x7765726Bu);
    if ( PoolWithTag )
    {
      v5 = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTag, Length, &Length);
      if ( v5 >= 0 )
      {
        if ( PoolWithTag[5] < 0xAu )
          v1 = 1;
        else
          DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Live kernel queue size exceeded\n", 521);
      }
      else
      {
        DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n", 515, v5);
      }
      WerpFreeMem(PoolWithTag);
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 498);
    }
  }
  else
  {
    DbgPrintEx(
      0x96u,
      0,
      "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n",
      490,
      v3);
  }
  return v1;
}
