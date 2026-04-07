/*
 * XREFs of ??1CTextTetherVisual@@MEAA@XZ @ 0x1800887A8
 * Callers:
 *     ??_GCTextTetherVisual@@MEAAPEAXI@Z @ 0x180088870 (--_GCTextTetherVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180088B00 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 */

void __fastcall CTextTetherVisual::~CTextTetherVisual(CBaseObject **this)
{
  CBaseObject *v2; // rax
  bool v3; // zf
  char v4; // al
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx

  *this = (CBaseObject *)&CTextTetherVisual::`vftable';
  CTextTetherVisual::Stop((CTextTetherVisual *)this);
  v2 = this[35];
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    this[35] = 0LL;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  v5 = this[47];
  if ( v5 )
  {
    CBaseObject::Release(v5);
    this[47] = 0LL;
  }
  v6 = this[48];
  if ( v6 )
  {
    CBaseObject::Release(v6);
    this[48] = 0LL;
  }
  v7 = this[49];
  if ( v7 )
  {
    CBaseObject::Release(v7);
    this[49] = 0LL;
  }
  v8 = this[50];
  if ( v8 )
  {
    CBaseObject::Release(v8);
    this[50] = 0LL;
  }
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
