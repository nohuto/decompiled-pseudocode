/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18013F518
 * Callers:
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x180138818 (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180084948 (-GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18013F5E8 (-Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(struct CD3DVidMemOnlyTexture *a1, struct CWarpLockSubresource **a2)
{
  __int64 v2; // rax
  struct IDXGIResource *v3; // rdi
  struct IWarpPrivateAPI *v6; // rbp
  int DXGIResource; // eax
  unsigned int v8; // esi
  int v9; // eax
  struct IDXGIResource *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  *a2 = 0LL;
  v11 = 0LL;
  v6 = *(struct IWarpPrivateAPI **)(*(_QWORD *)(v2 + 120) + 528LL);
  if ( v6 )
  {
    DXGIResource = CD3DTexture::GetDXGIResource(a1, &v11);
    v8 = DXGIResource;
    if ( DXGIResource >= 0 )
    {
      v9 = CWarpLockSubresource::Create(v6, v11, *((_DWORD *)a1 + 45), a2);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801758D8, 1u, v9, 0x2Du);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801758D8, 1u, DXGIResource, 0x27u);
    }
    v3 = v11;
  }
  else
  {
    v8 = -2003292287;
  }
  if ( v3 )
    ((void (__fastcall *)(struct IDXGIResource *))v3->lpVtbl->Release)(v3);
  return v8;
}
