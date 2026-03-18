/*
 * XREFs of HvViewMapAddressForFileOffset @ 0x14060FA68
 * Callers:
 *     HvViewMapCopyToFileOffset @ 0x1401B6684 (HvViewMapCopyToFileOffset.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401B72D8 (HvpMapHiveImageFromSystemCache.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     HvWriteHivePrimaryFile @ 0x140483AA4 (HvWriteHivePrimaryFile.c)
 *     HvpAllocateBin @ 0x140513E48 (HvpAllocateBin.c)
 *     CmpDoSystemCacheRead @ 0x140603F98 (CmpDoSystemCacheRead.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605D14 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     HvpViewMapAcquireLockShared @ 0x1401B67C0 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapReleaseLockShared @ 0x1401B6AF8 (HvpViewMapReleaseLockShared.c)
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
