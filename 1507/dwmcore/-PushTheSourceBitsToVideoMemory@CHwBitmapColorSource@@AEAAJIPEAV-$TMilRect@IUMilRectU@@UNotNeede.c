/*
 * XREFs of ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x18001C040
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x180018F40 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180084EB0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qqqq @ 0x1800E1FC0 (Template_qqqq.c)
 */

__int64 __fastcall CHwBitmapColorSource::PushTheSourceBitsToVideoMemory(
        __int64 a1,
        unsigned int a2,
        __m128i *a3,
        __int64 *a4,
        unsigned int a5)
{
  __m128i *v5; // r13
  __int64 v7; // rsi
  int D3DSurfaceLevel; // eax
  unsigned int v10; // ebx
  struct ID3D11Resource **v11; // rdi
  unsigned int v12; // r12d
  __m128i v13; // xmm0
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned __int8 v21; // al
  char v22; // r11
  unsigned int v23; // edx
  __int64 v24; // rcx
  const void *v25; // r8
  unsigned __int8 PixelFormatSize; // al
  unsigned int v28; // r8d
  int v29; // r9d
  __int32 *v30; // rdx
  __int64 v31; // r10
  int v32; // ecx
  int v33; // eax
  __int32 v34; // [rsp+30h] [rbp-40h]
  LONG v35; // [rsp+34h] [rbp-3Ch]
  LONG v36; // [rsp+38h] [rbp-38h]
  char v37[4]; // [rsp+3Ch] [rbp-34h] BYREF
  CMILPoolResource *v38; // [rsp+40h] [rbp-30h] BYREF
  __int64 v39; // [rsp+48h] [rbp-28h] BYREF
  const void *v40; // [rsp+50h] [rbp-20h]
  struct tagRECT v41; // [rsp+58h] [rbp-18h] BYREF
  enum DXGI_FORMAT v42; // [rsp+B0h] [rbp+40h] BYREF
  __m128i *v43; // [rsp+C0h] [rbp+50h]

  v43 = a3;
  v38 = 0LL;
  v5 = a3;
  v7 = a2;
  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), a2, &v38);
  v10 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0xF31u);
LABEL_22:
    v11 = (struct ID3D11Resource **)v38;
    goto LABEL_11;
  }
  v11 = (struct ID3D11Resource **)v38;
  v12 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_10:
    if ( !g_pMediaControl )
      goto LABEL_11;
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 232));
    v28 = 0;
    v29 = PixelFormatSize >> 3;
    if ( (_DWORD)v7 )
    {
      v30 = &v5->m128i_i32[1];
      v31 = v7;
      do
      {
        v32 = v30[1] - *(v30 - 1);
        v33 = v30[2] - *v30;
        v30 += 4;
        v28 += v29 * v33 * v32;
        --v31;
      }
      while ( v31 );
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)&g_dwTextureUpdatesPerFrame, v28);
    goto LABEL_22;
  }
  while ( 1 )
  {
    v13 = *v5;
    v14 = *(_DWORD *)(a1 + 124);
    v15 = -*(_DWORD *)(a1 + 120);
    v39 = 0LL;
    v16 = -v14;
    v41.right = v13.m128i_i32[2];
    v41.top = v16 + v13.m128i_i32[1];
    v36 = v15 + _mm_cvtsi128_si32(v13);
    v41.left = v36;
    v35 = v15 + v13.m128i_i32[2];
    v34 = v16 + v13.m128i_i32[3];
    v41.bottom = v16 + v13.m128i_i32[3];
    v17 = *a4;
    v41.right = v35;
    v18 = (*(__int64 (__fastcall **)(__int64 *, char *, __int64 *))(v17 + 72))(a4, v37, &v39);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xF51u);
      goto LABEL_11;
    }
    v19 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a4 + 64))(a4, &a5);
    v10 = v19;
    if ( v19 < 0 )
      break;
    v20 = (*(__int64 (__fastcall **)(__int64 *, enum DXGI_FORMAT *))(*a4 + 24))(a4, &v42);
    v10 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xF54u);
      goto LABEL_11;
    }
    v21 = GetPixelFormatSize(v42);
    v23 = a5;
    v24 = v39 + a5 * v5->m128i_i32[1];
    v25 = (const void *)(v24 + v5->m128i_i32[0] * (v21 >> 3));
    v40 = v25;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      Template_qqqq(v24, (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT, v35 - v36, v34 - v41.top, v22, v21 >> 3);
      v23 = a5;
      v25 = v40;
    }
    CD3DDeviceLevel1::UpdateSubresource(*(CD3DDeviceLevel1 **)(a1 + 16), v11[17], &v41, v25, v23);
    ++v12;
    ++v5;
    if ( v12 >= (unsigned int)v7 )
    {
      v5 = v43;
      goto LABEL_10;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xF53u);
LABEL_11:
  if ( v11 )
    CMILPoolResource::Release((CMILPoolResource *)v11);
  return v10;
}
