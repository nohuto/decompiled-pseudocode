/*
 * XREFs of ??1Lockable@@QEAA@XZ @ 0x1C017C500
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002B238 (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000CB98 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall Lockable::~Lockable(Lockable *this)
{
  struct _KTHREAD **v2; // rcx
  DXGFASTMUTEX *v3; // rcx

  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  v2 = (struct _KTHREAD **)*((_QWORD *)this + 3);
  if ( v2[1] == KeGetCurrentThread() )
    DXGFASTMUTEX::Release(v2);
  v3 = (DXGFASTMUTEX *)*((_QWORD *)this + 3);
  if ( v3 )
    DXGFASTMUTEX::`scalar deleting destructor'(v3);
}
