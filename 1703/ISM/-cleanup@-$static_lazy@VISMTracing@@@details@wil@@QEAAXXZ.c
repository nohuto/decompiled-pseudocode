/*
 * XREFs of ?cleanup@?$static_lazy@VISMTracing@@@details@wil@@QEAAXXZ @ 0x1800463D0
 * Callers:
 *     _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_ @ 0x180044080 (_lambda_7fd51406feab050c3f0aab483d3938ea_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::static_lazy<ISMTracing>::cleanup(__int64 a1)
{
  void **v1; // rax
  _QWORD *v2; // rbx
  bool v3; // zf
  __int64 v4; // rbx
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  LODWORD(v1) = InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( (_DWORD)v1 )
  {
    if ( !(_DWORD)fPending )
    {
      v2 = Context;
      v1 = &wil::TraceLoggingProvider::`vftable';
      v3 = *((_BYTE *)Context + 16) == 0;
      *(_QWORD *)Context = &wil::TraceLoggingProvider::`vftable';
      if ( !v3 )
      {
        v4 = v2[1];
        LODWORD(v1) = EventUnregister(*(_QWORD *)(v4 + 32));
        *(_QWORD *)(v4 + 32) = 0LL;
        *(_DWORD *)v4 = 0;
      }
    }
  }
  return (int)v1;
}
