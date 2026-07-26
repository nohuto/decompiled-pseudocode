/*
 * XREFs of ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0003F00
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0010604 (ndisInvokeNextReceiveHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCallReceiveHandler(
        _QWORD *a1,
        void (__fastcall *a2)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int),
        void *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  void *v7; // r10

  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v7 = (void *)a1[113]) != 0LL )
    ndisVerifierNdisDispatch->NdisFilterReceiveNetBufferListsHandler(a3, a4, a5, a6, a7, v7, a2);
  else
    a2(a3, a4, a5, a6, a7);
}
