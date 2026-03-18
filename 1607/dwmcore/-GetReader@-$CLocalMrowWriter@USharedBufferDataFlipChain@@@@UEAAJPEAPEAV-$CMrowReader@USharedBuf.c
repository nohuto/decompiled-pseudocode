/*
 * XREFs of ?GetReader@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@UEAAJPEAPEAV?$CMrowReader@USharedBufferDataFlipChain@@@@@Z @ 0x180142150
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLocalMrowWriter<SharedBufferDataFlipChain>::GetReader(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int v5; // r9d
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  void (__fastcall ***v8)(_QWORD); // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a2 )
  {
    v5 = -2147024809;
    v10 = 584;
LABEL_10:
    v2 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v10);
    return v2;
  }
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   16LL);
  v7 = v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    *v6 = &CMrowReader<SharedBufferDataFlipChain>::`vftable';
    if ( a1 )
    {
      v8 = *(void (__fastcall ****)(_QWORD))(a1 + 8);
      if ( v8 )
      {
        (**v8)(v8);
        v7[1] = *(_QWORD *)(a1 + 8);
      }
    }
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = v7;
  if ( !v7 )
  {
    v5 = -2147024882;
    v10 = 588;
    goto LABEL_10;
  }
  return v2;
}
