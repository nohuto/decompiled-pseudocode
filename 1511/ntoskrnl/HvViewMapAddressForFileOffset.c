/*
 * XREFs of HvViewMapAddressForFileOffset @ 0x1405EAFC4
 * Callers:
 *     HvViewMapCopyToFileOffset @ 0x1401AAB98 (HvViewMapCopyToFileOffset.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401AB468 (HvpMapHiveImageFromSystemCache.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     HvpAllocateBin @ 0x1403D8E78 (HvpAllocateBin.c)
 *     CmpDoSystemCacheRead @ 0x1405E4A40 (CmpDoSystemCacheRead.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1405E67BC (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockShared @ 0x1401AACD4 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapReleaseLockShared @ 0x1401AB00C (HvpViewMapReleaseLockShared.c)
 */

unsigned __int64 __fastcall HvViewMapAddressForFileOffset(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx

  HvpViewMapAcquireLockShared(a1);
  v4 = a2;
  v5 = *(_QWORD *)(32LL * ((a2 >> 18) & 0x3F) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(a2) & 0x7F))) & 0xFFFFFFFFFFFFFFFEuLL;
  HvpViewMapReleaseLockShared(a1);
  return v5 + (v4 & 0x3FFFF);
}
