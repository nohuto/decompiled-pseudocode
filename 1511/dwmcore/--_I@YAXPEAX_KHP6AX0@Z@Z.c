/*
 * XREFs of ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180068428
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800FFDB8 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 *     ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180125358 (--1CDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x18012CF70 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayIA@M$01$0A@@@QEAA@XZ @ 0x1800683D0 (--1-$DynArrayIA@M$01$0A@@@QEAA@XZ.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(void *a1))
{
  int v4; // edi
  char *v7; // rbx

  v4 = a3;
  v7 = &a1[a2 * a3];
  while ( --v4 >= 0 )
  {
    v7 -= a2;
    if ( a4 == DynArrayIA<float,2,0>::~DynArrayIA<float,2,0> )
      DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>(v7);
    else
      a4(v7);
  }
}
