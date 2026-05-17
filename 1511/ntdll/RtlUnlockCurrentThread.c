/*
 * XREFs of RtlUnlockCurrentThread @ 0x180002450
 * Callers:
 *     <none>
 * Callees:
 *     RtlpUnlockStack @ 0x180002550 (RtlpUnlockStack.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A86D0 (ZwUnlockVirtualMemory.c)
 */

__int64 RtlUnlockCurrentThread()
{
  struct _TEB *v0; // rdx
  unsigned int LockCount; // eax
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( !LockCount )
    return 3221225514LL;
  v2 = LockCount - 1;
  v0->LockCount = v2;
  if ( !v2 )
  {
    if ( (int)ZwQueryVirtualMemory(-1LL, v0, 0LL, v6) >= 0 )
    {
      v8 = v6[0];
      v7 = v6[3];
      ZwUnlockVirtualMemory(-1LL, &v8, &v7, 1LL);
    }
    RtlpUnlockStack(v4, v3);
  }
  return 0LL;
}
