/*
 * XREFs of ??_E?$CMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180141CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180141B20 (--1-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
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
