/*
 * XREFs of LdrpCorValidateImage @ 0x180078A1C
 * Callers:
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(unsigned __int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 9u, &v2) != 0 ? 0xC000007B : 0;
}
