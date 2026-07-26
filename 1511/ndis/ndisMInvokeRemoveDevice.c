/*
 * XREFs of ndisMInvokeRemoveDevice @ 0x1C0098CC8
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
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
    WPP_SF_qq(v3, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v1, a1);
    return;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xBFu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v1, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 792))(*(_QWORD *)(a1 + 4168));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v3 = 192;
    goto LABEL_9;
  }
}
