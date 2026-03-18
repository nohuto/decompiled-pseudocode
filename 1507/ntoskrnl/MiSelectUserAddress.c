/*
 * XREFs of MiSelectUserAddress @ 0x1404B59C4
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiFindEmptyAddressRange @ 0x1404B61A0 (MiFindEmptyAddressRange.c)
 *     MiFindEmptyAddressRangeDown @ 0x140527984 (MiFindEmptyAddressRangeDown.c)
 */

__int64 __fastcall MiSelectUserAddress(int a1, __int64 a2, int a3, __int64 a4, int a5, _DWORD *a6, _QWORD *a7)
{
  char *v10; // r8
  _KPROCESS *Process; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // rax

  *a6 = 0;
  *a7 = 0LL;
  v10 = (char *)MmHighestUserAddress - 0x10000;
  if ( a2 )
  {
    v13 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > (unsigned __int64)v10 )
      LODWORD(v13) = (_DWORD)MmHighestUserAddress - 0x10000;
    LODWORD(v10) = v13;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a1 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0 )
    result = MiFindEmptyAddressRangeDown((int)Process + 1544, a3, a4, (_DWORD)v10, a5, (__int64)a7);
  else
    result = MiFindEmptyAddressRange(a3, a4, (_DWORD)v10, a5, (__int64)a7, (__int64)a6);
  if ( a4 != 0x10000 )
    *a6 = 0;
  return result;
}
