/*
 * XREFs of PspCreateSecureThread @ 0x140641044
 * Callers:
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 * Callees:
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x1400FE044 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeSecureThread @ 0x1401C315C (KeSecureThread.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *PoolWithTag; // rbx
  int v6; // edi
  $D4FCF91253F76F57393CBFE908971F67 v8; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0LL, (__int64)&v8);
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
  KiUnstackDetachProcess(&v8, 0LL);
  return (unsigned int)v6;
}
