/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x1404D77A0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualAddresses(_DWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  int v3; // r8d
  __int64 v4; // r10

  if ( *a1 != 1 )
    return -1073741585;
  v1 = a1[1];
  if ( (v1 & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v2 = (v1 >> 1) & 3;
  if ( v2 == 3 )
    return -1073741585;
  if ( v2 > 1 )
    MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) <= 1 )
    v3 |= 0x400u;
  return MmPrefetchVirtualMemory(*(char **)(v4 + 8), *(_QWORD *)(v4 + 16), *(_QWORD *)(v4 + 24), v3);
}
