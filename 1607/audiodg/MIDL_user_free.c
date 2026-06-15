/*
 * XREFs of MIDL_user_free @ 0x140026960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall MIDL_user_free(void *a1)
{
  operator delete[](a1);
}
