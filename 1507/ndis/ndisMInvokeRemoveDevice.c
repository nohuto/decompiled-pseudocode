/*
 * XREFs of ndisMInvokeRemoveDevice @ 0x1C009BA5C
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMInvokeRemoveDevice(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int16 v3; // cx

  v1 = *(_QWORD *)(a1 + 3816);
  if ( !*(_QWORD *)(v1 + 792) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 4u )
      return;
    v3 = 190;
LABEL_9:
    WPP_SF_qq(v3, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v1, a1);
    return;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xBCu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v1, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 792))(*(_QWORD *)(a1 + 4168));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v3 = 189;
    goto LABEL_9;
  }
}
