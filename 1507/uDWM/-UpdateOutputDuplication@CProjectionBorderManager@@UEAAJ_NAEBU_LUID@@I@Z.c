/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x180073E50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180029650 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029B3C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?Create@CProjectionBorderVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800737EC (-Create@CProjectionBorderVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073984 (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073AB4 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073D14 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x18007419C (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x1800741FC (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007427C (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800744B4 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18007454C (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        struct MIL_CHANNEL__ **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  unsigned int v8; // esi
  CProjectionBorderManager *v9; // rcx
  bool v10; // bl
  int ProjectionVisualByAdapter; // edi
  __int64 v12; // rax
  struct MIL_CHANNEL__ *v13; // rcx
  int inserted; // eax
  _QWORD *v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // r14d
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  struct CVisual *OverlayRootVisualForDesktop; // rsi
  __int64 v24; // r14
  struct CVisual *v25; // rdx
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-49h]
  unsigned __int64 v29; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-31h]
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+40h] [rbp-29h] BYREF
  RECT rc1; // [rsp+48h] [rbp-21h] BYREF
  __m256i v33; // [rsp+58h] [rbp-11h] BYREF
  __int128 v34; // [rsp+78h] [rbp+Fh]

  v30 = a4;
  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_QWORD *)&rc1.left = 0LL;
  *(_QWORD *)&rc1.right = 0LL;
  v8 = 0;
  v10 = (int)CProjectionBorderManager::_GetAdapterDisplayRect(v9, a3, a4, &rc1) >= 0;
  ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByAdapter(
                                (CProjectionBorderManager *)this,
                                a3,
                                a4);
  if ( ProjectionVisualByAdapter == -1 && v10 )
    ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByRect(
                                  (CProjectionBorderManager *)this,
                                  &rc1);
  if ( !a2 )
  {
    if ( ProjectionVisualByAdapter != -1 )
    {
      CProjectionBorderManager::_RemoveVisualByIndex((CProjectionBorderManager *)this, ProjectionVisualByAdapter);
      WindowFrameLoggingTelemetry::ScreenDuplicationDisabled();
      goto LABEL_39;
    }
    goto LABEL_36;
  }
  if ( !v10 )
  {
LABEL_36:
    WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor();
    goto LABEL_37;
  }
  if ( !(unsigned int)GetDesktopID(1LL, &v29) )
    goto LABEL_37;
  if ( ProjectionVisualByAdapter >= 0 )
  {
    v15 = this + 1;
    v21 = 48LL * (unsigned int)ProjectionVisualByAdapter;
    if ( !EqualRect(&rc1, (const RECT *)((char *)this[1] + v21 + 8)) )
      *(RECT *)(v21 + *v15 + 8) = rc1;
    v22 = v29;
    if ( v29 == *(_QWORD *)(v21 + *v15 + 40) )
      goto LABEL_26;
    *(_QWORD *)(v21 + *v15 + 40) = v29;
LABEL_25:
    v22 = v29;
LABEL_26:
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                    v22,
                                    1);
    if ( !OverlayRootVisualForDesktop )
    {
      OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                      v29);
      if ( !OverlayRootVisualForDesktop )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x87u);
        goto LABEL_37;
      }
    }
    v24 = 48LL * (unsigned int)ProjectionVisualByAdapter;
    v25 = *(struct CVisual **)(v24 + *v15);
    v26 = *((_QWORD *)v25 + 3);
    if ( v26 )
      VisualCollection::Remove((VisualCollection *)(v26 + 32), v25);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                 *(struct CVisual **)(v24 + *v15),
                 0LL,
                 0,
                 1);
    v8 = inserted;
    if ( inserted >= 0 )
    {
      CProjectionBorderVisual::UpdateRect(
        *(CProjectionBorderVisual **)(v24 + *v15),
        (const struct tagRECT *)(v24 + *v15 + 8LL));
      CVisual::SetOpacity(*(CVisual **)(v24 + *v15), 1.0);
      CVisual::RenderRecursive(*(CVisual **)(*(_QWORD *)(v24 + *v15) + 24LL));
      ProjectionVisualByAdapter = -1;
      WindowFrameLoggingTelemetry::ScreenDuplicationEnabled();
      goto LABEL_37;
    }
    v28 = 143;
    goto LABEL_10;
  }
  v12 = (__int64)*a3;
  v13 = this[5];
  v33.m256i_i64[0] = 0LL;
  v33.m256i_i64[3] = v12;
  LODWORD(v34) = v30;
  *((_QWORD *)&v34 + 1) = v29;
  *(RECT *)&v33.m256i_u64[1] = rc1;
  inserted = CProjectionBorderVisual::Create(v13, (struct CProjectionBorderVisual **)&v33);
  v8 = inserted;
  if ( inserted >= 0 )
  {
    v15 = this + 1;
    v16 = *((unsigned int *)this + 8);
    v17 = v16 + 1;
    if ( (int)v16 + 1 < (unsigned int)v16 )
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v8 = -2147024362;
LABEL_20:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x6Au);
      goto LABEL_37;
    }
    if ( v17 > *((_DWORD *)this + 7) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 1), 0x30u, 1, &v33);
      v18 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xC0u);
      v8 = v18;
      if ( v18 < 0 )
        goto LABEL_20;
    }
    else
    {
      v19 = *v15 + 48 * v16;
      *(__m256i *)v19 = v33;
      *(_OWORD *)(v19 + 32) = v34;
      *((_DWORD *)this + 8) = v17;
    }
    ProjectionVisualByAdapter = *((_DWORD *)this + 8) - 1;
    goto LABEL_25;
  }
  v28 = 104;
LABEL_10:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, v28);
LABEL_37:
  if ( ProjectionVisualByAdapter != -1 )
    CProjectionBorderManager::_RemoveVisualByIndex((CProjectionBorderManager *)this, ProjectionVisualByAdapter);
LABEL_39:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v8;
}
