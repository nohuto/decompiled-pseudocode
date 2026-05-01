/*
 * XREFs of ?RmTestGetApplicationProperties@ResourceManagerProxy@@QEAAJPEBGPEAXKKPEAKPEA_K33@Z @ 0x18000F4C4
 * Callers:
 *     RmTestGetApplicationProperties @ 0x18000FA10 (RmTestGetApplicationProperties.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmTestGetApplicationProperties(
        ResourceManagerProxy *this,
        const unsigned __int16 *a2,
        void *a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  ULONG v14; // [rsp+30h] [rbp-58h]
  int v15; // [rsp+38h] [rbp-50h]

  if ( a3 && RtlValidSid(a3) )
  {
    v15 = a4;
    v14 = RtlLengthSid(a3);
    return NdrClientCall3(
             (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
             0xFu,
             0LL,
             *((_QWORD *)this + 2),
             a2,
             a3,
             v14,
             v15,
             a5,
             -1LL,
             a6,
             a7,
             a8,
             a9);
  }
  else
  {
    return (CLIENT_CALL_RETURN)2147942487LL;
  }
}
