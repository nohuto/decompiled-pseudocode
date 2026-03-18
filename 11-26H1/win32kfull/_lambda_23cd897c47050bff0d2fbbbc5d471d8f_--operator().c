/*
 * XREFs of _lambda_23cd897c47050bff0d2fbbbc5d471d8f_::operator() @ 0x140165E24
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x140163FC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _lambda_23cd897c47050bff0d2fbbbc5d471d8f_::_lambda_invoker_cdecl_ @ 0x1402F01B0 (_lambda_23cd897c47050bff0d2fbbbc5d471d8f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_23cd897c47050bff0d2fbbbc5d471d8f_::operator()(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool result; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v3 = a3;
  v4 = (unsigned __int8)a2;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  result = 0;
  if ( v4 <= *(_DWORD *)(v6 + 136) )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63432);
    if ( (unsigned __int8)v4 <= *(_BYTE *)(v9 + v3 + 4) )
    {
      v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 63432);
      if ( (unsigned __int8)v4 <= *(_BYTE *)(v11 + v3 + 8)
        && (unsigned __int8)v4 <= *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 63432) + v3 + 16) )
      {
        return 1;
      }
    }
  }
  return result;
}
