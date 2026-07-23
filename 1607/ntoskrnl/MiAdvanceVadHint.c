/*
 * XREFs of MiAdvanceVadHint @ 0x140435A80
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // ebx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // r11
  int v8; // ecx
  _DWORD *v9; // r11
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // r10d
  int v16; // ecx

  v3 = 0;
  v4 = a1 >> 4;
  v5 = a2 >> 4;
  result = a3 < 0;
  v7 = result + 4 * result + 34605058;
  v8 = *(_DWORD *)(qword_140327FD0 + 8 * v7 + 8);
  v9 = (_DWORD *)(qword_140327FD0 + 8 * v7);
  v10 = 8 * (v8 - qword_140327FD0);
  if ( (unsigned int)v5 >= v10 )
  {
    v11 = v10 + *v9;
    if ( (unsigned int)v4 < v11 )
    {
      if ( (unsigned int)v4 < v10 )
      {
        LODWORD(v4) = v10;
        v3 = 1;
      }
      if ( (unsigned int)v5 >= v11 )
      {
        LODWORD(v5) = v11 - 1;
        v3 = 1;
      }
      v12 = v5;
      v13 = v5 - v10;
      v14 = v12 - v4;
      v15 = v4 - v10;
      result = (unsigned int)(v14 + 1);
      if ( (_DWORD)result == 1 && !v3 || v15 == v9[4] )
      {
        v16 = v13 + 1;
        if ( v9[6] < (unsigned int)(v13 + 1) )
        {
          v9[6] = v16;
          if ( v9[5] < (unsigned int)result )
            v9[5] = result;
        }
        v9[4] = v16;
      }
      else if ( v3 != 1 )
      {
        v9[5] = result;
        result = (unsigned int)(v13 + 1);
        v9[6] = result;
      }
    }
  }
  return result;
}
