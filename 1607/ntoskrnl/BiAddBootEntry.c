/*
 * XREFs of BiAddBootEntry @ 0x1406D34C4
 * Callers:
 *     BiCreateEfiEntry @ 0x1406D4448 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x14015AEF0 (ZwAddBootEntry.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  NTSTATUS v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v4 >= 0 )
  {
    v4 = ZwAddBootEntry(EntryName, EntryValue);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v4;
}
