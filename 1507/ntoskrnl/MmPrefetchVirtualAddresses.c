/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x1404FB384
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MmPrefetchVirtualAddresses(HANDLE *a1)
{
  HANDLE *v1; // r10
  unsigned int v2; // r8d

  v1 = a1;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225711LL;
  v2 = *((_DWORD *)a1 + 1);
  if ( (v2 & 0xFFFFFFF8) != 0 || ((v2 >> 1) & 3) == 3 )
    return 3221225711LL;
  if ( ((v2 >> 1) & 3) > 1 )
    MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  return MmPrefetchVirtualMemory(v1[1]);
}
