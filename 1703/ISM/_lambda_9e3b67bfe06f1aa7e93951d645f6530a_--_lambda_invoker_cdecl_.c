/*
 * XREFs of _lambda_9e3b67bfe06f1aa7e93951d645f6530a_::_lambda_invoker_cdecl_ @ 0x1800322A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_9e3b67bfe06f1aa7e93951d645f6530a_::_lambda_invoker_cdecl_(__int64 a1)
{
  int v1; // edx
  bool v2; // r8
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 1208);
  v2 = *(_BYTE *)(a1 + 1296) && !v1;
  if ( (*(_DWORD *)(a1 + 316) != *(_DWORD *)(a1 + 1300) || *(_DWORD *)(a1 + 320) != *(_DWORD *)(a1 + 1304)) && !v1 || v2 )
    *(_BYTE *)(a1 + 1496) = 1;
  *(_QWORD *)(a1 + 1300) = *(_QWORD *)(a1 + 316);
  result = 0LL;
  *(_BYTE *)(a1 + 1296) = v1 != 0;
  return result;
}
