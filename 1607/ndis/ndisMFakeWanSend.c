/*
 * XREFs of ndisMFakeWanSend @ 0x1C005DDF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = byte_1C00895CA;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
  {
    WPP_SF_q(0x4Cu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v1);
    v2 = byte_1C00895CA;
  }
  v3 = -1073741823;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 540);
  if ( (unsigned __int8)v2 >= 4u )
    WPP_SF_q(0x4Du, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v1);
  return v3;
}
