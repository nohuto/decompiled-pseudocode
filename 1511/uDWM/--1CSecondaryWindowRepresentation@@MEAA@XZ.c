/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180017BBC
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x180016550 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180013244 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x180017B38 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001D318 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     EtwppTemplate_qq @ 0x18007CC5C (EtwppTemplate_qq.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  unsigned int i; // edi
  CWindowData *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CSecondaryWindowRepresentation::ReleaseAllResources(this);
  v2 = (CBaseObject *)*((_QWORD *)this + 58);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 65);
  if ( v6 )
    CBaseObject::Release(v6);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( dword_1800BB564
    && (unsigned __int8)(byte_1800BB568 - 1) > 2u
    && (qword_1800BB550 & 0x8000000000000001uLL) != 0
    && (qword_1800BB558 & 0x8000000000000001uLL) == qword_1800BB558 )
  {
    v11 = *((_QWORD *)this + 4);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 40);
    else
      v12 = 0LL;
    EtwppTemplate_qq(v6, &EtwTraceInfo_9003, this, v12);
  }
  v8 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v8 )
    CWindowData::RemoveSecondaryWindowRepresentation(v8, this);
  v9 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v10 )
    CBaseObject::Release(v10);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 128);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
