/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18007FDA8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002FEE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180046DA4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047610 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047664 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTetherVisual@@@Z @ 0x18007D648 (--$CreateTouchVisual@VCTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180081F14 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180086BB0 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x180086CA0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800871CC (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  CBaseObject *v4; // rbx
  int v5; // esi
  int v6; // edx
  __int64 v7; // r8
  __int64 v9; // rdi
  CTetherVisual *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  int updated; // eax
  unsigned __int64 *v17; // r15
  CContactManager *v18; // rcx
  __int64 v19; // rcx
  int Touch; // eax
  CContactManager *v21; // rcx
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // edx
  CBaseObject *v25; // rcx
  int v26; // eax
  unsigned __int64 *v27; // r15
  CContactManager *v28; // rcx
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
    if ( !*(_QWORD *)(v7 + v9 + 72) )
    {
      v5 = -2147024809;
      goto LABEL_48;
    }
    v32 = *(_QWORD *)(v7 + v9 + 72);
    v23 = *((_DWORD *)this + 44);
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      goto LABEL_45;
    }
    if ( v24 > *((_DWORD *)this + 43) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v32);
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xC0u);
LABEL_45:
        v27 = *(unsigned __int64 **)(v9 + *((_QWORD *)this + 7) + 72);
        if ( v27 )
        {
          (*(void (__fastcall **)(unsigned __int64 *))(*v27 + 184))(v27);
          CContactManager::RemoveFromTouchNode(v28, v27[34], (struct CVisual *)v27);
        }
        goto LABEL_41;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v32;
      *((_DWORD *)this + 44) = v24;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) + 8LL));
    CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v9 + *((_QWORD *)this + 7) + 72));
LABEL_41:
    v25 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
    goto LABEL_6;
  }
  v10 = *(CTetherVisual **)(v7 + v9 + 72);
  if ( v10 )
  {
    CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
    goto LABEL_6;
  }
  v11 = CreateTouchVisual<CTetherVisual>(
          *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v30,
          &v31);
  v5 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x3C9u);
    v4 = v31;
    goto LABEL_48;
  }
  v4 = v31;
  v13 = CContactManager::AddToTouchNode(v12, v30, v31);
  v5 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x3CAu);
LABEL_48:
    if ( v4 )
      CBaseObject::Release(v4);
    goto LABEL_6;
  }
  v15 = *((_QWORD *)this + 7);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v14, (__int64)&UdwmTetherVisual_Start);
  *((_BYTE *)v4 + 400) = 1;
  updated = CTetherVisual::UpdatePosition(
              v4,
              (const struct tagPOINT *)((char *)a2 + 12),
              (const struct tagPOINT *)(v9 + v15 + 8));
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x13Eu);
    CTetherVisual::Stop(v4);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x3CBu);
    goto LABEL_48;
  }
  *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = v4;
  v17 = *(unsigned __int64 **)(v9 + *((_QWORD *)this + 7) + 88);
  if ( v17 )
  {
    (*(void (__fastcall **)(unsigned __int64 *))(*v17 + 184))(v17);
    CContactManager::RemoveFromTouchNode(v18, v17[34], (struct CVisual *)v17);
    CBaseObject::Release((CBaseObject *)v17);
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
    *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
    if ( *((_BYTE *)this + 324) || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
    {
      v19 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v19 + v9 + 48) && !*(_QWORD *)(v19 + v9 + 96) )
      {
        Touch = CreateTouchVisual<CDirectTouchVisual>(
                  *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v30,
                  (CTouchVisual **)(v9 + v19 + 48));
        v5 = Touch;
        if ( Touch < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x3DDu);
          goto LABEL_6;
        }
        CContactManager::AddToTouchNode(v21, v30, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
      }
      if ( *((_BYTE *)this + 324) )
        v22 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
      else
        v22 = *(unsigned int *)(v9 + *((_QWORD *)this + 7) + 40);
      CDirectTouchVisual::StartDown(
        *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 48),
        v9 + *((_QWORD *)this + 7) + 8LL,
        v9 + *((_QWORD *)this + 7) + 24LL,
        v22);
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return (unsigned int)v5;
}
