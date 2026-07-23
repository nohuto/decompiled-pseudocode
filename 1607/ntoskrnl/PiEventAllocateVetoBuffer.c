/*
 * XREFs of PiEventAllocateVetoBuffer @ 0x140485334
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x140485EEC (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PiEventAllocateVetoBuffer(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax

  result = PnpAllocateCriticalMemory(a1, 1LL, 1044LL, 1299213904LL);
  if ( result )
  {
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0x2000000;
    *(_QWORD *)(result + 12) = result + 20;
    *a2 = result;
    *a3 = result + 4;
  }
  return result;
}
