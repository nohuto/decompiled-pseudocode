/*
 * XREFs of ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18013B2E0
 * Callers:
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180133580 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180083198 (--0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18013B1D4 (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::OpenShared(
        __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        struct CD3DDeviceLevel1 ***a5)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // edi
  int v12; // eax
  struct CD3DDeviceLevel1 **v13; // rax

  *a5 = 0LL;
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         248LL);
  if ( v8 )
    v10 = CHwTextureRenderTarget::CHwTextureRenderTarget(v8, a1, v9, a2);
  else
    v10 = 0LL;
  *a5 = (struct CD3DDeviceLevel1 **)v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x92u);
LABEL_10:
    if ( *a5 )
    {
      (*((void (__fastcall **)(struct CD3DDeviceLevel1 **))**a5 + 2))(*a5);
      *a5 = 0LL;
    }
    return (unsigned int)v11;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v12 = CHwTextureRenderTarget::Init(*a5, *(unsigned int *)(a3 + 4), a4);
  v11 = v12;
  if ( v12 >= 0 )
  {
    v13 = *a5;
    *(_OWORD *)a3 = *(_OWORD *)(*a5 + 25);
    *(_QWORD *)(a3 + 16) = v13[27];
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x95u);
  }
  if ( v11 < 0 )
    goto LABEL_10;
  return (unsigned int)v11;
}
