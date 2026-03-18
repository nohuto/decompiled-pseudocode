/*
 * XREFs of HvpViewMapContiguousBytesAfterFileOffset @ 0x1405818BC
 * Callers:
 *     HvpViewMapPinForFileOffset @ 0x1401B68C8 (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401B6B34 (HvpViewMapUnpinForFileOffset.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401B72D8 (HvpMapHiveImageFromSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpViewMapContiguousBytesAfterFileOffset(__int64 a1, unsigned int a2)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(a2) & 0x7F)) + 32LL * ((a2 >> 18) & 0x3F) + 24)
       - (a2 & 0x3FFFF);
}
