/*
 * XREFs of ??1Lockable@@QEAA@XZ @ 0x1C0180240
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002AEF4 (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0006E44 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall Lockable::~Lockable(Lockable *this)
{
  DXGFASTMUTEX *v2; // rcx
  DXGFASTMUTEX *v3; // rcx

  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  v2 = (DXGFASTMUTEX *)*((_QWORD *)this + 3);
  if ( *(struct _KTHREAD **)v2 == KeGetCurrentThread() )
    DXGFASTMUTEX::Release(v2);
  v3 = (DXGFASTMUTEX *)*((_QWORD *)this + 3);
  if ( v3 )
    DXGFASTMUTEX::`scalar deleting destructor'(v3);
}
