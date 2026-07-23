/*
 * XREFs of SiQuerySystemPartitionInformation @ 0x14053BE54
 * Callers:
 *     SyspartGetSystemPartition @ 0x14053BE0C (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiQuerySystemPartitionInformation(void *a1, unsigned int a2, unsigned int *a3)
{
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  const void **PoolWithTag; // rax
  const void **v9; // rdi
  unsigned int v10; // eax
  ULONG ReturnLength; // [rsp+58h] [rbp+20h] BYREF

  v6 = ZwQuerySystemInformation(SystemSystemPartitionInformation, 0LL, 0, &ReturnLength);
  v7 = v6;
  if ( v6 == -1073741789 )
  {
    PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x4B505953u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = ZwQuerySystemInformation(SystemSystemPartitionInformation, PoolWithTag, ReturnLength, &ReturnLength);
      if ( v7 >= 0 )
      {
        v10 = *(unsigned __int16 *)v9 + 2;
        *a3 = v10;
        if ( v10 <= a2 )
          memmove(a1, v9[1], v10);
        else
          v7 = -1073741789;
      }
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( v6 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}
