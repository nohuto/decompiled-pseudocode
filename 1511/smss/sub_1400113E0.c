/*
 * XREFs of sub_1400113E0 @ 0x1400113E0
 * Callers:
 *     sub_140011084 @ 0x140011084 (sub_140011084.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1400113E0(HANDLE FileHandle, __int64 a2)
{
  int result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 FileInformation; // [rsp+60h] [rbp+18h] BYREF

  v6 = a2;
  result = NtSetInformationFile(FileHandle, &IoStatusBlock, &v6, 8u, FileEndOfFileInformation);
  if ( result >= 0 )
  {
    FileInformation = a2;
    return NtSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation);
  }
  return result;
}
