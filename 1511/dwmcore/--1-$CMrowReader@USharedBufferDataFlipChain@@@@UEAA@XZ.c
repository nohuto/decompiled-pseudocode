/*
 * XREFs of ??1?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180125300
 * Callers:
 *     ??_E?$CMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180125470 (--_E-$CMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z.c)
 *     ??_G?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x1801254D0 (--_G-$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
