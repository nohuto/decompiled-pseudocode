/*
 * XREFs of ??1CWindowIconic@@MEAA@XZ @ 0x180038E00
 * Callers:
 *     ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x180038400 (--_ECWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001B3E4 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800384C4 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::~CWindowIconic(CTopLevelWindow **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CTopLevelWindow *v7; // rax
  CBaseObject *v8; // rcx
  CWindowData *v9; // rcx

  *this = (CTopLevelWindow *)&CWindowIconic::`vftable';
  CWindowIconic::CleanupAnimationResources(this);
  v2 = this[11];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[13];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = this[14];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = this[12];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = this[3];
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = this[10];
  if ( v7 )
  {
    v8 = (CBaseObject *)*((_QWORD *)v7 + 48);
    if ( v8 )
      CBaseObject::Release(v8);
  }
  v9 = this[10];
  if ( v9 )
  {
    CWindowData::`scalar deleting destructor'(v9);
    this[10] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 4));
  *this = (CTopLevelWindow *)&CBaseObject::`vftable';
}
