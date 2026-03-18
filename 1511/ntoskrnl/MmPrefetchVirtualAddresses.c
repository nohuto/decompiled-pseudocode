/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x1404B7048
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall MmPrefetchVirtualAddresses(_DWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // r10

  if ( *a1 != 1 )
    return 3221225711LL;
  v1 = a1[1];
  if ( (v1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v2 = (v1 >> 1) & 3;
  if ( v2 == 3 )
    return 3221225711LL;
  if ( v2 > 1 )
    MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  return MmPrefetchVirtualMemory(*(HANDLE *)(v3 + 8));
}
