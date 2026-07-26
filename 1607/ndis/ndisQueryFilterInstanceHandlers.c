/*
 * XREFs of ndisQueryFilterInstanceHandlers @ 0x1C00A1BDC
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C001A090 (ndisHandleFilterHandlersChange.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C00A1C38 (ndisFInvokeSetFilterModuleOptions.c)
 */

void __fastcall ndisQueryFilterInstanceHandlers(__int64 a1)
{
  __int64 i; // rbx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
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
    WPP_SF_q(0x1Cu, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
}
