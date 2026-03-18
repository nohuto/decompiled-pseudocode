/*
 * XREFs of ??1QDC_CACHE@@QEAA@XZ @ 0x1C0150164
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C013EAAC (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000CB98 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z @ 0x1C0060744 (-FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z.c)
 */

void __fastcall QDC_CACHE::~QDC_CACHE(QDC_CACHE *this)
{
  DXGFASTMUTEX *v2; // rcx
  struct QDC_CACHE::QDC_CACHE_ENTRY *v3; // rbx
  __int64 v4; // rdi

  v2 = (DXGFASTMUTEX *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (QDC_CACHE *)((char *)this + 16);
  v4 = 10LL;
  do
  {
    QDC_CACHE::FreeAllocationsForEntry(v2, v3);
    v3 = (struct QDC_CACHE::QDC_CACHE_ENTRY *)((char *)v3 + 48);
    --v4;
  }
  while ( v4 );
}
