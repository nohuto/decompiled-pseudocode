/*
 * XREFs of ndisCleanUpForProtocol @ 0x1C009BEB0
 * Callers:
 *     NdisCloseAdapter @ 0x1C00E6D70 (NdisCloseAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     NdisReleaseNicActive @ 0x1C006B2B0 (NdisReleaseNicActive.c)
 *     ndisClearReceiveFiltersForProtocol @ 0x1C009BF6C (ndisClearReceiveFiltersForProtocol.c)
 *     ndisMDoProtocolRequest @ 0x1C00D070C (ndisMDoProtocolRequest.c)
 */

void __fastcall ndisCleanUpForProtocol(__int64 a1, int a2)
{
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  int v5; // edx
  int v6; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v7[10]; // [rsp+48h] [rbp-38h] BYREF

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x37u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
  v3 = *(_DWORD **)(a1 + 16);
  if ( *(_DWORD *)(a1 + 432) )
  {
    v6 = 0;
    ndisMDoProtocolRequest(a1, a2, 65806, (unsigned int)&v6, 4, 0);
  }
  if ( *(_DWORD *)(a1 + 456) && !v3[116] )
    ndisMDoProtocolRequest(a1, a2, 16843011, 0, 0, 1);
  v4 = *(_QWORD *)(a1 + 488);
  if ( v4 )
  {
    memset(v7, 0, sizeof(v7));
    LOBYTE(v7[0]) = -119;
    HIWORD(v7[0]) = 40;
    BYTE1(v7[0]) = *(_BYTE *)(v4 + 1);
    LOWORD(v7[1]) = 16;
    v7[9] = 16;
    v7[4] = 40;
    v7[6] = 40;
    v7[7] = 40;
    ndisMDoProtocolRequest(a1, v5, 66052, (unsigned int)v7, 40, 1);
  }
  while ( *(_DWORD *)(a1 + 944) )
    NdisReleaseNicActive(a1, NdisPMComponentTest);
  if ( v3[981] != 1 || (v3[31] & 0x110) != 0 )
    ndisClearReceiveFiltersForProtocol(a1);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x38u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1);
}
