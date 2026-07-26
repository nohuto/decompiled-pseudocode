/*
 * XREFs of ndisGetTaskBytes @ 0x1C0040674
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C0042E14 (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisGetTaskBytes(__int64 a1)
{
  _DWORD *v2; // rdi
  char v3; // al
  unsigned int v4; // ebx

  v2 = (_DWORD *)(*(_QWORD *)(a1 + 4152) + 188LL);
  v3 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_q(0xCBu, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1);
    v3 = byte_1C0085312;
  }
  v4 = 28;
  if ( v2[9] )
    v4 = 64;
  if ( v2[3] || v2[1] || v2[7] || v2[5] )
    v4 += 36;
  if ( v2[13] )
    v4 += 44;
  if ( (unsigned __int8)v3 >= 4u )
    WPP_SF_qD(0xCCu, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, v4);
  return v4;
}
