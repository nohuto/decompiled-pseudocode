/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1800A7A70
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800A7B5C (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 */

void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 9);
  if ( v1 )
  {
    CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v1);
    *((_QWORD *)this + 9) = 0LL;
  }
}
