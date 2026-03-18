/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18012044C
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18015AC0C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180131E3C (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CVisual::GetPolygonNoRef(
        __int64 a1,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        char a7,
        char a8,
        char a9,
        _QWORD *a10)
{
  __int64 v10; // rax
  unsigned int v11; // esi
  unsigned int v15; // ecx
  __int64 v16; // rax
  bool *v17; // r8
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // edx
  int v21; // ebx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // r9d
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  unsigned int v28; // r8d
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rdi
  int v36; // eax
  unsigned int v38; // [rsp+20h] [rbp-E0h]
  __int128 v39; // [rsp+60h] [rbp-A0h]
  __int128 v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+60h] [rbp-A0h]
  __int128 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+78h] [rbp-88h] BYREF
  __int128 v45; // [rsp+88h] [rbp-78h] BYREF
  __int128 v46; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+A8h] [rbp-58h]
  void *v48[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C4h] [rbp-3Ch]
  bool v51[80]; // [rsp+D0h] [rbp-30h] BYREF

  v10 = 0LL;
  v11 = 0;
  v43 = 0LL;
  if ( *(_QWORD *)(a1 + 360) || a9 )
  {
    v15 = 4;
    v48[1] = v51;
    v16 = 0LL;
    v49 = 4;
    v50 = 4LL;
    v17 = v51;
    v48[0] = v51;
    v47 = 1;
    v44 = _xmm;
    if ( a9 )
    {
      v45 = *(_OWORD *)(a1 + 164);
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a1 + 152LL))(a1, 0LL, &v45);
      v11 = v18;
      if ( v18 < 0 )
      {
        v38 = 4441;
        v19 = v18;
LABEL_6:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v38);
        DynArrayImpl<1>::~DynArrayImpl<1>(v48);
        return v11;
      }
      v16 = HIDWORD(v50);
      v15 = v50;
      v17 = (bool *)v48[0];
    }
    v20 = v16 + 1;
    LODWORD(v39) = v45;
    *(_QWORD *)((char *)&v39 + 4) = DWORD1(v45);
    HIDWORD(v39) = 1065353216;
    v46 = v39;
    if ( (int)v16 + 1 < (unsigned int)v16 )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v11 = -2147024362;
LABEL_16:
      v38 = 4450;
LABEL_17:
      v19 = v21;
      goto LABEL_6;
    }
    if ( v20 > v15 )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
      v21 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
      v11 = v21;
      if ( v21 < 0 )
        goto LABEL_16;
      v20 = HIDWORD(v50);
    }
    else
    {
      v22 = 5 * v16;
      *(_OWORD *)&v17[4 * v22] = v39;
      *(_DWORD *)&v17[4 * v22 + 16] = v47;
      HIDWORD(v50) = v16 + 1;
    }
    v24 = v20 + 1;
    LODWORD(v40) = DWORD2(v45);
    *(_QWORD *)((char *)&v40 + 4) = DWORD1(v45);
    HIDWORD(v40) = 1065353216;
    v46 = v40;
    if ( v20 + 1 < v20 )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v11 = -2147024362;
LABEL_26:
      v38 = 4452;
      goto LABEL_17;
    }
    if ( v24 > (unsigned int)v50 )
    {
      v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
      v21 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
      v11 = v21;
      if ( v21 < 0 )
        goto LABEL_26;
      v24 = HIDWORD(v50);
    }
    else
    {
      v25 = v48[0];
      v26 = 5LL * v20;
      *(_OWORD *)((char *)v48[0] + 4 * v26) = v40;
      v25[v26 + 4] = v47;
      HIDWORD(v50) = v24;
    }
    v28 = v24 + 1;
    LODWORD(v41) = DWORD2(v45);
    *(_QWORD *)((char *)&v41 + 4) = HIDWORD(v45);
    HIDWORD(v41) = 1065353216;
    v46 = v41;
    if ( v24 + 1 < v24 )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v11 = -2147024362;
LABEL_35:
      v38 = 4454;
      goto LABEL_17;
    }
    if ( v28 > (unsigned int)v50 )
    {
      v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
      v21 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC0u);
      v11 = v21;
      if ( v21 < 0 )
        goto LABEL_35;
      v28 = HIDWORD(v50);
    }
    else
    {
      v29 = v48[0];
      v30 = 5LL * v24;
      *(_OWORD *)((char *)v48[0] + 4 * v30) = v41;
      v29[v30 + 4] = v47;
      HIDWORD(v50) = v24 + 1;
    }
    LODWORD(v42) = v45;
    *(_QWORD *)((char *)&v42 + 4) = HIDWORD(v45);
    HIDWORD(v42) = 1065353216;
    v46 = v42;
    if ( v28 + 1 < v28 )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v11 = -2147024362;
LABEL_46:
      v38 = 4456;
      goto LABEL_17;
    }
    if ( v28 + 1 > (unsigned int)v50 )
    {
      v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 20, 1, &v46);
      v21 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xC0u);
      v11 = v21;
      if ( v21 < 0 )
        goto LABEL_46;
    }
    else
    {
      v32 = v48[0];
      v33 = 5LL * v28;
      *(_OWORD *)((char *)v48[0] + 4 * v33) = v42;
      v32[v33 + 4] = v47;
      HIDWORD(v50) = v28 + 1;
    }
    v34 = CPolygon::Create(
            (unsigned int)v48,
            a1,
            *(_QWORD *)(a1 + 360),
            a2,
            LODWORD(a3),
            a4,
            a5,
            a6,
            a7,
            a8,
            (__int64)&v44,
            (__int64)&v43);
    v11 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x1176u);
      DynArrayImpl<1>::~DynArrayImpl<1>(v48);
      v35 = v43;
      goto LABEL_49;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v48);
    v10 = v43;
  }
  *a10 = v10;
  v35 = 0LL;
LABEL_49:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  return v11;
}
