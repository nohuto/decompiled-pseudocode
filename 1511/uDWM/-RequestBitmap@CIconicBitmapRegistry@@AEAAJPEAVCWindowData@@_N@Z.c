/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18003CBD4
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DC50 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18003CCFC (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180075D38 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18007667C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180076780 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800772B4 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180021844 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003CA94 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18003CC90 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     Template_qp @ 0x180074068 (Template_qp.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007749C (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2, char a3)
{
  char *v3; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v8; // esi
  unsigned int v9; // ecx
  char v10; // r14
  struct CWindowData **v13; // rax
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // ebx
  __int64 v18; // rcx
  HWND v19; // rbx
  LPARAM v20; // r9
  UINT v21; // edx
  WPARAM v22; // r8
  int v23; // eax
  int IdealIconicThumbnailSize; // eax
  char IsImmersiveWindow; // al
  CDesktopManager *v26; // rcx
  int started; // eax
  __int128 v28; // [rsp+30h] [rbp-38h] BYREF
  struct tagSIZE v29; // [rsp+70h] [rbp+8h] BYREF

  v3 = (char *)this + 48;
  v5 = *((_QWORD *)this + 6);
  v6 = 0;
  v8 = 0;
  v9 = *((_DWORD *)this + 18);
  v10 = 0;
  if ( v9 )
  {
    v13 = (struct CWindowData **)(v5 + 8);
    do
    {
      if ( *v13 == a2 )
        break;
      ++v6;
      v13 += 2;
    }
    while ( v6 < v9 );
  }
  if ( v6 < v9 )
  {
    v10 = 1;
    v14 = DynArray<CIconicBitmapPending,0>::RemoveAt(v3);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x136u);
  }
  if ( !a3 )
  {
    if ( v10 )
    {
      if ( a2 == (struct CWindowData *)-1LL )
        *((_BYTE *)this + 89) = 0;
      else
        CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = *((_DWORD *)this + 18) != 0;
    }
    return v8;
  }
  *((_QWORD *)&v28 + 1) = a2;
  v15 = *((unsigned int *)v3 + 6);
  v16 = v15 + 1;
  *(double *)&v28 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 31) + 10.0;
  if ( (int)v15 + 1 < (unsigned int)v15 )
  {
    v17 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v8 = -2147024362;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x13Fu);
    return v8;
  }
  v8 = 0;
  if ( v16 > *((_DWORD *)v3 + 5) )
  {
    v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 0x10u, 1, &v28);
    v17 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0xC0u);
    v8 = v17;
    if ( v17 < 0 )
      goto LABEL_22;
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v3 + 16 * v15) = v28;
    *((_DWORD *)v3 + 6) = v16;
  }
  if ( a2 != (struct CWindowData *)-1LL )
  {
    CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 1);
    if ( v10 )
      goto LABEL_28;
    IdealIconicThumbnailSize = DwmGetIdealIconicThumbnailSize(*((_DWORD *)a2 + 76) != 0, &v29);
    v19 = (HWND)*((_QWORD *)a2 + 5);
    if ( !IdealIconicThumbnailSize || !v19 )
      goto LABEL_28;
    IsImmersiveWindow = CWindowData::IsImmersiveWindow(a2);
    v21 = 803;
    v22 = (unsigned __int64)v19 & -(__int64)(IsImmersiveWindow != 0);
    v20 = LOWORD(v29.cy) | (LOWORD(v29.cx) << 16);
    goto LABEL_27;
  }
  v18 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
  v19 = *(HWND *)(v18 + 40);
  *((_BYTE *)this + 89) = 1;
  if ( !v10 )
  {
    v20 = 0LL;
    v21 = 806;
    v22 = 0LL;
LABEL_27:
    PostMessageW(v19, v21, v22, v20);
  }
LABEL_28:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v18, &UdwmManageIconicThumbnail_Info, 3LL);
  v26 = CDesktopManager::s_pDesktopManagerInstance;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
  {
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = 1;
    started = CDesktopManager::PostStartAnimations(v26);
    v8 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x161u);
  }
  return v8;
}
