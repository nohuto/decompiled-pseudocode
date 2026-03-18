/*
 * XREFs of ?GetReader@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@UEAAJPEAPEAV?$CMrowReader@USharedBufferDataFlipChain@@@@@Z @ 0x180125A80
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CMrowReader@USharedBufferDataFlipChain@@@@QEAA@PEAV0@@Z @ 0x1801251B8 (--0-$CMrowReader@USharedBufferDataFlipChain@@@@QEAA@PEAV0@@Z.c)
 */

__int64 __fastcall CLocalMrowWriter<SharedBufferDataFlipChain>::GetReader(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  int v5; // r9d
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a2 )
  {
    v5 = -2147024809;
    v9 = 584;
LABEL_8:
    v2 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v9);
    return v2;
  }
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   16LL);
  if ( v6 )
    v7 = CMrowReader<SharedBufferDataFlipChain>::CMrowReader<SharedBufferDataFlipChain>(v6, a1);
  else
    v7 = 0LL;
  *a2 = v7;
  if ( !v7 )
  {
    v5 = -2147024882;
    v9 = 588;
    goto LABEL_8;
  }
  return v2;
}
