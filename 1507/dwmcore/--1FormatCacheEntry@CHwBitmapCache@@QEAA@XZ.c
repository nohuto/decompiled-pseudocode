/*
 * XREFs of ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x180051F84
 * Callers:
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x180018850 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x180051EE8 (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x180051EE8 (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 */

void __fastcall CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry(CHwBitmapCache::FormatCacheEntry *this)
{
  CHwBitmapCache::FormatCacheEntry *v2; // rcx
  __int64 i; // rdi
  CMILRefCountBase *v4; // rcx

  v2 = (CHwBitmapCache::FormatCacheEntry *)*((_QWORD *)this + 1);
  if ( v2 )
    CHwBitmapCache::FormatCacheEntry::`scalar deleting destructor'(v2, 1);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v4 = *(CMILRefCountBase **)(*((_QWORD *)this + 2) + 72 * i + 64);
    if ( v4 )
      CMILRefCountBase::Release(v4);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
}
