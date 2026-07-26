/*
 * XREFs of ndisMInvokeAddDevice @ 0x1C00B2F14
 * Callers:
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeAddDevice(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  unsigned int v4; // esi
  int v6; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xBDu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v1, a1);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v1 + 784))(a1, *(_QWORD *)(v1 + 64));
  v4 = v3;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v6 = v3;
    WPP_SF_qqd(0xBEu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v1, a1, v6);
  }
  return v4;
}
