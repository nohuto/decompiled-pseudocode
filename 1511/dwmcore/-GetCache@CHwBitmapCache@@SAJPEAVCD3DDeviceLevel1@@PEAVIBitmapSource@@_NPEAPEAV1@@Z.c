/*
 * XREFs of ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18002B484
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180072670 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x18008AD68 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x18008C2E0 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1800FEC50 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18008A880 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x18008A950 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18008B608 (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapCache::GetCache(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        char a3,
        struct CHwBitmapCache **a4)
{
  struct IMILCacheableResource *v4; // rsi
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ebp
  __int64 (__fastcall *v11)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource **); // rdi
  int Resource; // eax
  void *(__fastcall *v13)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CHwBitmapCache *v14; // rax
  __int64 (__fastcall *v15)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource *); // rdi
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-38h]
  CMILResourceCache *v19; // [rsp+68h] [rbp+10h] BYREF
  struct IMILCacheableResource *v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  if ( a2 )
  {
    v8 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, CMILResourceCache **))a2)(
           a2,
           &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
           &v19);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2CCu);
      goto LABEL_21;
    }
    v10 = *((_DWORD *)a1 + 102);
    if ( v10 == -1 )
    {
      v9 = -2147467259;
      v18 = 718;
    }
    else
    {
      v11 = *(__int64 (__fastcall **)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource **))(*(_QWORD *)v19 + 24LL);
      if ( v11 == CMILResourceCache::GetResource )
        Resource = CMILResourceCache::GetResource(v19, v10, &v20);
      else
        Resource = v11(v19, v10, &v20);
      v9 = Resource;
      if ( Resource < 0 )
      {
        v18 = 724;
      }
      else
      {
        v4 = v20;
        if ( v20 )
          v4 = (struct IMILCacheableResource *)((char *)v20 - 128);
        if ( v4 )
          goto LABEL_20;
        v13 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        if ( v13 == WPF::ProcessHeapImpl::Alloc )
          v14 = (CHwBitmapCache *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x260uLL);
        else
          v14 = (CHwBitmapCache *)v13(WPF::g_pProcessHeap, 608uLL);
        if ( v14 )
          v4 = CHwBitmapCache::CHwBitmapCache(v14, v19, a1);
        else
          v4 = 0LL;
        if ( v4 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
          v15 = *(__int64 (__fastcall **)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource *))(*(_QWORD *)v19 + 32LL);
          if ( v15 == CMILResourceCache::SetResource )
            v16 = CMILResourceCache::SetResource(v19, v10, (struct IMILCacheableResource *)((char *)v4 + 128));
          else
            v16 = v15(v19, v10, (struct IMILCacheableResource *)((char *)v4 + 128));
          v9 = v16;
          if ( !a3 )
          {
            if ( v16 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2F5u);
            goto LABEL_19;
          }
          if ( v16 >= 0 )
          {
LABEL_19:
            v9 = 0;
LABEL_20:
            *a4 = v4;
            v4 = 0LL;
            goto LABEL_21;
          }
          v18 = 753;
        }
        else
        {
          v9 = -2147024882;
          v18 = 743;
        }
      }
    }
  }
  else
  {
    v9 = -2147467263;
    v18 = 712;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v18);
LABEL_21:
  if ( v19 )
    (*(void (__fastcall **)(CMILResourceCache *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v4 )
    CMILPoolResource::Release(v4);
  return v9;
}
