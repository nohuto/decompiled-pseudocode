/*
 * XREFs of ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180005648
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002FEE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800055B0 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x180005628 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047610 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800820CC (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18008613C (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x180087598 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CContactManager::OnShowContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *a2)
{
  __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // r15d
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r14
  CContactManager *v17; // rcx
  unsigned __int64 *v18; // r14
  CContactManager *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  CPenBarrelKeyVisual *v22; // rcx
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+40h] [rbp+8h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
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
  if ( (int)v4 < 0 )
  {
    if ( (int)v7 >= 0 )
    {
      v6 = 0;
      *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 24) = *((_DWORD *)a2 + 2);
      v22 = *(CPenBarrelKeyVisual **)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 8);
      if ( v22 )
        CPenBarrelKeyVisual::ShowBarrel(v22, (*((_BYTE *)a2 + 8) & 0x10) != 0);
    }
    goto LABEL_5;
  }
  v6 = 0;
  v11 = 112LL * (unsigned int)v4;
  *(_DWORD *)(v11 + *((_QWORD *)this + 7) + 40) = *((_DWORD *)a2 + 2);
  if ( *((_BYTE *)this + 324) )
  {
    v12 = *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 48);
    if ( v12 )
      CDirectTouchVisual::UpdateShowContact(v12, (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE, v4, v7);
    v13 = *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 56);
    if ( v13 )
    {
      v14 = CContactManager::DWMSC_PRESENTATIONMODE;
LABEL_33:
      *(_DWORD *)(v13 + 332) = v14;
    }
  }
  else
  {
    v15 = *((unsigned int *)a2 + 2);
    if ( (_DWORD)v15 )
    {
      v20 = *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 48);
      if ( v20 )
        CDirectTouchVisual::UpdateShowContact(v20, v15, v4, v7);
      v21 = *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 88);
      if ( v21 )
        CTouchDragVisual::UpdateShowContact(v21, *((unsigned int *)a2 + 2), v4, v7);
    }
    else
    {
      _mm_lfence();
      v16 = *(unsigned __int64 **)(v11 + *((_QWORD *)this + 7) + 48);
      if ( v16 )
      {
        (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64, __int64))(*v16 + 184))(v16, v15, v4, v7);
        CContactManager::RemoveFromTouchNode(v17, v16[34], (struct CVisual *)v16);
        CBaseObject::Release((CBaseObject *)v16);
      }
      v18 = *(unsigned __int64 **)(v11 + *((_QWORD *)this + 7) + 88);
      if ( v18 )
      {
        (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64, __int64))(*v18 + 184))(v18, v15, v4, v7);
        CContactManager::RemoveFromTouchNode(v19, v18[34], (struct CVisual *)v18);
        CBaseObject::Release((CBaseObject *)v18);
      }
      *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 48) = 0LL;
      *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 88) = 0LL;
    }
    v13 = *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 56);
    if ( v13 )
    {
      v14 = *((_DWORD *)a2 + 2);
      goto LABEL_33;
    }
  }
LABEL_5:
  if ( !CContactManager::CheckShowContact((__int64)this, *((_DWORD *)a2 + 2), 2) )
    CContactManager::CancelStationaryAnimation(v9, *((unsigned int *)a2 + 1));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v6;
}
