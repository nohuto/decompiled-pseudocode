/*
 * XREFs of ??0?$CMrowReader@USharedBufferDataFlipChain@@@@QEAA@PEAV0@@Z @ 0x1801251B8
 * Callers:
 *     ?GetReader@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@UEAAJPEAPEAV?$CMrowReader@USharedBufferDataFlipChain@@@@@Z @ 0x180125A80 (-GetReader@-$CLocalMrowWriter@USharedBufferDataFlipChain@@@@UEAAJPEAPEAV-$CMrowReader@USharedBuf.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

_QWORD *__fastcall CMrowReader<SharedBufferDataFlipChain>::CMrowReader<SharedBufferDataFlipChain>(
        _QWORD *a1,
        __int64 a2)
{
  void (__fastcall ***v4)(_QWORD); // r14

  a1[1] = 0LL;
  *a1 = &CMrowReader<SharedBufferDataFlipChain>::`vftable';
  if ( a2 )
  {
    v4 = *(void (__fastcall ****)(_QWORD))(a2 + 8);
    if ( v4 )
    {
      (**v4)(*(_QWORD *)(a2 + 8));
      a1[1] = *(_QWORD *)(a2 + 8);
    }
  }
  return a1;
}
