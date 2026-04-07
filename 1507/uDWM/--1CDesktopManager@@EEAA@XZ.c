/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x18006C0B0
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x18006C490 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003FC64 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x18006C35C (--_GCAnimationClockCoordinator@@QEAAPEAXI@Z.c)
 *     ??_GCAnimationScheduler@@QEAAPEAXI@Z @ 0x18006C3E4 (--_GCAnimationScheduler@@QEAAPEAXI@Z.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x18006C4F0 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x18006C550 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x18006C5B0 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x18006C608 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x18006C6A0 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?CleanupAccentStatics@CAccent@@SAXXZ @ 0x180074CD4 (-CleanupAccentStatics@CAccent@@SAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x18007DA24 (--1CContactManager@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18009CFE4 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, __int64 a2)
{
  __int64 v2; // rbx
  CBaseObject **v4; // rbp
  CBaseObject **v5; // rdi
  CAnimationClockCoordinator *v6; // rcx
  CAnimationScheduler *v7; // rcx
  CTransitionVisualController *v8; // rcx
  __int64 v9; // rbp
  CWindowList *v10; // rcx
  CBaseObject *v11; // rcx
  __int64 v12; // rdi
  CTextCache *v13; // rcx
  CIconicBitmapRegistry *v14; // rcx
  CImmersiveIconicBitmapRegistry *v15; // rcx
  CBaseObject *v16; // rcx
  __int64 v17; // rdi
  struct MIL_CHANNEL__ *v18; // rcx
  __int64 v19; // rdi
  CBaseObject **v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 362);
  *(_QWORD *)this = &CDesktopManager::`vftable';
  if ( (_DWORD)v2 )
  {
    v20 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 1424, a2, &v20);
    v4 = v20;
    if ( v20 )
    {
      v5 = v20;
      do
      {
        CBaseObject::Release(*v5++);
        --v2;
      }
      while ( v2 );
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
    }
  }
  v6 = (CAnimationClockCoordinator *)*((_QWORD *)this + 21);
  if ( v6 )
  {
    CAnimationClockCoordinator::`scalar deleting destructor'(v6, a2);
    *((_QWORD *)this + 21) = 0LL;
  }
  v7 = (CAnimationScheduler *)*((_QWORD *)this + 24);
  if ( v7 )
  {
    CAnimationScheduler::`scalar deleting destructor'(v7, a2);
    *((_QWORD *)this + 24) = 0LL;
  }
  v8 = (CTransitionVisualController *)*((_QWORD *)this + 25);
  if ( v8 )
  {
    CTransitionVisualController::`scalar deleting destructor'(v8, a2);
    *((_QWORD *)this + 25) = 0LL;
  }
  v9 = *((_QWORD *)this + 20);
  if ( v9 )
  {
    CContactManager::~CContactManager(*((CContactManager **)this + 20));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v9);
    *((_QWORD *)this + 20) = 0LL;
  }
  v10 = (CWindowList *)*((_QWORD *)this + 167);
  if ( v10 )
  {
    CWindowList::`vector deleting destructor'(v10, 1u);
    *((_QWORD *)this + 167) = 0LL;
  }
  if ( *((_QWORD *)this + 171) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 171));
    *((_QWORD *)this + 171) = 0LL;
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 170);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = *((_QWORD *)this + 23);
  if ( v12 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*((_QWORD *)this + 23));
  v13 = (CTextCache *)*((_QWORD *)this + 27);
  if ( v13 )
  {
    CTextCache::`scalar deleting destructor'(v13, 1u);
    *((_QWORD *)this + 27) = 0LL;
  }
  v14 = (CIconicBitmapRegistry *)*((_QWORD *)this + 28);
  if ( v14 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v14, 1u);
    *((_QWORD *)this + 28) = 0LL;
  }
  v15 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 29);
  if ( v15 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v15, 1u);
    *((_QWORD *)this + 29) = 0LL;
  }
  v16 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(*((_QWORD *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  CAccent::CleanupAccentStatics();
  CDesktopManager::UnloadTheme(this);
  v18 = (struct MIL_CHANNEL__ *)*((_QWORD *)this + 4);
  if ( v18 )
  {
    MilConnection_DestroyChannel(v18);
    *((_QWORD *)this + 4) = 0LL;
  }
  v19 = *((_QWORD *)this + 30);
  if ( v19 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 16LL))(*((_QWORD *)this + 30));
    *((_QWORD *)this + 30) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 201);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 178);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 11);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
