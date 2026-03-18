/*
 * XREFs of ??1SharedBufferDataFlipChain@@QEAA@XZ @ 0x180112BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SharedBufferDataFlipChain::~SharedBufferDataFlipChain(SharedBufferDataFlipChain *this)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 11));
}
