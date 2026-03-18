/*
 * XREFs of KiGetProcessCpuSetMaskPointer @ 0x1401C8A04
 * Callers:
 *     KeQueryCpuSetsProcess @ 0x1401C855C (KeQueryCpuSetsProcess.c)
 *     KeSetCpuSetsProcess @ 0x1401C8660 (KeSetCpuSetsProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetProcessCpuSetMaskPointer(__int64 a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 1724) & 0x200) != 0 )
  {
    *a3 = (unsigned __int16)KiMaximumGroups;
    if ( a2 )
      return *(_QWORD *)(a1 + 1920);
    else
      return *(_QWORD *)(a1 + 1928);
  }
  else
  {
    *a3 = 1;
    if ( a2 )
      return a1 + 1920;
    else
      return a1 + 1928;
  }
}
