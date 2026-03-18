/*
 * XREFs of ??_ECDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180125530
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180125358 (--1CDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::~CDataWrapper(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
