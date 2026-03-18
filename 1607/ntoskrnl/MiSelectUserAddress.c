/*
 * XREFs of MiSelectUserAddress @ 0x1404BAA90
 * Callers:
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiFindEmptyAddressRange @ 0x1404363D0 (MiFindEmptyAddressRange.c)
 *     MiFindEmptyAddressRangeDown @ 0x1404BABB4 (MiFindEmptyAddressRangeDown.c)
 */

__int64 __fastcall MiSelectUserAddress(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r13
  _KPROCESS *Process; // rsi
  int v12; // ebx
  __int64 result; // rax
  int v14; // [rsp+80h] [rbp+8h]

  v14 = 0;
  v9 = a3;
  *a7 = 0;
  *a8 = 0LL;
  v10 = 0x7FFFFFFDFFFFLL;
  if ( a2 )
  {
    v10 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFDFFFFLL )
      v10 = 0x7FFFFFFDFFFFLL;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a1 & 0x20000000) != 0 && a3 >= 0x40000000 )
  {
    a4 = 0x40000000LL;
    v14 = 1;
  }
  v12 = a1 & 0x100000;
  while ( 1 )
  {
    result = v12 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
           ? MiFindEmptyAddressRangeDown((int)Process + 1568, v9, a4, v10, a5, (__int64)a8)
           : MiFindEmptyAddressRange(v9, a4, v10, a5, a6, a8, a7);
    if ( (int)result >= 0 || v14 != 1 )
      break;
    v9 = a3;
    a4 = 0x200000LL;
    v14 = 0;
  }
  if ( a4 != 0x10000 )
    *a7 = 0;
  return result;
}
