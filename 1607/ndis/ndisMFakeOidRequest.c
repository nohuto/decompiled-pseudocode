/*
 * XREFs of ndisMFakeOidRequest @ 0x1C0012A70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisMFakeOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = -1073741823;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 540);
  if ( (unsigned __int8)byte_1C00895D2 >= 3u )
    WPP_SF_qdD(86LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, *(unsigned int *)(a2 + 32), v3);
  return v3;
}
