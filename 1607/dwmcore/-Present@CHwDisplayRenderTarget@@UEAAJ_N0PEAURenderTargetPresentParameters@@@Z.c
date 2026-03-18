/*
 * XREFs of ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18007B210 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18007A0C4 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A2E8 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18007AE00 (-ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180080190 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18008EE50 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18009F204 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18009F470 (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18017B4F8 (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Present(
        CHwDisplayRenderTarget *this,
        __int64 a2,
        char a3,
        struct RenderTargetPresentParameters *a4)
{
  CHwFullScreenRenderTarget *v4; // r15
  __int64 v5; // rax
  CHwDisplayRenderTarget *v6; // r13
  __int64 (__fastcall *v8)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rax
  CHwDisplayRenderTarget *v9; // rcx
  int ShouldPresent; // eax
  signed int v11; // ebx
  HRGN v12; // rcx
  _DWORD *v13; // r14
  HRGN *v14; // rcx
  HRGN v15; // r15
  CD3DResourceManager *v16; // r12
  unsigned int v17; // esi
  HRGN *v18; // r14
  unsigned int v19; // r13d
  int v20; // ebx
  _DWORD *v21; // rax
  CD3DDeviceLevel1 *v22; // r14
  unsigned int v23; // ecx
  __int64 v24; // rdx
  void (__fastcall *v25)(CHwFullScreenRenderTarget *); // rax
  volatile signed __int32 *v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  struct _LUID v30; // rcx
  CMILPoolResource *v31; // rcx
  int BackBuffer; // eax
  int v33; // edi
  bool v34[4]; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-2Dh]
  HRGN v38; // [rsp+40h] [rbp-29h]
  HRGN *v39; // [rsp+48h] [rbp-21h]
  struct RenderTargetPresentParameters *v40; // [rsp+50h] [rbp-19h]
  CD3DDeviceLevel1 *v41; // [rsp+58h] [rbp-11h]
  CHwDisplayRenderTarget *v42; // [rsp+60h] [rbp-9h]
  HWND hWnd; // [rsp+68h] [rbp-1h]
  struct tagRECT rc; // [rsp+70h] [rbp+7h] BYREF

  v4 = (CHwDisplayRenderTarget *)((char *)this - 176);
  v42 = this;
  v5 = *((_QWORD *)this - 22);
  v6 = this;
  v40 = a4;
  v34[0] = 0;
  v36 = 0;
  v8 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, char, bool *, unsigned int *))(v5 + 240);
  v9 = (CHwDisplayRenderTarget *)((char *)this - 176);
  if ( v8 == CHwDisplayRenderTarget::ShouldPresent )
    ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(v9, a2, v34, &v36);
  else
    ShouldPresent = v8(v9, a2, v34, &v36);
  v11 = ShouldPresent;
  if ( ShouldPresent < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShouldPresent, 0x2C6u);
    goto LABEL_26;
  }
  if ( a3 )
    v36 |= 0x80u;
  if ( v34[0] )
  {
    v12 = (HRGN)*((_QWORD *)v4 + 41);
    v38 = 0LL;
    if ( v12 && GetRgnBox(v12, &rc) != 1 )
      v38 = (HRGN)*((_QWORD *)v6 + 19);
    v13 = (_DWORD *)*((_QWORD *)v4 + 23);
    v14 = (HRGN *)*((_QWORD *)v4 + 27);
    v35 = v36;
    v37 = *((_DWORD *)v4 + 76);
    hWnd = (HWND)*((_QWORD *)v4 + 39);
    v39 = v14;
    v41 = (CD3DDeviceLevel1 *)v13;
    if ( (int)v13[206] < 0 )
    {
      CD3DDeviceLevel1::ProcessUnusable((CD3DDeviceLevel1 *)v13);
      v11 = v13[206];
      if ( v11 >= 0 )
      {
LABEL_25:
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 5) + 216LL))(*((_QWORD *)v6 + 5)) )
        {
          v31 = (CMILPoolResource *)*((_QWORD *)v6 - 1);
          if ( v31 )
          {
            CMILPoolResource::Release(v31);
            *((_QWORD *)v6 - 1) = 0LL;
          }
          BackBuffer = CSwapChainBase::GetBackBuffer(*((CSwapChainBase **)v6 + 5), v24, (struct CD3DSurface **)v6 - 1);
          v33 = BackBuffer;
          if ( BackBuffer < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x2F8u);
          if ( !v11 || v33 < 0 )
            v11 = v33;
        }
        goto LABEL_26;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC78u);
      goto LABEL_65;
    }
    v15 = v38;
    v16 = (CD3DResourceManager *)(v13 + 220);
    v17 = v35;
    v18 = v14;
    v19 = v37;
    while ( 1 )
    {
      v35 = CSwapChainBase::Present(v18, v15, v19, v17, v40);
      v20 = v35;
      if ( v35 != -2147024882 )
        break;
      if ( !CD3DResourceManager::DestroyAndDeleteDelayedResources(v16) )
      {
        v27 = 0LL;
        v28 = (_QWORD *)*((_QWORD *)v16 + 6);
        if ( v28 != (_QWORD *)((char *)v16 + 48) )
          v27 = (volatile signed __int32 *)(v28 - 4);
        if ( !v27 )
        {
          v29 = (_QWORD *)*((_QWORD *)v16 + 9);
          if ( v29 != (_QWORD *)((char *)v16 + 64) )
            v27 = (volatile signed __int32 *)(v29 - 4);
          if ( !v27 )
            break;
        }
        if ( _InterlockedIncrement(v27 + 2) == 1 )
        {
          *((_DWORD *)v27 + 2) = 0;
          Sleep(1u);
        }
        else
        {
          CD3DResourceManager::DestroyResource(v16, (struct CD3DResource *)v27);
          if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v27 + 16LL))(v27, 1LL);
        }
      }
    }
    v6 = v42;
    v21 = &unk_1801C0890;
    v22 = v41;
    v23 = 0;
    v4 = (CHwDisplayRenderTarget *)((char *)v42 - 176);
    while ( *v21 != v20 )
    {
      ++v23;
      ++v21;
      if ( v23 >= 0xA )
        goto LABEL_16;
    }
    if ( IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
LABEL_16:
    *((_BYTE *)v22 + 1078) = 0;
    if ( v20 != -2147467259 )
    {
      if ( v20 == -2147024809 )
      {
        v20 = -2003304306;
        v35 = -2003304306;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304306, 0xD08u);
        goto LABEL_20;
      }
      if ( v20 != -2005270496 )
      {
        if ( v20 )
        {
          if ( v20 != 142213121 )
          {
            if ( v20 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xD0Cu);
            goto LABEL_20;
          }
          if ( v39[22] )
          {
            v20 = 0;
LABEL_59:
            v35 = v20;
          }
        }
LABEL_20:
        TranslateDXGIorD3DErrorInContext(v20, 1, (int *)&v35);
        v11 = v35;
        if ( (v35 & 0x80000000) != 0 )
          CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(v22);
        if ( v11 == -2003304307 )
          CD3DDeviceLevel1::ProcessUnusable(v22);
        if ( v11 >= 0 )
          goto LABEL_25;
        if ( IsOOM(v11) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC96u);
LABEL_65:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x5B3u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2E9u);
LABEL_26:
        if ( v34[0] && (v36 & 2) == 0 )
        {
          v25 = *(void (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)v4 + 256LL);
          if ( v25 == CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion )
            CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion(v4);
          else
            v25(v4);
        }
        goto LABEL_30;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xCF4u);
    if ( !hWnd || IsWindow(hWnd) )
    {
      v30 = (struct _LUID)*((_QWORD *)v22 + 82);
      v20 = -2005270523;
      v35 = -2005270523;
      CD3DRegistryDatabase::HandleAdapterUnexpectedError(v30);
      goto LABEL_20;
    }
    v20 = -2147023496;
    goto LABEL_59;
  }
LABEL_30:
  if ( v11 < 0 )
  {
    if ( v11 == -2003304442 || v11 == -2003304307 )
      *((_DWORD *)v6 + 33) = v11;
    *((_BYTE *)v6 + 16) = 0;
  }
  else
  {
    *((_BYTE *)v6 + 17) = v11 == 142213130;
  }
  return (unsigned int)v11;
}
