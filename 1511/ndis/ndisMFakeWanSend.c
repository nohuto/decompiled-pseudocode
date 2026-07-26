/*
 * XREFs of ndisMFakeWanSend @ 0x1C0059950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = byte_1C008370A;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
  {
    WPP_SF_q(0x4Cu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v1);
    v2 = byte_1C008370A;
  }
  v3 = -1073741823;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 540);
  if ( (unsigned __int8)v2 >= 4u )
    WPP_SF_q(0x4Du, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v1);
  return v3;
}
