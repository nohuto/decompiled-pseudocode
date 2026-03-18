/*
 * XREFs of ??_ECDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180108730
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180108538 (--1CDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
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
