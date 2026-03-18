/*
 * XREFs of ?ReleaseWriteLock@?$CMrowReader@USharedBufferDataFlipChain@@@@IEAAHXZ @ 0x180109A70
 * Callers:
 *     ?UpdateReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAHXZ @ 0x18010A0E0 (-UpdateReadPointer@-$CMrowReader@USharedBufferDataFlipChain@@@@MEAAHXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::ReleaseWriteLock(__int64 a1)
{
  unsigned int v1; // esi

  v1 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 28LL), 0, 0x80000000) == 0x80000000 )
  {
    v1 = 1;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8));
  }
  return v1;
}
