/*
 * XREFs of ??_G?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180141C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180141B20 (--1-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
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
