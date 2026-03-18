/*
 * XREFs of ?GetReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x1800BCCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetReadPointerInternal@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x1800A9180 (-GetReadPointerInternal@-$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDat.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::GetReadPointer(__int64 a1, int a2, _QWORD *a3)
{
  int ReadPointerInternal; // eax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  ReadPointerInternal = CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(a1, a2, &v10);
  v7 = ReadPointerInternal;
  if ( ReadPointerInternal >= 0 )
  {
    if ( v10 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
      {
        v9 = CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(a1, a2, &v10);
        v7 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(
            0x14u,
            &`CMrowReader<SharedBufferDataFlipChain>::GetReadPointer'::`2'::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v9,
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
