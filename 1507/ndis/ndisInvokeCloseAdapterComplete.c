/*
 * XREFs of ndisInvokeCloseAdapterComplete @ 0x1C009B1A0
 * Callers:
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C009AB90 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeCloseAdapterComplete(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x5Fu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, v1, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 120))(*(_QWORD *)(a1 + 32));
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x60u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, v1, a1);
}
