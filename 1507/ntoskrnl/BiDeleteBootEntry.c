/*
 * XREFs of BiDeleteBootEntry @ 0x14070FB3C
 * Callers:
 *     BiExportBcdObjects @ 0x14070FD0C (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x140180830 (ZwDeleteBootEntry.c)
 *     BiReleasePrivilege @ 0x14056DA44 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14056DA90 (BiAcquirePrivilege.c)
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
