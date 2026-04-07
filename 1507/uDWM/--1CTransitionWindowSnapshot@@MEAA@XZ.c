/*
 * XREFs of ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180011834
 * Callers:
 *     ??_ECTransitionWindowSnapshot@@MEAAPEAXI@Z @ 0x1800111A0 (--_ECTransitionWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z @ 0x180006EA4 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTransitionWindowSnapshot::~CTransitionWindowSnapshot(CTransitionWindowSnapshot *this)
{
  float v1; // xmm2_4
  int v3; // edx
  int v4; // eax
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx

  v1 = *((float *)this + 84);
  *(_QWORD *)this = &CTransitionWindowSnapshot::`vftable';
  v3 = *((_DWORD *)this + 79) - *((_DWORD *)this + 77);
  if ( v3 < 0 )
    v3 = 0;
  v4 = *((_DWORD *)this + 78) - *((_DWORD *)this + 76);
  if ( v4 < 0 )
    v4 = 0;
  CDesktopManager::FreeCVIIntoCache(
    (int)(float)((float)v4 * v1),
    (int)(float)((float)v3 * v1),
    *((struct CResource **)this + 34));
  v5 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 34) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 35) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 36) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 37) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 33) = 0LL;
  }
  CVisual::~CVisual(this);
}
