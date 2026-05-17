/*
 * XREFs of RtlLockCurrentThread @ 0x180002270
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockStack @ 0x1800023BC (RtlpLockStack.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1800A8430 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A9AF0 (ZwUnlockVirtualMemory.c)
 */

__int64 RtlLockCurrentThread()
{
  struct _TEB *v0; // rbx
  unsigned int LockCount; // eax
  int VirtualMemory; // edi
  __int64 result; // rax
  _QWORD v4[6]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( LockCount )
  {
    v0->LockCount = LockCount + 1;
    return 0LL;
  }
  VirtualMemory = ZwQueryVirtualMemory(-1LL, v0, 0LL, v4);
  if ( VirtualMemory < 0 )
    return (unsigned int)VirtualMemory;
  v6 = v4[0];
  v5 = v4[3];
  result = NtLockVirtualMemory(-1LL, &v6, &v5, 1LL, 48, 0LL);
  if ( (int)result < 0 )
    return result;
  VirtualMemory = RtlpLockStack();
  if ( VirtualMemory < 0 )
  {
    ZwUnlockVirtualMemory(-1LL, &v6, &v5, 1LL);
    return (unsigned int)VirtualMemory;
  }
  v0->LockCount = 1;
  return 0LL;
}
