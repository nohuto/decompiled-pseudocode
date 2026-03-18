/*
 * XREFs of ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800809B0
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180074220 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180024450 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180027F80 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18002829C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x180072D14 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180072F94 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x1800743F0 (-ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180080740 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18014AF0C (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Present(
        CHwDisplayRenderTarget *this,
        char a2,
        char a3,
        struct RenderTargetPresentParameters *a4)
{
  __int64 v4; // r14
  CHwDisplayRenderTarget *v7; // r13
  __int64 v8; // rdx
  CHwFullScreenRenderTarget *v9; // r12
  __int64 (__fastcall *v10)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rbx
  int ShouldPresent; // eax
  int v12; // esi
  HRGN v13; // rcx
  int *v14; // r15
  CSwapChainBase *v15; // rcx
  bool v16; // sf
  unsigned __int32 v17; // ecx
  volatile __int32 *v18; // r8
  volatile unsigned int v19; // ecx
  unsigned int v20; // edx
  HRGN v21; // r12
  CD3DResourceManager *v22; // rsi
  unsigned int v23; // r15d
  HRGN *v24; // r13
  unsigned int v25; // r14d
  int v26; // ebx
  _QWORD *v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  CD3DDeviceLevel1 *v30; // r15
  struct _LUID v31; // rcx
  __int64 v32; // rdx
  CMILPoolResource *v33; // rcx
  int BackBuffer; // eax
  int v35; // ebx
  void (__fastcall *v36)(CHwFullScreenRenderTarget *); // rbx
  bool v39[4]; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-45h] BYREF
  int v41; // [rsp+38h] [rbp-41h] BYREF
  __int64 v42; // [rsp+40h] [rbp-39h]
  unsigned int v43; // [rsp+48h] [rbp-31h]
  unsigned int v44; // [rsp+4Ch] [rbp-2Dh]
  HRGN v45; // [rsp+50h] [rbp-29h]
  CSwapChainBase *v46; // [rsp+58h] [rbp-21h]
  CHwDisplayRenderTarget *v47; // [rsp+60h] [rbp-19h]
  HWND hWnd; // [rsp+68h] [rbp-11h]
  CD3DDeviceLevel1 *v49; // [rsp+70h] [rbp-9h]
  struct RenderTargetPresentParameters *v50; // [rsp+78h] [rbp-1h]
  __int64 v51; // [rsp+80h] [rbp+7h]
  struct tagRECT rc; // [rsp+88h] [rbp+Fh] BYREF

  v4 = *((_QWORD *)this - 2);
  v40 = 0;
  v39[0] = 0;
  v7 = this;
  v50 = a4;
  ++*(_DWORD *)(v4 + 504);
  v47 = this;
  v42 = v4;
  v51 = v4;
  *(_DWORD *)(v4 + 508) = GetCurrentThreadId();
  v9 = (CHwDisplayRenderTarget *)((char *)v7 - 176);
  v10 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, char, bool *, unsigned int *))(*((_QWORD *)v7 - 22) + 224LL);
  if ( v10 == CHwDisplayRenderTarget::ShouldPresent )
  {
    ShouldPresent = CHwDisplayRenderTarget::ShouldPresent((CHwDisplayRenderTarget *)((char *)v7 - 176), a2, v39, &v40);
  }
  else
  {
    LOBYTE(v8) = a2;
    ShouldPresent = v10((CHwDisplayRenderTarget *)((char *)v7 - 176), v8, v39, &v40);
  }
  v12 = ShouldPresent;
  if ( ShouldPresent < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShouldPresent, 0x2F5u);
    goto LABEL_68;
  }
  if ( a3 )
    v40 |= 0x80u;
  if ( v39[0] )
  {
    v13 = (HRGN)*((_QWORD *)v9 + 40);
    v45 = 0LL;
    if ( v13 && GetRgnBox(v13, &rc) != 1 )
      v45 = (HRGN)*((_QWORD *)v7 + 18);
    v14 = (int *)*((_QWORD *)v9 + 20);
    v15 = (CSwapChainBase *)*((_QWORD *)v9 + 26);
    v43 = v40;
    v16 = v14[200] < 0;
    v44 = *((_DWORD *)v9 + 74);
    hWnd = (HWND)*((_QWORD *)v9 + 38);
    v46 = v15;
    v49 = (CD3DDeviceLevel1 *)v14;
    if ( v16 )
    {
      CD3DDeviceLevel1::ProcessUnusable((CD3DDeviceLevel1 *)v14, 0);
      v12 = v14[200];
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB46u);
LABEL_59:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x702u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x318u);
LABEL_68:
        if ( v39[0] && (v40 & 2) == 0 )
        {
          v36 = *(void (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)v9 + 240LL);
          if ( v36 == CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion )
            CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion(v9);
          else
            v36(v9);
        }
        v4 = v42;
        goto LABEL_74;
      }
      goto LABEL_60;
    }
    if ( g_pMediaControl )
    {
      v17 = v14[253];
      v18 = (volatile __int32 *)*((_QWORD *)g_pMediaControl + 2);
      if ( v17 )
      {
        _InterlockedExchange(v18 + 8, v17);
        _InterlockedExchangeAdd(v18 + 10, v17);
        if ( *((_DWORD *)v18 + 9) > v17 )
          v17 = *((_DWORD *)v18 + 9);
        _InterlockedExchange(v18 + 9, v17);
      }
      v19 = g_dwTextureUpdatesPerFrame;
      _InterlockedExchange(v18 + 14, g_dwTextureUpdatesPerFrame);
      _InterlockedExchangeAdd(v18 + 16, v19);
      if ( *((_DWORD *)v18 + 15) > v19 )
        v19 = *((_DWORD *)v18 + 15);
      _InterlockedExchange(v18 + 15, v19);
      v20 = g_lPixelsFilledPerFrame;
      _InterlockedExchange(v18 + 11, g_lPixelsFilledPerFrame);
      _InterlockedExchangeAdd(v18 + 13, v20);
      if ( *((_DWORD *)v18 + 12) > v20 )
        v20 = *((_DWORD *)v18 + 12);
      _InterlockedExchange(v18 + 12, v20);
      v14[252] = 0;
      v14[253] = 0;
    }
    v21 = v45;
    v22 = (CD3DResourceManager *)(v14 + 212);
    v23 = v44;
    v24 = (HRGN *)v46;
    v25 = v43;
    while ( 1 )
    {
      v41 = CSwapChainBase::Present(v24, v21, v23, v25, v50);
      v26 = v41;
      if ( v41 != -2147024882 )
        break;
      if ( !(unsigned int)CD3DResourceManager::DestroyAndDeleteDelayedResources(v22) )
      {
        v27 = 0LL;
        v28 = (_QWORD *)*((_QWORD *)v22 + 6);
        if ( v28 != (_QWORD *)((char *)v22 + 48) )
          v27 = v28 - 4;
        if ( !v27 )
        {
          v29 = (_QWORD *)*((_QWORD *)v22 + 9);
          if ( v29 != (_QWORD *)((char *)v22 + 64) )
            v27 = v29 - 4;
          if ( !v27 )
            break;
        }
        if ( _InterlockedIncrement((volatile signed __int32 *)v27 + 2) == 1 )
        {
          *((_DWORD *)v27 + 2) = 0;
          Sleep(1u);
        }
        else
        {
          CD3DResourceManager::DestroyResource(v22, (struct CD3DResource ***)v27);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v27 + 2, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD *, __int64))(*v27 + 16LL))(v27, 1LL);
        }
      }
    }
    v30 = v49;
    v7 = v47;
    *((_BYTE *)v49 + 1039) = 0;
    v9 = (CHwDisplayRenderTarget *)((char *)v7 - 176);
    switch ( v26 )
    {
      case -2147467259:
        goto LABEL_48;
      case -2147024809:
        v26 = -2003304306;
        v41 = -2003304306;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304306, 0xBFEu);
        goto LABEL_53;
      case -2005270496:
LABEL_48:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xBEAu);
        if ( !hWnd || IsWindow(hWnd) )
        {
          v31 = (struct _LUID)*((_QWORD *)v30 + 74);
          v26 = -2005270523;
          v41 = -2005270523;
          CD3DRegistryDatabase::HandleAdapterUnexpectedError(v31);
          goto LABEL_53;
        }
        v26 = -2147023496;
        break;
      case 0:
        goto LABEL_53;
      case 142213121:
        if ( !*((_QWORD *)v46 + 22) )
          goto LABEL_53;
        v26 = 0;
        break;
      default:
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC02u);
LABEL_53:
        TranslateDXGIorD3DErrorInContext(v26, 1, &v41);
        v12 = v41;
        if ( v41 < 0 )
          CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(v30);
        if ( v12 == -2003304307 )
          CD3DDeviceLevel1::ProcessUnusable(v30, 0);
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB8Cu);
          goto LABEL_59;
        }
LABEL_60:
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 4) + 216LL))(*((_QWORD *)v7 + 4)) )
        {
          v33 = (CMILPoolResource *)*((_QWORD *)v7 - 1);
          if ( v33 )
          {
            CMILPoolResource::Release(v33);
            *((_QWORD *)v7 - 1) = 0LL;
          }
          BackBuffer = CSwapChainBase::GetBackBuffer(*((CSwapChainBase **)v7 + 4), v32, (struct CD3DSurface **)v7 - 1);
          v35 = BackBuffer;
          if ( BackBuffer < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x327u);
          if ( !v12 || v35 < 0 )
            v12 = v35;
        }
        goto LABEL_68;
    }
    v41 = v26;
    goto LABEL_53;
  }
LABEL_74:
  if ( v12 >= 0 )
  {
    *((_BYTE *)v7 + 9) = v12 == 142213130;
  }
  else
  {
    if ( v12 == -2003304442 || v12 == -2003304307 )
      *((_DWORD *)v7 + 31) = v12;
    *((_BYTE *)v7 + 8) = 0;
  }
  if ( (*(_DWORD *)(v4 + 504))-- == 1 )
    *(_DWORD *)(v4 + 508) = 0;
  return (unsigned int)v12;
}
