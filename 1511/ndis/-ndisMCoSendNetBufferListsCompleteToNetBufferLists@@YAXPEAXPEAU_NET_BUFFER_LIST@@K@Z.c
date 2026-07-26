/*
 * XREFs of ?ndisMCoSendNetBufferListsCompleteToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C004E6F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMCoSendNetBufferListsCompleteToNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3)
{
  __int64 v3; // rsi

  v3 = a1[9];
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x15u, &WPP_8f35a3663126a6381ade30b0d8399dbd_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(v3 + 64))(*(_QWORD *)(v3 + 24), a2, a3);
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x16u, &WPP_8f35a3663126a6381ade30b0d8399dbd_Traceguids, a1, a2);
}
