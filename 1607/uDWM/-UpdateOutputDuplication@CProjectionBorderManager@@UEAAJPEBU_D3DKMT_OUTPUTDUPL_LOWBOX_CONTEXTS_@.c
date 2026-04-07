/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x1800335A8 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007C744 (-Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007C8EC (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007C968 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007CA60 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x18007CF00 (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x18007CF64 (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007CFE8 (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x18007D1FC (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18007D2C4 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        CProjectionBorderManager *this,
        const struct _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_ *a2)
{
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // r14d
  unsigned int i; // esi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rbx
  const struct _LUID *v12; // r15
  char v13; // r13
  __int64 v14; // rax
  struct IDwmChannel *v15; // rcx
  int v16; // eax
  _QWORD *v17; // r15
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rbx
  struct CVisual *OverlayRootVisualForDesktop; // r14
  struct CVisual *v25; // rdx
  __int64 v26; // rcx
  int inserted; // eax
  char v28; // cl
  int v29; // ebx
  __int64 v30; // r15
  int v31; // [rsp+30h] [rbp-49h]
  unsigned __int64 v32; // [rsp+38h] [rbp-41h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+40h] [rbp-39h] BYREF
  RECT rc1; // [rsp+48h] [rbp-31h] BYREF
  __m256i v35; // [rsp+58h] [rbp-21h] BYREF
  __int128 v36; // [rsp+78h] [rbp-1h]
  __int64 v37; // [rsp+88h] [rbp+Fh]

  if ( *(_DWORD *)a2 > 0x10u )
    return 2147942487LL;
  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = 0;
  for ( i = -1; v6 < *((_DWORD *)this + 106); *(_BYTE *)(56 * v9 + *((_QWORD *)this + 50) + 48) = 0 )
  {
    v9 = v6++;
    v5 = (CProjectionBorderManager *)(56 * v9);
  }
  v10 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)a2 )
  {
    while ( 1 )
    {
      v11 = 3 * v10;
      *(_QWORD *)&rc1.left = 0LL;
      *(_QWORD *)&rc1.right = 0LL;
      v12 = (const struct _LUID *)((char *)a2 + 24 * v10);
      if ( (int)CProjectionBorderManager::_GetAdapterDisplayRect(v5, v12 + 2, v12[3].LowPart, &rc1) >= 0 )
        break;
      WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor();
LABEL_33:
      v10 = (unsigned int)(v10 + 1);
      v31 = v10;
      if ( (unsigned int)v10 >= *(_DWORD *)a2 )
        goto LABEL_34;
    }
    i = CProjectionBorderManager::_FindProjectionVisualByAdapter(this, v12 + 2, *((_DWORD *)a2 + 6 * v10 + 6));
    if ( i == -1 )
      i = CProjectionBorderManager::_FindProjectionVisualByRect(this, &rc1);
    if ( !(unsigned int)GetDesktopID(1LL, &v32) )
    {
LABEL_32:
      i = -1;
      goto LABEL_33;
    }
    v13 = 0;
    if ( i == -1 )
    {
      v14 = (__int64)v12[2];
      v15 = (struct IDwmChannel *)*((_QWORD *)this + 54);
      v35.m256i_i64[0] = 0LL;
      v35.m256i_i64[3] = v14;
      LODWORD(v36) = *((_DWORD *)a2 + 2 * v11 + 6);
      *((_QWORD *)&v36 + 1) = v32;
      LOBYTE(v37) = 1;
      *(RECT *)&v35.m256i_u64[1] = rc1;
      v16 = CProjectionBorderVisual::Create(v15, (struct CProjectionBorderVisual **)&v35);
      v7 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x82u);
        goto LABEL_43;
      }
      v17 = (_QWORD *)((char *)this + 400);
      v18 = *((unsigned int *)this + 106);
      v19 = v18 + 1;
      if ( (int)v18 + 1 < (unsigned int)v18 )
      {
        v22 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v7 = -2147024362;
LABEL_45:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x84u);
        goto LABEL_43;
      }
      if ( v19 > *((_DWORD *)this + 105) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 400, 0x38u, 1, &v35);
        v22 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xC0u);
        v7 = v22;
        if ( v22 < 0 )
          goto LABEL_45;
      }
      else
      {
        v20 = *v17 + 56 * v18;
        *(__m256i *)v20 = v35;
        *(_OWORD *)(v20 + 32) = v36;
        *(_QWORD *)(v20 + 48) = v37;
        *((_DWORD *)this + 106) = v19;
      }
      v13 = 1;
      i = *((_DWORD *)this + 106) - 1;
    }
    else
    {
      v17 = (_QWORD *)((char *)this + 400);
      v23 = 56LL * i;
      *(_BYTE *)(v23 + *((_QWORD *)this + 50) + 48) = 1;
      if ( !EqualRect(&rc1, (const RECT *)(v23 + *((_QWORD *)this + 50) + 8LL)) )
      {
        v13 = 1;
        *(RECT *)(v23 + *v17 + 8) = rc1;
      }
      if ( v32 == *(_QWORD *)(v23 + *v17 + 40) )
      {
LABEL_29:
        if ( v13 )
        {
          CProjectionBorderVisual::UpdateRect(
            *(CProjectionBorderVisual **)(v23 + *v17),
            (const struct tagRECT *)(v23 + *v17 + 8LL));
          CVisual::SetOpacity(*(CVisual **)(v23 + *v17), 1.0);
          CVisual::RenderRecursive(*(CVisual **)(*(_QWORD *)(v23 + *v17) + 24LL));
        }
        WindowFrameLoggingTelemetry::ScreenDuplicationEnabled();
        LODWORD(v10) = v31;
        goto LABEL_32;
      }
      *(_QWORD *)(v23 + *v17 + 40) = v32;
    }
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                                    v32,
                                    1);
    if ( !OverlayRootVisualForDesktop )
    {
      OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                                      v32);
      if ( !OverlayRootVisualForDesktop )
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xA6u);
        goto LABEL_41;
      }
    }
    v23 = 56LL * i;
    v25 = *(struct CVisual **)(v23 + *v17);
    v26 = *((_QWORD *)v25 + 3);
    if ( v26 )
      VisualCollection::Remove((VisualCollection *)(v26 + 32), v25);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                 *(struct CVisual **)(v23 + *v17),
                 0LL,
                 0,
                 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0xAEu);
      goto LABEL_41;
    }
    goto LABEL_29;
  }
LABEL_34:
  v28 = 0;
  v29 = *((_DWORD *)this + 106) - 1;
  if ( v29 >= 0 )
  {
    v30 = 56LL * v29;
    do
    {
      if ( !*(_BYTE *)(v30 + *((_QWORD *)this + 50) + 48) )
      {
        CProjectionBorderManager::_RemoveVisualByIndex(this, v29);
        v28 = 1;
      }
      v30 -= 56LL;
      --v29;
    }
    while ( v29 >= 0 );
    if ( v28 )
    {
      WindowFrameLoggingTelemetry::ScreenDuplicationDisabled();
LABEL_41:
      if ( i != -1 )
        CProjectionBorderManager::_RemoveVisualByIndex(this, i);
    }
  }
LABEL_43:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return v7;
}
