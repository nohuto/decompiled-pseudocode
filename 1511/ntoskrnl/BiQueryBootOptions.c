/*
 * XREFs of BiQueryBootOptions @ 0x140690EB4
 * Callers:
 *     BiBindEfiBootManager @ 0x14068EE8C (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x140152BA0 (ZwQueryBootOptions.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiReleasePrivilege @ 0x1404FB4AC (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1404FB4F8 (BiAcquirePrivilege.c)
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
        ExFreePoolWithTag(v2, 0);
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
