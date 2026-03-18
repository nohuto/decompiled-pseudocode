/*
 * XREFs of ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18008B9F4
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180072670 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x18002B094 (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapCache::OpenSharedHandleAsColorSource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        bool a5,
        unsigned int a6,
        CHwDeviceBitmapColorSource **a7)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  CHwDeviceBitmapColorSource **v10; // r14
  __int64 (__fastcall **v12)(_QWORD, GUID *, __int64 *); // rax
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  CHwDeviceBitmapColorSource *v16; // rdi
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+18h]

  v19 = a3;
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 144);
  v18 = 0LL;
  v10 = a7;
  v12 = *v7;
  *a7 = 0LL;
  v13 = (*v12)(v7, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v18);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x4A3u);
  }
  else
  {
    v15 = CHwDeviceBitmapColorSource::OpenShared(*(struct CD3DDeviceLevel1 **)(a1 + 136), v18, a2, v19, a4, a5, a6, v10);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x4ACu);
    }
    else
    {
      v16 = *v10;
      *((_QWORD *)v16 + 42) = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 496) = v16;
      (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v16)(v16);
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v14;
}
