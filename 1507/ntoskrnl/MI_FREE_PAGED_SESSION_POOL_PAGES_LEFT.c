/*
 * XREFs of MI_FREE_PAGED_SESSION_POOL_PAGES_LEFT @ 0x1402206F8
 * Callers:
 *     MmResourcesAvailable @ 0x140013FD0 (MmResourcesAvailable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MI_FREE_PAGED_SESSION_POOL_PAGES_LEFT()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // r8
  __int64 v3; // rcx

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v1 = (unsigned __int64)*(unsigned int *)(v0 + 7812) << 21;
  v2 = *(_QWORD *)(v0 + 2960) << 12;
  if ( v1 <= v2 )
    v3 = 0LL;
  else
    v3 = v1 - v2;
  return (v3 + ((0x10000 - (unsigned __int64)*(unsigned int *)(v0 + 7820)) << 21)) >> 12;
}
