/*
 * XREFs of ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180051E24
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800E16A8 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1800E243C (--1CComposition@@MEAA@XZ.c)
 *     ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180108538 (--1CDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180113CA0 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayIA@M$01$0A@@@QEAA@XZ @ 0x180051E90 (--1-$DynArrayIA@M$01$0A@@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int v4; // edi
  char *v7; // rbx

  v4 = a3;
  v7 = &a1[a2 * a3];
  while ( --v4 >= 0 )
  {
    v7 -= a2;
    if ( (char *)a4 == (char *)DynArrayIA<float,2,0>::~DynArrayIA<float,2,0> )
      DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>(v7);
    else
      a4(v7);
  }
}
