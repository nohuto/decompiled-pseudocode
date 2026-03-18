/*
 * XREFs of ??1?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x1801084E0
 * Callers:
 *     ??_G?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180108670 (--_G-$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z.c)
 *     ??_E?$CMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x1801086D0 (--_E-$CMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void **__fastcall CMrowReader<SharedBufferDataFlipChain>::~CMrowReader<SharedBufferDataFlipChain>(_QWORD *a1)
{
  __int64 v1; // rsi
  void **result; // rax

  v1 = a1[1];
  result = &CMrowReader<SharedBufferDataFlipChain>::`vftable';
  *a1 = &CMrowReader<SharedBufferDataFlipChain>::`vftable';
  if ( v1 )
  {
    result = (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    a1[1] = 0LL;
  }
  return result;
}
