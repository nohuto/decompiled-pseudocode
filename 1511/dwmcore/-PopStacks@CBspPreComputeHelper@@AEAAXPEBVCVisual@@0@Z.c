/*
 * XREFs of ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z @ 0x18015AEBC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x180006300 (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisi.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800095FC (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x1800A4594 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800FE26C (-Pop@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBitmapI.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z @ 0x18015AE90 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z.c)
 */

void __fastcall CBspPreComputeHelper::PopStacks(
        CBspPreComputeHelper *this,
        const struct CVisual *a2,
        const struct CVisual *a3)
{
  char IsPreserve3DRoot; // al
  int *v5; // r10
  char v6; // r11
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // r10
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  IsPreserve3DRoot = CVisual::IsPreserve3DRoot(a2, a3);
  v6 = IsPreserve3DRoot;
  if ( (*((_BYTE *)a2 + 74) & 1) != 0 || IsPreserve3DRoot )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop(v5 + 72);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a2 + 96) - 1.0)) & _xmm) >= 0.0000011920929 || v6 )
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop(v5 + 64);
  if ( (*((_BYTE *)a2 + 76) & 0x10) != 0 || v6 )
  {
    v7 = v5[56];
    if ( v7 )
      v5[56] = v7 - 1;
  }
  if ( (*((_BYTE *)a2 + 76) & 8) != 0 || v6 )
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop(v5 + 48);
  if ( (*((_BYTE *)a2 + 76) & 2) != 0 || v6 )
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop(v5 + 40);
  if ( (*((_BYTE *)a2 + 76) & 0x40) != 0 || v6 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop(v5 + 32);
  v8 = v5[24];
  if ( v8 )
    v5[24] = v8 - 1;
  if ( v6 )
  {
    v9 = v5[16];
    if ( v9 )
      v5[16] = v9 - 1;
    CWatermarkStack<CVisual *,64,2,10>::Pop(v5 + 8, 0LL);
    if ( (unsigned int)CWatermarkStack<CBspNode *,64,2,10>::Pop(v10, &v11) )
    {
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
}
