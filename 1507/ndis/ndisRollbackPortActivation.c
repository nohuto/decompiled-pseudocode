/*
 * XREFs of ndisRollbackPortActivation @ 0x1C003AEB0
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003A458 (ndisPnPPortActivation.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 */

void __fastcall ndisRollbackPortActivation(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char v6; // dl
  _QWORD *i; // r8

  v6 = byte_1C008531E;
  if ( (unsigned __int8)byte_1C008531E >= 4u )
  {
    WPP_SF_qq(0x26u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, a2);
    v6 = byte_1C008531E;
  }
  for ( i = a2; i; i = (_QWORD *)*i )
  {
    if ( i == a3 )
      break;
    *(_DWORD *)(i[1] + 16LL) = *(_DWORD *)(i[1] + 20LL);
    --*(_DWORD *)(a1 + 2792);
  }
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qq(0x27u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, a2);
}
