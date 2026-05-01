/*
 * XREFs of ?OnApplicationTerminated@ResourceManagerClientProxy@@UEAAJPEBGPEAXKK_K@Z @ 0x1800137B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerClientProxy::OnApplicationTerminated(
        ResourceManagerClientProxy *this,
        const unsigned __int16 *a2,
        void *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  ULONG v10; // edi
  ULONG v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]

  v10 = 0;
  if ( a3 )
  {
    if ( !RtlValidSid(a3) )
      return (CLIENT_CALL_RETURN)2147942487LL;
    v10 = RtlLengthSid(a3);
  }
  v13 = a4;
  v12 = v10;
  return NdrClientCall3(
           (MIDL_STUBLESS_PROXY_INFO *)&stru_180016730,
           0xBu,
           0LL,
           *((_QWORD *)this + 2510),
           a2,
           a3,
           v12,
           v13,
           a5,
           a6);
}
