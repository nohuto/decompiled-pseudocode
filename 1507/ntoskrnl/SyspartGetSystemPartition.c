/*
 * XREFs of SyspartGetSystemPartition @ 0x14056D534
 * Callers:
 *     BiGetSystemPartition @ 0x14056D4B4 (BiGetSystemPartition.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiQuerySystemPartitionInformation @ 0x14056D57C (SiQuerySystemPartitionInformation.c)
 *     SiGetSystemDeviceName @ 0x14057F8C8 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = SiQuerySystemPartitionInformation(a1);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName(SiGetSystemPartition, a1, a2, a3);
  return result;
}
