/*
 * XREFs of ndisMInvokeRemoveDevice @ 0x1C009E590
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
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
    v3 = 193;
LABEL_9:
    WPP_SF_qq(v3, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v1, a1);
    return;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xBFu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v1, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 792))(*(_QWORD *)(a1 + 4168));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v3 = 192;
    goto LABEL_9;
  }
}
