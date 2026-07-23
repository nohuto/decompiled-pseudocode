/*
 * XREFs of BiDeleteBootEntry @ 0x1406D48FC
 * Callers:
 *     BiExportBcdObjects @ 0x1406D4AD4 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x14015BA90 (ZwDeleteBootEntry.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
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
