/*
 * XREFs of ?RmTestGetResourceSetTypeFromPSMKey@ResourceManagerProxy@@QEAAJPEBGPEAXKKPEAW4RmResourceSetType@@@Z @ 0x18000EDCC
 * Callers:
 *     RmTestGetResourceSetTypeFromPSMKey @ 0x18000F290 (RmTestGetResourceSetTypeFromPSMKey.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmTestGetResourceSetTypeFromPSMKey(
        ResourceManagerProxy *this,
        const unsigned __int16 *a2,
        void *a3,
        int a4,
        unsigned int a5,
        enum RmResourceSetType *a6)
{
  ULONG v11; // [rsp+30h] [rbp-48h]
  int v12; // [rsp+38h] [rbp-40h]

  if ( a3 && RtlValidSid(a3) )
  {
    v12 = a4;
    v11 = RtlLengthSid(a3);
    return NdrClientCall3(
             (MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0,
             0xEu,
             0LL,
             *((_QWORD *)this + 2),
             a2,
             a3,
             v11,
             v12,
             a5,
             -1LL,
             a6);
  }
  else
  {
    return (CLIENT_CALL_RETURN)2147942487LL;
  }
}
