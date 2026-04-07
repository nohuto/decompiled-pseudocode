/*
 * XREFs of ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18000905C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002F3B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18000903C (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006F64C (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180085E4C (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x180087DD0 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18008A520 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CContactManager::OnShowContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *a2)
{
  __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // ebp
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  CContactManager *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  CContactManager *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  CPenBarrelKeyVisual *v20; // rcx
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+30h] [rbp+8h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0xFFFFFFFFLL;
  v5 = 0;
  v6 = -2147024809;
  v7 = 0xFFFFFFFFLL;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(112LL * v5 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 1) )
    {
      if ( ++v5 >= *((_DWORD *)this + 20) )
        goto LABEL_2;
    }
    v4 = v5;
  }
LABEL_2:
  v8 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40 * v8) != *((_DWORD *)a2 + 1) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 28) )
        goto LABEL_3;
    }
    v7 = (unsigned int)v8;
  }
LABEL_3:
  if ( (int)v4 >= 0 )
  {
    v11 = (CContactManager *)*((_QWORD *)this + 7);
    v6 = 0;
    v12 = 112LL * (unsigned int)v4;
    *(_DWORD *)((char *)v11 + v12 + 40) = *((_DWORD *)a2 + 2);
    if ( *((_BYTE *)this + 324) )
    {
      v13 = *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 48);
      if ( v13 )
        CDirectTouchVisual::UpdateShowContact(v13, 4294967291LL, v4, v7);
      v14 = *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 56);
      if ( v14 )
        *(_DWORD *)(v14 + 332) = -5;
    }
    else
    {
      v15 = *((unsigned int *)a2 + 2);
      if ( (_DWORD)v15 )
      {
        v17 = *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 48);
        if ( v17 )
          CDirectTouchVisual::UpdateShowContact(v17, v15, v4, v7);
        v18 = *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 88);
        if ( v18 )
          CTouchDragVisual::UpdateShowContact(v18, *((unsigned int *)a2 + 2), v4, v7);
      }
      else
      {
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
          v11,
          *(struct CTouchVisual **)(v12 + *((_QWORD *)this + 7) + 48));
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
          v16,
          *(struct CTouchVisual **)(v12 + *((_QWORD *)this + 7) + 88));
        *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 48) = 0LL;
        *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 88) = 0LL;
      }
      v19 = *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 56);
      if ( v19 )
        *(_DWORD *)(v19 + 332) = *((_DWORD *)a2 + 2);
    }
  }
  else if ( (int)v7 >= 0 )
  {
    v6 = 0;
    *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 24) = *((_DWORD *)a2 + 2);
    v20 = *(CPenBarrelKeyVisual **)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 8);
    if ( v20 )
      CPenBarrelKeyVisual::ShowBarrel(v20, (*((_BYTE *)a2 + 8) & 0x10) != 0);
  }
  if ( !CContactManager::CheckShowContact((__int64)this, *((_DWORD *)a2 + 2), 2) )
    CContactManager::CancelStationaryAnimation(v9, *((unsigned int *)a2 + 1));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return v6;
}
