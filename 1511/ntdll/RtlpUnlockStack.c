/*
 * XREFs of RtlpUnlockStack @ 0x180002550
 * Callers:
 *     RtlUnlockCurrentThread @ 0x180002450 (RtlUnlockCurrentThread.c)
 * Callees:
 *     ZwUnlockVirtualMemory @ 0x1800A86D0 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS RtlpUnlockStack()
{
  struct _TEB *v0; // rdx
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  v1 = (char *)v0->NtTib.StackBase - ((char *)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480);
  v4 = (__int64)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  v3 = v1;
  return ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v4, (PSIZE_T)&v3, 1u);
}
