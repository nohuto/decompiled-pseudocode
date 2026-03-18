/*
 * XREFs of ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x18005CBB4
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005CEA0 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetTilePropertyResources@CImageLegacyMilBrush@@MEBAJPEANPEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@PEAPEAVCTransform@@2PEAW4Enum@MilBrushMappingMode@@3PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@45PEAW44MilStretch@@PEAW44MilTileMode@@PEAW44MilHorizontalAlignment@@PEAW44MilVerticalAlignment@@@Z @ 0x180059D60 (-GetTilePropertyResources@CImageLegacyMilBrush@@MEBAJPEANPEAPEAV-$TValueResource@NUMILCMD_DOUBLE.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@PEAM@Z @ 0x18005D948 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@PEAM@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ABEA0 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CTileLegacyMilBrush::GetTilePropertyCurrentValues(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _OWORD *a7,
        _OWORD *a8,
        CTransform3D *a9,
        CTransform3D *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        __int64 a14)
{
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, _DWORD **, _DWORD **, CTransform3D **, CTransform3D **, _DWORD *, _DWORD *, __int128 *, _DWORD **, __int128 *, _DWORD **, CTransform3D *, CTransform3D *, _DWORD *, _DWORD *); // rdi
  int TilePropertyResources; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  int Opacity; // eax
  _DWORD *v23; // rbx
  _DWORD *v24; // rbx
  __int64 (__fastcall *v26)(_DWORD *, __int64); // rdi
  char v27; // al
  __int64 (__fastcall *v28)(_DWORD *, __int64); // rdi
  char v29; // al
  int v30; // r9d
  unsigned int v31; // [rsp+20h] [rbp-D1h]
  _DWORD *v32; // [rsp+80h] [rbp-71h] BYREF
  _DWORD *v33; // [rsp+88h] [rbp-69h] BYREF
  _DWORD *v34; // [rsp+90h] [rbp-61h] BYREF
  _DWORD *v35; // [rsp+98h] [rbp-59h] BYREF
  CTransform3D *v36; // [rsp+A0h] [rbp-51h] BYREF
  CTransform3D *v37; // [rsp+A8h] [rbp-49h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-41h]
  _DWORD *v39; // [rsp+B8h] [rbp-39h]
  __int128 v40; // [rsp+C0h] [rbp-31h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-21h] BYREF

  v39 = a13;
  v17 = *(_QWORD *)a1;
  v38 = a2;
  v35 = a5;
  v18 = *(__int64 (__fastcall **)(__int64, _DWORD **, _DWORD **, CTransform3D **, CTransform3D **, _DWORD *, _DWORD *, __int128 *, _DWORD **, __int128 *, _DWORD **, CTransform3D *, CTransform3D *, _DWORD *, _DWORD *))(v17 + 216);
  v34 = a6;
  v37 = a9;
  v36 = a10;
  v32 = a11;
  v33 = a12;
  if ( (char *)v18 == (char *)CImageLegacyMilBrush::GetTilePropertyResources )
    TilePropertyResources = CImageLegacyMilBrush::GetTilePropertyResources(
                              a1,
                              &v34,
                              &v35,
                              &v37,
                              &v36,
                              a5,
                              a6,
                              &v40,
                              &v32,
                              &v41,
                              &v33,
                              a9,
                              a10,
                              a11,
                              a12);
  else
    TilePropertyResources = v18(a1, &v34, &v35, &v37, &v36, v35, v34, &v40, &v32, &v41, &v33, v37, v36, v32, v33);
  v21 = TilePropertyResources;
  if ( TilePropertyResources < 0 )
  {
    v31 = 459;
    v30 = TilePropertyResources;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v31);
    return v21;
  }
  Opacity = CLegacyMilBrush::GetOpacity(v20, v35, v38);
  v21 = Opacity;
  if ( Opacity < 0 )
  {
    v31 = 465;
    v30 = Opacity;
    goto LABEL_31;
  }
  if ( v37 )
    *a3 = CTransform3D::GetMatrix(v37, 0LL);
  else
    *a3 = 0LL;
  if ( v36 )
    *a4 = CTransform3D::GetMatrix(v36, 0LL);
  else
    *a4 = 0LL;
  v23 = v32;
  *a7 = v40;
  if ( v23 )
  {
    v26 = *(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v23 + 48LL);
    if ( (char *)v26 == (char *)TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType )
      v27 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType(v23, 49LL);
    else
      v27 = v26(v23, 49LL);
    if ( !v27 )
    {
      v21 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      v31 = 490;
LABEL_30:
      v30 = -2147024809;
      goto LABEL_31;
    }
    *a7 = *(_OWORD *)(v23 + 10);
  }
  v24 = v33;
  *a8 = v41;
  if ( v24 )
  {
    v28 = *(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v24 + 48LL);
    if ( (char *)v28 == (char *)TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType )
      v29 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType(v24, 49LL);
    else
      v29 = v28(v24, 49LL);
    if ( v29 )
    {
      *a8 = *(_OWORD *)(v24 + 10);
      goto LABEL_11;
    }
    v21 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v31 = 495;
    goto LABEL_30;
  }
LABEL_11:
  v21 = 0;
  *v39 = *(_DWORD *)(a1 + 92);
  *(_OWORD *)a14 = *(_OWORD *)(a1 + 56);
  *(_OWORD *)(a14 + 16) = *(_OWORD *)(a1 + 72);
  *(_DWORD *)(a14 + 32) = *(_DWORD *)(a1 + 88);
  return v21;
}
