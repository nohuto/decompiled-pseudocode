/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1800A4880
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800A4958 (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  struct CResource **v1; // rdx
  __int64 v3; // rax
  struct CResource *v4; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 21);
  if ( v1 )
  {
    CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v1);
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 41) )
  {
    v3 = *((_QWORD *)this + 41);
    if ( v3 )
      v4 = (struct CResource *)(v3 + 8);
    else
      v4 = 0LL;
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 41) = 0LL;
  }
}
