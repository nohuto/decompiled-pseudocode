/*
 * XREFs of ndisMInvokeAddDevice @ 0x1C009A3E8
 * Callers:
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeAddDevice(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  unsigned int v4; // esi
  int v6; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xBDu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v1, a1);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v1 + 784))(a1, *(_QWORD *)(v1 + 64));
  v4 = v3;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v6 = v3;
    WPP_SF_qqd(0xBEu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v1, a1, v6);
  }
  return v4;
}
