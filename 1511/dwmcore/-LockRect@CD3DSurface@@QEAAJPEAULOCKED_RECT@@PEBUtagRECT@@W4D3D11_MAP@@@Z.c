/*
 * XREFs of ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18002A2A8
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002A398 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801519D0 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CD3DSurface::LockRect(
        CD3DSurface *this,
        struct LOCKED_RECT *a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int8 PixelFormatSize; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]
  unsigned int v16; // [rsp+70h] [rbp+8h] BYREF

  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL)
                                                                                                  + 560LL)
                                                                                    + 112LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 560LL),
         *((_QWORD *)this + 17),
         *((unsigned int *)this + 36),
         a4,
         0,
         &v14);
  v16 = v7;
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x30u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 41));
    v10 = v14;
    v11 = a3->left * (PixelFormatSize >> 3);
    v12 = (unsigned int)(v15 * a3->top);
    *(_DWORD *)a2 = v15;
    *((_QWORD *)a2 + 1) = v11 + v10 + v12;
  }
  TranslateDXGIorD3DErrorInContext(v8, 0LL, &v16);
  return v16;
}
