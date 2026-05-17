/*
 * XREFs of LdrpCorValidateImage @ 0x180084488
 * Callers:
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(unsigned __int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 9u, &v2) != 0 ? 0xC000007B : 0;
}
