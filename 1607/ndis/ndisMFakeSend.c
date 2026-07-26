/*
 * XREFs of ndisMFakeSend @ 0x1C005DC50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeSend(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // dl
  unsigned int v4; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = byte_1C00895CA;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
  {
    WPP_SF_q(0x4Eu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v1);
    v3 = byte_1C00895CA;
  }
  v4 = -1073741823;
  if ( v1 )
    v4 = *(_DWORD *)(v1 + 540);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) < 6u && (v4 & 0xC0230000) == 0xC0230000 )
    v4 = (unsigned __int16)v4 | 0xC0010000;
  if ( (unsigned __int8)v3 >= 4u )
    WPP_SF_q(0x4Fu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v1);
  return v4;
}
