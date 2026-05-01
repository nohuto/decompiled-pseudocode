/*
 * XREFs of ?Apply@ResourceSetClientProxy@@UEAAJK@Z @ 0x18000B870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::Apply(ResourceSetClientProxy *this, int a2)
{
  CLIENT_CALL_RETURN result; // rax

  result.Pointer = NdrClientCall3(
                     (MIDL_STUBLESS_PROXY_INFO *)&stru_18000E820,
                     6u,
                     0LL,
                     *((_QWORD *)this + 2),
                     *((_QWORD *)this + 3),
                     a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    *((_DWORD *)this + 104) = a2;
    *((_DWORD *)this + 120) = 1;
  }
  return result;
}
