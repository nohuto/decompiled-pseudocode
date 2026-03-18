/*
 * XREFs of ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x180031130
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x180022D9C (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x18002D478 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800A2070 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x1800A20F0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x1800A2190 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     Template_qqqq @ 0x1801002AC (Template_qqqq.c)
 */

__int64 __fastcall CHwBitmapColorSource::PushTheSourceBitsToVideoMemory(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        CBitmapLock *a4,
        unsigned int a5)
{
  __m128i *v5; // r12
  __int64 v7; // r14
  int D3DSurfaceLevel; // eax
  unsigned int v10; // ebx
  struct ID3D11Resource **v11; // rsi
  unsigned int v12; // r13d
  __m128i v13; // xmm0
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // rbx
  int DataPointer; // eax
  __int64 (__fastcall *v20)(CBitmapLock *__hidden, unsigned int *); // rbx
  int v21; // eax
  __int64 (__fastcall *v22)(CBitmapLock *__hidden, enum DXGI_FORMAT *); // rbx
  int PixelFormat; // eax
  unsigned __int8 v24; // al
  char v25; // r11
  unsigned int v26; // edx
  unsigned __int8 *v27; // rcx
  unsigned __int8 *v28; // r8
  unsigned __int8 PixelFormatSize; // al
  unsigned int v31; // r8d
  int v32; // r9d
  __int32 *v33; // rdx
  __int64 v34; // r10
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // [rsp+30h] [rbp-40h] BYREF
  __int32 v38; // [rsp+34h] [rbp-3Ch]
  LONG v39; // [rsp+38h] [rbp-38h]
  LONG v40; // [rsp+3Ch] [rbp-34h]
  CMILPoolResource *v41; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int8 *v42; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int8 *v43; // [rsp+50h] [rbp-20h]
  struct tagRECT v44; // [rsp+58h] [rbp-18h] BYREF
  enum DXGI_FORMAT v45; // [rsp+B0h] [rbp+40h] BYREF
  __m128i *v46; // [rsp+C0h] [rbp+50h]

  v46 = a3;
  v41 = 0LL;
  v5 = a3;
  v7 = (unsigned int)a2;
  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), a2, &v41);
  v10 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0xF31u);
LABEL_31:
    v11 = (struct ID3D11Resource **)v41;
    goto LABEL_17;
  }
  v11 = (struct ID3D11Resource **)v41;
  v12 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_16:
    if ( !g_pMediaControl )
      goto LABEL_17;
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 232));
    v31 = 0;
    v32 = PixelFormatSize >> 3;
    if ( (_DWORD)v7 )
    {
      v33 = &v5->m128i_i32[1];
      v34 = v7;
      do
      {
        v35 = v33[1] - *(v33 - 1);
        v36 = v33[2] - *v33;
        v33 += 4;
        v31 += v32 * v36 * v35;
        --v34;
      }
      while ( v34 );
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)&g_dwTextureUpdatesPerFrame, v31);
    goto LABEL_31;
  }
  while ( 1 )
  {
    v13 = *v5;
    v14 = *(_DWORD *)(a1 + 124);
    v15 = -*(_DWORD *)(a1 + 120);
    v42 = 0LL;
    v16 = -v14;
    v44.right = v13.m128i_i32[2];
    v44.top = v16 + v13.m128i_i32[1];
    v40 = v15 + _mm_cvtsi128_si32(v13);
    v44.left = v40;
    v39 = v15 + v13.m128i_i32[2];
    v38 = v16 + v13.m128i_i32[3];
    v44.bottom = v16 + v13.m128i_i32[3];
    v17 = *(_QWORD *)a4;
    v44.right = v39;
    v18 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(v17 + 72);
    if ( v18 == CBitmapLock::GetDataPointer )
      DataPointer = CBitmapLock::GetDataPointer(a4, &v37, &v42);
    else
      DataPointer = v18(a4, &v37, &v42);
    v10 = DataPointer;
    if ( DataPointer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DataPointer, 0xF51u);
      goto LABEL_17;
    }
    v20 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)a4 + 64LL);
    v21 = v20 == CBitmapLock::GetStride ? CBitmapLock::GetStride(a4, &a5) : v20(a4, &a5);
    v10 = v21;
    if ( v21 < 0 )
      break;
    v22 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)a4 + 24LL);
    if ( v22 == CBitmapLock::GetPixelFormat )
      PixelFormat = CBitmapLock::GetPixelFormat(a4, &v45);
    else
      PixelFormat = v22(a4, &v45);
    v10 = PixelFormat;
    if ( PixelFormat < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0xF54u);
      goto LABEL_17;
    }
    v24 = GetPixelFormatSize(v45);
    v26 = a5;
    v27 = &v42[a5 * v5->m128i_i32[1]];
    v28 = &v27[(v24 >> 3) * v5->m128i_i32[0]];
    v43 = v28;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      Template_qqqq(
        (_DWORD)v27,
        (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
        v39 - v40,
        v38 - v44.top,
        v25,
        v24 >> 3);
      v26 = a5;
      v28 = v43;
    }
    CD3DDeviceLevel1::UpdateSubresource(*(CD3DDeviceLevel1 **)(a1 + 16), v11[17], &v44, v28, v26);
    ++v12;
    ++v5;
    if ( v12 >= (unsigned int)v7 )
    {
      v5 = v46;
      goto LABEL_16;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xF53u);
LABEL_17:
  if ( v11 )
    CMILPoolResource::Release((CMILPoolResource *)v11);
  return v10;
}
