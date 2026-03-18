/*
 * XREFs of ?GetReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x180109250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetReadPointerInternal@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x180109310 (-GetReadPointerInternal@-$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDat.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::GetReadPointer(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebp
  int ReadPointerInternal; // eax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = a2;
  ReadPointerInternal = CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(a1, a2, &v10);
  v7 = ReadPointerInternal;
  if ( ReadPointerInternal >= 0 )
  {
    if ( v10 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
      {
        v8 = CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(a1, v4, &v10);
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
