/*
 * XREFs of HvViewMapAddressForFileOffset @ 0x14060FB1C
 * Callers:
 *     HvViewMapCopyToFileOffset @ 0x1401B6568 (HvViewMapCopyToFileOffset.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401B71BC (HvpMapHiveImageFromSystemCache.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvpAllocateBin @ 0x1404F7238 (HvpAllocateBin.c)
 *     CmpDoSystemCacheRead @ 0x14060404C (CmpDoSystemCacheRead.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605DC8 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockShared @ 0x1401B66A4 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapReleaseLockShared @ 0x1401B69DC (HvpViewMapReleaseLockShared.c)
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
