/*
 * XREFs of ndisQueryFilterInstanceHandlers @ 0x1C009CF88
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C0018E00 (ndisHandleFilterHandlersChange.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C009CFE4 (ndisFInvokeSetFilterModuleOptions.c)
 */

void __fastcall ndisQueryFilterInstanceHandlers(__int64 a1)
{
  __int64 i; // rbx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
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
    WPP_SF_q(0x1Cu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
}
