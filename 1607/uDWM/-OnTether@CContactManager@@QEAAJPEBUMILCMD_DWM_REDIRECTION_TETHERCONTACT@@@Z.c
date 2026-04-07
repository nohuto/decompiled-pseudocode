/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180087498
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002F3B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A950 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180047F00 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180048750 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F338 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x18006FBD4 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18006FC38 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x180085704 (--$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x180089DE0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  int v4; // esi
  CBaseObject *v5; // r14
  int v6; // edx
  __int64 v7; // r8
  __int64 v9; // rbx
  struct tagPOINT *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  int updated; // eax
  CContactManager *v17; // rcx
  struct CTouchVisual *v18; // rdx
  __int64 v19; // rcx
  int Touch; // eax
  CContactManager *v21; // rcx
  int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // edx
  CContactManager *v25; // rcx
  CBaseObject *v26; // rcx
  int v27; // eax
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v30; // [rsp+80h] [rbp+40h] BYREF
  __int64 v31; // [rsp+88h] [rbp+48h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v30 = 0LL;
  GetDesktopID(1LL, &v29);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( *(_DWORD *)(112LL * (unsigned int)v6 + v7) != *((_DWORD *)a2 + 1) )
  {
    if ( (unsigned int)++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( v6 < 0 || (v9 = 112LL * (unsigned int)v6, *(_DWORD *)(v9 + v7 + 4) != 1) )
  {
LABEL_5:
    v4 = -2147024809;
    goto LABEL_6;
  }
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( !*(_QWORD *)(v9 + v7 + 72) )
    {
      v4 = -2147024809;
      goto LABEL_47;
    }
    v31 = *(_QWORD *)(v9 + v7 + 72);
    v23 = *((_DWORD *)this + 44);
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_45:
      CContactManager::StopAndRemoveFromRootNode(v25, *(struct CTouchVisual **)(v9 + *((_QWORD *)this + 7) + 72));
LABEL_41:
      v26 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 72);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = 0LL;
      }
      goto LABEL_6;
    }
    if ( v24 > *((_DWORD *)this + 43) )
    {
      v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v31);
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0xC0u);
        goto LABEL_45;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v31;
      *((_DWORD *)this + 44) = v24;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) + 8LL));
    CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v9 + *((_QWORD *)this + 7) + 72));
    goto LABEL_41;
  }
  v10 = *(struct tagPOINT **)(v9 + v7 + 72);
  if ( v10 )
  {
    CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
    goto LABEL_6;
  }
  v11 = CreateTouchVisual<CTetherVisual>(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v29,
          &v30);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x3C9u);
    v5 = v30;
    goto LABEL_47;
  }
  v5 = v30;
  v13 = CContactManager::AddToTouchNode(v12, v29, v30);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x3CAu);
LABEL_47:
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_6;
  }
  v15 = *((_QWORD *)this + 7);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v14, (__int64)&UdwmTetherVisual_Start);
  *((_BYTE *)v5 + 400) = 1;
  updated = CTetherVisual::UpdatePosition(
              (struct tagPOINT *)v5,
              (const struct tagPOINT *)((char *)a2 + 12),
              (const struct tagPOINT *)(v9 + v15 + 8));
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x114u);
    CTetherVisual::Stop(v5);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x3CBu);
    goto LABEL_47;
  }
  *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = v5;
  v18 = *(struct CTouchVisual **)(v9 + *((_QWORD *)this + 7) + 88);
  if ( v18 )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v17, v18);
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
    *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
    if ( *((_BYTE *)this + 324) || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
    {
      v19 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v9 + v19 + 48) && !*(_QWORD *)(v9 + v19 + 96) )
      {
        Touch = CreateTouchVisual<CDirectTouchVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v29,
                  (CDirectTouchVisual **)(v9 + v19 + 48));
        v4 = Touch;
        if ( Touch < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x3DDu);
          goto LABEL_6;
        }
        CContactManager::AddToTouchNode(v21, v29, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
      }
      if ( *((_BYTE *)this + 324) )
        v22 = CContactManager::DWMSC_PRESENTATIONMODE;
      else
        v22 = *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40);
      CDirectTouchVisual::StartDown(
        *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 48),
        (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL),
        (const struct tagRECT *)(v9 + *((_QWORD *)this + 7) + 24LL),
        v22);
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return (unsigned int)v4;
}
