/*
 * XREFs of PfpFileCheckAttributesForPrefetch @ 0x1400138DC
 * Callers:
 *     PfpFileBuildReadSupport @ 0x14042D618 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140473938 (PfSnGetSectionObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 */

NTSTATUS __fastcall PfpFileCheckAttributesForPrefetch(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int FileInformation; // [rsp+58h] [rbp+10h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  result = NtQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    if ( result == 259 )
      KeBugCheckEx(0x191u, 0x259CuLL, 0LL, 0LL, 0LL);
    return (FileInformation & 0x5300) != 0 ? 0xC00000A4 : 0;
  }
  return result;
}
