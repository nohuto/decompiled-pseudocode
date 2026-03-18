/*
 * XREFs of PiEventAllocateVetoBuffer @ 0x1404C4F00
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x1404C5AB8 (PnpAllocateCriticalMemory.c)
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
