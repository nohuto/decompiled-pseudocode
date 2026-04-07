/*
 * XREFs of ??1CWindowSnapshot@@MEAA@XZ @ 0x180006D3C
 * Callers:
 *     ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x1800069D0 (--_GCWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z @ 0x180006EA4 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x180018F70 (--_GCWindowData@@QEAAPEAXI@Z.c)
 */

void __fastcall CWindowSnapshot::~CWindowSnapshot(CWindowSnapshot *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  _DWORD *v8; // rdx
  int v9; // ecx
  int v10; // eax
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CWindowData *v15; // rcx

  *(_QWORD *)this = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (_DWORD *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = v8[15] - v8[13];
    if ( v9 < 0 )
      v9 = 0;
    v10 = v8[14] - v8[12];
    if ( v10 < 0 )
      v10 = 0;
    CDesktopManager::FreeCVIIntoCache(
      (int)(float)((float)v10 * *((float *)this + 18)),
      (int)(float)((float)v9 * *((float *)this + 18)),
      *((struct CResource **)this + 6));
    v11 = *(CBaseObject **)(*((_QWORD *)this + 4) + 368LL);
    if ( v11 )
      CBaseObject::Release(v11);
    v12 = *(CBaseObject **)(*((_QWORD *)this + 4) + 336LL);
    if ( v12 )
      CBaseObject::Release(v12);
    v13 = *(CBaseObject **)(*((_QWORD *)this + 4) + 352LL);
    if ( v13 )
      CBaseObject::Release(v13);
  }
  v14 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v14 )
    CBaseObject::Release(v14);
  v15 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v15 )
  {
    CWindowData::`scalar deleting destructor'(v15, (unsigned int)v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
