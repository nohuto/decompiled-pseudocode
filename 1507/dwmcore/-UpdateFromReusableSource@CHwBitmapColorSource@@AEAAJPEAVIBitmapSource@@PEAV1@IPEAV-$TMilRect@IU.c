/*
 * XREFs of ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18013D89C
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18000F64C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1800190F8 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18004005C (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180084EB0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1800DE084 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwBitmapColorSource::UpdateFromReusableSource(
        __int64 a1,
        struct IUnknown *a2,
        CHwBitmapColorSource *a3,
        unsigned int a4,
        struct tagRECT *a5,
        unsigned int *a6,
        struct tagRECT **a7,
        int a8,
        __int64 a9,
        unsigned int *a10)
{
  struct CD3DSurface *v10; // r15
  struct CD3DSurface *v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v18; // esi
  __int64 v19; // r14
  unsigned int v20; // ecx
  struct tagRECT *v21; // rax
  unsigned int top; // edx
  unsigned int right; // r10d
  unsigned int bottom; // r8d
  unsigned int v25; // r9d
  bool v26; // cc
  bool v27; // cf
  int v28; // eax
  __int64 v29; // r8
  CHwBitmapColorSource *v30; // rbx
  __int64 v31; // rdx
  int D3DSurfaceLevel; // eax
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rax
  struct tagRECT *v39; // r9
  unsigned int v40; // edx
  int v41; // eax
  int v42; // esi
  unsigned int v43; // ecx
  unsigned int v45; // [rsp+28h] [rbp-91h]
  int v46[4]; // [rsp+38h] [rbp-81h] BYREF
  struct tagRECT v47; // [rsp+48h] [rbp-71h] BYREF
  int v48; // [rsp+58h] [rbp-61h]
  unsigned int v49; // [rsp+5Ch] [rbp-5Dh]
  struct CD3DSurface *v50; // [rsp+60h] [rbp-59h] BYREF
  unsigned int *v51; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-41h]
  struct CD3DSurface *v53; // [rsp+88h] [rbp-31h] BYREF
  __int64 v54; // [rsp+90h] [rbp-29h]
  struct tagPOINT v55; // [rsp+98h] [rbp-21h] BYREF
  _DWORD *v56; // [rsp+A0h] [rbp-19h] BYREF
  __m128i v57; // [rsp+A8h] [rbp-11h]
  unsigned int v62; // [rsp+140h] [rbp+87h]

  v10 = 0LL;
  v11 = 0LL;
  v50 = 0LL;
  v53 = 0LL;
  v12 = *a10;
  v13 = *(_QWORD *)a3;
  v49 = *a10;
  v14 = (*(__int64 (__fastcall **)(CHwBitmapColorSource *, _QWORD, _QWORD, int *, unsigned int **))(v13 + 64))(
          a3,
          *(_QWORD *)(a1 + 208),
          *(unsigned int *)(a1 + 152),
          v46,
          &v51);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xE64u);
    return v15;
  }
  v16 = v46[0];
  if ( !v46[0] )
  {
    v43 = a4;
LABEL_45:
    v46[0] = -1;
LABEL_46:
    *a6 = v43;
    *a7 = a5;
    *a10 = v12;
    goto LABEL_47;
  }
  while ( 1 )
  {
    v18 = 0;
    v46[0] = v16 - 1;
    v48 = 0;
    v19 = *(_QWORD *)(a9 + 8LL * v12);
    v20 = 0;
    v62 = 0;
    *(_DWORD *)(v19 + 24) = 0;
    if ( a4 )
      break;
LABEL_34:
    a5 = *(struct tagRECT **)v19;
    v43 = v18;
    a4 = v18;
    v12 = ((_BYTE)v49 - 1) & 1;
    v49 = v12;
    if ( !v18 )
      goto LABEL_46;
    v51 += 4;
    v16 = v46[0];
    if ( !v46[0] )
      goto LABEL_45;
  }
  v21 = a5;
  v54 = (__int64)a5;
  while ( 1 )
  {
    v47 = *v21;
    top = v47.top;
    right = v47.right;
    bottom = v47.bottom;
    v25 = _mm_cvtsi128_si32((__m128i)v47);
    if ( *v51 > v25 )
      v25 = *v51;
    v26 = v51[1] <= v47.top;
    v52 = v25;
    if ( !v26 )
      top = v51[1];
    v27 = v51[2] < v47.right;
    v47.left = v25;
    if ( v27 )
      right = v51[2];
    v27 = v51[3] < v47.bottom;
    v47.top = top;
    if ( v27 )
      bottom = v51[3];
    v47.bottom = bottom;
    v47.right = right;
    if ( right > v25 && bottom > top )
    {
      v28 = DynArrayImpl<0>::AddMultiple(v19, 0x10u, 4, &v56);
      v15 = v28;
      if ( v28 < 0 )
      {
        v45 = 3713;
      }
      else
      {
        v18 += TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
                 &a5[v62].left,
                 &v47,
                 v29,
                 v56,
                 4u);
        v48 = v18;
        *(_DWORD *)(v19 + 24) = v18;
        if ( v11 )
        {
LABEL_24:
          v57 = (__m128i)v47;
          v35 = *((_DWORD *)a3 + 30);
          v36 = -*((_DWORD *)a3 + 31);
          v47.top -= *((_DWORD *)a3 + 31);
          v37 = -v35;
          v47.bottom += v36;
          v47.right += v37;
          v55.y = v57.m128i_i32[1] - *(_DWORD *)(a1 + 124);
          v47.left = v37 + v52;
          v55.x = _mm_cvtsi128_si32(v57) - *(_DWORD *)(a1 + 120);
          CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(a1 + 16), v10, &v47, v11, &v55);
          v20 = v62;
          goto LABEL_33;
        }
        v30 = a3;
        if ( CHwBitmapColorSource::IsRealizationValid(a3) )
        {
LABEL_21:
          D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*((CD3DTexture **)v30 + 20), v31, &v50);
          v15 = D3DSurfaceLevel;
          if ( D3DSurfaceLevel < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0xE9Du);
            v10 = v50;
            goto LABEL_47;
          }
          v34 = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), v33, &v53);
          v15 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xEA0u);
            v10 = v50;
            v11 = v53;
            goto LABEL_47;
          }
          v10 = v50;
          v11 = v53;
          goto LABEL_24;
        }
        v28 = CHwBitmapColorSource::FillTextureWithTransformedSource(a3, a2);
        v15 = v28;
        if ( v28 >= 0 )
        {
          v30 = a3;
          goto LABEL_21;
        }
        v45 = 3737;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v45);
      goto LABEL_47;
    }
    v38 = *(unsigned int *)(v19 + 24);
    v39 = &a5[v20];
    v40 = v38 + 1;
    if ( (int)v38 + 1 < (unsigned int)v38 )
      break;
    v15 = 0;
    if ( v40 > *(_DWORD *)(v19 + 20) )
    {
      v41 = DynArrayImpl<0>::AddMultipleAndSet(v19, 0x10u, 1, v39);
      v42 = v41;
      if ( v41 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xC0u);
      v15 = v42;
      if ( v42 < 0 )
        goto LABEL_43;
      v18 = v48;
      v20 = v62;
    }
    else
    {
      *(struct tagRECT *)(*(_QWORD *)v19 + 16 * v38) = *v39;
      *(_DWORD *)(v19 + 24) = v40;
    }
    v48 = ++v18;
LABEL_33:
    ++v20;
    v21 = (struct tagRECT *)(v54 + 16);
    v62 = v20;
    v54 += 16LL;
    if ( v20 >= a4 )
      goto LABEL_34;
  }
  v42 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v15 = -2147024362;
LABEL_43:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xE77u);
LABEL_47:
  if ( v10 )
    CMILPoolResource::Release(v10);
  if ( v11 )
    CMILPoolResource::Release(v11);
  return v15;
}
