/*
 * XREFs of MiCheckSecuredVad @ 0x14047BB18
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x1401072A0 (MiUnmapLockedPagesInUserSpace.c)
 *     NtFreeVirtualMemory @ 0x140417AA0 (NtFreeVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiComparePteProtections @ 0x1401D74D0 (MiComparePteProtections.c)
 */

__int64 __fastcall MiCheckSecuredVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // r15
  unsigned int v6; // r9d
  int v9; // r8d
  __int64 result; // rax
  unsigned int v11; // ebp
  __int64 *i; // rbx
  int v13; // edx
  char v14; // cl

  v5 = a2 + a3 - 1;
  v6 = 0;
  if ( a4 >= 0x55 )
  {
    v11 = 0;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 48);
    if ( (v9 & 7) == 2 && (v9 & 0xF8) == 8 && (a4 & 2) != 0 )
      return 3221225541LL;
    v11 = a4;
  }
  for ( i = *(__int64 **)(a1 + 56); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 2) == 2 && a2 <= i[3] && v5 >= (i[2] & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( a4 >= 0x55 && (i[2] & 8) != 0 )
        return 3221225541LL;
      v13 = *((_DWORD *)i + 4);
      if ( (v13 & 4) != 0 )
      {
        if ( a4 < 0x55 )
        {
          if ( (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) == 0x7FFE0
            && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 1) == 0 )
          {
            return 3221225541LL;
          }
          result = MiComparePteProtections(a1, a2, v5, a4, 1);
          v6 = result;
          if ( (int)result < 0 )
            return result;
        }
      }
      else
      {
        if ( (v11 & 0xFFFFFFF8) == 0x10 )
          return 3221225541LL;
        v14 = MiReadWrite[v11 & 7];
        if ( (v13 & 1) != 0 ? v14 < 10 : v14 < 11 )
          return 3221225541LL;
      }
    }
  }
  return v6;
}
