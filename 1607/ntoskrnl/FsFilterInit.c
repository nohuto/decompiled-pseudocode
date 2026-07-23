/*
 * XREFs of FsFilterInit @ 0x1401490B4
 * Callers:
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
  byte_1403223E2 = 6;
  AcquireOpsEvent = 1;
  qword_1403223F0 = (__int64)&qword_1403223E8;
  qword_1403223E8 = (__int64)&qword_1403223E8;
  qword_140322410 = (__int64)&qword_140322408;
  qword_140322408 = (__int64)&qword_140322408;
  result = v0;
  dword_1403223E4 = 1;
  ReleaseOpsEvent = 1;
  byte_140322402 = 6;
  dword_140322404 = 1;
  return result;
}
