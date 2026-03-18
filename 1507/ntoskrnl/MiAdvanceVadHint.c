/*
 * XREFs of MiAdvanceVadHint @ 0x1404B5C80
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  unsigned int v4; // r9d
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edx

  result = MEMORY[0xFFFFF58010804230];
  v3 = a1 >> 4;
  v4 = 8 * MEMORY[0xFFFFF58010804230];
  v5 = a2 >> 4;
  if ( (unsigned int)(a2 >> 4) >= 8 * MEMORY[0xFFFFF58010804230] )
  {
    result = MEMORY[0xFFFFF5801080420C];
    v6 = MEMORY[0xFFFFF5801080420C] + v4;
    if ( (unsigned int)v3 < MEMORY[0xFFFFF5801080420C] + v4 )
    {
      result = 0LL;
      if ( (unsigned int)v3 < v4 )
      {
        LODWORD(v3) = 8 * MEMORY[0xFFFFF58010804230];
        result = 1LL;
      }
      if ( (unsigned int)v5 >= v6 )
      {
        LODWORD(v5) = v6 - 1;
        result = 1LL;
      }
      v7 = v5;
      v8 = v5 - v4;
      v9 = v7 - v3;
      v10 = v3 - v4;
      v11 = v9 + 1;
      if ( v11 == 1 && !(_DWORD)result || v10 == MEMORY[0xFFFFF580108041FC] )
      {
        if ( MEMORY[0xFFFFF58010804200] < (unsigned int)(v8 + 1) )
        {
          MEMORY[0xFFFFF58010804200] = v8 + 1;
          if ( MEMORY[0xFFFFF58010804204] < v11 )
            MEMORY[0xFFFFF58010804204] = v11;
        }
        result = (unsigned int)(v8 + 1);
        MEMORY[0xFFFFF580108041FC] = v8 + 1;
      }
      else if ( (_DWORD)result != 1 )
      {
        MEMORY[0xFFFFF58010804204] = v11;
        result = (unsigned int)(v8 + 1);
        MEMORY[0xFFFFF58010804200] = v8 + 1;
      }
    }
  }
  return result;
}
