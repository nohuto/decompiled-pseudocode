/*
 * XREFs of ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800434D0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x180015AFC (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180015B8C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042460 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x1800435C0 (-ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180044B70 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18008B0F0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18008EE64 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18013AD0C (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
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
  HRGN v17; // r12
  CD3DResourceManager *v18; // rsi
  unsigned int v19; // r15d
  HRGN *v20; // r13
  unsigned int v21; // r14d
  int v22; // ebx
  CD3DDeviceLevel1 *v23; // r15
  unsigned int v24; // edx
  void (__fastcall *v25)(CHwFullScreenRenderTarget *); // rbx
  unsigned __int32 v28; // ecx
  volatile __int32 *v29; // r8
  volatile unsigned int v30; // ecx
  unsigned int v31; // edx
  _QWORD *v32; // rdi
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  struct _LUID v35; // rcx
  CMILPoolResource *v36; // rcx
  int BackBuffer; // eax
  int v38; // ebx
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
  ++*(_DWORD *)(v4 + 512);
  v47 = this;
  v42 = v4;
  v51 = v4;
  *(_DWORD *)(v4 + 516) = GetCurrentThreadId();
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShouldPresent, 0x2F4u);
    goto LABEL_24;
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
    v16 = v14[209] < 0;
    v44 = *((_DWORD *)v9 + 74);
    hWnd = (HWND)*((_QWORD *)v9 + 38);
    v46 = v15;
    v49 = (CD3DDeviceLevel1 *)v14;
    if ( v16 )
    {
      CD3DDeviceLevel1::ProcessUnusable((CD3DDeviceLevel1 *)v14, 0);
      v12 = v14[209];
      if ( v12 >= 0 )
      {
LABEL_23:
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 4) + 208LL))(*((_QWORD *)v7 + 4)) )
        {
          v36 = (CMILPoolResource *)*((_QWORD *)v7 - 1);
          if ( v36 )
          {
            CMILPoolResource::Release(v36);
            *((_QWORD *)v7 - 1) = 0LL;
          }
          BackBuffer = CSwapChainBase::GetBackBuffer(*((CSwapChainBase **)v7 + 4), v24, (struct CD3DSurface **)v7 - 1);
          v38 = BackBuffer;
          if ( BackBuffer < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x326u);
          if ( !v12 || v38 < 0 )
            v12 = v38;
        }
        goto LABEL_24;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB42u);
      goto LABEL_70;
    }
    if ( g_pMediaControl )
    {
      v28 = v14[265];
      v29 = (volatile __int32 *)*((_QWORD *)g_pMediaControl + 2);
      if ( v28 )
      {
        _InterlockedExchange(v29 + 8, v28);
        _InterlockedExchangeAdd(v29 + 10, v28);
        if ( *((_DWORD *)v29 + 9) > v28 )
          v28 = *((_DWORD *)v29 + 9);
        _InterlockedExchange(v29 + 9, v28);
      }
      v30 = g_dwTextureUpdatesPerFrame;
      _InterlockedExchange(v29 + 14, g_dwTextureUpdatesPerFrame);
      _InterlockedExchangeAdd(v29 + 16, v30);
      if ( *((_DWORD *)v29 + 15) > v30 )
        v30 = *((_DWORD *)v29 + 15);
      _InterlockedExchange(v29 + 15, v30);
      v31 = g_lPixelsFilledPerFrame;
      _InterlockedExchange(v29 + 11, g_lPixelsFilledPerFrame);
      _InterlockedExchangeAdd(v29 + 13, v31);
      if ( *((_DWORD *)v29 + 12) > v31 )
        v31 = *((_DWORD *)v29 + 12);
      _InterlockedExchange(v29 + 12, v31);
      v14[264] = 0;
      v14[265] = 0;
    }
    v17 = v45;
    v18 = (CD3DResourceManager *)(v14 + 224);
    v19 = v44;
    v20 = (HRGN *)v46;
    v21 = v43;
    while ( 1 )
    {
      v41 = CSwapChainBase::Present(v20, v17, v19, v21, v50);
      v22 = v41;
      if ( v41 != -2147024882 )
        break;
      if ( !(unsigned int)CD3DResourceManager::DestroyAndDeleteDelayedResources(v18) )
      {
        v32 = 0LL;
        v33 = (_QWORD *)*((_QWORD *)v18 + 6);
        if ( v33 != (_QWORD *)((char *)v18 + 48) )
          v32 = v33 - 4;
        if ( !v32 )
        {
          v34 = (_QWORD *)*((_QWORD *)v18 + 9);
          if ( v34 != (_QWORD *)((char *)v18 + 64) )
            v32 = v34 - 4;
          if ( !v32 )
            break;
        }
        if ( _InterlockedIncrement((volatile signed __int32 *)v32 + 2) == 1 )
        {
          *((_DWORD *)v32 + 2) = 0;
          Sleep(1u);
        }
        else
        {
          CD3DResourceManager::DestroyResource(v18, (struct CD3DResource ***)v32);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 2, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD *, __int64))(*v32 + 16LL))(v32, 1LL);
        }
      }
    }
    v23 = v49;
    v7 = v47;
    *((_BYTE *)v49 + 1071) = 0;
    v9 = (CHwDisplayRenderTarget *)((char *)v7 - 176);
    if ( v22 != -2147467259 )
    {
      if ( v22 == -2147024809 )
      {
        v22 = -2003304306;
        v41 = -2003304306;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304306, 0xBFAu);
        goto LABEL_18;
      }
      if ( v22 != -2005270496 )
      {
        if ( v22 )
        {
          if ( v22 != 142213121 )
          {
            if ( v22 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xBFEu);
            goto LABEL_18;
          }
          if ( *((_QWORD *)v46 + 22) )
          {
            v22 = 0;
LABEL_67:
            v41 = v22;
          }
        }
LABEL_18:
        TranslateDXGIorD3DErrorInContext(v22, 1, &v41);
        v12 = v41;
        if ( v41 < 0 )
          CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(v23);
        if ( v12 == -2003304307 )
          CD3DDeviceLevel1::ProcessUnusable(v23, 0);
        if ( v12 >= 0 )
          goto LABEL_23;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB88u);
LABEL_70:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x6DDu);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x317u);
LABEL_24:
        if ( v39[0] && (v40 & 2) == 0 )
        {
          v25 = *(void (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)v9 + 240LL);
          if ( v25 == CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion )
            CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion(v9);
          else
            v25(v9);
        }
        v4 = v42;
        goto LABEL_29;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xBE6u);
    if ( !hWnd || IsWindow(hWnd) )
    {
      v35 = (struct _LUID)*((_QWORD *)v23 + 73);
      v22 = -2005270523;
      v41 = -2005270523;
      CD3DRegistryDatabase::HandleAdapterUnexpectedError(v35);
      goto LABEL_18;
    }
    v22 = -2147023496;
    goto LABEL_67;
  }
LABEL_29:
  if ( v12 < 0 )
  {
    if ( v12 == -2003304442 || v12 == -2003304307 )
      *((_DWORD *)v7 + 31) = v12;
    *((_BYTE *)v7 + 8) = 0;
  }
  else
  {
    *((_BYTE *)v7 + 9) = v12 == 142213130;
  }
  if ( (*(_DWORD *)(v4 + 512))-- == 1 )
    *(_DWORD *)(v4 + 516) = 0;
  return (unsigned int)v12;
}
