/*
 * XREFs of ndisOidPreIovInvalidateConfigBlock @ 0x1C00DA890
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qqqDD @ 0x1C003F4F0 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C003F5B4 (WPP_SF_qqqq.c)
 */

unsigned __int8 __fastcall ndisOidPreIovInvalidateConfigBlock(_QWORD *a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 v3; // r8
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v2 = 1;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qqqq(0x12u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, *a1, a1[3], a1[1], a1[4]);
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(a1[4]) == &ndisIntReqGeneric )
    v2 = 0;
  else
    *((_DWORD *)a1 + 10) = -1073741637;
  if ( v3 >= 4u )
  {
    v6 = *((_DWORD *)a1 + 10);
    LODWORD(v5) = v2;
    WPP_SF_qqqDD(0x13u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, *a1, a1[3], a1[1], v5, v6);
  }
  return v2;
}
