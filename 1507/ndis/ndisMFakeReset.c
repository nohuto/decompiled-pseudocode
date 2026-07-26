/*
 * XREFs of ndisMFakeReset @ 0x1C00596C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeReset(__int64 a1)
{
  char v2; // cl
  __int64 v3; // rax
  unsigned int v4; // ebx

  v2 = byte_1C0085318;
  if ( (unsigned __int8)byte_1C0085318 >= 4u )
  {
    WPP_SF_q(0x51u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
    v2 = byte_1C0085318;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 540);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) < 6u && (v4 & 0xC0230000) == 0xC0230000 )
      v4 = (unsigned __int16)v4 | 0xC0010000;
  }
  else
  {
    v4 = -1073741823;
  }
  if ( (unsigned __int8)v2 >= 4u )
    WPP_SF_q(0x52u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  return v4;
}
