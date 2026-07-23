/*
 * XREFs of BiQueryBootOptions @ 0x1406D57B4
 * Callers:
 *     BiBindEfiBootManager @ 0x1406D373C (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x14015C7D0 (ZwQueryBootOptions.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiQueryBootOptions(_BOOT_OPTIONS **a1, ULONG *a2)
{
  _BOOT_OPTIONS *v2; // rdi
  NTSTATUS v5; // ebx
  _BOOT_OPTIONS *PoolWithTag; // rax
  ULONG BootOptionsLength; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  *a2 = 0;
  BootOptionsLength = 0;
  v5 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootOptions(0LL, &BootOptionsLength);
    if ( v5 == -1073741789 )
    {
      PoolWithTag = (_BOOT_OPTIONS *)ExAllocatePoolWithTag(PagedPool, BootOptionsLength, 0x4B444342u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
LABEL_10:
        BiReleasePrivilege(&v9);
        return (unsigned int)v5;
      }
      v5 = ZwQueryBootOptions(PoolWithTag, &BootOptionsLength);
    }
    if ( v5 < 0 )
    {
      if ( v2 )
        ExFreePoolWithTag(v2, 0x4B444342u);
    }
    else
    {
      *a2 = BootOptionsLength;
      *a1 = v2;
    }
    goto LABEL_10;
  }
  return (unsigned int)v5;
}
