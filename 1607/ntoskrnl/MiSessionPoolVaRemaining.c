/*
 * XREFs of MiSessionPoolVaRemaining @ 0x1401ECB6C
 * Callers:
 *     MmResourcesAvailable @ 0x14007E300 (MmResourcesAvailable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiSessionPoolVaRemaining()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v1 = *(_QWORD *)(v0 + 2960);
  v2 = *(unsigned int *)(v0 + 7940);
  v3 = *(unsigned int *)(v0 + 7948);
  v4 = v2 << 21;
  v5 = v1 << 12;
  if ( v4 <= v5 )
    v6 = 0LL;
  else
    v6 = v4 - v5;
  return v6 + ((0x10000 - v3) << 21);
}
