/*
 * XREFs of ??1CTetherVisual@@MEAA@XZ @ 0x18008A238
 * Callers:
 *     ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x18008A340 (--_GCTetherVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x18008A9C0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

void __fastcall CTetherVisual::~CTetherVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rax
  char v7; // cl
  CBaseObject *v8; // rdx
  bool v9; // al

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
    --*((_DWORD *)v6 + 2);
    v7 = CDesktopManager::s_fTimelineDirty;
    if ( !*((_DWORD *)v6 + 2) )
      v7 = 1;
    this[47] = 0LL;
    CDesktopManager::s_fTimelineDirty = v7;
  }
  else
  {
    v7 = CDesktopManager::s_fTimelineDirty;
  }
  v8 = this[48];
  if ( v8 )
  {
    --*((_DWORD *)v8 + 2);
    v9 = v7;
    if ( !*((_DWORD *)v8 + 2) )
      v9 = 1;
    this[48] = 0LL;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
