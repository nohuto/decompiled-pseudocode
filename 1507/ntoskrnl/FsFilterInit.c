/*
 * XREFs of FsFilterInit @ 0x14016D484
 * Callers:
 *     FsRtlInitSystem @ 0x1407E124C (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  byte_14034D2A2 = 6;
  AcquireOpsEvent = 1;
  qword_14034D2B0 = (__int64)&qword_14034D2A8;
  qword_14034D2A8 = (__int64)&qword_14034D2A8;
  qword_14034D2D0 = (__int64)&qword_14034D2C8;
  qword_14034D2C8 = (__int64)&qword_14034D2C8;
  result = v0;
  dword_14034D2A4 = 1;
  ReleaseOpsEvent = 1;
  byte_14034D2C2 = 6;
  dword_14034D2C4 = 1;
  return result;
}
