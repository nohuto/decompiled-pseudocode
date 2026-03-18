/*
 * XREFs of MiResetVirtualMemory @ 0x1400EEF4C
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 */

__int64 __fastcall MiResetVirtualMemory(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v4; // r10d
  unsigned int v6; // r9d
  __int64 result; // rax

  v4 = *(_DWORD *)(a3 + 48);
  v6 = a4 != 0x80000;
  if ( (v4 & 0x8000) != 0 )
    goto LABEL_4;
  if ( *(_QWORD *)(**(_QWORD **)(a3 + 72) + 64LL) )
    return 3221226051LL;
  if ( (v4 & 0x20) == 0 )
    return 3221225550LL;
LABEL_4:
  if ( (v4 & 7) == 4 )
    return 3221225496LL;
  result = MiWalkVaRange(a1, a2, a3, v6, 0LL);
  if ( a4 == 0x80000 )
    return 0LL;
  return result;
}
