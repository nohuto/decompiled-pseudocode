/*
 * XREFs of ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x180024C34
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D960 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z @ 0x180024E6C (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z.c)
 *     ?GetTilePropertyResources@CImageLegacyMilBrush@@MEBAJPEANPEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAPEAVCTransform@@2PEAW4Enum@MilBrushMappingMode@@3PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@45PEAW44MilStretch@@PEAW44MilTileMode@@PEAW44MilHorizontalAlignment@@PEAW44MilVerticalAlignment@@@Z @ 0x1800322F0 (-GetTilePropertyResources@CImageLegacyMilBrush@@MEBAJPEANPEAPEAV-$TValueResource@NUMILCMD_DOUBLE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTileLegacyMilBrush::GetTilePropertyCurrentValues(
        __int64 *a1,
        __int64 a2,
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
        __int64 a14)
{
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *, __int64 *, __int64 *, CTransform3D **, CTransform3D **, __int64, __int64, __int128 *, _OWORD **, __int128 *, _OWORD **); // rax
  int TilePropertyResources; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  int Opacity; // eax
  _OWORD *v23; // rbx
  _OWORD *v24; // rbx
  bool (__fastcall *v26)(__int64, int); // rax
  bool v27; // al
  bool (__fastcall *v28)(__int64, int); // rax
  bool v29; // al
  int v30; // r9d
  unsigned int v31; // [rsp+20h] [rbp-D1h]
  __int64 v32; // [rsp+80h] [rbp-71h] BYREF
  __int64 v33; // [rsp+88h] [rbp-69h] BYREF
  CTransform3D *v34; // [rsp+90h] [rbp-61h] BYREF
  CTransform3D *v35; // [rsp+98h] [rbp-59h] BYREF
  _OWORD *v36; // [rsp+A0h] [rbp-51h] BYREF
  _OWORD *v37; // [rsp+A8h] [rbp-49h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-41h]
  _DWORD *v39; // [rsp+B8h] [rbp-39h]
  __int128 v40; // [rsp+C0h] [rbp-31h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-21h] BYREF

  v39 = a13;
  v17 = *a1;
  v38 = a2;
  v18 = *(__int64 (__fastcall **)(__int64 *, __int64 *, __int64 *, CTransform3D **, CTransform3D **, __int64, __int64, __int128 *, _OWORD **, __int128 *, _OWORD **))(v17 + 224);
  if ( (char *)v18 == (char *)CImageLegacyMilBrush::GetTilePropertyResources )
    TilePropertyResources = CImageLegacyMilBrush::GetTilePropertyResources(
                              (_DWORD)a1,
                              (unsigned int)&v33,
                              (unsigned int)&v32,
                              (unsigned int)&v34,
                              (__int64)&v35,
                              a5,
                              a6,
                              (__int64)&v40,
                              (__int64)&v36,
                              (__int64)&v41,
                              (__int64)&v37,
                              a9,
                              a10,
                              a11,
                              a12);
  else
    TilePropertyResources = v18(a1, &v33, &v32, &v34, &v35, a5, a6, &v40, &v36, &v41, &v37);
  v21 = TilePropertyResources;
  if ( TilePropertyResources < 0 )
  {
    v31 = 459;
    v30 = TilePropertyResources;
    goto LABEL_31;
  }
  Opacity = CLegacyMilBrush::GetOpacity(v20, v32, v38);
  v21 = Opacity;
  if ( Opacity < 0 )
  {
    v31 = 465;
    v30 = Opacity;
    goto LABEL_31;
  }
  if ( v34 )
    *a3 = CTransform3D::GetMatrix(v34, 0LL);
  else
    *a3 = 0LL;
  if ( v35 )
    *a4 = CTransform3D::GetMatrix(v35, 0LL);
  else
    *a4 = 0LL;
  v23 = v36;
  *a7 = v40;
  if ( v23 )
  {
    v26 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v23 + 48LL);
    if ( v26 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType )
      v27 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType((__int64)v23, 50);
    else
      v27 = v26((__int64)v23, 50);
    if ( !v27 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      v31 = 490;
LABEL_28:
      v21 = -2147024809;
      v30 = -2147024809;
LABEL_31:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v31);
      return v21;
    }
    *a7 = v23[7];
  }
  v24 = v37;
  v21 = 0;
  *a8 = v41;
  if ( v24 )
  {
    v28 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v24 + 48LL);
    if ( v28 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType )
      v29 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType((__int64)v24, 50);
    else
      v29 = v28((__int64)v24, 50);
    if ( v29 )
    {
      *a8 = v24[7];
      goto LABEL_11;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v31 = 495;
    goto LABEL_28;
  }
LABEL_11:
  *v39 = *((_DWORD *)a1 + 41);
  *(_OWORD *)a14 = *((_OWORD *)a1 + 8);
  *(_OWORD *)(a14 + 16) = *((_OWORD *)a1 + 9);
  *(_DWORD *)(a14 + 32) = *((_DWORD *)a1 + 40);
  return v21;
}
