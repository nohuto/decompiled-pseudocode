/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3238
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x180113D18 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801376EC (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180141B5C (--1CDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180149A8C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x18014CE30 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayIA@M$01$0A@@@QEAA@XZ @ 0x1800A32A0 (--1-$DynArrayIA@M$01$0A@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rdi
  char *v7; // rbx

  v5 = a3;
  v7 = &a1[a3 * a2];
  do
  {
    v7 -= a2;
    --v5;
    if ( (char *)a4 == (char *)DynArrayIA<float,2,0>::~DynArrayIA<float,2,0> )
      DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>(v7);
    else
      a4(v7);
  }
  while ( v5 );
}
