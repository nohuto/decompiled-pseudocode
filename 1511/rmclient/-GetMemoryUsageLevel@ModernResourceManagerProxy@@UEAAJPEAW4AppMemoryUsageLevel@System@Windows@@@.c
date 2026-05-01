/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@UEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x18000FE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  int v3; // ebx
  CLIENT_CALL_RETURN result; // rax
  int v5; // [rsp+60h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v6; // [rsp+68h] [rbp+20h]

  v3 = 0;
  v5 = 0;
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, *((_QWORD *)this + 2), &v5).Pointer;
  v6.Pointer = result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
        v3 = 1;
      }
      else if ( v5 == 3 )
      {
        v3 = 2;
      }
    }
    *(_DWORD *)a2 = v3;
  }
  return result;
}
