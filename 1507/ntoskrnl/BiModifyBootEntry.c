/*
 * XREFs of BiModifyBootEntry @ 0x1407108D8
 * Callers:
 *     BiUpdateEfiEntry @ 0x140711014 (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x140181030 (ZwModifyBootEntry.c)
 *     BiReleasePrivilege @ 0x14056DA44 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14056DA90 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  NTSTATUS v2; // ebx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = BiAcquirePrivilege(0x16u, (__int64)&v4);
  if ( v2 >= 0 )
  {
    v2 = ZwModifyBootEntry(BootEntry);
    BiReleasePrivilege(&v4);
  }
  return (unsigned int)v2;
}
