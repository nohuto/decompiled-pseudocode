/*
 * XREFs of MiCheckSecuredVad @ 0x14040B2AC
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x14010EE28 (MiUnmapLockedPagesInUserSpace.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040B548 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140432C90 (NtFreeVirtualMemory.c)
 * Callees:
 *     MiComparePteProtections @ 0x1401E8F90 (MiComparePteProtections.c)
 */

__int64 __fastcall MiCheckSecuredVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r15
  int v9; // r8d
  __int64 result; // rax
  unsigned int v11; // ebp
  __int64 *i; // rbx
  int v13; // edx
  unsigned __int64 v14; // rcx
  char v15; // cl

  v4 = 0;
  v5 = a2 + a3 - 1;
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
          v14 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
          if ( (v14 == 2147352576 || v14 == qword_1403269D8 && qword_1403269D8)
            && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
          {
            return 3221225541LL;
          }
          result = MiComparePteProtections(a1, a2, v5, a4, 1);
          v4 = result;
          if ( (int)result < 0 )
            return result;
        }
      }
      else
      {
        if ( (v11 & 0xFFFFFFF8) == 0x10 )
          return 3221225541LL;
        v15 = MiReadWrite[v11 & 7];
        if ( (v13 & 1) != 0 ? v15 < 10 : v15 < 11 )
          return 3221225541LL;
      }
    }
  }
  return v4;
}
