/*
 * XREFs of BiDeleteBootEntry @ 0x140690024
 * Callers:
 *     BiExportBcdObjects @ 0x1406901F4 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x140151E80 (ZwDeleteBootEntry.c)
 *     BiReleasePrivilege @ 0x1404FB4AC (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1404FB4F8 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteBootEntry(PUNICODE_STRING EntryName)
{
  unsigned int v1; // edi
  UNICODE_STRING *v2; // rdx
  NTSTATUS v3; // ebx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned int)EntryName;
  v3 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v3 >= 0 )
  {
    v3 = ZwDeleteBootEntry((PUNICODE_STRING)v1, v2);
    BiReleasePrivilege(&v5);
  }
  return (unsigned int)v3;
}
