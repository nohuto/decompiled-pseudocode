/*
 * XREFs of ??_E?$CMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180125470
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180125300 (--1-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall CMrowWriter<SharedBufferDataFlipChain>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &CMrowWriter<SharedBufferDataFlipChain>::`vftable';
  CMrowReader<SharedBufferDataFlipChain>::~CMrowReader<SharedBufferDataFlipChain>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
