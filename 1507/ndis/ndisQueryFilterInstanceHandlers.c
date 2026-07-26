/*
 * XREFs of ndisQueryFilterInstanceHandlers @ 0x1C00A07C0
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C0017988 (ndisHandleFilterHandlersChange.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C00A081C (ndisFInvokeSetFilterModuleOptions.c)
 */

void __fastcall ndisQueryFilterInstanceHandlers(__int64 a1)
{
  __int64 i; // rbx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  if ( a1 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2056LL); i; i = *(_QWORD *)(i + 112) )
    {
      ndisFInvokeSetFilterModuleOptions(i);
      if ( i == a1 )
        break;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Cu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
}
