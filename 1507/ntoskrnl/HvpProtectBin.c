/*
 * XREFs of HvpProtectBin @ 0x1404A01C4
 * Callers:
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E04C0 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E0FAC (HvpMapHiveImageFromSystemCache.c)
 *     HvpMapHiveImage @ 0x14049FFF8 (HvpMapHiveImage.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     HvpReviveDiscardedBin @ 0x14066490C (HvpReviveDiscardedBin.c)
 * Callees:
 *     ExProtectPool @ 0x14005EE00 (ExProtectPool.c)
 *     HvViewMapPinForFileOffset @ 0x140663004 (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvpProtectBin(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 a5, char a6)
{
  __int64 result; // rax

  if ( ((*(_BYTE *)(a1 + 124) & 4) == 0 || a3 || a6) && !(unsigned int)ExProtectPool(a5, a2, 4u) )
    return 3221225626LL;
  if ( (*(_BYTE *)(a1 + 124) & 4) == 0 )
    return 0LL;
  if ( a3 )
    return 0LL;
  result = HvViewMapPinForFileOffset(a1 + 200, (unsigned int)(a4 + 4096), a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
