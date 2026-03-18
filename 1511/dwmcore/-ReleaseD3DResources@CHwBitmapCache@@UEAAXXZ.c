/*
 * XREFs of ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x18008B310
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180027F80 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x18008BB0C (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18008BC0C (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

void __fastcall CHwBitmapCache::ReleaseD3DResources(CHwBitmapCache *this)
{
  CHwBitmapCache::FormatCacheEntry *v1; // rdi
  CMILRefCountBase *v3; // rcx
  CMILRefCountBase *v4; // rcx

  v1 = (CHwBitmapCache *)((char *)this + 160);
  CHwBitmapCache::FormatCacheEntry::`scalar deleting destructor'((CHwBitmapCache *)((char *)this + 160), 0);
  if ( v1 )
    CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v1);
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 63);
  if ( v3 )
  {
    CMILRefCountBase::Release(v3);
    *((_QWORD *)this + 63) = 0LL;
  }
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 62);
  if ( v4 )
  {
    CMILRefCountBase::Release(v4);
    *((_QWORD *)this + 62) = 0LL;
  }
}
