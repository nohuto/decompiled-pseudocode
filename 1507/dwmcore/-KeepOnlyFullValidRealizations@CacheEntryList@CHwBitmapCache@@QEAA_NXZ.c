/*
 * XREFs of ?KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ @ 0x18013B8B0
 * Callers:
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18013B980 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
 * Callees:
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x18000F0D4 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z @ 0x18013D7EC (-ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z.c)
 */

char __fastcall CHwBitmapCache::CacheEntryList::KeepOnlyFullValidRealizations(CHwBitmapCache::CacheEntryList *this)
{
  char v1; // r14
  __int64 i; // rdi
  __int64 v4; // rbp
  CHwBitmapColorSource *v5; // r15
  CMILRefCountBase *v6; // rcx

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)this;
    v5 = *(CHwBitmapColorSource **)(*(_QWORD *)this + 72 * i + 64);
    if ( v5 )
    {
      if ( *(_BYTE *)(v4 + 72 * i + 8)
        || !CHwBitmapColorSource::IsValid(*(CHwBitmapColorSource **)(*(_QWORD *)this + 72 * i + 64))
        || v1 )
      {
        CHwBitmapColorSource::ReleaseReferencesToBits(v5, 1);
        v6 = *(CMILRefCountBase **)(v4 + 72 * i + 64);
        if ( v6 )
        {
          CMILRefCountBase::Release(v6);
          *(_QWORD *)(v4 + 72 * i + 64) = 0LL;
        }
      }
      else if ( (*(int (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v5 + 40LL))(v5) >= 0 )
      {
        CHwBitmapColorSource::ReleaseReferencesToBits(*(CHwBitmapColorSource **)(v4 + 72 * i + 64), 0);
        v1 = 1;
      }
    }
  }
  return v1;
}
