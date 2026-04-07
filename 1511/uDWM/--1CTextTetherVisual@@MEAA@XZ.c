/*
 * XREFs of ??1CTextTetherVisual@@MEAA@XZ @ 0x1800887F8
 * Callers:
 *     ??_GCTextTetherVisual@@MEAAPEAXI@Z @ 0x180088960 (--_GCTextTetherVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180089110 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 */

void __fastcall CTextTetherVisual::~CTextTetherVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  char v3; // al
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx

  *this = (CBaseObject *)&CTextTetherVisual::`vftable';
  CTextTetherVisual::Stop((CTextTetherVisual *)this);
  v2 = this[35];
  if ( v2 )
  {
    --*((_DWORD *)v2 + 2);
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( !*((_DWORD *)v2 + 2) )
      v3 = 1;
    this[35] = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  v4 = this[47];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[47] = 0LL;
  }
  v5 = this[50];
  if ( v5 )
  {
    CBaseObject::Release(v5);
    this[50] = 0LL;
  }
  v6 = this[51];
  if ( v6 )
  {
    CBaseObject::Release(v6);
    this[51] = 0LL;
  }
  v7 = this[52];
  if ( v7 )
  {
    CBaseObject::Release(v7);
    this[52] = 0LL;
  }
  v8 = this[53];
  if ( v8 )
  {
    CBaseObject::Release(v8);
    this[53] = 0LL;
  }
  v9 = this[54];
  if ( v9 )
  {
    CBaseObject::Release(v9);
    this[54] = 0LL;
  }
  v10 = this[55];
  if ( v10 )
  {
    CBaseObject::Release(v10);
    this[55] = 0LL;
  }
  v11 = this[56];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    this[56] = 0LL;
  }
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
