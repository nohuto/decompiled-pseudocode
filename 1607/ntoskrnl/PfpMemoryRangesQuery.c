/*
 * XREFs of PfpMemoryRangesQuery @ 0x1400AE2E8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     MmGetPhysicalMemoryRanges @ 0x1404C8434 (MmGetPhysicalMemoryRanges.c)
 */

__int64 __fastcall PfpMemoryRangesQuery(__int64 a1, char a2, _DWORD *a3)
{
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v7; // rdi
  PPHYSICAL_MEMORY_RANGE i; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  SIZE_T v11; // rax
  unsigned int v12; // ebx
  _DWORD *v14; // r14
  unsigned __int64 j; // r8
  __int64 v16; // rcx

  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v7 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
    goto LABEL_20;
  for ( i = PhysicalMemoryRanges; i->NumberOfBytes.QuadPart > 0; ++i )
    ;
  v9 = i - PhysicalMemoryRanges;
  if ( v9 <= 0xFFFFFFFF && (v10 = 16 * v9 + 8, v10 <= 0xFFFFFFFF) )
  {
    v11 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v11 >= (unsigned int)v10 )
    {
      v14 = *(_DWORD **)(a1 + 16);
      if ( a2 )
        ProbeForWrite(v14, v11, 8u);
      if ( *v14 == 1 )
      {
        v14[1] = v9;
        for ( j = 0LL; j < v9; ++j )
        {
          v16 = 2 * j;
          *(_QWORD *)&v14[2 * v16 + 2] = v7[j].BaseAddress.QuadPart / 4096;
          *(_QWORD *)&v14[2 * v16 + 4] = v7[j].NumberOfBytes.QuadPart / 4096;
        }
        *a3 = v10;
        v12 = 0;
      }
      else
      {
        v12 = -1073741811;
      }
    }
    else
    {
      v12 = -1073741789;
      *a3 = v10;
    }
  }
  else
  {
LABEL_20:
    v12 = -1073741670;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v12;
}
