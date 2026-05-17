/*
 * XREFs of LdrpCorValidateImage @ 0x1800885AC
 * Callers:
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(unsigned __int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 9u, &v2) != 0 ? 0xC000007B : 0;
}
