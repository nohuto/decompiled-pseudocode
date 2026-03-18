/*
 * XREFs of PiDmCacheDataFree @ 0x14045ACDC
 * Callers:
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmObjectProcessPropertyChange @ 0x14045A798 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmCacheDataFree(__int64 a1)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)a1 - 4;
  if ( v2 )
  {
    if ( v2 == 1 )
      PiDmObjectRelease(*(unsigned int **)(a1 + 16));
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x5A706E50u);
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
