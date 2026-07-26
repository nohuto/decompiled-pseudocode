/*
 * XREFs of ?NdisMTcpOffloadForwardComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0060320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?GroupCompletionContext@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@PEAPEAU2@@Z @ 0x1C0060290 (-GroupCompletionContext@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@PEAPEAU2@@Z.c)
 */

void __fastcall NdisMTcpOffloadForwardComplete(void *a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NDIS_OPEN_BLOCK *v3; // rax
  _NET_BUFFER_LIST *v4; // r9
  struct _NET_BUFFER_LIST *v5; // [rsp+40h] [rbp+18h] BYREF

  do
  {
    v3 = GroupCompletionContext(a2, &v5);
    v3->TcpOffloadForwardCompleteHandler(v3->ProtocolBindingContext, v4);
    a2 = v5;
  }
  while ( v5 );
}
