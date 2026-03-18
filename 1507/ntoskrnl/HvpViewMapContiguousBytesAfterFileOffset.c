/*
 * XREFs of HvpViewMapContiguousBytesAfterFileOffset @ 0x1405C72C0
 * Callers:
 *     HvViewMapCopyFromFileOffset @ 0x1401E06F4 (HvViewMapCopyFromFileOffset.c)
 *     HvpViewMapPinForFileOffset @ 0x1401E0B18 (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E0D0C (HvpViewMapUnpinForFileOffset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpViewMapContiguousBytesAfterFileOffset(__int64 a1, unsigned int a2)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(a2) & 0x7F)) + 32LL * ((a2 >> 18) & 0x3F) + 24)
       - (a2 & 0x3FFFF);
}
