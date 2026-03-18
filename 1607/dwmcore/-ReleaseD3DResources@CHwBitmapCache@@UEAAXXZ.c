/*
 * XREFs of ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x180081770
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x1800A28E0 (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800A29C4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
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
