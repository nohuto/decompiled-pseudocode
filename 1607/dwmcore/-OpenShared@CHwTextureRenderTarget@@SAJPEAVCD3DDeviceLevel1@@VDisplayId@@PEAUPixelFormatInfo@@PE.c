/*
 * XREFs of ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18017BD48
 * Callers:
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180172BB0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 * Callees:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180013DE4 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18017BAC0 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::OpenShared(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        struct CD3DVidMemOnlyTexture ***a5)
{
  struct CD3DVidMemOnlyTexture **v8; // rbx
  unsigned int v9; // edi
  int v10; // eax

  *a5 = 0LL;
  if ( (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         256LL) )
  {
    v8 = (struct CD3DVidMemOnlyTexture **)CHwTextureRenderTarget::CHwTextureRenderTarget();
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v8 + 1))(v8);
    v10 = CHwTextureRenderTarget::Init(v8, a1, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x87u);
      (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v8 + 2))(v8);
    }
    else
    {
      *a5 = v8;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x84u);
  }
  return v9;
}
