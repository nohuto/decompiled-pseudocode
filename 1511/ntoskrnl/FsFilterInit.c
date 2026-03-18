/*
 * XREFs of FsFilterInit @ 0x14013FAE8
 * Callers:
 *     FsRtlInitSystem @ 0x14076C038 (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 FsFilterInit()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  AcquireOpsReservePool = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3C8uLL, 0x676D5346u);
  if ( !AcquireOpsReservePool )
    v0 = -1073741670;
  ReleaseOpsReservePool = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3C8uLL, 0x676D5346u);
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v0 = -1073741670;
  }
  byte_1402FCE42 = 6;
  AcquireOpsEvent = 1;
  qword_1402FCE50 = (__int64)&qword_1402FCE48;
  qword_1402FCE48 = (__int64)&qword_1402FCE48;
  qword_1402FCE70 = (__int64)&qword_1402FCE68;
  qword_1402FCE68 = (__int64)&qword_1402FCE68;
  result = v0;
  dword_1402FCE44 = 1;
  ReleaseOpsEvent = 1;
  byte_1402FCE62 = 6;
  dword_1402FCE64 = 1;
  return result;
}
