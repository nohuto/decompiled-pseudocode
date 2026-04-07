/*
 * XREFs of ??1CWindowIconic@@MEAA@XZ @ 0x18003BA44
 * Callers:
 *     ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x18003B0A0 (--_ECWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001E824 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18003B178 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::~CWindowIconic(CWindowIconic *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  __int64 v7; // rax
  CBaseObject *v8; // rcx
  void **v9; // rcx

  *(_QWORD *)this = &CWindowIconic::`vftable';
  CWindowIconic::CleanupAnimationResources((CTopLevelWindow **)this);
  v2 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 14);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    v8 = *(CBaseObject **)(v7 + 384);
    if ( v8 )
      CBaseObject::Release(v8);
  }
  v9 = (void **)*((_QWORD *)this + 10);
  if ( v9 )
  {
    CWindowData::`scalar deleting destructor'(v9);
    *((_QWORD *)this + 10) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 4);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
