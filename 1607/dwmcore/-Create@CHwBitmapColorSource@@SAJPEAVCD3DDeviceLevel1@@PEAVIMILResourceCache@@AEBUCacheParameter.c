/*
 * XREFs of ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1800B3B48
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1800817E0 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1800A44E4 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180082C1C (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ??0CHwBitmapColorSource@@IEAA@PEAVCD3DDeviceLevel1@@IIPEAVIMILResourceCache@@PEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x180083164 (--0CHwBitmapColorSource@@IEAA@PEAVCD3DDeviceLevel1@@IIPEAVIMILResourceCache@@PEBUD3D11_TEXTURE2D.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapColorSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct IMILResourceCache *a2,
        const struct CHwBitmapColorSource::CacheParameters *a3,
        char a4,
        struct CHwBitmapColorSource **a5)
{
  unsigned int v5; // ebx
  UINT v9; // eax
  CHwBitmapColorSource *v10; // rax
  struct CHwBitmapColorSource *v11; // rax
  D3D11_TEXTURE2D_DESC v13; // [rsp+30h] [rbp-30h] BYREF

  v5 = 0;
  v13.Width = *((_DWORD *)a3 + 11);
  v13.Height = *((_DWORD *)a3 + 14);
  v13.Format = *(_DWORD *)a3;
  v13.MipLevels = 1;
  v9 = 8;
  v13.ArraySize = 1;
  v13.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
  if ( a4 )
    v9 = 40;
  v13.Usage = D3D11_USAGE_DEFAULT;
  v13.BindFlags = v9;
  *(_QWORD *)&v13.CPUAccessFlags = 0LL;
  v10 = (CHwBitmapColorSource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                  WPF::g_pProcessHeap,
                                  328LL);
  if ( v10 )
    v11 = CHwBitmapColorSource::CHwBitmapColorSource(v10, a1, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4), a2, &v13);
  else
    v11 = 0LL;
  *a5 = v11;
  if ( v11 )
  {
    (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v11)(v11);
    CHwBitmapColorSource::SetBitmapAndContextCacheParameters(*a5, 0LL, 0LL, (__int64)a3);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6A3u);
  }
  return v5;
}
