/*
 * XREFs of MiLogMemResetInfo @ 0x140623740
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x1401D2920 (MiLogPerfMemoryEvent.c)
 */

__int64 __fastcall MiLogMemResetInfo(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  v5[0] = a1;
  v5[1] = a2;
  if ( (a3 & 0x80000) != 0 )
  {
    v3 = 0;
  }
  else if ( (a3 & 0x1000000) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 2;
  }
  v6 = v3;
  return MiLogPerfMemoryEvent(0x286u, 0x20008000u, (__int64)v5, 20, 4200706);
}
