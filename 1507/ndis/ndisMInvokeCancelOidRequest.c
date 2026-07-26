/*
 * XREFs of ndisMInvokeCancelOidRequest @ 0x1C0059CB0
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C003F6F0 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisMInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(0xE1u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 240))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(0xE2u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
}
