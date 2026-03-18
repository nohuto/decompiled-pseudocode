/*
 * XREFs of HvpProtectBin @ 0x1403D8E10
 * Callers:
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401AA964 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401AB468 (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     HvpMapHiveImage @ 0x1403D8C44 (HvpMapHiveImage.c)
 *     HvpReviveDiscardedBin @ 0x1405EC2A4 (HvpReviveDiscardedBin.c)
 * Callees:
 *     ExProtectPool @ 0x140077FD0 (ExProtectPool.c)
 *     HvViewMapPinForFileOffset @ 0x1405EB1C8 (HvViewMapPinForFileOffset.c)
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
