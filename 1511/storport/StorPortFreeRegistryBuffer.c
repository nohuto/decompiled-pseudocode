/*
 * XREFs of StorPortFreeRegistryBuffer @ 0x1C0013A30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
 */

void __fastcall StorPortFreeRegistryBuffer(__int64 a1)
{
  __int64 v1; // rbx

  v1 = **(_QWORD **)(a1 - 16) + 2088LL;
  if ( (*(_DWORD *)(**(_QWORD **)(a1 - 16) + 2144LL) & 2) != 0 )
  {
    memset(*(void **)(**(_QWORD **)(a1 - 16) + 2120LL), 0, *(unsigned int *)(**(_QWORD **)(a1 - 16) + 2128LL));
    ExFreePoolWithTag(*(PVOID *)(v1 + 32), 0);
    *(_DWORD *)(v1 + 56) &= ~2u;
    *(_DWORD *)(v1 + 40) = 0;
    *(_QWORD *)(v1 + 32) = 0LL;
  }
}
