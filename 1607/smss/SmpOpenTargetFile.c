/*
 * XREFs of SmpOpenTargetFile @ 0x140012B40
 * Callers:
 *     SmpProcessFileRenames @ 0x140007624 (SmpProcessFileRenames.c)
 *     SmpCheckFolderForRedirections @ 0x140011CFC (SmpCheckFolderForRedirections.c)
 *     SmpForceDeleteTargetFile @ 0x140012510 (SmpForceDeleteTargetFile.c)
 *     SmpShuffleMove @ 0x14001320C (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140013380 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpOpenTargetFile(
        PHANDLE FileHandle,
        ACCESS_MASK a2,
        struct _OBJECT_ATTRIBUTES *a3,
        char a4,
        ULONG ShareAccess)
{
  ULONG OpenOptions; // eax
  NTSTATUS result; // eax
  _DWORD FileInformation[2]; // [rsp+30h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-20h] BYREF

  OpenOptions = 16416;
  if ( a4 )
    OpenOptions = 2113568;
  result = NtOpenFile(FileHandle, a2, a3, &IoStatusBlock, ShareAccess, OpenOptions);
  if ( result >= 0 )
  {
    if ( NtQueryInformationFile(*FileHandle, &IoStatusBlock, FileInformation, 8u, FileAttributeTagInformation) < 0
      || (FileInformation[0] & 0x400) == 0
      || (FileInformation[1] & 0x20000000) != 0 )
    {
      return 0;
    }
    else
    {
      NtClose(*FileHandle);
      *FileHandle = 0LL;
      return -1073741608;
    }
  }
  return result;
}
