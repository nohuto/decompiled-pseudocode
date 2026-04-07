/*
 * XREFs of ??1CTopLevelWindow@@MEAA@XZ @ 0x180027590
 * Callers:
 *     ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x180020DB0 (--_GCTopLevelWindow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180020E08 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x18007E814 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::~CTopLevelWindow(CTopLevelWindow *this)
{
  char v2; // al
  CBaseObject **v3; // rbx
  int v4; // edi
  int v5; // edi
  __int64 *v6; // rbx
  __int64 v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
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
  __int64 v26; // rax
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  struct CVisual *v30; // rcx
  bool v31; // zf
  char v32; // al

  *(_QWORD *)this = &CTopLevelWindow::`vftable';
  v2 = *((_BYTE *)this + 264);
  if ( (v2 & 0x40) != 0 )
  {
    *((_BYTE *)this + 264) = v2 & 0xBF;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v30);
  }
  CTopLevelWindow::StopLivePreviewAnimation(this);
  if ( (*((_BYTE *)this + 264) & 0x2A) == 0 )
    SetWindowRgnEx(*(_QWORD *)(*((_QWORD *)this + 93) + 40LL), 0LL, 1LL);
  v3 = (CBaseObject **)((char *)this + 504);
  v4 = 0;
  do
  {
    if ( *v3 )
    {
      CBaseObject::Release(*v3);
      *v3 = 0LL;
    }
    ++v4;
    ++v3;
  }
  while ( (unsigned __int64)v4 < 4 );
  v5 = 0;
  v6 = (__int64 *)((char *)this + 320);
  do
  {
    v7 = *v6;
    if ( *v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 && v7 )
        (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
      *v6 = 0LL;
    }
    ++v5;
    ++v6;
  }
  while ( (unsigned __int64)v5 < 0x16 );
  v8 = (CBaseObject *)*((_QWORD *)this + 100);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 100) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 71);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 71) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 72);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 72) = 0LL;
  }
  v11 = *((_QWORD *)this + 35);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
    *((_QWORD *)this + 35) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 67);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 67) = 0LL;
  }
  v13 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)this + 36) = 0LL;
  }
  v14 = *((_QWORD *)this + 69);
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
    *((_QWORD *)this + 69) = 0LL;
  }
  v15 = *((_QWORD *)this + 70);
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1LL);
    *((_QWORD *)this + 70) = 0LL;
  }
  v16 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v16 )
  {
    CBaseObject::Release(v16);
    *((_QWORD *)this + 37) = 0LL;
  }
  v17 = (CBaseObject *)*((_QWORD *)this + 62);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)this + 62) = 0LL;
  }
  v18 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v18 )
  {
    CBaseObject::Release(v18);
    *((_QWORD *)this + 68) = 0LL;
  }
  v19 = (CBaseObject *)*((_QWORD *)this + 94);
  if ( v19 )
  {
    CBaseObject::Release(v19);
    *((_QWORD *)this + 94) = 0LL;
  }
  v20 = (CBaseObject *)*((_QWORD *)this + 95);
  if ( v20 )
  {
    CBaseObject::Release(v20);
    *((_QWORD *)this + 95) = 0LL;
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 73);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)this + 73) = 0LL;
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 39) = 0LL;
  }
  v23 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v23 )
  {
    CBaseObject::Release(v23);
    *((_QWORD *)this + 38) = 0LL;
  }
  v24 = (CBaseObject *)*((_QWORD *)this + 74);
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *((_QWORD *)this + 74) = 0LL;
  }
  v25 = (CBaseObject *)*((_QWORD *)this + 75);
  if ( v25 )
  {
    CBaseObject::Release(v25);
    *((_QWORD *)this + 75) = 0LL;
  }
  v26 = *((_QWORD *)this + 87);
  if ( v26 )
  {
    v31 = (*(_DWORD *)(v26 + 8))-- == 1;
    v32 = CDesktopManager::s_fTimelineDirty;
    if ( v31 )
      v32 = 1;
    *((_QWORD *)this + 87) = 0LL;
    CDesktopManager::s_fTimelineDirty = v32;
  }
  v27 = (CBaseObject *)*((_QWORD *)this + 96);
  if ( v27 )
  {
    CBaseObject::Release(v27);
    *((_QWORD *)this + 96) = 0LL;
  }
  v28 = (CBaseObject *)*((_QWORD *)this + 97);
  if ( v28 )
  {
    CBaseObject::Release(v28);
    *((_QWORD *)this + 97) = 0LL;
  }
  v29 = (CBaseObject *)*((_QWORD *)this + 98);
  if ( v29 )
  {
    CBaseObject::Release(v29);
    *((_QWORD *)this + 98) = 0LL;
  }
  CVisual::~CVisual(this);
}
