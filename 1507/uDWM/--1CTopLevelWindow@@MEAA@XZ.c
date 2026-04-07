/*
 * XREFs of ??1CTopLevelWindow@@MEAA@XZ @ 0x180024B24
 * Callers:
 *     ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x18001EAF0 (--_GCTopLevelWindow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001FC78 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180025000 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CTopLevelWindow::~CTopLevelWindow(CBaseObject **this)
{
  CBaseObject **v2; // rbx
  int v3; // esi
  int v4; // ebp
  __int64 *v5; // r14
  __int64 v6; // rsi
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  char v29; // al

  *this = (CBaseObject *)&CTopLevelWindow::`vftable';
  CTopLevelWindow::StopIconicAnimation((CTopLevelWindow *)this);
  CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  if ( ((_BYTE)this[33] & 0x2A) == 0 )
    SetWindowRgnEx(*((_QWORD *)this[93] + 5), 0LL, 1LL);
  v2 = this + 63;
  v3 = 0;
  do
  {
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
    ++v3;
    ++v2;
  }
  while ( (unsigned __int64)v3 < 4 );
  v4 = 0;
  v5 = (__int64 *)(this + 40);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 && v6 )
        (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
      *v5 = 0LL;
    }
    ++v4;
    ++v5;
  }
  while ( (unsigned __int64)v4 < 0x16 );
  v7 = this[100];
  if ( v7 )
  {
    CBaseObject::Release(v7);
    this[100] = 0LL;
  }
  v8 = this[71];
  if ( v8 )
  {
    CBaseObject::Release(v8);
    this[71] = 0LL;
  }
  v9 = this[72];
  if ( v9 )
  {
    CBaseObject::Release(v9);
    this[72] = 0LL;
  }
  v10 = this[35];
  if ( v10 )
  {
    CBaseObject::Release(v10);
    this[35] = 0LL;
  }
  v11 = this[67];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    this[67] = 0LL;
  }
  v12 = this[36];
  if ( v12 )
  {
    CBaseObject::Release(v12);
    this[36] = 0LL;
  }
  v13 = this[69];
  if ( v13 )
  {
    CBaseObject::Release(v13);
    this[69] = 0LL;
  }
  v14 = this[70];
  if ( v14 )
  {
    CBaseObject::Release(v14);
    this[70] = 0LL;
  }
  v15 = this[37];
  if ( v15 )
  {
    CBaseObject::Release(v15);
    this[37] = 0LL;
  }
  v16 = this[62];
  if ( v16 )
  {
    CBaseObject::Release(v16);
    this[62] = 0LL;
  }
  v17 = this[68];
  if ( v17 )
  {
    CBaseObject::Release(v17);
    this[68] = 0LL;
  }
  v18 = this[94];
  if ( v18 )
  {
    CBaseObject::Release(v18);
    this[94] = 0LL;
  }
  v19 = this[95];
  if ( v19 )
  {
    CBaseObject::Release(v19);
    this[95] = 0LL;
  }
  v20 = this[73];
  if ( v20 )
  {
    CBaseObject::Release(v20);
    this[73] = 0LL;
  }
  v21 = this[39];
  if ( v21 )
  {
    CBaseObject::Release(v21);
    this[39] = 0LL;
  }
  v22 = this[38];
  if ( v22 )
  {
    CBaseObject::Release(v22);
    this[38] = 0LL;
  }
  v23 = this[74];
  if ( v23 )
  {
    CBaseObject::Release(v23);
    this[74] = 0LL;
  }
  v24 = this[75];
  if ( v24 )
  {
    CBaseObject::Release(v24);
    this[75] = 0LL;
  }
  v25 = this[87];
  if ( v25 )
  {
    --*((_DWORD *)v25 + 2);
    v29 = CDesktopManager::s_fTimelineDirty;
    if ( !*((_DWORD *)v25 + 2) )
      v29 = 1;
    this[87] = 0LL;
    CDesktopManager::s_fTimelineDirty = v29;
  }
  v26 = this[96];
  if ( v26 )
  {
    CBaseObject::Release(v26);
    this[96] = 0LL;
  }
  v27 = this[97];
  if ( v27 )
  {
    CBaseObject::Release(v27);
    this[97] = 0LL;
  }
  v28 = this[98];
  if ( v28 )
  {
    CBaseObject::Release(v28);
    this[98] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
