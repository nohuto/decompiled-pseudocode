/*
 * XREFs of ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800875D8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180046CA4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047510 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047564 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F33C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18006FC5C (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FC90 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x18008516C (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 *     ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x1800890D8 (-OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180089110 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x1800891B8 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::OnTextTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *a2)
{
  CBaseObject *v4; // rbx
  int v5; // esi
  int v6; // edx
  __int64 v7; // r8
  __int64 v9; // rdi
  CTextTetherVisual *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int updated; // eax
  unsigned __int64 *v16; // r15
  CContactManager *v17; // rcx
  __int64 v18; // rcx
  int Touch; // eax
  CContactManager *v20; // rcx
  int v21; // r9d
  unsigned int v22; // eax
  unsigned int v23; // edx
  CBaseObject *v24; // rcx
  int v25; // eax
  unsigned __int64 *v26; // r15
  CContactManager *v27; // rcx
  unsigned int v28; // [rsp+20h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v31; // [rsp+80h] [rbp+40h] BYREF
  __int64 v32; // [rsp+88h] [rbp+48h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v31 = 0LL;
  v5 = 0;
  GetDesktopID(1LL, &v30);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( *(_DWORD *)(112LL * (unsigned int)v6 + v7) != *((_DWORD *)a2 + 1) )
  {
    if ( (unsigned int)++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( v6 < 0 || (v9 = 112LL * (unsigned int)v6, *(_DWORD *)(v7 + v9 + 4) != 1) )
  {
LABEL_5:
    v5 = -2147024809;
    goto LABEL_6;
  }
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( !*(_QWORD *)(v7 + v9 + 80) )
    {
      v5 = -2147024809;
      goto LABEL_51;
    }
    v32 = *(_QWORD *)(v7 + v9 + 80);
    v22 = *((_DWORD *)this + 44);
    v23 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      goto LABEL_48;
    }
    if ( v23 > *((_DWORD *)this + 43) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v32);
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0xC0u);
LABEL_48:
        v26 = *(unsigned __int64 **)(v9 + *((_QWORD *)this + 7) + 80);
        if ( v26 )
        {
          (*(void (__fastcall **)(unsigned __int64 *))(*v26 + 184))(v26);
          CContactManager::RemoveFromTouchNode(v27, v26[34], (struct CVisual *)v26);
        }
        goto LABEL_44;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v32;
      *((_DWORD *)this + 44) = v23;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) + 8LL));
    CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v9 + *((_QWORD *)this + 7) + 80));
LABEL_44:
    v24 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 80);
    if ( v24 )
    {
      CBaseObject::Release(v24);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = 0LL;
    }
    goto LABEL_6;
  }
  v10 = *(CTextTetherVisual **)(v7 + v9 + 80);
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
          *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v30,
          &v31);
  v5 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x426u);
    v4 = v31;
    goto LABEL_51;
  }
  v4 = v31;
  CContactManager::AddToTouchNode(v12, v30, v31);
  v13 = CTextTetherVisual::OnTetherAnchorChange(
          v4,
          (const struct tagPOINT *)((char *)a2 + 12),
          (enum DEVICE_SCALE_FACTOR)*((_DWORD *)a2 + 6),
          *((_DWORD *)a2 + 5));
  v5 = v13;
  if ( v13 < 0 )
  {
    v28 = 1064;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v28);
LABEL_51:
    if ( v4 )
      CBaseObject::Release(v4);
    goto LABEL_6;
  }
  v13 = CTextTetherVisual::SetContactPosition(
          v4,
          (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL),
          (const struct tagRECT *)(v9 + *((_QWORD *)this + 7) + 24LL));
  v5 = v13;
  if ( v13 < 0 )
  {
    v28 = 1065;
    goto LABEL_16;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v14, (__int64)&UdwmTextTetherVisual_Start);
  *((_BYTE *)v4 + 456) = 1;
  updated = CTextTetherVisual::UpdateInstructions(v4);
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x188u);
    CTextTetherVisual::Stop(v4);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x42Au);
    goto LABEL_51;
  }
  *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = v4;
  v16 = *(unsigned __int64 **)(v9 + *((_QWORD *)this + 7) + 88);
  if ( v16 )
  {
    (*(void (__fastcall **)(unsigned __int64 *))(*v16 + 184))(v16);
    CContactManager::RemoveFromTouchNode(v17, v16[34], (struct CVisual *)v16);
    CBaseObject::Release((CBaseObject *)v16);
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
    *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
    if ( *((_BYTE *)this + 324) || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
    {
      v18 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v18 + v9 + 48) && !*(_QWORD *)(v18 + v9 + 96) )
      {
        Touch = CreateTouchVisual<CDirectTouchVisual>(
                  *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v30,
                  (CDirectTouchVisual **)(v9 + v18 + 48));
        v5 = Touch;
        if ( Touch < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x43Cu);
          goto LABEL_6;
        }
        CContactManager::AddToTouchNode(v20, v30, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
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
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return (unsigned int)v5;
}
