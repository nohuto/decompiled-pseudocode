/*
 * XREFs of MiAdvanceVadHint @ 0x14049D2A0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  int v4; // r11d
  unsigned __int64 v5; // r9
  _BOOL8 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  unsigned int v9; // ecx
  unsigned int v10; // r10d
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // r9d
  int v15; // ecx

  v3 = a2 >> 4;
  v4 = 0;
  v5 = a1 >> 4;
  v6 = a3 < 0;
  result = 0x4332C997F3LL;
  v8 = 5 * (v6 - 0x4332C997F3LL);
  v9 = 8 * *(_DWORD *)(40 * (v6 - 0x4332C997F3LL) + 8);
  if ( (unsigned int)v3 >= v9 )
  {
    v10 = v9 + *(_DWORD *)(8 * v8);
    if ( (unsigned int)v5 < v10 )
    {
      if ( (unsigned int)v5 < v9 )
      {
        LODWORD(v5) = v9;
        v4 = 1;
      }
      if ( (unsigned int)v3 >= v10 )
      {
        LODWORD(v3) = v10 - 1;
        v4 = 1;
      }
      v11 = v3;
      v12 = v3 - v9;
      v13 = v11 - v5;
      v14 = v5 - v9;
      result = (unsigned int)(v13 + 1);
      if ( (_DWORD)result == 1 && !v4 || v14 == *(_DWORD *)(8 * v8 + 0x10) )
      {
        v15 = v12 + 1;
        if ( *(_DWORD *)(8 * v8 + 0x18) < (unsigned int)(v12 + 1) )
        {
          *(_DWORD *)(8 * v8 + 0x18) = v15;
          if ( *(_DWORD *)(8 * v8 + 0x14) < (unsigned int)result )
            *(_DWORD *)(8 * v8 + 0x14) = result;
        }
        *(_DWORD *)(8 * v8 + 0x10) = v15;
      }
      else if ( v4 != 1 )
      {
        *(_DWORD *)(8 * v8 + 0x14) = result;
        result = (unsigned int)(v12 + 1);
        *(_DWORD *)(8 * v8 + 0x18) = result;
      }
    }
  }
  return result;
}
