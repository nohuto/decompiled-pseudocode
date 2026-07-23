/*
 * XREFs of MiResetVirtualMemory @ 0x1400ADFA4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAllowProtectionChange @ 0x1400B5348 (MiAllowProtectionChange.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 */

__int64 __fastcall MiResetVirtualMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // r9d
  int v7; // esi
  int v8; // edi
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 48);
  v7 = a2;
  v8 = a3;
  if ( (v6 & 0x8000) == 0 )
  {
    if ( *(_QWORD *)(**(_QWORD **)(a4 + 72) + 64LL) )
      return 3221226051LL;
    if ( (v6 & 0x20) == 0 )
      return 3221225550LL;
  }
  if ( (*(_DWORD *)(a1 + 768) & 0x400) == 0
    || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0
    || (result = MiAllowProtectionChange(KeGetCurrentThread()->ApcState.Process, a1, a4, 4, a2, a3), (int)result >= 0) )
  {
    result = MiWalkVaRange(v7, v8, a4, a5 != 0x80000, 0);
    if ( a5 == 0x80000 )
      return 0LL;
  }
  return result;
}
