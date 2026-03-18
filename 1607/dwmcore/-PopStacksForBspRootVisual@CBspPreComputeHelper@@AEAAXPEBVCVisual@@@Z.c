/*
 * XREFs of ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18018D05C
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x18000D248 (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisi.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x1800AEE6C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z @ 0x1801122A4 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z @ 0x18018CF64 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspRootVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  int *v7; // r8
  int v8; // eax
  int v9; // eax
  int *v10; // r8
  const struct CVisual *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 72);
  CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)(v2 + 256));
  CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)(v3 + 224));
  CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)(v4 + 192));
  CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)(v5 + 160));
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop((_DWORD *)(v6 + 128));
  v8 = v7[24];
  if ( v8 )
    v7[24] = v8 - 1;
  v9 = v7[16];
  if ( v9 )
    v7[16] = v9 - 1;
  CWatermarkStack<CVisual *,64,2,10>::Pop(v7 + 8, 0LL);
  if ( (unsigned int)CWatermarkStack<CBspNode *,64,2,10>::Pop(v10, &v11) )
  {
    if ( v11 )
      (*(void (__fastcall **)(const struct CVisual *))(*(_QWORD *)v11 + 8LL))(v11);
  }
}
