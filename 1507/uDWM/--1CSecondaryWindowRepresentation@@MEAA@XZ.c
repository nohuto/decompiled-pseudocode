/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180034B7C
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x180033520 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180005A94 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180017AFC (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x180034AF8 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     EtwppTemplate_qq @ 0x180074BD8 (EtwppTemplate_qq.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  unsigned int i; // edi
  CWindowData *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CSecondaryWindowRepresentation::ReleaseAllResources(this);
  v4 = (CBaseObject *)*((_QWORD *)this + 58);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 65);
  if ( v8 )
    CBaseObject::Release(v8);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( dword_1800B9564
    && (unsigned __int8)(byte_1800B9568 - 1) > 2u
    && (qword_1800B9550 & 0x8000000000000001uLL) != 0
    && (qword_1800B9558 & 0x8000000000000001uLL) == qword_1800B9558 )
  {
    v13 = *((_QWORD *)this + 4);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 40);
    else
      v14 = 0LL;
    EtwppTemplate_qq(v8, &EtwTraceInfo_9003, this, v14);
  }
  v10 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v10 )
    CWindowData::RemoveSecondaryWindowRepresentation(v10, this, v2, v3);
  v11 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v12 )
    CBaseObject::Release(v12);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 16);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
