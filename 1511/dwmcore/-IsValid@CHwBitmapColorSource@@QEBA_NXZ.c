/*
 * XREFs of ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x18001CE68
 * Callers:
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x18008AB4C (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x18014B7F4 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     ?KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ @ 0x18014BA20 (-KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18014D290 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwBitmapColorSource::IsValid(CHwBitmapColorSource *this)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)this + 20);
  result = 0LL;
  if ( v1 )
    return *(_BYTE *)(v1 + 76) != 0;
  return result;
}
