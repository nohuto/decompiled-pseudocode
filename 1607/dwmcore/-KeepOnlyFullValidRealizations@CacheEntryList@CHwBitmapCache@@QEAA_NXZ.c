/*
 * XREFs of ?KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ @ 0x18017C2E0
 * Callers:
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18017C398 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
 * Callees:
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x180020C20 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z @ 0x18017E76C (-ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z.c)
 */

char __fastcall CHwBitmapCache::CacheEntryList::KeepOnlyFullValidRealizations(CHwBitmapCache::CacheEntryList *this)
{
  char v1; // bp
  __int64 i; // rbx
  __int64 v4; // rsi
  CHwBitmapColorSource *v5; // rcx
  CMILRefCountBase *v6; // rcx

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)this;
    v5 = *(CHwBitmapColorSource **)(*(_QWORD *)this + 72 * i + 64);
    if ( v5 )
    {
      if ( *(_BYTE *)(v4 + 72 * i + 8) || !CHwBitmapColorSource::IsValid(v5) || v1 )
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
