/*
 * XREFs of ndisDataPathExpandStackCallback @ 0x1C00201C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDataPathExpandStackCallback(int *a1)
{
  off_1C0072AC0[a1[11]](
    *((void **)a1 + 1),
    *((void (**)(void))a1 + 3),
    *((void **)a1 + 2),
    *((struct _NET_BUFFER_LIST **)a1 + 4),
    a1[10],
    a1[12],
    a1[13]);
}
