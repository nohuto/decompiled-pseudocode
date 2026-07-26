/*
 * XREFs of ndisFInvokeSetOptions @ 0x1C00AE8E8
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeSetOptions(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 160) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x6Au, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 160))(a1, *(_QWORD *)(a1 + 32));
    v1 = v3;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x6Bu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1, v3);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x6Cu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  }
  return v1;
}
