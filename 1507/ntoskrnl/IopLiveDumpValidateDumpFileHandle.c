/*
 * XREFs of IopLiveDumpValidateDumpFileHandle @ 0x14067810C
 * Callers:
 *     IopLiveDumpValidateParameters @ 0x14067815C (IopLiveDumpValidateParameters.c)
 * Callees:
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall IopLiveDumpValidateDumpFileHandle(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  char FileInformation; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return -1073741811;
  result = ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
  if ( result >= 0 )
  {
    result = IoStatusBlock.Status;
    if ( IoStatusBlock.Status >= 0 )
      return (FileInformation & 0x30) == 0 ? 0xC000000D : 0;
  }
  return result;
}
