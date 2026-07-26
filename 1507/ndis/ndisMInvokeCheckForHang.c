/*
 * XREFs of ndisMInvokeCheckForHang @ 0x1C0099504
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C000D360 (ndisQueuedCheckForHang.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

unsigned __int8 __fastcall ndisMInvokeCheckForHang(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v3; // al
  unsigned __int8 v4; // di

  v1 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)byte_1C0085318 >= 4u )
    WPP_SF_q(0xD5u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 208))(*(_QWORD *)(a1 + 24));
  v4 = v3;
  if ( (unsigned __int8)byte_1C0085318 >= 4u )
    WPP_SF_qD(0xD6u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, v3);
  return v4;
}
