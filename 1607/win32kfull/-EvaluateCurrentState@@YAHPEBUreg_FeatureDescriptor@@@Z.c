/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0007B20 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0009DB0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C003AB20 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C003AD80 (NtGdiCreateDIBSection.c)
 *     NtGdiGetDIBitsInternal @ 0x1C004C070 (NtGdiGetDIBitsInternal.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00BD8A0 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiGetBitmapBits @ 0x1C00FBE70 (NtGdiGetBitmapBits.c)
 *     NtGdiSetBitmapBits @ 0x1C00FC210 (NtGdiSetBitmapBits.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0100FA0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiCreateBitmap @ 0x1C0108DF0 (NtGdiCreateBitmap.c)
 *     GreMakeBitmapStock @ 0x1C011390C (GreMakeBitmapStock.c)
 *     ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x1C0257EC0 (-bInEngCall@UMPDOBJ@@QEAA_NXZ.c)
 *     DxgkEngBltViaGDI @ 0x1C0260390 (DxgkEngBltViaGDI.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0284438 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C0284714 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiDrawEscape @ 0x1C02A7190 (NtGdiDrawEscape.c)
 *     NtGdiPolyDraw @ 0x1C02A90B0 (NtGdiPolyDraw.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C02ABFC4 (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C02AD310 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreatePalette @ 0x1C02AD6E0 (NtGdiEngCreatePalette.c)
 *     NtGdiEngDeleteSurface @ 0x1C02AD940 (NtGdiEngDeleteSurface.c)
 *     NtGdiCheckBitmapBits @ 0x1C02B2670 (NtGdiCheckBitmapBits.c)
 *     NtGdiCreateColorTransform @ 0x1C02B2A70 (NtGdiCreateColorTransform.c)
 * Callees:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x1C01CB59C (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(const struct reg_FeatureDescriptor *a1)
{
  EvaluateFeature(a1);
  return **(_DWORD **)a1 != 1;
}
