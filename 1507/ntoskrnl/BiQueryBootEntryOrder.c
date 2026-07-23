/*
 * XREFs of BiQueryBootEntryOrder @ 0x14071091C
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14070E8C8 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14070E9A4 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x14070FDF4 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x1401814F0 (ZwQueryBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BiReleasePrivilege @ 0x14056DA44 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14056DA90 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(ULONG **a1, ULONG *a2)
{
  ULONG *v2; // rdi
  NTSTATUS v5; // ebx
  ULONG *PoolWithTag; // rax
  ULONG Count; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  Count = 0;
  v5 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootEntryOrder(0LL, &Count);
    if ( v5 == -1073741789 )
    {
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, 4LL * Count, 0x4B444342u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
LABEL_10:
        BiReleasePrivilege(&v9);
        return (unsigned int)v5;
      }
      v5 = ZwQueryBootEntryOrder(PoolWithTag, &Count);
    }
    if ( v5 < 0 )
    {
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
    }
    else
    {
      *a2 = Count;
      *a1 = v2;
    }
    goto LABEL_10;
  }
  return (unsigned int)v5;
}
