/*
 * XREFs of _lambda_28f03d232961592d9fdef10e21370bce_::operator() @ 0x14024770C
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x140163FC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _lambda_28f03d232961592d9fdef10e21370bce_::_lambda_invoker_cdecl_ @ 0x1402476F0 (_lambda_28f03d232961592d9fdef10e21370bce_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_28f03d232961592d9fdef10e21370bce_::operator()(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool result; // al

  v3 = a3;
  v4 = (unsigned __int8)a2;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  result = 0;
  if ( v4 <= *(_DWORD *)(v6 + 136) )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63432);
    if ( (unsigned __int8)v4 >= *(_BYTE *)(v8 + v3 + 16)
      && (unsigned __int8)v4 >= *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 63432) + v3 + 4) )
    {
      return 1;
    }
  }
  return result;
}
