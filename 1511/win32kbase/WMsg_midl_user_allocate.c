/*
 * XREFs of WMsg_midl_user_allocate @ 0x1C0080910
 * Callers:
 *     WmsgpPostMessage @ 0x1C0128404 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall WMsg_midl_user_allocate(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x53637052u);
}
