/*
 * XREFs of ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18002D520
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000E7FC (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18000EA8C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?OnMouseLeftButton@CButton@@UEAAX_N@Z @ 0x180010840 (-OnMouseLeftButton@CButton@@UEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180028284 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180028330 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800283E0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18009E854 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CWindowList::HitTestQuery(CWindowList *this, struct MILCMD_DWM_REDIRECTION_HITTESTQUERY *a2)
{
  int v3; // r12d
  unsigned int v4; // r15d
  int v5; // r13d
  struct CWindowData *v6; // r14
  struct IDwmWindow *v7; // rax
  int SyncedWindowData; // eax
  __int64 v9; // rdi
  int v10; // eax
  struct CVisual *v11; // rbx
  LONG v12; // r15d
  LONG v13; // r14d
  bool v14; // zf
  unsigned int v15; // r14d
  CBaseObject *v16; // r14
  __int64 v17; // r12
  CButton *v18; // rbx
  void (__fastcall *v19)(CButton *, char); // rdi
  struct CVisual *v21; // rdx
  float *v22; // rdx
  unsigned __int8 v23; // [rsp+30h] [rbp-59h]
  unsigned int v24; // [rsp+34h] [rbp-55h] BYREF
  struct tagPOINT v25; // [rsp+38h] [rbp-51h] BYREF
  CWindowList *v26; // [rsp+40h] [rbp-49h] BYREF
  struct CVisual *v27; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-39h]
  struct CWindowData *v29; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v30[64]; // [rsp+60h] [rbp-29h] BYREF

  v26 = this;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  v27 = *(struct CVisual **)((char *)a2 + 4);
  v4 = -2;
  v24 = -2;
  v5 = 0;
  v29 = 0LL;
  v6 = 0LL;
  if ( v27 )
  {
    v7 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD, struct CVisual *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                     + 6)
                                                                                  + 8LL))(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                v27);
    if ( v7 )
    {
      SyncedWindowData = CWindowList::GetSyncedWindowData(v26, v7, 0, &v29);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x5D7u);
      v6 = v29;
    }
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x156Cu);
    goto LABEL_34;
  }
  if ( v6 )
  {
    v9 = *((_QWORD *)v6 + 48);
    if ( v9 )
    {
      v23 = 1;
      if ( (*((_BYTE *)a2 + 24) & 1) == 0 )
      {
        v10 = *((_DWORD *)a2 + 3);
        if ( v10 != 513 && v10 != 161 )
          v23 = 0;
      }
      v11 = 0LL;
      v28 = *((_DWORD *)a2 + 10);
      v25 = (struct tagPOINT)*((_QWORD *)a2 + 2);
      v12 = v25.y - *(_DWORD *)(v9 + 108);
      v13 = v25.x - *(_DWORD *)(v9 + 104);
      v14 = (*(_BYTE *)(v9 + 84) & 2) == 0;
      v27 = 0LL;
      v25.x = v13;
      v25.y = v12;
      if ( !v14 )
      {
        CVisual::GetCurrentTransform((CVisual *)v9, (struct D2DMatrix *)v30);
        if ( !D2DMatrixInverse((struct D2DMatrix *)v30, v22, (const struct D2DMatrix *)v30) )
        {
          v4 = 0;
          v24 = 0;
          goto LABEL_15;
        }
        *(float *)&v26 = (float)v13;
        *((float *)&v26 + 1) = (float)v12;
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v26,
          (const struct D2DVector2 *)&v26,
          (const struct D2DMatrix *)v30);
        v25.y = (int)*((float *)&v26 + 1);
        v25.x = (int)*(float *)&v26;
      }
      CTopLevelWindow::DoHitTest((CTopLevelWindow *)v9, &v25, &v27, &v24);
      v4 = v24;
      v11 = v27;
LABEL_15:
      v15 = v28;
      CTopLevelWindow::UpdateCapturedButton((CTopLevelWindow *)v9, v28);
      if ( *(_QWORD *)(v9 + 760) )
      {
        v21 = 0LL;
        if ( v15 == v4 )
          v21 = *(struct CVisual **)(v9 + 760);
        CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)v9, v21);
      }
      else
      {
        if ( v11 == (struct CVisual *)v9 )
        {
          v11 = 0LL;
          v27 = 0LL;
        }
        v16 = *(CBaseObject **)(v9 + 752);
        if ( v11 != v16 )
        {
          *(_QWORD *)(v9 + 752) = v11;
          if ( v11 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
            v4 = v24;
          }
          if ( v16 )
            (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v16 + 96LL))(v16);
          v17 = *(_QWORD *)(v9 + 752);
          if ( v17 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 88LL))(*(_QWORD *)(v9 + 752));
          if ( v16 )
            CBaseObject::Release(v16);
          v3 = 0;
        }
      }
      v18 = *(CButton **)(v9 + 752);
      if ( v18 )
      {
        v19 = *(void (__fastcall **)(CButton *, char))(*(_QWORD *)v18 + 104LL);
        if ( v19 == CButton::OnMouseLeftButton )
          CButton::OnMouseLeftButton(v18, v23);
        else
          v19(v18, v23);
      }
    }
  }
  *((_DWORD *)a2 + 11) = v4;
  if ( v4 != -2 )
    v3 = 1;
  *((_DWORD *)a2 + 12) = v3;
LABEL_34:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
