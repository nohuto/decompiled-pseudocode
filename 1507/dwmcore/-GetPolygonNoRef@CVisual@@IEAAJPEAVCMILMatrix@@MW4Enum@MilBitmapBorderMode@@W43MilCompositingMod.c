/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@W43MilBackfaceVisibility@@_NPEAPEAVCPolygon@@@Z @ 0x180103CB4
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014C5A8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@W46MilBackfaceVisibility@@_NPEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18011B4A8 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CVisual::GetPolygonNoRef(
        __int64 *a1,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        _QWORD *a9)
{
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v14; // rax
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // ebx
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // r9d
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // r8d
  _DWORD *v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdi
  int v34; // eax
  unsigned int v36; // [rsp+20h] [rbp-E0h]
  __int128 v37; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+60h] [rbp-A0h]
  __int128 v39; // [rsp+60h] [rbp-A0h]
  __int128 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  __int128 v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+8Ch] [rbp-74h]
  int v45; // [rsp+90h] [rbp-70h]
  unsigned int v46; // [rsp+94h] [rbp-6Ch]
  __int128 v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+A8h] [rbp-58h]
  void *v49[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v50; // [rsp+C0h] [rbp-40h]
  unsigned int v51; // [rsp+C4h] [rbp-3Ch]
  unsigned int v52; // [rsp+C8h] [rbp-38h]
  _BYTE v53[80]; // [rsp+D0h] [rbp-30h] BYREF

  v9 = 0LL;
  v10 = 0;
  v41 = 0LL;
  if ( a1[47] )
  {
    v52 = 0;
    v49[0] = v53;
    v49[1] = v53;
    v50 = 4;
    v51 = 4;
    v14 = *a1;
    v42 = _xmm;
    v48 = 1;
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, int *))(v14 + 152))(a1, 0LL, &v43);
    v10 = v15;
    if ( v15 < 0 )
    {
      v36 = 4516;
      v16 = v15;
LABEL_4:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v36);
      DynArrayImpl<1>::~DynArrayImpl<1>(v49);
      return v10;
    }
    LODWORD(v37) = v43;
    v17 = v52 + 1;
    *(_QWORD *)((char *)&v37 + 4) = v44;
    HIDWORD(v37) = 1065353216;
    v47 = v37;
    if ( v52 + 1 < v52 )
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
LABEL_12:
      v36 = 4518;
LABEL_13:
      v16 = v18;
      goto LABEL_4;
    }
    if ( v17 > v51 )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v49, 0x14u, 1, &v47);
      v18 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
      v10 = v18;
      if ( v18 < 0 )
        goto LABEL_12;
      v17 = v52;
    }
    else
    {
      v19 = v49[0];
      v20 = 5LL * v52;
      *(_OWORD *)((char *)v49[0] + 4 * v20) = v37;
      v19[v20 + 4] = v48;
      v52 = v17;
    }
    v22 = v17 + 1;
    LODWORD(v38) = v45;
    *(_QWORD *)((char *)&v38 + 4) = v44;
    HIDWORD(v38) = 1065353216;
    v47 = v38;
    if ( v17 + 1 < v17 )
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
LABEL_22:
      v36 = 4520;
      goto LABEL_13;
    }
    if ( v22 > v51 )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v49, 0x14u, 1, &v47);
      v18 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
      v10 = v18;
      if ( v18 < 0 )
        goto LABEL_22;
      v22 = v52;
    }
    else
    {
      v23 = v49[0];
      v24 = 5LL * v17;
      *(_OWORD *)((char *)v49[0] + 4 * v24) = v38;
      v23[v24 + 4] = v48;
      v52 = v17 + 1;
    }
    v26 = v22 + 1;
    LODWORD(v39) = v45;
    *(_QWORD *)((char *)&v39 + 4) = v46;
    HIDWORD(v39) = 1065353216;
    v47 = v39;
    if ( v22 + 1 < v22 )
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
LABEL_31:
      v36 = 4522;
      goto LABEL_13;
    }
    if ( v26 > v51 )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v49, 0x14u, 1, &v47);
      v18 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
      v10 = v18;
      if ( v18 < 0 )
        goto LABEL_31;
      v26 = v52;
    }
    else
    {
      v27 = v49[0];
      v28 = 5LL * v22;
      *(_OWORD *)((char *)v49[0] + 4 * v28) = v39;
      v27[v28 + 4] = v48;
      v52 = v22 + 1;
    }
    LODWORD(v40) = v43;
    *(_QWORD *)((char *)&v40 + 4) = v46;
    HIDWORD(v40) = 1065353216;
    v47 = v40;
    if ( v26 + 1 < v26 )
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
LABEL_42:
      v36 = 4524;
      goto LABEL_13;
    }
    if ( v26 + 1 > v51 )
    {
      v34 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v49, 0x14u, 1, &v47);
      v18 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xC0u);
      v10 = v18;
      if ( v18 < 0 )
        goto LABEL_42;
    }
    else
    {
      v30 = v49[0];
      v31 = 5LL * v26;
      *(_OWORD *)((char *)v49[0] + 4 * v31) = v40;
      v30[v31 + 4] = v48;
      v52 = v26 + 1;
    }
    v32 = CPolygon::Create(
            (unsigned int)v49,
            (_DWORD)a1,
            a1[47],
            a2,
            LODWORD(a3),
            a4,
            a5,
            a6,
            a7,
            a8,
            (__int64)&v42,
            (__int64)&v41);
    v10 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x11BAu);
      DynArrayImpl<1>::~DynArrayImpl<1>(v49);
      v33 = v41;
      goto LABEL_45;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v49);
    v9 = v41;
  }
  *a9 = v9;
  v33 = 0LL;
LABEL_45:
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  return v10;
}
