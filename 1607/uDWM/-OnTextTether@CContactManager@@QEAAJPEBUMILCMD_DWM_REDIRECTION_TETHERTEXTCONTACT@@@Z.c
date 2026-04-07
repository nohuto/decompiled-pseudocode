/*
 * XREFs of ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180087808
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
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18006FD10 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FD44 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x1800857DC (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 *     ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x180088AC8 (-OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180088B00 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x180088BA4 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::OnTextTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *a2)
{
  int v4; // edi
  CBaseObject *v5; // r14
  int v6; // edx
  __int64 v7; // r8
  __int64 v9; // rbx
  CTextTetherVisual *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int updated; // eax
  CContactManager *v16; // rcx
  struct CTouchVisual *v17; // rdx
  __int64 v18; // rcx
  int Touch; // eax
  CContactManager *v20; // rcx
  int v21; // r9d
  unsigned int v22; // eax
  unsigned int v23; // edx
  CContactManager *v24; // rcx
  CBaseObject *v25; // rcx
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-20h]
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
    if ( !*(_QWORD *)(v9 + v7 + 80) )
    {
      v4 = -2147024809;
      goto LABEL_50;
    }
    v31 = *(_QWORD *)(v9 + v7 + 80);
    v22 = *((_DWORD *)this + 44);
    v23 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_48:
      CContactManager::StopAndRemoveFromRootNode(v24, *(struct CTouchVisual **)(v9 + *((_QWORD *)this + 7) + 80));
LABEL_44:
      v25 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 80);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = 0LL;
      }
      goto LABEL_6;
    }
    if ( v23 > *((_DWORD *)this + 43) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v31);
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xC0u);
        goto LABEL_48;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v31;
      *((_DWORD *)this + 44) = v23;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) + 8LL));
    CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v9 + *((_QWORD *)this + 7) + 80));
    goto LABEL_44;
  }
  v10 = *(CTextTetherVisual **)(v9 + v7 + 80);
  if ( v10 )
  {
    CTextTetherVisual::OnTetherAnchorChange(
      v10,
      (const struct tagPOINT *)((char *)a2 + 12),
      *((enum DEVICE_SCALE_FACTOR *)a2 + 6),
      *((_DWORD *)a2 + 5));
    goto LABEL_6;
  }
  v11 = CreateTouchVisual<CTextTetherVisual>(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v29,
          &v30);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x426u);
    v5 = v30;
    goto LABEL_50;
  }
  v5 = v30;
  CContactManager::AddToTouchNode(v12, v29, v30);
  v13 = CTextTetherVisual::OnTetherAnchorChange(
          v5,
          (const struct tagPOINT *)((char *)a2 + 12),
          (enum DEVICE_SCALE_FACTOR)*((_DWORD *)a2 + 6),
          *((_DWORD *)a2 + 5));
  v4 = v13;
  if ( v13 < 0 )
  {
    v27 = 1064;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v27);
LABEL_50:
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_6;
  }
  v13 = CTextTetherVisual::SetContactPosition(
          v5,
          (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL),
          (const struct tagRECT *)(v9 + *((_QWORD *)this + 7) + 24LL));
  v4 = v13;
  if ( v13 < 0 )
  {
    v27 = 1065;
    goto LABEL_16;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v14, (__int64)&UdwmTextTetherVisual_Start);
  *((_BYTE *)v5 + 408) = 1;
  updated = CTextTetherVisual::UpdateInstructions(v5);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xC2u);
    CTextTetherVisual::Stop(v5);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x42Au);
    goto LABEL_50;
  }
  *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = v5;
  v17 = *(struct CTouchVisual **)(v9 + *((_QWORD *)this + 7) + 88);
  if ( v17 )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v16, v17);
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
    *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
    if ( *((_BYTE *)this + 324) || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
    {
      v18 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v9 + v18 + 48) && !*(_QWORD *)(v9 + v18 + 96) )
      {
        Touch = CreateTouchVisual<CDirectTouchVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v29,
                  (CDirectTouchVisual **)(v9 + v18 + 48));
        v4 = Touch;
        if ( Touch < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x43Cu);
          goto LABEL_6;
        }
        CContactManager::AddToTouchNode(v20, v29, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
      }
      if ( *((_BYTE *)this + 324) )
        v21 = CContactManager::DWMSC_PRESENTATIONMODE;
      else
        v21 = *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40);
      CDirectTouchVisual::StartDown(
        *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 48),
        (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL),
        (const struct tagRECT *)(v9 + *((_QWORD *)this + 7) + 24LL),
        v21);
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return (unsigned int)v4;
}
