/*
 * XREFs of ndisMFakeWanSend @ 0x1C00599B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = byte_1C008530A;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
  {
    WPP_SF_q(0x49u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v1);
    v2 = byte_1C008530A;
  }
  v3 = -1073741823;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 540);
  if ( (unsigned __int8)v2 >= 4u )
    WPP_SF_q(0x4Au, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v1);
  return v3;
}
