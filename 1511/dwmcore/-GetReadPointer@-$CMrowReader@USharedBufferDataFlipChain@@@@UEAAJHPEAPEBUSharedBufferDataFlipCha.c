/*
 * XREFs of ?GetReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x1800B9850
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetReadPointerInternal@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x1800AEB10 (-GetReadPointerInternal@-$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDat.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::GetReadPointer(__int64 a1, int a2, _QWORD *a3)
{
  int ReadPointerInternal; // eax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  ReadPointerInternal = CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(a1, a2, &v10);
  v7 = ReadPointerInternal;
  if ( ReadPointerInternal >= 0 )
  {
    if ( v10 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
      {
        v8 = CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(a1, a2, &v10);
        v7 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(
            0x14u,
            &`CMrowReader<SharedBufferDataFlipChain>::GetReadPointer'::`2'::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v8,
            0x92u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(
      0x14u,
      &`CMrowReader<SharedBufferDataFlipChain>::GetReadPointer'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      ReadPointerInternal,
      0x8Bu);
  }
  *a3 = v10;
  return v7;
}
