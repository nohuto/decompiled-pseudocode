/*
 * XREFs of ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x18014AF74
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180012180 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver(
        CD3DResourceManager *this,
        struct IUnknown *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdi
  CD3DResourceManager *v7; // rdi
  CD3DResourceManager **v8; // rdx

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = a2;
    *(_DWORD *)(v5 + 8) = 3;
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = (CD3DResourceManager *)(v6 + 16);
    v8 = (CD3DResourceManager **)*((_QWORD *)this + 14);
    *(_QWORD *)v7 = (char *)this + 104;
    *((_QWORD *)v7 + 1) = v8;
    if ( *v8 != (CD3DResourceManager *)((char *)this + 104) )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)this + 14) = v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x49Cu);
  }
  return v4;
}
