/*
 * XREFs of ?IsKillable@ResourceManagerClientProxy@@UEAAJKPEA_N@Z @ 0x1800133E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerClientProxy::IsKillable(
        ResourceManagerClientProxy *this,
        int a2,
        bool *a3)
{
  CLIENT_CALL_RETURN result; // rax
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  if ( a3 )
  {
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_180016730,
                       6u,
                       0LL,
                       *((_QWORD *)this + 2510),
                       a2,
                       &v5).Pointer;
    *a3 = v5 != 0;
  }
  else
  {
    return (CLIENT_CALL_RETURN)2147942487LL;
  }
  return result;
}
