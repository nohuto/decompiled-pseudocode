/*
 * XREFs of ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800820B0
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x18007E8D8 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180080EEC (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18009E6E0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18009E760 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18009E800 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x180114140 (Template_qqqq.c)
 */

__int64 __fastcall CHwBitmapColorSource::PushTheSourceBitsToVideoMemory(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        CBitmapLock *a4,
        unsigned int a5)
{
  int v8; // r12d
  int D3DSurfaceLevel; // eax
  struct ID3D11Resource **v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  __m128i v13; // xmm0
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int32 v17; // r12d
  __int64 v18; // rax
  __int64 (__fastcall *v19)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // rax
  int DataPointer; // eax
  __int64 (__fastcall *v21)(CBitmapLock *__hidden, unsigned int *); // rax
  int v22; // eax
  __int64 (__fastcall *v23)(CBitmapLock *__hidden, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  unsigned __int8 PixelFormatSize; // al
  char v26; // r11
  unsigned int v27; // edx
  unsigned __int8 *v28; // rcx
  unsigned __int8 *v29; // r8
  int v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-40h]
  unsigned int v33; // [rsp+30h] [rbp-30h] BYREF
  __int32 v34; // [rsp+34h] [rbp-2Ch]
  LONG v35; // [rsp+38h] [rbp-28h]
  unsigned __int8 *v36; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int8 *v37; // [rsp+48h] [rbp-18h]
  struct tagRECT v38; // [rsp+50h] [rbp-10h] BYREF
  struct ID3D11Resource **v39; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp+48h]

  v40 = a2;
  v39 = 0LL;
  v8 = a2;
  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), a2, (struct CD3DSurface **)&v39);
  v10 = v39;
  v11 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    v32 = 3866;
    v31 = D3DSurfaceLevel;
  }
  else
  {
    v12 = 0;
    if ( !v8 )
      goto LABEL_15;
    while ( 1 )
    {
      v13 = *a3;
      v14 = *(_DWORD *)(a1 + 124);
      v15 = -*(_DWORD *)(a1 + 120);
      v36 = 0LL;
      v16 = -v14;
      v38.left = v13.m128i_i32[0];
      v38.top = v16 + v13.m128i_i32[1];
      v17 = v15 + v13.m128i_i32[2];
      v38.right = v15 + v13.m128i_i32[2];
      v35 = v15 + _mm_cvtsi128_si32(v13);
      v34 = v16 + v13.m128i_i32[3];
      v38.bottom = v16 + v13.m128i_i32[3];
      v18 = *(_QWORD *)a4;
      v38.left = v35;
      v19 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(v18 + 72);
      if ( v19 == CBitmapLock::GetDataPointer )
        DataPointer = CBitmapLock::GetDataPointer(a4, &v33, &v36);
      else
        DataPointer = v19(a4, &v33, &v36);
      v11 = DataPointer;
      if ( DataPointer < 0 )
      {
        v32 = 3898;
        goto LABEL_23;
      }
      v21 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)a4 + 64LL);
      v22 = v21 == CBitmapLock::GetStride ? CBitmapLock::GetStride(a4, &a5) : v21(a4, &a5);
      v11 = v22;
      if ( v22 < 0 )
        break;
      v23 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)a4 + 24LL);
      if ( v23 == CBitmapLock::GetPixelFormat )
        PixelFormat = CBitmapLock::GetPixelFormat(a4, (enum DXGI_FORMAT *)&v39);
      else
        PixelFormat = v23(a4, (enum DXGI_FORMAT *)&v39);
      v11 = PixelFormat;
      if ( PixelFormat < 0 )
      {
        v32 = 3901;
        goto LABEL_23;
      }
      PixelFormatSize = GetPixelFormatSize((enum DXGI_FORMAT)v39);
      v27 = a5;
      v28 = &v36[a5 * a3->m128i_i32[1]];
      v29 = &v28[a3->m128i_i32[0] * (PixelFormatSize >> 3)];
      v37 = v29;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        Template_qqqq(
          (_DWORD)v28,
          (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
          v17 - v35,
          v34 - v38.top,
          v26,
          PixelFormatSize >> 3);
        v27 = a5;
        v29 = v37;
      }
      CD3DDeviceLevel1::UpdateSubresource(*(CD3DDeviceLevel1 **)(a1 + 16), v10[17], &v38, v29, v27);
      ++v12;
      ++a3;
      if ( v12 >= v40 )
        goto LABEL_15;
    }
    v32 = 3900;
LABEL_23:
    v31 = v11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, v32);
LABEL_15:
  if ( v10 )
    CMILPoolResource::Release((CMILPoolResource *)v10);
  return v11;
}
