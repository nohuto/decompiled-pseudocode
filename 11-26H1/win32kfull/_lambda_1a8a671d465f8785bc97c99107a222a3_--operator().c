/*
 * XREFs of _lambda_1a8a671d465f8785bc97c99107a222a3_::operator() @ 0x14015BAAC
 * Callers:
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x14015BA90 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046210 (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x14015BB1C (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_1a8a671d465f8785bc97c99107a222a3_::operator()(__int64 a1, const struct tagWND *a2, _OWORD *a3)
{
  const struct tagWND *CompositeAppFrameWindow; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  if ( IsForegroundWindow(a2) )
  {
    CompositeAppFrameWindow = CoreWindowProp::GetCompositeAppFrameWindow(a2);
    if ( IsWindowActivateable(CompositeAppFrameWindow) )
    {
      *(_QWORD *)&v7 = CompositeAppFrameWindow;
      *((_QWORD *)&v7 + 1) = 6LL;
      *a3 = v7;
    }
  }
  return *(_QWORD *)a3 != 0LL;
}
