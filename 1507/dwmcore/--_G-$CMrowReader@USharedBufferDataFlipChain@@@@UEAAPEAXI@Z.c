/*
 * XREFs of ??_G?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180108670
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x1801084E0 (--1-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall CMrowReader<SharedBufferDataFlipChain>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  CMrowReader<SharedBufferDataFlipChain>::~CMrowReader<SharedBufferDataFlipChain>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
