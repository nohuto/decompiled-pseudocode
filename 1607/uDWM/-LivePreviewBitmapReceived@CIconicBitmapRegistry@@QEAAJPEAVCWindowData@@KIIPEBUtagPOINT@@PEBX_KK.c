/*
 * XREFs of ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180077F58
 * Callers:
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081EAC (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000503C (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180033858 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180038444 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qp @ 0x180075F2C (Template_qp.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180080C90 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180080F5C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x180082CB0 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::LivePreviewBitmapReceived(
        unsigned __int64 this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINT *a6,
        void *a7,
        unsigned __int64 a8,
        char a9)
{
  struct CBitmapSource *v9; // r14
  CIconicBitmapRegistry *v13; // rsi
  unsigned __int64 v14; // rax
  struct CWindowData *MDIOwner; // rbx
  int WindowRestoreRect; // eax
  unsigned int v17; // edi
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  const struct tagPOINT *v26; // rax
  bool v27; // bl
  unsigned __int8 v28; // r8
  __int64 v29; // rcx
  unsigned int v31; // [rsp+20h] [rbp-68h]
  struct CBitmapSource *v32; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v33; // [rsp+48h] [rbp-40h] BYREF
  DWORD v34; // [rsp+98h] [rbp+10h] BYREF

  v9 = 0LL;
  v32 = 0LL;
  v13 = (CIconicBitmapRegistry *)this;
  if ( (*((_BYTE *)a2 + 578) & 1) == 0
    || (this = a5 * (unsigned __int64)a4, this > 0xFFFFFFFF)
    || (v14 = 4LL * (unsigned int)this, v14 > 0xFFFFFFFF)
    || a8 < (unsigned int)v14
    || !GetWindowThreadProcessId(*((HWND *)a2 + 5), &v34)
    || a3 != v34 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(this, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v31 = 641;
    goto LABEL_47;
  }
  MDIOwner = CWindowData::GetMDIOwner(a2);
  if ( !MDIOwner )
    MDIOwner = a2;
  WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, &v33, 0);
  v17 = WindowRestoreRect;
  if ( WindowRestoreRect < 0 )
  {
    MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, WindowRestoreRect, 0x28Cu);
    return v17;
  }
  v18 = v33.right - v33.left;
  v19 = *((_QWORD *)MDIOwner + 51);
  if ( v33.right - v33.left < 0 )
    v18 = 0;
  v20 = v33.bottom - v33.top;
  if ( v33.bottom - v33.top < 0 )
    v20 = 0;
  if ( v19 )
  {
    v19 = *(_QWORD *)(v19 + 32);
    v21 = *(_DWORD *)(v19 + 56) - *(_DWORD *)(v19 + 48);
    if ( v21 < 0 )
      v21 = 0;
    if ( v18 <= v21 )
      v18 = v21;
    v22 = *(_DWORD *)(v19 + 60) - *(_DWORD *)(v19 + 52);
    if ( v22 < 0 )
      v22 = 0;
    if ( v20 <= v22 )
      v20 = v22;
  }
  if ( a4 > v18 || a5 > v20 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(v19, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v31 = 663;
LABEL_47:
    v17 = -2147024809;
    MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, -2147024809, v31);
    return v17;
  }
  v23 = *((_QWORD *)v13 + 12);
  if ( v23 && *(struct CWindowData **)(v23 + 72) == a2 )
  {
    v24 = CBitmapSource::Create(
            a4,
            a5,
            a4,
            a5,
            a7,
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v32);
    v17 = v24;
    if ( v24 >= 0 )
    {
      if ( *((_BYTE *)v13 + 89) )
      {
        v25 = CIconicBitmapRegistry::RequestBitmap(v13, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
        v17 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, v25, 0x2A8u);
      }
      v26 = a6;
      v27 = *((_BYTE *)v13 + 88) == 0;
      v9 = v32;
      v28 = a9 & 1;
      *(_WORD *)((char *)v13 + 89) = 0;
      *((_BYTE *)v13 + 88) = 1;
      *((struct tagPOINT *)v13 + 13) = *v26;
      CWindowIconic::SetBitmap(*((CWindowIconic **)v13 + 12), v9, v28, 1);
      if ( v27 )
        CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v13 + 12));
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_qp(v29, (__int64)&UdwmManageIconicThumbnail_Info, 0, *((_QWORD *)a2 + 5));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, v24, 0x2A3u);
      v9 = v32;
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      return v17;
    Template_qp(v19, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
  }
  if ( v9 )
    CBaseObject::Release(v9);
  return v17;
}
