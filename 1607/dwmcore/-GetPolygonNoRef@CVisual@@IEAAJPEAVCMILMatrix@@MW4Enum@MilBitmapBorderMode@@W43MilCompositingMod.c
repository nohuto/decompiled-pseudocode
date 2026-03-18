/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18013846C
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18018CCF8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetBoundsWithEffects@CVisual@@QEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180109F34 (-GetBoundsWithEffects@CVisual@@QEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180154604 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CVisual::GetPolygonNoRef(
        _QWORD *a1,
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
  __int64 v10; // rsi
  int v11; // ebx
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  int v32; // eax
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int128 v40; // [rsp+78h] [rbp-88h] BYREF
  __int128 v41; // [rsp+88h] [rbp-78h] BYREF
  __int128 v42; // [rsp+98h] [rbp-68h] BYREF
  int v43; // [rsp+A8h] [rbp-58h]
  _QWORD v44[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v45; // [rsp+C0h] [rbp-40h]
  unsigned int v46; // [rsp+C4h] [rbp-3Ch]
  unsigned int v47; // [rsp+C8h] [rbp-38h]
  _BYTE v48[80]; // [rsp+D0h] [rbp-30h] BYREF

  v10 = 0LL;
  v11 = 0;
  v39 = 0LL;
  if ( !a1[38] && !a9 )
    goto LABEL_41;
  v47 = 0;
  v44[0] = v48;
  v44[1] = v48;
  v45 = 4;
  v46 = 4;
  v43 = 1;
  v40 = _xmm;
  if ( a9 )
  {
    v41 = *((_OWORD *)a1 + 14);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*a1 + 160LL))(a1, 0LL, &v41);
    v11 = v15;
    if ( v15 < 0 )
    {
      v34 = 4823;
      v16 = v15;
LABEL_6:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v34);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v44);
      return (unsigned int)v11;
    }
  }
  CVisual::GetBoundsWithEffects((CVisual *)a1, &v41, (__int64)&v41);
  *((_QWORD *)&v35 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v35 = v41;
  v17 = v47 + 1;
  v42 = v35;
  if ( v47 + 1 >= v47 )
  {
    if ( v17 <= v46 )
    {
      v18 = v44[0];
      v19 = 5LL * v47;
      *(_OWORD *)(v44[0] + 4 * v19) = v35;
      *(_DWORD *)(v18 + 4 * v19 + 16) = v43;
      v47 = v17;
      goto LABEL_16;
    }
    v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v44, 0x14u, 1, &v42);
    v11 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
  }
  else
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x12E2u);
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v44);
    goto LABEL_48;
  }
  v17 = v47;
LABEL_16:
  v21 = v17 + 1;
  *((_QWORD *)&v36 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v36 = __PAIR64__(DWORD1(v41), DWORD2(v41));
  v42 = v36;
  if ( v17 + 1 >= v17 )
  {
    if ( v21 <= v46 )
    {
      v22 = v44[0];
      v23 = 5LL * v17;
      *(_OWORD *)(v44[0] + 4 * v23) = v36;
      *(_DWORD *)(v22 + 4 * v23 + 16) = v43;
      v47 = v17 + 1;
      goto LABEL_24;
    }
    v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v44, 0x14u, 1, &v42);
    v11 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
  }
  else
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v11 < 0 )
  {
    v34 = 4836;
    goto LABEL_44;
  }
  v21 = v47;
LABEL_24:
  v25 = v21 + 1;
  *((_QWORD *)&v37 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v37 = *((_QWORD *)&v41 + 1);
  v42 = v37;
  if ( v21 + 1 >= v21 )
  {
    if ( v25 <= v46 )
    {
      v26 = v44[0];
      v27 = 5LL * v21;
      *(_OWORD *)(v44[0] + 4 * v27) = v37;
      *(_DWORD *)(v26 + 4 * v27 + 16) = v43;
      v47 = v21 + 1;
      goto LABEL_32;
    }
    v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v44, 0x14u, 1, &v42);
    v11 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
  }
  else
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v11 < 0 )
  {
    v34 = 4838;
    goto LABEL_44;
  }
  v25 = v47;
LABEL_32:
  *((_QWORD *)&v38 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v38 = __PAIR64__(HIDWORD(v41), v41);
  v42 = v38;
  if ( v25 + 1 < v25 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_38:
    if ( v11 >= 0 )
      goto LABEL_39;
    v34 = 4840;
LABEL_44:
    v16 = v11;
    goto LABEL_6;
  }
  if ( v25 + 1 > v46 )
  {
    v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v44, 0x14u, 1, &v42);
    v11 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC0u);
    goto LABEL_38;
  }
  v29 = v44[0];
  v30 = 5LL * v25;
  *(_OWORD *)(v44[0] + 4 * v30) = v38;
  *(_DWORD *)(v29 + 4 * v30 + 16) = v43;
  v47 = v25 + 1;
LABEL_39:
  v32 = CPolygon::Create(
          (unsigned int)v44,
          (_DWORD)a1,
          a1[38],
          a2,
          LODWORD(a3),
          a4,
          a5,
          a6,
          a7,
          a8,
          (__int64)&v40,
          (__int64)&v39);
  v11 = v32;
  if ( v32 >= 0 )
  {
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v44);
    v10 = v39;
LABEL_41:
    *a10 = v10;
    return (unsigned int)v11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x12F6u);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v44);
  v10 = v39;
LABEL_48:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return (unsigned int)v11;
}
