/*
 * XREFs of ndisSriovQueryLuid @ 0x1C00DC9D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovQueryLuid(__int64 a1, _QWORD *a2)
{
  char v4; // cl

  v4 = byte_1C0085321;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
  {
    WPP_SF_q(0x66u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1);
    v4 = byte_1C0085321;
  }
  *a2 = *(_QWORD *)(a1 + 4940);
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qD(0x67u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1, 0);
  return 0LL;
}
