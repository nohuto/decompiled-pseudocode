/*
 * XREFs of ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18017E81C
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18001662C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18002104C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180080EEC (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18009A698 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x18010F4B8 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
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
  __int64 v11; // rdx
  struct CD3DSurface *v12; // rsi
  struct CD3DSurface *v13; // r15
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 (__fastcall *v17)(CHwBitmapColorSource *, __int64, __int64, int *, unsigned int **); // rax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  unsigned int v22; // r13d
  __int64 v23; // r14
  unsigned int v24; // ecx
  struct tagRECT *v25; // rax
  unsigned int top; // edx
  unsigned int right; // r10d
  unsigned int bottom; // r8d
  unsigned int v29; // r9d
  bool v30; // cc
  bool v31; // cf
  int v32; // eax
  __int64 v33; // r8
  CHwBitmapColorSource *v34; // rbx
  __int64 v35; // rdx
  int v36; // eax
  int D3DSurfaceLevel; // eax
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  __int64 v43; // rax
  struct tagRECT *v44; // r9
  unsigned int v45; // ecx
  int v46; // eax
  unsigned int v47; // ecx
  struct tagRECT v49; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-61h]
  unsigned int v51; // [rsp+4Ch] [rbp-5Dh]
  CMILPoolResource *v52; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v53; // [rsp+58h] [rbp-51h]
  unsigned int *v54; // [rsp+68h] [rbp-41h] BYREF
  CMILPoolResource *v55; // [rsp+70h] [rbp-39h] BYREF
  struct tagPOINT v56; // [rsp+78h] [rbp-31h] BYREF
  __int64 v57; // [rsp+80h] [rbp-29h]
  _DWORD *v58; // [rsp+88h] [rbp-21h] BYREF
  __m128i v59; // [rsp+98h] [rbp-11h]

  v11 = *(_QWORD *)(a1 + 208);
  v12 = 0LL;
  v13 = 0LL;
  v14 = *a10;
  v15 = *(_QWORD *)a3;
  v16 = *(unsigned int *)(a1 + 152);
  v52 = 0LL;
  v55 = 0LL;
  v17 = *(__int64 (__fastcall **)(CHwBitmapColorSource *, __int64, __int64, int *, unsigned int **))(v15 + 64);
  v51 = v14;
  v18 = v17(a3, v11, v16, &a8, &v54);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xE4Du);
  }
  else
  {
    v20 = a8;
    if ( a8 )
    {
      while ( 1 )
      {
        a8 = v20 - 1;
        v22 = 0;
        v23 = *(_QWORD *)(a9 + 8LL * v14);
        v24 = 0;
        v50 = 0;
        *(_DWORD *)(v23 + 24) = 0;
        if ( a4 )
          break;
LABEL_33:
        a5 = *(struct tagRECT **)v23;
        v47 = v22;
        a4 = v22;
        v14 = ((_BYTE)v51 - 1) & 1;
        v51 = v14;
        if ( !v22 )
          goto LABEL_43;
        v54 += 4;
        v20 = a8;
        if ( !a8 )
          goto LABEL_42;
      }
      v25 = a5;
      v57 = (__int64)a5;
      while ( 1 )
      {
        v49 = *v25;
        top = v49.top;
        right = v49.right;
        bottom = v49.bottom;
        v29 = _mm_cvtsi128_si32((__m128i)v49);
        if ( *v54 > v29 )
          v29 = *v54;
        v30 = v54[1] <= v49.top;
        v53 = v29;
        if ( !v30 )
          top = v54[1];
        v31 = v54[2] < v49.right;
        v49.left = v29;
        if ( v31 )
          right = v54[2];
        v31 = v54[3] < v49.bottom;
        v49.top = top;
        if ( v31 )
          bottom = v54[3];
        v49.bottom = bottom;
        v49.right = right;
        if ( right <= v29 || bottom <= top )
          break;
        v32 = DynArrayImpl<0>::AddMultiple(v23, 16, 4, &v58);
        v19 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xE6Au);
          goto LABEL_45;
        }
        v22 += TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
                 &a5[v50].left,
                 &v49,
                 v33,
                 v58,
                 4u);
        *(_DWORD *)(v23 + 24) = v22;
        if ( !v13 )
        {
          v34 = a3;
          if ( !CHwBitmapColorSource::IsRealizationValid(a3) )
          {
            v36 = CHwBitmapColorSource::FillTextureWithTransformedSource(a3, a2);
            v19 = v36;
            if ( v36 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xE82u);
              goto LABEL_45;
            }
            v34 = a3;
          }
          D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*((CD3DTexture **)v34 + 20), v35, &v52);
          v19 = D3DSurfaceLevel;
          if ( D3DSurfaceLevel < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0xE86u);
            v12 = v52;
            goto LABEL_45;
          }
          v39 = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), v38, &v55);
          v19 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xE89u);
            v12 = v52;
            v13 = v55;
            goto LABEL_45;
          }
          v12 = v52;
          v13 = v55;
        }
        v59 = (__m128i)v49;
        v40 = *((_DWORD *)a3 + 30);
        v41 = -*((_DWORD *)a3 + 31);
        v49.top -= *((_DWORD *)a3 + 31);
        v42 = -v40;
        v49.bottom += v41;
        v49.right += v42;
        v56.y = v59.m128i_i32[1] - *(_DWORD *)(a1 + 124);
        v49.left = v42 + v53;
        v56.x = _mm_cvtsi128_si32(v59) - *(_DWORD *)(a1 + 120);
        CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(a1 + 16), v12, &v49, v13, &v56);
LABEL_32:
        v24 = v50 + 1;
        v25 = (struct tagRECT *)(v57 + 16);
        v50 = v24;
        v57 += 16LL;
        if ( v24 >= a4 )
          goto LABEL_33;
      }
      v43 = *(unsigned int *)(v23 + 24);
      v44 = &a5[v24];
      v45 = v43 + 1;
      if ( (int)v43 + 1 >= (unsigned int)v43 )
      {
        v19 = 0;
        if ( v45 <= *(_DWORD *)(v23 + 20) )
        {
          *(struct tagRECT *)(*(_QWORD *)v23 + 16 * v43) = *v44;
          *(_DWORD *)(v23 + 24) = v45;
LABEL_31:
          ++v22;
          goto LABEL_32;
        }
        v46 = DynArrayImpl<0>::AddMultipleAndSet(v23, 0x10u, 1, v44);
        v19 = v46;
        if ( v46 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xC0u);
      }
      else
      {
        v19 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xE60u);
        goto LABEL_45;
      }
      goto LABEL_31;
    }
    v47 = a4;
LABEL_42:
    a8 = -1;
LABEL_43:
    *a6 = v47;
    *a7 = a5;
    *a10 = v14;
  }
LABEL_45:
  if ( v12 )
    CMILPoolResource::Release(v12);
  if ( v13 )
    CMILPoolResource::Release(v13);
  return (unsigned int)v19;
}
