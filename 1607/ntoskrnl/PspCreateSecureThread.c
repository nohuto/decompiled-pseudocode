/*
 * XREFs of PspCreateSecureThread @ 0x14067F428
 * Callers:
 *     PspInsertThread @ 0x140516750 (PspInsertThread.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MmSizeOfMdl @ 0x140086AE0 (MmSizeOfMdl.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeSecureThread @ 0x1401D2ECC (KeSecureThread.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *PoolWithTag; // rbx
  int v6; // edi
  _BYTE v8[48]; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)v8);
  v4 = MmSizeOfMdl((PVOID)Base, 0x7E0uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((unsigned __int64)(Base & 0xFFF) + 6111) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 2016;
  MmProbeAndLockPages(PoolWithTag, 0, IoModifyAccess);
  v6 = KeSecureThread(Base, (int)PoolWithTag, *(_QWORD *)(Base + 1592), *(_QWORD *)(Base + 1672), a2);
  if ( v6 < 0 )
  {
    MmUnlockPages(PoolWithTag);
    ExFreePoolWithTag(PoolWithTag, 0x65537350u);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
  return (unsigned int)v6;
}
