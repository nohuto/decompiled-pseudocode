/*
 * XREFs of ??1CTetherVisual@@MEAA@XZ @ 0x180089808
 * Callers:
 *     ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x180089900 (--_GCTetherVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x180089DE0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

void __fastcall CTetherVisual::~CTetherVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rax
  bool v7; // zf
  bool v8; // al
  CBaseObject *v9; // rcx

  *this = (CBaseObject *)&CTetherVisual::`vftable';
  CTetherVisual::Stop((CTetherVisual *)this);
  v2 = this[44];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[44] = 0LL;
  }
  v3 = this[45];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[45] = 0LL;
  }
  v4 = this[46];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[46] = 0LL;
  }
  v5 = this[41];
  if ( v5 )
  {
    CBaseObject::Release(v5);
    this[41] = 0LL;
  }
  v6 = this[47];
  if ( v6 )
  {
    v7 = (*((_DWORD *)v6 + 2))-- == 1;
    v8 = CDesktopManager::s_fTimelineDirty;
    if ( v7 )
      v8 = 1;
    this[47] = 0LL;
    CDesktopManager::s_fTimelineDirty = v8;
  }
  else
  {
    v8 = CDesktopManager::s_fTimelineDirty;
  }
  v9 = this[48];
  if ( v9 )
  {
    v7 = (*((_DWORD *)v9 + 2))-- == 1;
    if ( v7 )
      v8 = 1;
    this[48] = 0LL;
    CDesktopManager::s_fTimelineDirty = v8;
  }
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
