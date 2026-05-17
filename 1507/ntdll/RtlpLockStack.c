/*
 * XREFs of RtlpLockStack @ 0x18007803C
 * Callers:
 *     RtlLockCurrentThread @ 0x180077EF0 (RtlLockCurrentThread.c)
 * Callees:
 *     NtLockVirtualMemory @ 0x1800948C0 (NtLockVirtualMemory.c)
 */

__int64 RtlpLockStack()
{
  struct _TEB *v0; // rdx
  unsigned __int64 v1; // r8
  char *v2; // r9
  unsigned __int64 i; // rcx
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  v1 = (unsigned __int64)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  v2 = (char *)v0->NtTib.StackBase - v1;
  for ( i = (unsigned __int64)v0->NtTib.StackBase - 4096; i >= v1; i -= 4096LL )
    ;
  v6 = (__int64)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  v5 = v2;
  return NtLockVirtualMemory(-1LL, &v6, &v5, 1LL);
}
