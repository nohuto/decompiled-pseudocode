/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18005A270
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x18005A3DC (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180067F90 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 */

void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  struct CWeakReferenceBase *v1; // rdx

  v1 = (struct CWeakReferenceBase *)*((_QWORD *)this + 9);
  if ( v1 )
  {
    CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v1);
    *((_QWORD *)this + 9) = 0LL;
  }
}
