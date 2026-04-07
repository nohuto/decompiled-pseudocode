/*
 * XREFs of ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800219FC
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180021C48 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180044774 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180020EEC (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x180021CB4 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateRenderTargets(CDesktopManager *this)
{
  signed int v1; // edi
  int v3; // eax
  _QWORD *v4; // rbx
  __int64 v5; // r12
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // r14d
  signed int LastError; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-20h]
  LPARAM dwData[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0;
  v18 = 0LL;
  v17 = 0LL;
  if ( !*((_QWORD *)this + 9) )
    return (unsigned int)v1;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 23))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
         &GUID_e669f781_4574_4472_86e9_d79eddfd50a4,
         &v18);
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x367u);
    goto LABEL_18;
  }
  CDesktopManager::ReleaseRenderTarget(this);
  LODWORD(dwData[0]) = 0;
  v4 = (_QWORD *)((char *)this + 120);
  *((_DWORD *)this + 36) = 0;
  dwData[1] = (LPARAM)this;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 8LL);
  SetLastError(0);
  if ( !EnumDisplayMonitors(0LL, 0LL, CDesktopManager::MonitorEnumProc, (LPARAM)dwData) )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    if ( v1 >= 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x34Cu);
    goto LABEL_29;
  }
  v1 = dwData[0];
  if ( SLODWORD(dwData[0]) < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, dwData[0], 0x350u);
LABEL_29:
    v15 = 874;
    v14 = v1;
LABEL_39:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, v15);
    goto LABEL_18;
  }
  v5 = 0LL;
  if ( *((_DWORD *)this + 36) )
  {
    while ( 1 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v18 + 424LL))(
             v18,
             66584LL,
             *(_QWORD *)(*v4 + 8 * v5),
             0LL,
             &v17);
      v1 = v6;
      if ( v6 < 0 )
        break;
      v7 = *((_DWORD *)this + 28);
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v1 = -2147024362;
LABEL_33:
        v15 = 879;
        v14 = v10;
        goto LABEL_39;
      }
      v1 = 0;
      if ( v8 <= *((_DWORD *)this + 27) )
      {
        *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 28)) = v17;
        *((_DWORD *)this + 28) = v8;
      }
      else
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 88, 8LL, 1LL, &v17);
        v10 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xC0u);
        v1 = v10;
        if ( v10 < 0 )
          goto LABEL_33;
      }
      v17 = 0LL;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)this + 36) )
        goto LABEL_13;
      v4 = (_QWORD *)((char *)this + 120);
    }
    v15 = 878;
    goto LABEL_38;
  }
LABEL_13:
  v11 = *((_DWORD *)this + 28);
  if ( v11 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v18 + 432LL))(
           v18,
           *((_QWORD *)this + 11),
           v11,
           (char *)this + 80);
    v1 = v6;
    if ( v6 < 0 )
    {
      v15 = 885;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 40LL))(
             *((_QWORD *)this + 9),
             *((_QWORD *)this + 10));
      v1 = v6;
      if ( v6 < 0 )
      {
        v15 = 886;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 23) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23));
        v1 = v6;
        if ( v6 >= 0 )
        {
          CDesktopManager::UpdateMaxTextureSize(this);
          goto LABEL_18;
        }
        v15 = 888;
      }
    }
LABEL_38:
    v14 = v6;
    goto LABEL_39;
  }
LABEL_18:
  if ( v1 < 0 )
  {
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v17 = 0LL;
    }
    CDesktopManager::ReleaseRenderTarget(this);
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v1;
}
