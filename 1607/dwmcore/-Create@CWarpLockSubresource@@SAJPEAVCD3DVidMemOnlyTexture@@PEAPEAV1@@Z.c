/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18017E04C
 * Callers:
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x180179EEC (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x180011AE4 (-Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x180081248 (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(struct CD3DVidMemOnlyTexture *this, struct CWarpLockSubresource **a2)
{
  struct IDXGIResource *v4; // rcx
  struct IWarpPrivateAPI *v5; // rbp
  int DXGIResource; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct IDXGIResource *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  *a2 = 0LL;
  v10 = 0LL;
  v5 = *(struct IWarpPrivateAPI **)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 552LL);
  if ( v5 )
  {
    DXGIResource = CD3DTexture::GetDXGIResource(this, &v10);
    v7 = DXGIResource;
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7C60, 1u, DXGIResource, 0x27u);
    }
    else
    {
      v8 = CWarpLockSubresource::Create(v5, v10, *((_DWORD *)this + 45), a2);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801C7C60, 1u, v8, 0x2Du);
    }
    v4 = v10;
  }
  else
  {
    v7 = -2003292287;
  }
  if ( v4 )
    ((void (__fastcall *)(struct IDXGIResource *))v4->lpVtbl->Release)(v4);
  return v7;
}
