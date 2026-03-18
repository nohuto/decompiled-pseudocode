/*
 * XREFs of SyspartGetSystemPartition @ 0x1404FAF9C
 * Callers:
 *     BiGetSystemPartition @ 0x1404FAF1C (BiGetSystemPartition.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 * Callees:
 *     SiQuerySystemPartitionInformation @ 0x1404FAFE4 (SiQuerySystemPartitionInformation.c)
 *     SiGetSystemDeviceName @ 0x1405065FC (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = SiQuerySystemPartitionInformation(a1);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName(SiGetSystemPartition, a1, a2, a3);
  return result;
}
