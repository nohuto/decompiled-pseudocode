/*
 * XREFs of ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180013510
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180013478 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x1800134F0 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047510 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006F66C (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x180087CF4 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18008B258 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
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
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 *v17; // r14
  CContactManager *v18; // rcx
  unsigned __int64 *v19; // r14
  CContactManager *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  CPenBarrelKeyVisual *v23; // rcx
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+40h] [rbp+8h] BYREF

  v24 = &CDesktopManager::s_csDwmInstance;
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
      v23 = *(CPenBarrelKeyVisual **)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 8);
      if ( v23 )
        CPenBarrelKeyVisual::ShowBarrel(v23, (*((_BYTE *)a2 + 8) & 0x10) != 0);
    }
    goto LABEL_5;
  }
  v6 = 0;
  v11 = 112LL * (unsigned int)v4;
  *(_DWORD *)(v11 + *((_QWORD *)this + 7) + 40) = *((_DWORD *)a2 + 2);
  v12 = *((_QWORD *)this + 7);
  if ( *((_BYTE *)this + 324) )
  {
    v13 = *(_QWORD *)(v11 + v12 + 48);
    if ( v13 )
      CDirectTouchVisual::UpdateShowContact(v13, (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE, v4, v7);
    v14 = *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 56);
    if ( v14 )
    {
      v15 = CContactManager::DWMSC_PRESENTATIONMODE;
LABEL_33:
      *(_DWORD *)(v14 + 332) = v15;
    }
  }
  else
  {
    v16 = *((unsigned int *)a2 + 2);
    if ( (_DWORD)v16 )
    {
      v21 = *(_QWORD *)(v11 + v12 + 48);
      if ( v21 )
        CDirectTouchVisual::UpdateShowContact(v21, v16, v4, v7);
      v22 = *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 88);
      if ( v22 )
        CTouchDragVisual::UpdateShowContact(v22, *((unsigned int *)a2 + 2), v4, v7);
    }
    else
    {
      v17 = *(unsigned __int64 **)(v11 + v12 + 48);
      if ( v17 )
      {
        (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64, __int64))(*v17 + 184))(v17, v16, v4, v7);
        CContactManager::RemoveFromTouchNode(v18, v17[34], (struct CVisual *)v17);
        CBaseObject::Release((CBaseObject *)v17);
      }
      v19 = *(unsigned __int64 **)(v11 + *((_QWORD *)this + 7) + 88);
      if ( v19 )
      {
        (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64, __int64))(*v19 + 184))(v19, v16, v4, v7);
        CContactManager::RemoveFromTouchNode(v20, v19[34], (struct CVisual *)v19);
        CBaseObject::Release((CBaseObject *)v19);
      }
      *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 48) = 0LL;
      *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 88) = 0LL;
    }
    v14 = *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 56);
    if ( v14 )
    {
      v15 = *((_DWORD *)a2 + 2);
      goto LABEL_33;
    }
  }
LABEL_5:
  if ( !CContactManager::CheckShowContact((__int64)this, *((_DWORD *)a2 + 2), 2) )
    CContactManager::CancelStationaryAnimation(v9, *((unsigned int *)a2 + 1));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v6;
}
