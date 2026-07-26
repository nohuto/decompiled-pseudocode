/*
 * XREFs of ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000E450
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C0003600 (NdisMSendNetBufferListsComplete.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0011578 (ndisInvokeNextSendCompleteHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCallSendCompleteHandler(
        _QWORD *a1,
        void (*a2)(void),
        void *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && a1[113] )
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch->NdisFilterSendNetBufferListsCompleteHandler)(
      a3,
      a4,
      a5);
  else
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a2)(a3, a4, a7);
}
