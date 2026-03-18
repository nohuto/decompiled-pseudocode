/*
 * XREFs of ??1EDIDCACHE@@QEAA@XZ @ 0x1C014149C
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C013EAAC (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000CB98 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall EDIDCACHE::~EDIDCACHE(EDIDCACHE *this)
{
  DXGFASTMUTEX *v2; // rcx

  v2 = (DXGFASTMUTEX *)*((_QWORD *)this + 124);
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 124) = 0LL;
  }
}
