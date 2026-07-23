/*
 * XREFs of LdrpCorValidateImage @ 0x18008859C
 * Callers:
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(void *a1)
{
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 9u, &Size) != 0LL ? 0xC000007B : 0;
}
