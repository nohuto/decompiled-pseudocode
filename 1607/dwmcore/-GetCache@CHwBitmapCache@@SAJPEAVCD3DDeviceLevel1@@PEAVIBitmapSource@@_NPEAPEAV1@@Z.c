/*
 * XREFs of ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800A5DE0
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800352B0 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800942EC (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1800A44E4 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180112D90 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x180081A60 (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::GetCache(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        char a3,
        struct CHwBitmapCache **a4)
{
  volatile signed __int32 *v4; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
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
    goto LABEL_24;
  }
  v8 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IMILResourceCache **))a2)(
         a2,
         &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
         &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 716;
    goto LABEL_30;
  }
  v10 = *((_DWORD *)a1 + 108);
  if ( v10 == -1 )
  {
    v9 = -2147467259;
    v14 = 718;
    goto LABEL_24;
  }
  v8 = (*(__int64 (__fastcall **)(struct IMILResourceCache *, _QWORD, volatile signed __int32 **))(*(_QWORD *)v15 + 24LL))(
         v15,
         v10,
         &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 724;
LABEL_30:
    v13 = v8;
    goto LABEL_31;
  }
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
    goto LABEL_30;
  }
  v9 = -2147024882;
  v14 = 743;
LABEL_24:
  v13 = v9;
LABEL_31:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
LABEL_15:
  if ( v15 )
    (*(void (__fastcall **)(struct IMILResourceCache *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v4 )
    CMILPoolResource::Release((CMILPoolResource *)v4);
  return v9;
}
