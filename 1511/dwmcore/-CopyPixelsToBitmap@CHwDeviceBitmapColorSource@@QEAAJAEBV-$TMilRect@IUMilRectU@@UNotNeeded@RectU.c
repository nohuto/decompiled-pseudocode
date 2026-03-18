/*
 * XREFs of ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18014E0EC
 * Callers:
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180148B58 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002A398 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x18002D478 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CopyPixelsToBitmap(
        __int64 a1,
        struct tagRECT *a2,
        unsigned int a3,
        struct tagRECT *a4,
        __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v10; // esi
  __int64 left; // rdx
  unsigned __int32 top; // r12d
  unsigned int right; // r8d
  unsigned int bottom; // ecx
  unsigned int v15; // eax
  unsigned __int32 v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rbx
  int D3DSurfaceLevel; // eax
  __int64 *v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __m128i *v26; // r9
  CMILPoolResource *v27; // r14
  int v28; // eax
  __int64 *v29; // rdx
  __int64 *v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // r13
  int v35; // eax
  int v36; // r9d
  unsigned int v37; // r10d
  unsigned __int32 v38; // r13d
  unsigned int v39; // r9d
  unsigned __int32 v40; // eax
  unsigned __int32 v41; // r8d
  unsigned __int32 v42; // r11d
  unsigned __int32 v43; // ecx
  unsigned int v44; // ebx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r9
  unsigned int v47; // r9d
  unsigned __int64 v48; // rax
  char *v49; // rbx
  size_t v50; // r12
  __int64 v51; // r13
  unsigned int v53; // [rsp+20h] [rbp-C1h]
  CMILPoolResource *v54; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-99h]
  unsigned int v56; // [rsp+4Ch] [rbp-95h]
  unsigned int v57; // [rsp+50h] [rbp-91h]
  unsigned int v58; // [rsp+54h] [rbp-8Dh] BYREF
  unsigned int v59; // [rsp+58h] [rbp-89h]
  __int64 v60; // [rsp+60h] [rbp-81h] BYREF
  unsigned __int32 v61; // [rsp+68h] [rbp-79h]
  __int64 v62; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v63; // [rsp+78h] [rbp-69h]
  int v64; // [rsp+7Ch] [rbp-65h] BYREF
  enum DXGI_FORMAT v65; // [rsp+80h] [rbp-61h] BYREF
  __int64 v66; // [rsp+88h] [rbp-59h] BYREF
  int v67; // [rsp+90h] [rbp-51h] BYREF
  __int64 v68; // [rsp+98h] [rbp-49h] BYREF
  __m128i v69; // [rsp+A0h] [rbp-41h]
  __int64 v70; // [rsp+B0h] [rbp-31h] BYREF
  struct tagRECT v71; // [rsp+B8h] [rbp-29h] BYREF
  _DWORD v72[4]; // [rsp+C8h] [rbp-19h] BYREF

  v5 = *(_QWORD *)(a1 + 16);
  v66 = a5;
  v70 = v5;
  v62 = 0LL;
  v60 = 0LL;
  v10 = 0;
  ++*(_DWORD *)(v5 + 504);
  v54 = 0LL;
  *(_DWORD *)(v5 + 508) = GetCurrentThreadId();
  v71 = *a2;
  left = (unsigned int)v71.left;
  top = v71.top;
  right = v71.right;
  bottom = v71.bottom;
  if ( a3 == 1 )
  {
    if ( a4->left > (unsigned int)v71.left )
      left = (unsigned int)a4->left;
    if ( a4->top > (unsigned int)v71.top )
      top = a4->top;
    if ( a4->right < (unsigned int)v71.right )
      right = a4->right;
    if ( a4->bottom < (unsigned int)v71.bottom )
      bottom = a4->bottom;
    if ( right <= (unsigned int)left || bottom <= top )
    {
      bottom = 0;
      right = 0;
      top = 0;
      left = 0LL;
    }
    a3 = 0;
    a4 = 0LL;
  }
  v15 = *(_DWORD *)(a1 + 172);
  if ( v15 > (unsigned int)left )
    left = v15;
  v16 = *(_DWORD *)(a1 + 176);
  v56 = left;
  v71.left = left;
  if ( v16 > top )
    top = v16;
  v17 = *(_DWORD *)(a1 + 180);
  v61 = top;
  v71.top = top;
  if ( v17 < right )
    right = v17;
  v18 = *(_DWORD *)(a1 + 184);
  v55 = right;
  v71.right = right;
  if ( v18 < bottom )
    bottom = v18;
  v57 = bottom;
  v71.bottom = bottom;
  if ( right <= (unsigned int)left || bottom <= top )
    goto LABEL_91;
  if ( *(_DWORD *)(a1 + 152) == DisplayId::None )
  {
    v19 = *(_QWORD *)(a1 + 16);
    ++*(_DWORD *)(v19 + 856);
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), left, &v54);
    v10 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0x365u);
      v21 = *(__int64 **)(v19 + 936);
      v22 = (__int64 *)(v19 + 928);
      while ( v21 != v22 && *((_DWORD *)v21 + 8) == *(_DWORD *)(v19 + 856) )
      {
        *((_DWORD *)v21 + 8) = 0;
        v21 = (__int64 *)v21[1];
      }
      v23 = *v21;
      if ( (__int64 *)*v21 != v22 )
      {
        v24 = *(_QWORD **)(v19 + 936);
        *v21 = (__int64)v22;
        v25 = *(_QWORD **)(v19 + 920);
        *(_QWORD *)(v19 + 936) = v21;
        *v25 = v23;
        *(_QWORD *)(v23 + 8) = v25;
        *(_QWORD *)(v19 + 920) = v24;
        *v24 = v19 + 912;
      }
      --*(_DWORD *)(v19 + 856);
      goto LABEL_91;
    }
    v26 = (__m128i *)a4;
    v27 = v54;
    v28 = CD3DSurface::CopyPixelsToBitmap(v54, &v71, a3, v26, v66, 0, 0);
    v10 = v28;
    if ( v28 >= 0 )
    {
      v29 = *(__int64 **)(v19 + 936);
      v30 = (__int64 *)(v19 + 928);
      while ( v29 != v30 && *((_DWORD *)v29 + 8) == *(_DWORD *)(v19 + 856) )
      {
        *((_DWORD *)v29 + 8) = 0;
        v29 = (__int64 *)v29[1];
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x371u);
      v29 = *(__int64 **)(v19 + 936);
      v30 = (__int64 *)(v19 + 928);
      while ( v29 != v30 && *((_DWORD *)v29 + 8) == *(_DWORD *)(v19 + 856) )
      {
        *((_DWORD *)v29 + 8) = 0;
        v29 = (__int64 *)v29[1];
      }
    }
    v31 = *v29;
    if ( (__int64 *)*v29 != v30 )
    {
      v32 = *(_QWORD **)(v19 + 936);
      *v29 = (__int64)v30;
      *(_QWORD *)(v19 + 936) = v29;
      v33 = *(_QWORD **)(v19 + 920);
      *v33 = v31;
      *(_QWORD *)(v31 + 8) = v33;
      *(_QWORD *)(v19 + 920) = v32;
      *v32 = v19 + 912;
    }
    --*(_DWORD *)(v19 + 856);
    goto LABEL_92;
  }
  v34 = v66;
  v35 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v66)(
          v66,
          &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213,
          &v62);
  v10 = v35;
  if ( v35 < 0 )
  {
    v53 = 899;
LABEL_48:
    v36 = v35;
    goto LABEL_90;
  }
  v35 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v62 + 56LL))(v62, &v67, &v64);
  v10 = v35;
  if ( v35 < 0 )
  {
    v53 = 901;
    goto LABEL_48;
  }
  v72[0] = 0;
  v72[1] = 0;
  v72[2] = v67;
  v72[3] = v64;
  v35 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*(_QWORD *)v34 + 24LL))(v34, v72, 2LL, &v60);
  v10 = v35;
  if ( v35 < 0 )
  {
    v53 = 910;
    goto LABEL_48;
  }
  v35 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v60 + 24LL))(v60, &v65);
  v10 = v35;
  if ( v35 < 0 )
  {
    v53 = 912;
    goto LABEL_48;
  }
  v63 = GetPixelFormatSize(v65) >> 3;
  v35 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v60 + 72LL))(v60, &v66, &v68);
  v10 = v35;
  if ( v35 < 0 )
  {
    v53 = 915;
    goto LABEL_48;
  }
  v35 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v60 + 64LL))(v60, &v58);
  v10 = v35;
  if ( v35 < 0 )
  {
    v53 = 916;
    goto LABEL_48;
  }
  if ( !a3 || !a4 )
  {
    a3 = 1;
    a4 = &v71;
  }
  v37 = 0;
  v59 = 0;
  v38 = v57;
  v39 = v56;
  v40 = v55;
  while ( 1 )
  {
    v69 = *(__m128i *)a4;
    v41 = v69.m128i_u32[1];
    v42 = v69.m128i_u32[2];
    v43 = v69.m128i_u32[3];
    v44 = _mm_cvtsi128_si32(v69);
    if ( v39 > v44 )
      v44 = v39;
    if ( top > v69.m128i_i32[1] )
      v41 = top;
    if ( v40 < v69.m128i_i32[2] )
      v42 = v40;
    if ( v38 < v69.m128i_i32[3] )
      v43 = v38;
    if ( v42 <= v44 || v43 <= v41 )
      goto LABEL_83;
    v45 = v58 * (unsigned __int64)(v41 - top);
    if ( v45 > 0xFFFFFFFF )
      break;
    v46 = v63 * (unsigned __int64)(v44 - v39);
    if ( v46 > 0xFFFFFFFF )
    {
      v53 = 952;
      goto LABEL_89;
    }
    v47 = v45 + v46;
    if ( v47 < (unsigned int)v45 )
    {
      v53 = 954;
      goto LABEL_89;
    }
    v48 = v63 * (unsigned __int64)(v42 - v44);
    if ( v48 > 0xFFFFFFFF )
    {
      v53 = 960;
      goto LABEL_89;
    }
    v10 = 0;
    v49 = (char *)(v68 + v47);
    if ( v41 < v43 )
    {
      v50 = (unsigned int)v48;
      v51 = v43 - v41;
      do
      {
        memset_0(v49, 0, v50);
        v49 += v58;
        --v51;
      }
      while ( v51 );
      top = v61;
      v38 = v57;
      v37 = v59;
    }
    v40 = v55;
    v39 = v56;
LABEL_83:
    ++v37;
    ++a4;
    v59 = v37;
    if ( v37 >= a3 )
      goto LABEL_91;
  }
  v53 = 948;
LABEL_89:
  v36 = -2147024362;
  v10 = -2147024362;
LABEL_90:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, v53);
LABEL_91:
  v27 = v54;
LABEL_92:
  if ( v60 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  if ( v27 )
    CMILPoolResource::Release(v27);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v70);
  return v10;
}
