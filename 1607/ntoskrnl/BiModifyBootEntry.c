/*
 * XREFs of BiModifyBootEntry @ 0x1406D56C0
 * Callers:
 *     BiUpdateEfiEntry @ 0x1406D5E28 (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x14015C2D0 (ZwModifyBootEntry.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
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
