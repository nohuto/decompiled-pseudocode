/*
 * XREFs of ?GetTilePropertyCurrentValues@CTileBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x180085C44
 * Callers:
 *     ?GetBrushRealizationInternal@CTileBrush@@MEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180085EA0 (-GetBrushRealizationInternal@CTileBrush@@MEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     ?GetOpacity@CBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z @ 0x180056648 (-GetOpacity@CBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CTileBrush::GetTilePropertyCurrentValues(
        __int64 *a1,
        float *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7,
        _OWORD *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13,
        _OWORD *a14)
{
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, double *, __int64 *, CTransform3D **, CTransform3D **, __int64, __int64, __int128 *, __int64 *, __int128 *, __int64 *, __int64, __int64, __int64, __int64); // r15
  int Opacity; // eax
  unsigned int v18; // edi
  _OWORD *v19; // r14
  __int64 v20; // rdi
  _OWORD *v21; // r14
  __int64 v22; // rdi
  _OWORD *v23; // rcx
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  CTransform3D *v29; // [rsp+90h] [rbp-70h] BYREF
  _OWORD *v30; // [rsp+98h] [rbp-68h]
  float *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h] BYREF
  double v33; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD *v34; // [rsp+B8h] [rbp-48h]
  __int64 *v35; // [rsp+C0h] [rbp-40h]
  _DWORD *v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD *v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h] BYREF
  CTransform3D *v40; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v41; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v42; // [rsp+100h] [rbp+0h] BYREF

  v30 = a7;
  v34 = a8;
  v36 = a13;
  v38 = a14;
  v14 = *a1;
  v35 = a1;
  v15 = *(__int64 (__fastcall **)(__int64 *, double *, __int64 *, CTransform3D **, CTransform3D **, __int64, __int64, __int128 *, __int64 *, __int128 *, __int64 *, __int64, __int64, __int64, __int64))(v14 + 208);
  v31 = a2;
  Opacity = v15(a1, &v33, &v37, &v40, &v29, a5, a6, &v41, &v39, &v42, &v32, a9, a10, a11, a12);
  v18 = Opacity;
  if ( Opacity < 0 )
  {
    v26 = 459;
LABEL_17:
    v25 = Opacity;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v26);
    return v18;
  }
  Opacity = CBrush::GetOpacity(v33, v37, v31);
  v18 = Opacity;
  if ( Opacity < 0 )
  {
    v26 = 465;
    goto LABEL_17;
  }
  if ( v40 )
    *a3 = CTransform3D::GetMatrix(v40);
  else
    *a3 = 0LL;
  if ( v29 )
    *a4 = CTransform3D::GetMatrix(v29);
  else
    *a4 = 0LL;
  v19 = v30;
  v20 = v39;
  *v30 = v41;
  if ( v20 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 45LL) )
    {
      v18 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      v26 = 490;
LABEL_22:
      v25 = -2147024809;
      goto LABEL_23;
    }
    *v19 = *(_OWORD *)(v20 + 40);
  }
  v21 = v34;
  v22 = v32;
  *v34 = v42;
  if ( v22 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 48LL))(v22, 45LL) )
    {
      *v21 = *(_OWORD *)(v22 + 40);
      goto LABEL_9;
    }
    v18 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v26 = 495;
    goto LABEL_22;
  }
LABEL_9:
  v18 = 0;
  *v36 = *((_DWORD *)a1 + 23);
  v23 = v38;
  *v38 = *(_OWORD *)(a1 + 7);
  v23[1] = *(_OWORD *)(a1 + 9);
  *((_DWORD *)v23 + 8) = *((_DWORD *)a1 + 22);
  return v18;
}
