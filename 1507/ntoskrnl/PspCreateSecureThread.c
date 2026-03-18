/*
 * XREFs of PspCreateSecureThread @ 0x1406C35B4
 * Callers:
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x1400628C0 (MmSizeOfMdl.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeSecureThread @ 0x1401FF118 (KeSecureThread.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *PoolWithTag; // rbx
  int v6; // edi
  _BYTE v8[48]; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)v8);
  v4 = MmSizeOfMdl((PVOID)Base, 0x7C0uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((unsigned __int64)(Base & 0xFFF) + 6079) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 1984;
  MmProbeAndLockPages(PoolWithTag, 0, IoModifyAccess);
  v6 = KeSecureThread(Base, (int)PoolWithTag, *(_QWORD *)(Base + 1584), *(_QWORD *)(Base + 1664), a2);
  if ( v6 < 0 )
  {
    MmUnlockPages(PoolWithTag);
    ExFreePoolWithTag(PoolWithTag, 0x65537350u);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
  return (unsigned int)v6;
}
