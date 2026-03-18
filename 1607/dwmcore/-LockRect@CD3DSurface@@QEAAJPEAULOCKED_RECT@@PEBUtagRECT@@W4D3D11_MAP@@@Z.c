/*
 * XREFs of ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180016CAC
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180016828 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x180181FD4 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::LockRect(
        CD3DSurface *this,
        struct LOCKED_RECT *a2,
        const struct tagRECT *a3,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int8 PixelFormatSize; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v17; // [rsp+40h] [rbp-18h] BYREF
  int v18; // [rsp+48h] [rbp-10h]
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v7 = *((unsigned int *)this + 36);
  v8 = *((_QWORD *)this + 17);
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 576LL);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64 *))(*(_QWORD *)v9 + 112LL))(
          v9,
          v8,
          v7,
          a4,
          0,
          &v17);
  v19 = v10;
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x30u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 41));
    v13 = v17;
    v14 = a3->left * (PixelFormatSize >> 3);
    v15 = (unsigned int)(v18 * a3->top);
    *(_DWORD *)a2 = v18;
    *((_QWORD *)a2 + 1) = v14 + v13 + v15;
  }
  TranslateDXGIorD3DErrorInContext(v11, 0LL, &v19);
  return v19;
}
