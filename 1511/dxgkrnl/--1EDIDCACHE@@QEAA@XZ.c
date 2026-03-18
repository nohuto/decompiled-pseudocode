/*
 * XREFs of ??1EDIDCACHE@@QEAA@XZ @ 0x1C0146F5C
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0144EFC (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0006E44 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
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
