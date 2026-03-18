/*
 * XREFs of ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18017EC00
 * Callers:
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017939C (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 * Callees:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180016828 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180080EEC (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CopyPixelsToBitmap(
        __int64 a1,
        struct tagRECT *a2,
        unsigned int a3,
        __m128i *a4,
        __int64 a5)
{
  struct tagRECT v5; // xmm0
  unsigned int v6; // edi
  CMILPoolResource *v7; // r13
  unsigned int v8; // r15d
  __int64 left; // rdx
  bool v10; // zf
  unsigned int top; // ebx
  __m128i *v12; // r14
  unsigned int bottom; // r12d
  unsigned int right; // r8d
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rbx
  int D3DSurfaceLevel; // eax
  int v21; // eax
  __int64 *v22; // rdx
  __int64 *v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 *v27; // rdx
  __int64 *v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  unsigned int v39; // r11d
  unsigned int v40; // r8d
  unsigned __int32 v41; // eax
  unsigned __int32 v42; // r9d
  unsigned __int32 v43; // r13d
  unsigned __int32 v44; // ecx
  unsigned int v45; // r10d
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r10
  unsigned int v48; // r10d
  unsigned __int64 v49; // rax
  char *v50; // r13
  size_t v51; // rbx
  __int64 v52; // r12
  unsigned int v53; // [rsp+20h] [rbp-B1h]
  CMILPoolResource *v54; // [rsp+40h] [rbp-91h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-89h]
  unsigned int v56; // [rsp+4Ch] [rbp-85h] BYREF
  unsigned int v57; // [rsp+50h] [rbp-81h]
  unsigned int v58; // [rsp+54h] [rbp-7Dh]
  __int64 v59; // [rsp+58h] [rbp-79h] BYREF
  int v60; // [rsp+60h] [rbp-71h] BYREF
  int v61; // [rsp+64h] [rbp-6Dh] BYREF
  enum DXGI_FORMAT v62; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v63; // [rsp+6Ch] [rbp-65h]
  unsigned int v64; // [rsp+70h] [rbp-61h]
  unsigned int v65; // [rsp+74h] [rbp-5Dh]
  unsigned int v66; // [rsp+78h] [rbp-59h]
  __int64 v67; // [rsp+80h] [rbp-51h] BYREF
  char v68[8]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v69; // [rsp+90h] [rbp-41h] BYREF
  __m128i v70; // [rsp+98h] [rbp-39h]
  struct tagRECT v71; // [rsp+A8h] [rbp-29h] BYREF
  _DWORD v72[4]; // [rsp+B8h] [rbp-19h] BYREF

  v5 = *a2;
  v6 = 0;
  v67 = 0LL;
  v7 = 0LL;
  v59 = 0LL;
  v8 = a3;
  v71 = v5;
  left = (unsigned int)v5.left;
  v10 = a3 == 1;
  top = v5.top;
  v12 = a4;
  bottom = v5.bottom;
  right = v5.right;
  v54 = 0LL;
  if ( v10 )
  {
    if ( a4->m128i_i32[0] > (unsigned int)v5.left )
      left = a4->m128i_u32[0];
    if ( a4->m128i_i32[1] > (unsigned int)v5.top )
      top = a4->m128i_u32[1];
    if ( a4->m128i_i32[2] < (unsigned int)v5.right )
      right = a4->m128i_u32[2];
    if ( a4->m128i_i32[3] < (unsigned int)v5.bottom )
      bottom = a4->m128i_u32[3];
    if ( right <= (unsigned int)left || bottom <= top )
    {
      bottom = 0;
      right = 0;
      top = 0;
      left = 0LL;
    }
    v8 = 0;
    v12 = 0LL;
  }
  v15 = *(_DWORD *)(a1 + 172);
  if ( v15 > (unsigned int)left )
    left = v15;
  v16 = *(_DWORD *)(a1 + 176);
  v57 = left;
  v71.left = left;
  if ( v16 > top )
    top = v16;
  v17 = *(_DWORD *)(a1 + 180);
  v65 = top;
  v71.top = top;
  if ( v17 < right )
    right = v17;
  v18 = *(_DWORD *)(a1 + 184);
  v55 = right;
  v71.right = right;
  if ( v18 < bottom )
    bottom = v18;
  v66 = bottom;
  v71.bottom = bottom;
  if ( right > (unsigned int)left && bottom > top )
  {
    if ( *(_DWORD *)(a1 + 152) != DisplayId::None )
    {
      v33 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a5)(
              a5,
              &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213,
              &v67);
      v6 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x37Eu);
        goto LABEL_47;
      }
      v34 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v67 + 56LL))(v67, &v60, &v61);
      v6 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x380u);
        goto LABEL_47;
      }
      v72[0] = 0;
      v72[1] = 0;
      v72[2] = v60;
      v72[3] = v61;
      v35 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*(_QWORD *)a5 + 24LL))(
              a5,
              v72,
              2LL,
              &v59);
      v6 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x389u);
        goto LABEL_47;
      }
      v36 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v59 + 24LL))(v59, &v62);
      v6 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x38Bu);
        goto LABEL_47;
      }
      v63 = GetPixelFormatSize(v62) >> 3;
      v37 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v59 + 72LL))(v59, v68, &v69);
      v6 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x38Eu);
        goto LABEL_47;
      }
      v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v59 + 64LL))(v59, &v56);
      v6 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x38Fu);
        goto LABEL_47;
      }
      if ( !v8 || !v12 )
      {
        v8 = 1;
        v12 = (__m128i *)&v71;
      }
      v39 = 0;
      v58 = 0;
      v40 = v57;
      v41 = v55;
      while ( 1 )
      {
        v70 = *v12;
        v42 = v70.m128i_u32[1];
        v43 = v70.m128i_u32[2];
        v44 = v70.m128i_u32[3];
        v45 = _mm_cvtsi128_si32(v70);
        if ( v40 > v45 )
          v45 = v40;
        v64 = v45;
        if ( top > v70.m128i_i32[1] )
          v42 = top;
        if ( v41 < v70.m128i_i32[2] )
          v43 = v41;
        if ( bottom < v70.m128i_i32[3] )
          v44 = bottom;
        if ( v43 > v45 && v44 > v42 )
        {
          v46 = v56 * (unsigned __int64)(v42 - top);
          if ( v46 > 0xFFFFFFFF )
          {
            v53 = 943;
LABEL_87:
            v6 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v53);
LABEL_46:
            v7 = v54;
            goto LABEL_47;
          }
          v47 = v63 * (unsigned __int64)(v45 - v40);
          if ( v47 > 0xFFFFFFFF )
          {
            v53 = 947;
            goto LABEL_87;
          }
          v48 = v46 + v47;
          if ( v48 < (unsigned int)v46 )
          {
            v53 = 949;
            goto LABEL_87;
          }
          v49 = v63 * (unsigned __int64)(v43 - v64);
          if ( v49 > 0xFFFFFFFF )
          {
            v53 = 955;
            goto LABEL_87;
          }
          v6 = 0;
          v50 = (char *)(v69 + v48);
          if ( v42 < v44 )
          {
            v51 = (unsigned int)v49;
            v52 = v44 - v42;
            do
            {
              memset_0(v50, 0, v51);
              v50 += v56;
              --v52;
            }
            while ( v52 );
            top = v65;
            bottom = v66;
            v40 = v57;
            v39 = v58;
          }
          v41 = v55;
        }
        ++v39;
        ++v12;
        v58 = v39;
        if ( v39 >= v8 )
          goto LABEL_46;
      }
    }
    v19 = *(_QWORD *)(a1 + 16);
    ++*(_DWORD *)(v19 + 888);
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), left, &v54);
    v6 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0x360u);
      v27 = *(__int64 **)(v19 + 968);
      v28 = (__int64 *)(v19 + 960);
      while ( v27 != v28 && *((_DWORD *)v27 + 8) == *(_DWORD *)(v19 + 888) )
      {
        *((_DWORD *)v27 + 8) = 0;
        v27 = (__int64 *)v27[1];
      }
      v29 = *v27;
      if ( (__int64 *)*v27 != v28 )
      {
        v30 = *(_QWORD **)(v19 + 968);
        *v27 = (__int64)v28;
        v31 = *(_QWORD **)(v19 + 952);
        *(_QWORD *)(v19 + 968) = v27;
        *v31 = v29;
        *(_QWORD *)(v29 + 8) = v31;
        *(_QWORD *)(v19 + 952) = v30;
        *v30 = v19 + 944;
      }
      --*(_DWORD *)(v19 + 888);
      goto LABEL_46;
    }
    v7 = v54;
    v21 = CD3DSurface::CopyPixelsToBitmap((struct CD3DResourceManager **)v54, &v71, v8, v12, a5, 0, 0);
    v6 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x36Cu);
      v22 = *(__int64 **)(v19 + 968);
      v23 = (__int64 *)(v19 + 960);
      while ( v22 != v23 && *((_DWORD *)v22 + 8) == *(_DWORD *)(v19 + 888) )
      {
        *((_DWORD *)v22 + 8) = 0;
        v22 = (__int64 *)v22[1];
      }
    }
    else
    {
      v22 = *(__int64 **)(v19 + 968);
      v23 = (__int64 *)(v19 + 960);
      while ( v22 != v23 && *((_DWORD *)v22 + 8) == *(_DWORD *)(v19 + 888) )
      {
        *((_DWORD *)v22 + 8) = 0;
        v22 = (__int64 *)v22[1];
      }
    }
    v24 = *v22;
    if ( (__int64 *)*v22 != v23 )
    {
      v25 = *(_QWORD **)(v19 + 968);
      *v22 = (__int64)v23;
      *(_QWORD *)(v19 + 968) = v22;
      v26 = *(_QWORD **)(v19 + 952);
      *v26 = v24;
      *(_QWORD *)(v24 + 8) = v26;
      *(_QWORD *)(v19 + 952) = v25;
      *v25 = v19 + 944;
    }
    --*(_DWORD *)(v19 + 888);
LABEL_47:
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    if ( v67 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    if ( v7 )
      CMILPoolResource::Release(v7);
  }
  return v6;
}
