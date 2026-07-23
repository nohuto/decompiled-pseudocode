/*
 * XREFs of PfpFileCheckAttributesForPrefetch @ 0x1400C83EC
 * Callers:
 *     PfpFileBuildReadSupport @ 0x1404EC2A0 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x1404EDC30 (PfSnGetSectionObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
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
      KeBugCheckEx(0x191u, 0x269AuLL, 0LL, 0LL, 0LL);
    return (FileInformation & 0x5300) != 0 ? 0xC00000A4 : 0;
  }
  return result;
}
