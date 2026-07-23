/*
 * XREFs of LdrpCorValidateImage @ 0x180078A1C
 * Callers:
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(void *a1)
{
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 9u, &Size) != 0LL ? 0xC000007B : 0;
}
