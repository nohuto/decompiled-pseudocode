/*
 * XREFs of PlaySndClient_midl_user_allocate @ 0x1C00F0CD0
 * Callers:
 *     PlaySoundPostMessage @ 0x1C0363000 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall PlaySndClient_midl_user_allocate(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x53637052u);
}
