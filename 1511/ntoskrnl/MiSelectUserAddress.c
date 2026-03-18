/*
 * XREFs of MiSelectUserAddress @ 0x14047A0C0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiFindEmptyAddressRange @ 0x14047A1A0 (MiFindEmptyAddressRange.c)
 *     MiFindEmptyAddressRangeDown @ 0x1404A5C28 (MiFindEmptyAddressRangeDown.c)
 */

__int64 __fastcall MiSelectUserAddress(int a1, __int64 a2, int a3, __int64 a4, int a5, int a6, _DWORD *a7, _QWORD *a8)
{
  unsigned __int64 v11; // r8
  _KPROCESS *Process; // rcx
  __int64 result; // rax

  *a7 = 0;
  *a8 = 0LL;
  LODWORD(v11) = (_DWORD)MmHighestUserAddress - 0x10000;
  if ( a2 )
  {
    v11 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( (char *)(0xFFFFFFFFFFFFFFFFuLL >> a2) > (char *)MmHighestUserAddress - 0x10000 )
      LODWORD(v11) = (_DWORD)MmHighestUserAddress - 0x10000;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a1 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0 )
    result = MiFindEmptyAddressRangeDown((int)Process + 1552, a3, a4, v11, a5, (__int64)a8);
  else
    result = MiFindEmptyAddressRange(a3, a4, v11, a5, a6, (__int64)a8, (__int64)a7);
  if ( a4 != 0x10000 )
    *a7 = 0;
  return result;
}
