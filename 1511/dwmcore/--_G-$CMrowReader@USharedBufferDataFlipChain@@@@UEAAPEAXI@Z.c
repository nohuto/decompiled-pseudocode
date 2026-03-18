/*
 * XREFs of ??_G?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x1801254D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180125300 (--1-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
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
