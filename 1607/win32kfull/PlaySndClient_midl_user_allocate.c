/*
 * XREFs of PlaySndClient_midl_user_allocate @ 0x1C010F7F0
 * Callers:
 *     PlaySoundPostMessage @ 0x1C0368000 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall PlaySndClient_midl_user_allocate(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x53637052u);
}
