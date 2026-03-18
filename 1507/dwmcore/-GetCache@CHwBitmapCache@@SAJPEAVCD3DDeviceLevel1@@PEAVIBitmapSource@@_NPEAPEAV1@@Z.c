/*
 * XREFs of ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x180056C48
 * Callers:
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x180018318 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x180048B64 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800561A0 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180132EE0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x180018900 (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwBitmapCache::GetCache(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        char a3,
        struct CHwBitmapCache **a4)
{
  volatile signed __int32 *v4; // rbp
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // r14d
  CHwBitmapCache *v11; // rax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-38h]
  struct IMILResourceCache *v15; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int32 *v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  if ( !a2 )
  {
    v9 = -2147467263;
    v14 = 712;
    goto LABEL_30;
  }
  v8 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IMILResourceCache **))a2)(
         a2,
         &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
         &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 716;
  }
  else
  {
    v10 = *((_DWORD *)a1 + 104);
    if ( v10 == -1 )
    {
      v9 = -2147467259;
      v14 = 718;
      goto LABEL_30;
    }
    v8 = (*(__int64 (__fastcall **)(struct IMILResourceCache *, _QWORD, volatile signed __int32 **))(*(_QWORD *)v15 + 24LL))(
           v15,
           v10,
           &v16);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v4 = v16;
      if ( v16 )
        v4 = v16 - 32;
      if ( v4 )
        goto LABEL_14;
      v11 = (CHwBitmapCache *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                608LL);
      if ( v11 )
        v4 = (volatile signed __int32 *)CHwBitmapCache::CHwBitmapCache(v11, v15, a1);
      else
        v4 = 0LL;
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v8 = (*(__int64 (__fastcall **)(struct IMILResourceCache *, _QWORD, volatile signed __int32 *))(*(_QWORD *)v15 + 32LL))(
               v15,
               v10,
               v4 + 32);
        v9 = v8;
        if ( !a3 )
        {
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2F5u);
          goto LABEL_13;
        }
        if ( v8 >= 0 )
        {
LABEL_13:
          v9 = 0;
LABEL_14:
          *a4 = (struct CHwBitmapCache *)v4;
          v4 = 0LL;
          goto LABEL_15;
        }
        v14 = 753;
        goto LABEL_25;
      }
      v9 = -2147024882;
      v14 = 743;
LABEL_30:
      v13 = v9;
      goto LABEL_31;
    }
    v14 = 724;
  }
LABEL_25:
  v13 = v8;
LABEL_31:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
LABEL_15:
  if ( v15 )
    (*(void (__fastcall **)(struct IMILResourceCache *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v4 )
    CMILPoolResource::Release((CMILPoolResource *)v4);
  return v9;
}
